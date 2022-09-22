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
#include "codegen.h"

using namespace std;


struct Symbol {
    int symbol;
    size_t seq = 0;
    location loc;
    vector<Symbol *>* parameters;
    string new_name;
    attributes syminfo;
    Symbol(astree_ptr tree) : symbol(tree->symbol), loc(tree->loc), syminfo(tree->syminfo) {};
};

using symbol_table = unordered_map<string, Symbol*>;
using symtbl_stack = vector<symbol_table*>;             // a stack-like object
using symbol_entry = symbol_table::value_type;



struct ErrorMsg {
    location loc;
    string error_msg;
    ErrorMsg(location loc_, string error_msg_) : loc(loc_), error_msg(error_msg_) {};
};
ostream& operator<< (ostream&, const ErrorMsg&);

class SymbolManager {
    symtbl_stack tblstack; // each symbol table represents a new scope
    vector<size_t> block_state; // stores the next block
    //vector<> collect all functions?/?
    

    CodeGenerator cdg;
    NewNameGenerator nng;
    VRegAllocator vrg;


    string filename;
    ofstream symfile;

    bool error_state = false;
    vector<ErrorMsg> error_list;

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
        bool push_sym(astree_ptr);
        void clear_sym(Symbol*);

        bool traverse_tree(astree_ptr);
        bool dispatch(astree_ptr);

        bool check_typeid(astree_ptr);  // declarations
        bool check_assign(astree_ptr);
        bool check_block(astree_ptr);   // blocks
        bool check_call(astree_ptr);
        bool check_param(astree_ptr);

        bool check_expr(astree_ptr);
        bool check_convert(astree_ptr, size_t);
        bool check_binop(astree_ptr);
        bool check_unop(astree_ptr);
        bool check_const(astree_ptr);
        bool check_var(astree_ptr);
        
        static void set_attr(astree_ptr, Symbol*);
        static void set_attr(astree_ptr, astree_ptr);
        static void type_inference(astree_ptr, astree_ptr);
        
        static void type_inference(astree_ptr);

        void push_error(location&, string);
        void dump_errors();

        string dump_program() {return cdg.dump_program();};
        
};

#endif