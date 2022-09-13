#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>
#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>

#include "location.h"
#include "attr.h"
#include "astree.h"

using namespace std;


struct Symbol {
    int symbol;
    size_t seq = 0;
    location loc;
    vector<Symbol *>* parameters;
    attributes syminfo;
    Symbol(astree_ptr tree) : symbol(tree->symbol), loc(tree->loc), syminfo(tree->syminfo) {};
};

using symbol_table = unordered_map<string, Symbol*>;
using symtbl_stack = vector<symbol_table*>;             // a stack-like object
using symbol_entry = symbol_table::value_type;


class SymbolManager {
    symtbl_stack tblstack; // each symbol table represents a new scope
    vector<size_t> block_state; // stores the next block
    //vector<> collect all functions?/?

    string filename;
    ofstream symfile;

    public:
        SymbolManager(string);
        ~SymbolManager();

        string get_state(); // get the block_state as a string
        
        void push_tbl(); // called when new block
        void pop_tbl(); // called when end block
        void clear_stk(); // called in destructor
        void clear_tbl(); // called when popped

        bool has_sym(string);
        Symbol* lookup(string);
        void push_sym(astree_ptr);
        void clear_sym(Symbol*);

        void traverse_tree(astree_ptr);
        void dispatch(astree_ptr);

        void check_typeid(astree_ptr);  // declarations
        void check_assign(astree_ptr);
        void check_block(astree_ptr);   // blocks
        void check_function();
        void check_param();



        void check_expr(astree_ptr);
        void check_convert(astree_ptr, size_t);
        void check_binop(astree_ptr);
        void check_unop(astree_ptr);
        void check_const(astree_ptr);
        void check_var(astree_ptr);

        


        static void set_attr(astree_ptr, Symbol*);
        static void set_attr(astree_ptr, astree_ptr);
        static void type_inference(astree_ptr, astree_ptr);
        
        static void type_inference(astree_ptr);
};

#endif