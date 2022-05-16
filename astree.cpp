// Arrian Chi acchi
// $Id: astree.cpp,v 1.1 2021-12-08 12:07:42-08 - - $

#include <cassert>
#include <iomanip>
#include <iostream>
using namespace std;

#include "astree.h"
#include "lyutils.h"

unordered_set<string> astree::lextable;
vector<string> astree::filenames {"/"};

ostream& operator<< (ostream& out, const location& loc) {
   return out << astree::filenames.at(loc.filenr)
              << ":" << loc.linenr << ":" << loc.offset;
}

astree::astree (int symbol_, const location& loc_, const char* info):
                symbol (symbol_), loc (loc_) {
   auto handle = lextable.emplace (info);
   lexinfo = &(*handle.first);
   if (yydebug) cerr << "::astree: " << *this << endl;
}

astree::~astree() {
   if (yydebug) cerr << "::~astree: " << *this << endl;
   for (astree_ptr child: children) erase (child);
}

void astree::adopt (astree_ptr child1, astree_ptr child2) {
   if (child1 != nullptr) children.push_back (child1);
   if (child2 != nullptr) children.push_back (child2);
}

void astree::adopt_as (astree_ptr child, int symbol_) {
   symbol = symbol_;
   adopt (child);
}

void astree::dump_tree (int depth) {
   cerr << "::astree: " << setw (depth * 3) << "" << *this << endl;
   for (astree_ptr child: children) child->dump_tree (depth + 1);
}

void astree::print_tree (ostream& out, int depth) {
   out << "; astree: " << setw (depth * 3) << "" << *this << endl;
   for (astree_ptr child: children) child->print_tree (out, depth + 1);
}

void astree::dump_filenames() {
   for (size_t index = 0; index < filenames.size(); ++index) {
      cerr << "::astree::cppfile[" << index << "]: \"" 
           << filenames[index] << "\"" << endl;
   }
}   

void astree::print_symbol_value (astree_ptr tree) {
   if (tree == nullptr) cerr << "nullptr";
                   else cerr << *tree;
}

ostream& operator<< (ostream& out, const astree& tree) {
   out << &tree << "->{" << get_parser_yytname (tree.symbol)
       << " \"" << *tree.lexinfo << "\" " << tree.loc << "}";
   for (astree_ptr child: tree.children) out << " " << child;
   return out;
}

astree_ptr astree::make (int symbol, const location& loc,
                         const char* lexinfo) {
   return new astree (symbol, loc, lexinfo);
}

void astree::erase (astree_ptr& tree) {
   delete tree;
   tree = nullptr;
}

