#ifndef ASTREE_H
#define ASTREE_H


#include <map>
#include <vector>

#include <string>
#include <initializer_list>

#include "location.h"
#include "attr.h"




using namespace std;

using astree_ptr = struct ASTNode*;




/* We use class because we ned functions. Yes the AST takes up more memory, but this allows for easier 3AC generation
*/

// enum attr {
// VOID, INT, NULLPTR_T, STRING, STRUCT, ARRAY, FUNCTION, VARIABLE,
// TYPEID,  LVAL, CONST, VREG, VADDR, LOCAL, FIELD, PARAM, BITSET_SIZE
// };
// using attr_bitset = bitset<attr::BITSET_SIZE>;

// static const string ATTR_NAMES[attr::BITSET_SIZE] = 
//                                     { "void", "int", "nullptr_t", 
//                                       "string", "struct", "array", 
//                                       "function", "variable", 
//                                       "type_id", "lval", "const",
//                                       "vreg", "vaddr", "local", 
//                                       "field", "param" };


// Let us do an unoptimized numbering scheme first!

class ASTNode {
    public:
        int symbol;
        location loc;
        attributes syminfo;
        string lexinfo;
        vector<astree_ptr> children;
        string vr = "";
    
    public:

        ASTNode(int symbol_, const location& loc_, const string lexinfo_) : symbol(symbol_), loc(loc_), lexinfo(lexinfo_) {};
        // delete the copy and move constructor later cuz we dont need it
        ~ASTNode();

        bool is_leaf_node() {
            return syminfo[attr::CONST] || syminfo[attr::VARIABLE];
        }

        bool is_binop_node() {
            return syminfo[attr::BINOP];
        }

        bool is_unop_node() {
            return syminfo[attr::UNOP];
        }

        bool is_comp_node(){
            return syminfo[attr::COMP];
        }

        bool is_conv_node(){
            return syminfo[attr::INT2FLOAT] || syminfo[attr::FLOAT2INT];
        }

        astree_ptr adopt(astree_ptr);
        astree_ptr adopt(initializer_list<astree_ptr> args);
        astree_ptr adopt_as (int symbol_, astree_ptr& child);
        astree_ptr adopt_as (int symbol_, initializer_list<astree_ptr> args);
        astree_ptr set_symbol(int symbol_);
        astree_ptr set_bits(attr attr_);
        astree_ptr set_bits(initializer_list<attr> args);
        astree_ptr set_bits(astree_ptr& tree);

        static astree_ptr  make(int symbol, const location& loc, const string lexinfo);

        // For wrapper tokens
        static astree_ptr  mkopt(int symbol, initializer_list<astree_ptr> list);
        
        static void erase (astree_ptr&);
        static void erase(initializer_list<astree_ptr> list);
        
        void print_tree (ostream& out, int depth = 0);
};

#endif