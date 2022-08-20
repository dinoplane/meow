#ifndef ATTR_H
#define ATTR_H

#include <string>
#include <bitset>
#include <iostream>

#include "location.h"


// Implement arrays later??? debate this later
enum attr { VOID, INT, FLOAT, STRING, 
             TYPE_ID, CONST, VARIABLE,
            ASSIGN, BINOP, UNOP, BLOCK, 
             IFELSE, WHILE, FOR, UNTIL,
             PARAM, FUNCTION, RETURN, 
             VREG, VADDR, BITSET_SIZE
            };
using attr_bitset = bitset<attr::BITSET_SIZE>;

// remember bit 0 is void
static const string ATTR_NAMES[attr::BITSET_SIZE] = 
                                    { "void", "int", "float", "string",
                                      "typeid", "const", "variable",
                                       "assign", "binop", "unop", "block", 
                                      "ifelse", "while", "for", "until", 
                                      "param", "function", "return", 
                                      "vreg", "vaddr"
                                    };



struct attributes {
    attr_bitset attrbits;
    size_t block_nr {0};
    location defloc;
};

ostream& operator<< (ostream&, const attributes&);

#endif