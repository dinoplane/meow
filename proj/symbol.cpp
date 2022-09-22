#include <string>
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <cassert>


#include "location.h"
#include "attr.h"
#include "astree.h"
#include "symbol.h"
#include "codegen.h"
#include "yyparse.h"


ostream& operator<< (ostream& out, const ErrorMsg& a) {
    return out << "At line " << a.loc.to_string() << " - "<< a.error_msg << endl;
}

void SymbolManager::push_error(location& loc, string s){
    error_list.push_back(ErrorMsg(loc, s));
}

void SymbolManager::dump_errors(){
    for (ErrorMsg e : error_list)
        cout << e;
}

SymbolManager::SymbolManager(string filename_){
    symfile.open(filename_ + ".sym");
    push_tbl(); // global scope
}

SymbolManager::~SymbolManager(){
    clear_stk();
    symfile.close();
}

string SymbolManager::get_state(){
    string ret_str = "";

    size_t i = 0;

    for (; i < tblstack.size()-1; ++i)
        ret_str += to_string(block_state[i]) + ".";
    
    ret_str += "0";

    return ret_str;
}

void SymbolManager::push_tbl(){
    if (block_state.size() > 0)
        block_state.back()++;
    block_state.push_back(0);    
    tblstack.push_back(new symbol_table());
    cout << "After Push: " << get_state()  << endl;
}

void SymbolManager::pop_tbl(){  
    clear_tbl();
    delete tblstack.back();
    tblstack.pop_back();

    block_state.pop_back();

    //cout << "After Pop: " << get_state()  << endl;
}

void SymbolManager::clear_stk(){
    while (tblstack.size() > 0){
        clear_tbl();
        delete tblstack.back();
        tblstack.pop_back();
    }

    while (block_state.size() > 0){
        block_state.pop_back();
    }
    
}

void SymbolManager::clear_tbl(){
    auto b = tblstack.back()->begin();
    auto e = tblstack.back()->end();
    
    size_t i = 0;
    for (; b != e; b++){
        delete b->second;
        i++;
    }
    cout << "DELETED: " << i << endl;
    tblstack.back()->clear();
}

// CHECKS IF IDENTIFIER EXISTS IN CURRENT SCOPE
bool SymbolManager::has_sym(string id){
    return tblstack.back()->find(id) != tblstack.back()->end();
}

// NEEDS TO CHECK THE ENTIRE STACK
Symbol* SymbolManager::lookup(string id){
    symtbl_stack::const_reverse_iterator currtbl = tblstack.crbegin();
    while (currtbl != tblstack.crend()){
        auto tmp = (*currtbl)->find(id);
        if (tmp != (*currtbl)->end())
            return tmp->second;
         currtbl++;
    }

    return nullptr;
}

// expects typeid?
bool SymbolManager::push_sym(astree_ptr ident){
    if (ident == nullptr)
        return false;

    bool ret = false;
    if (tblstack.size() > 0){ // Make sure there is scope{
        // Check for redecl IN THE SAME SCOPE
        if (has_sym(ident->lexinfo)){
            error_state = true;
            push_error(ident->loc, ident->lexinfo + " is a redeclaration.\n");
        } else {
            // Check for shadows? think about making new state func
            Symbol* sym = new Symbol(ident);
            sym->syminfo.defloc = ident->loc;
            sym->syminfo.block_nr = get_state();
            sym->new_name = nng.make_new_name();   
            ident->vr = sym->new_name;
            tblstack.back()->emplace(ident->lexinfo, sym);
            ret = true;
        }
    } return ret;
}


void SymbolManager::clear_sym(Symbol* sym){
    delete sym;
}

bool SymbolManager::traverse_tree(astree_ptr tree){
    bool ret = true;
    for (astree_ptr child : tree->children){
        ret &= dispatch(child);
    }
    return ret;
}

bool SymbolManager::dispatch(astree_ptr child){
    if (child->syminfo[attr::BLOCK]){
        return check_block(child);
    } else if (child->syminfo[attr::TYPE_ID]){
        return check_typeid(child);
    } else if (child->syminfo[attr::ASSIGN]){
        return check_assign(child);
    } else {
        return traverse_tree(child);
    }
}

bool SymbolManager::check_typeid(astree_ptr tree){
    if (tree == nullptr)
        return false;

    // Put child in top symbol table
    bool ret = push_sym(tree->children[1]);

    // If pushing the symbol worked and there is a 3rd child...
    if (ret && tree->children.size() == 3){
        ret &= check_expr(tree->children[2]);
        // create an imposter parent for type conversion technically a babysitter node but mommy is more funny
        astree_ptr tmp = ASTNode::mkopt(TOK_MOMMY, 
                            {tree->children[1], tree->children[2]});
        set_attr(tmp, tmp->children[0]);
        ret &= check_convert(tmp, 1);
        // check if a conversion was made
        if (tmp->children[1] != tree->children[2]){
            tree->children[2] = tmp->children[1];
        }

        tmp->children.clear();
        delete tmp;
        cdg.linearize_assign(tree);
    }
    return ret;
}


bool SymbolManager::check_assign(astree_ptr tree){
    if (tree == nullptr){
        return false;
    }

    bool ret = true;
    if (tree->children.size() == 1){ // if we have a -crement
        ret &= check_expr(tree->children[0]);
    }else if (tree->children.size() == 2){ // if we have an actual assignment
        ret &= check_expr(tree->children[0]);
        ret &= check_expr(tree->children[1]);
        if (ret){
            set_attr(tree, tree->children[0]); // assign will always have the type of the lhs
            ret &= check_convert(tree, 1);
            cdg.linearize_assign(tree);
        }
    }
    return ret;
}

