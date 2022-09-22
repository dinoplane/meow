#ifndef CODEGEN_H
#define CODEGEN_H

// CODE FORMATS // Pay the PG&E

#include <string>
#include <vector>
#include <map>

#include "attr.h"
#include "codegen.h"
#include "astree.h"
using namespace std;


class NewNameGenerator{
    friend class SymbolManager;
    int name_counter {0};

    string make_new_name(){ // Unoptimized
        string ret = "n" + to_string(name_counter);
        name_counter++;
        return ret;    
    };

};

class VRegAllocator {
    friend class SymbolManager;
    int vr_counter {0};

    void make_new_vr(astree_ptr a){ // Unoptimized
        a->vr = "vr" + to_string(vr_counter);
        vr_counter++;        
    };

};

class LabelGenerator {
    int lbl_counter {0};
    
    public: 

    string make_new_lbl(){ // Unoptimized
        string ret = "lbl" + to_string(lbl_counter) + ":";
        lbl_counter++;    
        return ret;    
    };

};

static const string NODE_3AC[attr::BITSET_SIZE] = 
                                { "void", 
                                  "int", 
                                  "float", 
                                  "string", 
                                  "int2float", 
                                  "float2int",
                                  "typeid", 
                                  "const", 
                                  "variable",
                                  "assign", 
                                  "binop", 
                                  "unop", 
                                  "comp",
                                  "block", 
                                  "ifelse", 
                                  "while", 
                                  "for", 
                                  "until", 
                                  "param", 
                                  "function", 
                                  "return", 
                                  "vreg", 
                                  "vaddr"
                                };

class CodeGenerator{
    public: 
      static  map<string, string> BINOP_TO_3AC;
      static  map<string, string> UNOP_TO_3AC;
      static  map<string, string> COMP_TO_3AC;

    
    // If we reach a constant, because our interpreter has 
    // constant support(because parsing strings is slower 
    // so having intermediate vregs is slower)
    vector<string> program; // each string is a line
    LabelGenerator lbg;

    string dump_program() const;

    void dispatch(astree_ptr);

    void linearize_expr(astree_ptr);

    void linearize_assign(astree_ptr);

    string linearize_condition(astree_ptr);

    void linearize_block(astree_ptr);

    void linearize_while(astree_ptr);

    void linearize_ifelse(astree_ptr);

    void linearize_call(astree_ptr);

    // If we reach a operator, we must generate a new vregs
    // If we reach a assignment, we must also generate a new vreg
    // When we see a variable, maybe we can return the vreg associtated with it
    
    // More complicated situations.... because they require branching/jumping.
    // If statements
    // The format is like:
    //      intermediate vreg, 
    //      evaluate vreg, 
    //      label for true, 
    //      statements that follow, 
    //      jump to end, 
    //      label for false, 
    //      statements that follow, 
    //      end.

    // While/until loops
    //      loop:
    //      intermediate vreg/ statements from expr
    //      evaluate vreg
    //      label1
    //      statements in loop
    //      jump back to loop
    //      end:
    

    // For loops... AAAH
    // I do later


};

#endif