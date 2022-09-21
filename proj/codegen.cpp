#include <string>
#include <vector>

#include "attr.h"
#include "astree.h"
#include "codegen.h"

string CodeGenerator::dump_program() const {
    string ret = "";
    for (auto b = program.cbegin(); b != program.cend(); b++){
        ret += *b;
    } return ret;
}

string CodeGenerator::linearize_expr(astree_ptr tree) const {
    if (tree->is_leaf_node()){
        return tree->vr;
    } else if (tree->is_binop_node()){
        return 
    }
}