bool SymbolManager::check_expr(astree_ptr child){
    if (child == nullptr)
        return false;

    if (child->syminfo[attr::BINOP]){
        return check_binop(child);
    } else if (child->syminfo[attr::UNOP]){
        return check_unop(child);
    } else if (child->syminfo[attr::CONST]){
        return check_const(child);
    }else if (child->syminfo[attr::VARIABLE]){
        return check_var(child);
    } else {
        return false;
    }
}

bool SymbolManager::check_convert(astree_ptr tree, size_t c_num){
    astree_ptr child = tree->children[c_num];

    if (child == nullptr){
        return false;
    }

    bool ret = true;

    // If the types are different
    if ((tree->syminfo.attrbits & TYPE_SET) != (child->syminfo.attrbits & TYPE_SET)){
        astree_ptr conv_node = nullptr;
        
        if (tree->syminfo[attr::INT] && child->syminfo[attr::FLOAT]){
            conv_node = ASTNode::mkopt(TOK_FLOAT2INT, {child})
                            ->set_bits({attr::INT, attr::FLOAT2INT});
            ret = true;
        } else if (tree->syminfo[attr::FLOAT] && child->syminfo[attr::INT]){
            conv_node = ASTNode::mkopt(TOK_INT2FLOAT, {child})
                            ->set_bits({attr::FLOAT, attr::INT2FLOAT});
            ret = true;
        } else if (tree->syminfo[attr::STRING]){
            // Do soemthing
        } else { // Something weird going on then.
            ret = false;
        }

        if (conv_node){
            tree->children[c_num] = conv_node; // this causes segfaults and memory leaks...
            vrg.make_new_vr(conv_node);
        }
    } 
    return ret;
}

bool SymbolManager::check_binop(astree_ptr tree){ // maybe there is a need to consider comparisons seperately
    if (tree == nullptr)
        return false;
    bool ret = true;

    astree_ptr left = tree->children[0];
    astree_ptr right = tree->children[1];
    
    cout << "Operation: " << tree->lexinfo << endl;
    ret &= check_expr(left);
    cout << "return: " << ret << endl;
    ret &= check_expr(right);
    cout << "return: " << ret << endl;

    if (ret){
        // Check types according to table // strings need to be checked first but do later
        if (left->syminfo[attr::FLOAT] || right->syminfo[attr::FLOAT]){
            tree->set_bits(attr::FLOAT);
        } else if (left->syminfo[attr::INT] && right->syminfo[attr::INT]){
            tree->set_bits(attr::INT); 
        } 
        ret &= check_convert(tree, 0); // Left child
        cout << "return: " << ret << endl;
        ret &= check_convert(tree, 1); // Right child
        cout << "return: " << ret << endl;
        vrg.make_new_vr(tree);

        if (tree->is_comp_node()){
            tree->set_bits(attr::INT);
            tree->syminfo[attr::FLOAT] = 0;
        }
        // tree->set_bits(attr::VREG); Do in AST or no? 
    }
    return ret;

}

bool SymbolManager::check_unop(astree_ptr tree){
    if (tree == nullptr)
        return false;

    bool ret = check_expr(tree->children[0]);
    set_attr(tree, tree->children[0]);
    vrg.make_new_vr(tree);
    return ret;
}

// leaves
bool SymbolManager::check_const(astree_ptr tree){
    if (tree == nullptr)
        return false;
    tree->vr = tree->lexinfo;
    //cout << tree->attributes->attrbits[]
    return true;
}

bool SymbolManager::check_var(astree_ptr tree){
    if (tree == nullptr)
        return false;

    bool ret = true;
    Symbol* var;
    if ((var = lookup(tree->lexinfo))){ // change??
        set_attr(tree, var);
        tree->vr = var->new_name;//vrg.make_new_vr(tree);
    } else {
        error_state = true;
        push_error(tree->loc ,"Identifier \"" + tree->lexinfo + "\" cannot be found\n");
        ret = false;
    }
    return ret;
}

bool SymbolManager::check_block(astree_ptr child){
    if (child == nullptr)
        return false;
    
    // Push a new scope, traverse, then pop it out
    push_tbl();
    bool ret = traverse_tree(child);
    pop_tbl();

    return ret;
}

bool SymbolManager::check_call(astree_ptr tree){ // functions are in an assumed form. 
    astree_ptr param = tree->children[1];
    return true;
}

bool SymbolManager::check_param(astree_ptr param){
    for (auto b = param->children.begin(); b != param->children.end(); b++){
        check_expr(*b);
    }
    return true;
}

void SymbolManager::set_attr(astree_ptr tree, Symbol* sym){
        tree->syminfo.defloc = sym->syminfo.defloc;
        tree->syminfo.block_nr = sym->syminfo.block_nr;
        tree->syminfo.attrbits |= (sym->syminfo.attrbits & TYPE_SET);
}

// Set the attributes
void SymbolManager::set_attr(astree_ptr tree, astree_ptr other){
        tree->syminfo.defloc = other->syminfo.defloc;
        tree->syminfo.block_nr = other->syminfo.block_nr;
        tree->syminfo.attrbits |= (other->syminfo.attrbits & TYPE_SET);
}


void SymbolManager::type_inference(astree_ptr left, astree_ptr right){

}

void SymbolManager::type_inference(astree_ptr tree){

}
