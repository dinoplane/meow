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
#include "yyparse.h"


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

bool SymbolManager::has_sym(string id){
    return tblstack.back()->find(id) != tblstack.back()->end();
}

Symbol* SymbolManager::lookup(string id){
    auto tmp = tblstack.back()->find(id);
    if (tmp != tblstack.back()->end())
        return tmp->second;
    return nullptr;
}

// expects typeid?
void SymbolManager::push_sym(astree_ptr ident){
    if (ident == nullptr)
        return;

    if (tblstack.size() > 0){ // Make sure there is scope{
        // Check for redecl
        if (has_sym(ident->lexinfo)){
            cout << "REDECLARATION!!!" << endl;
        } else {
            // Check for shadows? think about making new state func
            Symbol* sym = new Symbol(ident);
            sym->syminfo.defloc = ident->loc;
            sym->syminfo.block_nr = get_state();        
            tblstack.back()->emplace(ident->lexinfo, sym);
        }
    }
}


void SymbolManager::clear_sym(Symbol* sym){
    delete sym;
}

void SymbolManager::traverse_tree(astree_ptr tree){
    for (astree_ptr child : tree->children){
        dispatch(child);
    }
}

void SymbolManager::dispatch(astree_ptr child){
    if (child->syminfo[attr::BLOCK]){
        check_block(child);
    } else if (child->syminfo[attr::TYPE_ID]){
        check_typeid(child);
    } else if (child->syminfo[attr::ASSIGN]){
        check_assign(child);
    } else {
        traverse_tree(child);
    }
}

void SymbolManager::check_typeid(astree_ptr tree){
    if (tree == nullptr)
        return;
    // Put child in top symbol table
    push_sym(tree->children[1]);
    
    //cout << "YO!" << endl;
    if (tree->children.size() == 3){
        check_expr(tree->children[2]);
        // create an imposter parent for type conversion
        astree_ptr tmp = ASTNode::mkopt(TOK_MOMMY, 
                            {tree->children[1], tree->children[2]});
        set_attr(tmp, tmp->children[0]);
        check_convert(tmp, 1);
        // check if a conversion was made
        if (tmp->children[1] != tree->children[2]){
            tree->children[2] = tmp->children[1];
        }

        tmp->children.clear();
        delete tmp;
    }
}


void SymbolManager::check_assign(astree_ptr tree){
    if (tree == nullptr){
        return;
    }
    if (tree->children.size() == 1){
        check_expr(tree->children[0]);
    }else if (tree->children.size() == 2){
        check_expr(tree->children[0]);
        check_expr(tree->children[1]);
        set_attr(tree, tree->children[0]);
        check_convert(tree, 1);
    }
}

void SymbolManager::check_expr(astree_ptr child){
    if (child == nullptr)
        return;

    if (child->syminfo[attr::BINOP]){
        check_binop(child);
    } else if (child->syminfo[attr::UNOP]){
        check_unop(child);
    } else if (child->syminfo[attr::CONST]){
        check_const(child);
    }else if (child->syminfo[attr::VARIABLE]){
        check_var(child);
    }
}

void SymbolManager::check_convert(astree_ptr tree, size_t c_num){
    astree_ptr child = tree->children[c_num];
    if ((tree->syminfo.attrbits & TYPE_SET) != (child->syminfo.attrbits & TYPE_SET)){
        astree_ptr conv_node;
        
        if (tree->syminfo[attr::INT] && child->syminfo[attr::FLOAT]){
            conv_node = ASTNode::mkopt(TOK_FLOAT2INT, {child})
                            ->set_bits({attr::INT, attr::FLOAT2INT});
        } else if (tree->syminfo[attr::FLOAT] && child->syminfo[attr::INT]){
            conv_node = ASTNode::mkopt(TOK_INT2FLOAT, {child})
                            ->set_bits({attr::FLOAT, attr::INT2FLOAT});
        } else if (tree->syminfo[attr::STRING]){
            // Do soemthing
        }
        tree->children[c_num] = conv_node;

    }
}

void SymbolManager::check_binop(astree_ptr tree){ // maybe there is a need to consider comparisons seperately
    if (tree == nullptr)
        return;
    astree_ptr left = tree->children[0];
    astree_ptr right = tree->children[1];
    
    check_expr(left);
    check_expr(right);

    // Check types according to table // strings need to be checked first but do later
    if (left->syminfo[attr::FLOAT] || right->syminfo[attr::FLOAT]){
        tree->set_bits(attr::FLOAT);
    } else if (left->syminfo[attr::INT] && right->syminfo[attr::INT]){
        tree->set_bits(attr::INT);
    } 
    check_convert(tree, 0); // Left child
    check_convert(tree, 1); // Right child
    
    // tree->set_bits(attr::VREG); Do in AST or no? 

}

void SymbolManager::check_unop(astree_ptr tree){
    if (tree == nullptr)
        return;

    check_expr(tree->children[0]);
    set_attr(tree, tree->children[0]);
    return;
}

// leaves
void SymbolManager::check_const(astree_ptr tree){
    if (tree == nullptr)
        return;

    //cout << tree->attributes->attrbits[]
}

void SymbolManager::check_var(astree_ptr tree){
    if (tree == nullptr)
        return;

    Symbol* var;
    if ((var = lookup(tree->lexinfo))){ // change??
        set_attr(tree, var);
    }
}

void SymbolManager::check_block(astree_ptr child){
    if (child == nullptr)
        return;
    
    // Push a new scope, traverse, then pop it out
    push_tbl();
    traverse_tree(child);
    pop_tbl();
}

void SymbolManager::check_function(){

}

void SymbolManager::check_param(){

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
