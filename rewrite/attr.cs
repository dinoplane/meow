using System.Collections.Specialized;
using location;

namespace attr{
    enum Attr { VOID, INT, FLOAT, STRING, 
                INT2FLOAT, FLOAT2INT,
                TYPE_ID, CONST, VARIABLE,
                ASSIGN, BINOP, UNOP, COMP, CALL, BLOCK, 
                IFELSE, WHILE, FOR, UNTIL,
                PARAM, FUNCTION, RETURN, 
                VREG, VADDR, ROOT, BITSET_SIZE
                };
    const int ATTRSIZE = (int) Attr.BITSET_SIZE;
    const string[] ATTR_NAMES = new string[ATTRSIZE]
                                        { "void", "int", "float", "string", 
                                            "int2float", "float2int",
                                        "typeid", "const", "variable",
                                        "assign", "binop", "unop", "comp",
                                        "call", "block", 
                                        "ifelse", "while", "for", "until", 
                                        "param", "function", "return", 
                                        "vreg", "root", "vaddr"
                                        };

    const BitVector32 TYPE_SET = new BitVector32(15);

    struct Attributes {
    
        BitVector32 attrbits;
        string block_nr = "0";
        Location defloc;
        
        public object this[int i ]{
            get {return attrbits[i]; }
            set { attrbits[i] = value; }
        }

        public object this[Attr a]{
            get {return attrbits[(int) a]; }
            set { attrbits[(int) a] = value; }
        }

        public string ToString(){
            string ret = "";
            ret += "{" + block_nr + "}";
            for (int i = 0; i < (int) Attr.BITSET_SIZE; ++i){
                if (a.attrbits[i]){
                     ret += " " + ATTR_NAMES[i];
                }
            }

            // check if is ident
            if (a.attrbits[Attr.VARIABLE])
                ret +=  " (" + a.defloc.ToString() + ")";
            return ret;
        }
    };
}
