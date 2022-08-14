#ifndef ASTREE_H
#define ASTREE_H


#include <map>
#include <vector>

#include <string>
#include <initializer_list>


using namespace std;

using astree_ptr = struct ASTNode*;

enum NType {INT, FLOAT, STRING, OP, NILL};

struct location {
   size_t linenr = 0;
   size_t offset = 0;
};
ostream& operator<< (ostream&, const location&);


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




class ASTNode {
    public:
        NType n_type;
        int symbol;
        location loc;
        string lexinfo;
        vector<astree_ptr> children;
        string value;
        string vr = "";
    
    public:
        // static map<n_type, string> NODE_2_3AC {{
            

        // }};


        ASTNode(int symbol_, const location& loc_, const string lexinfo_) : symbol(symbol_), loc(loc_), lexinfo(lexinfo_) {};
        // delete the copy and move constructor later cuz we dont need it
        ~ASTNode();

        astree_ptr adopt(astree_ptr);
        astree_ptr adopt(initializer_list<astree_ptr> args);
        

        string three_addr_code() {return "";};


        static astree_ptr  make(int symbol, const location& loc, const string lexinfo);

        // For wrapper tokens
        static astree_ptr  mkopt(int symbol, initializer_list<astree_ptr> list);
        
        static void erase (astree_ptr&);
        void print_tree (ostream& out, int depth = 0);
};

#endif