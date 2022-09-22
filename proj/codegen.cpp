#include <string>
#include <vector>
#include <map>

#include "attr.h"
#include "astree.h"
#include "codegen.h"

// The interpretter can be so much more efficient

map<string, string> CodeGenerator::BINOP_TO_3AC = {
    {"+", "add"},
    {"-", "sub"},
    {"*", "mul"},
    {"/", "div"},
    {"%", "mod"},
    {"^", "exp"},
    
    {"==", "equ"},
    {"!=", "neq"},
    {">",  "grt"},
    {"<",  "lst"},
    {">=", "gte"},
    {"<=", "lte"}
};

map<string, string> CodeGenerator::UNOP_TO_3AC = {
    {"+", "pos"},
    {"-", "neg"},
    {"not", "not"},
};

map<string, string> CodeGenerator::COMP_TO_3AC = {
    {"==", "bne"},
    {"!=", "beq"},
    {">",  "ble"},
    {"<",  "bge"},
    {">=", "blt"},
    {"<=", "bgt"}
};

string CodeGenerator::dump_program() const {
    string ret = "";
    for (auto b = program.cbegin(); b != program.cend(); b++){
        ret += *b + "\n";
    } return ret;
}

void CodeGenerator::dispatch(astree_ptr child){
    if (child->syminfo[attr::BLOCK]){
        linearize_block(child);
    } else if (child->syminfo[attr::TYPE_ID] || child->syminfo[attr::ASSIGN]){
        linearize_assign(child);
    } else if (child->syminfo[attr::WHILE]){
        linearize_while(child);
    } else if (child->syminfo[attr::IFELSE]){
        linearize_ifelse(child);
    } else {
        cout << "GIGA SCREWED" << endl;   
    }
}


void CodeGenerator::linearize_expr(astree_ptr tree) {
    if (tree->is_leaf_node()){
        return ;
    } else if (tree->is_binop_node()){
        string optype = (tree->syminfo[attr::FLOAT]) ? "f" : (tree->syminfo[attr::INT]) ? "i" : "s";
        string opcode = CodeGenerator::BINOP_TO_3AC[tree->lexinfo]; 

        // Get children and linearize them before doing self;
        astree_ptr left = tree->children[0];
        astree_ptr right = tree->children[1];
        linearize_expr(left);
        linearize_expr(right);

        program.push_back(opcode + optype + " " + tree->vr + " " + left->vr + " " + right->vr);
   
    } else if (tree->is_unop_node()){
        string optype = (tree->syminfo[attr::FLOAT]) ? "f" : (tree->syminfo[attr::INT]) ? "i" : "s";
        string opcode = CodeGenerator::UNOP_TO_3AC[tree->lexinfo]; 

        astree_ptr child = tree->children[0];
        linearize_expr(child);

        program.push_back(opcode + optype + " " + tree->vr + " " + child->vr);

    } else if (tree->is_conv_node()){
        astree_ptr child = tree->children[0];
        linearize_expr(child);
        string conv_type = (tree->syminfo[attr::FLOAT]) ? "i2fl" : "fl2i";
        program.push_back(conv_type + " " + tree->vr + " " + child->vr);
    }
}


void CodeGenerator::linearize_assign(astree_ptr tree) {
    string to_vr = "";
    string constend = "";
    if (tree->syminfo[attr::FLOAT]) {
        to_vr = "f2vr";
        constend = ".0";
    }  else {
        to_vr = "i2vr";
    }

    astree_ptr right = tree->children[tree->children.size() - 1]; // src or dest depending on # of operands
    
    if (tree->children.size() == 2){
        program.push_back(to_vr + " " + right->vr + " " + "0" + constend); // def value
    } else {
        astree_ptr left = tree->children[tree->children.size() - 2]; // dest
        linearize_expr(right);
        program.push_back(to_vr + " " + left->vr + " " + right->vr);
    }

    
    
}

string CodeGenerator::linearize_condition(astree_ptr tree){
    astree_ptr left = tree->children[0];
    astree_ptr right = tree->children[1];

    linearize_expr(left);
    linearize_expr(right);

    string opcode = CodeGenerator::COMP_TO_3AC[tree->lexinfo];

    return opcode + " " + left->vr + " " + right->vr;
}

void CodeGenerator::linearize_block(astree_ptr tree){
    for (astree_ptr child : tree->children){
        dispatch(child);
    }
}

void CodeGenerator::linearize_while(astree_ptr tree){
    string looplbl = lbg.make_new_lbl();
    string endlbl = lbg.make_new_lbl();
    program.push_back(looplbl + ":");

    string condition = linearize_condition(tree->children[0]);
    
    program.push_back(condition + " " + endlbl);
    dispatch(tree->children[1]);
    program.push_back("jmp " + looplbl);
    program.push_back(endlbl + ":");
}

void CodeGenerator::linearize_ifelse(astree_ptr tree){
    string iflbl = lbg.make_new_lbl();
    string elselbl =  (tree->children.size() == 3) ? lbg.make_new_lbl() : "";
    string endlbl = lbg.make_new_lbl();
    string condition = linearize_condition(tree->children[0]);
    if (tree->children.size() == 2){
        program.push_back(condition + " " + endlbl);
        program.push_back(iflbl + ":");
        dispatch(tree->children[1]);
    } else { 
        program.push_back(condition + " " + elselbl);
        program.push_back(iflbl + ":");
        dispatch(tree->children[1]);
        program.push_back("jmp " + endlbl);
        program.push_back(elselbl + ":");
        dispatch(tree->children[2]);
    }

    program.push_back(endlbl + ":");
}

void CodeGenerator::linearize_call(astree_ptr tree){ // i need to figure out how to typecheck
    string fn_name = tree->children[0]->lexinfo;
    astree_ptr param = tree->children[1];
    string ret = fn_name;
    for (auto b = param->children.begin(); b != param->children.end(); b++){
        linearize_expr(*b);
    }

    for (auto b = param->children.begin(); b != param->children.end(); b++){
        ret += " " + (*b)->vr;
    }
    program.push_back(ret);
}