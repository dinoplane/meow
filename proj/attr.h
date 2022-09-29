#ifndef ATTR_H
#define ATTR_H

#include <string>
#include <bitset>
#include <iostream>

#include "location.h"



// Implement arrays later??? debate this later
enum attr { VOID, INT, FLOAT, STRING, 
            INT2FLOAT, FLOAT2INT,
             TYPE_ID, CONST, VARIABLE,
             ASSIGN, BINOP, UNOP, COMP, CALL, BLOCK, 
             IFELSE, WHILE, FOR, UNTIL,
             PARAM, FUNCTION, RETURN, 
             VREG, VADDR, ROOT, BITSET_SIZE
            };
using attr_bitset = bitset<attr::BITSET_SIZE>;

// remember bit 0 is void
static const string ATTR_NAMES[attr::BITSET_SIZE] = 
                                    { "void", "int", "float", "string", 
                                        "int2float", "float2int",
                                      "typeid", "const", "variable",
                                       "assign", "binop", "unop", "comp",
                                       "call", "block", 
                                      "ifelse", "while", "for", "until", 
                                      "param", "function", "return", 
                                      "vreg", "root", "vaddr"
                                    };


static attr_bitset TYPE_SET(string("00000000000000000000001111"));   
struct attributes {
 
    attr_bitset attrbits;
    string block_nr {"0"};
    location defloc;

    attr_bitset::reference operator[](int i) {
        return attrbits[i];
    }


};

ostream& operator<< (ostream&, const attributes&);


#endif