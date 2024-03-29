#include <iomanip>
#include <iostream>
using namespace std;


#include "location.h"

#include "astree.h"
#include "util.h"
#include "attr.h"


ostream& operator<< (ostream& out, const ASTNode& tree) {
   out << get_parser_yytname (tree.symbol) << " \"" << 
          tree.lexinfo << "\" (" << tree.loc << " " << tree.syminfo ;

   if (tree.syminfo.attrbits[attr::CONST] || 
         tree.syminfo.attrbits[attr::VARIABLE] ||
         tree.syminfo.attrbits[attr::ASSIGN] ||
         tree.syminfo.attrbits[attr::BINOP] ||
         tree.syminfo.attrbits[attr::UNOP])
      out << " VR: "<< tree.vr ;
   out << " )";
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

astree_ptr ASTNode::adopt_as (int symbol_, astree_ptr& child) {
   return set_symbol(symbol_)->adopt(child);
}

astree_ptr ASTNode::adopt_as (int symbol_, initializer_list<astree_ptr> args) {
   return set_symbol(symbol_)->adopt(args);
}


astree_ptr ASTNode::set_symbol(int symbol_){
   symbol = symbol_;
   return this;
}

astree_ptr ASTNode::set_bits(attr attr_) {
   syminfo.attrbits[attr_] = 1;
   return this;
}

astree_ptr ASTNode::set_bits(initializer_list<attr> args){
   for (auto at : args){
      set_bits(at);
   }
   return this;
}

astree_ptr ASTNode::set_bits(astree_ptr& tree){
   syminfo.attrbits = tree->syminfo.attrbits;
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

void ASTNode::erase (initializer_list<astree_ptr> children) {
   for (auto child : children){
      delete child;
      child = nullptr;
   }
}
