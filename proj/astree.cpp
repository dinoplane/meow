#include <iomanip>
#include <iostream>
using namespace std;

#include "astree.h"
#include "util.h"

ostream& operator<< (ostream& out, const location& loc) {
   return out << loc.linenr << "." << loc.offset;
}


ostream& operator<< (ostream& out, const ASTNode& tree) {
   out << get_parser_yytname (tree.symbol) << " \"" << 
          tree.lexinfo << "\" (" << tree.loc << ")";
   return out;
}

void ASTNode::print_tree (ostream& out, int depth) {
   for (int i = 0; i < depth; i++)
      out << "|  "; 
   out << *this << endl;
   for (astree_ptr child: children) child->print_tree (out, depth + 1);
}


ASTNode::~ASTNode() {
   for (astree_ptr child: children) erase (child);
}

astree_ptr ASTNode::adopt(astree_ptr child){
    children.push_back(child);
    return this;
}

astree_ptr ASTNode::adopt(initializer_list<astree_ptr> args){
    for (auto child : args){
        children.push_back(child);
    }
    return this;
}

astree_ptr ASTNode::make (int symbol, const location& loc,
                         const string lexinfo) {
   return new ASTNode(symbol, loc, lexinfo);
}

astree_ptr ASTNode::mkopt(int symbol, initializer_list<astree_ptr> children) {
    location p = (*(children.begin()))-> loc;

   astree_ptr ret_ptr = make(symbol, p, "");
   ret_ptr->adopt(children);
   return ret_ptr;
}


void ASTNode::erase (astree_ptr& tree) {
   delete tree;
   tree = nullptr;
}
