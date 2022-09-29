using System.Collections.Specialized;
using location;

namespace attr
{
    public enum Attr
    {
        VOID, INT, FLOAT, STRING,
        INT2FLOAT, FLOAT2INT,
        TYPE_ID, CONST, VARIABLE,
        ASSIGN, BINOP, UNOP, COMP, CALL, BLOCK,
        IFELSE, WHILE, FOR, UNTIL,
        PARAM, FUNCTION, RETURN,
        VREG, VADDR, ROOT, BITSET_SIZE
    };


    public struct Attributes
    {

        public static readonly string[] ATTR_NAMES = new string[(int)Attr.BITSET_SIZE]
                                            { "void", "int", "float", "string",
                                            "int2float", "float2int",
                                        "typeid", "const", "variable",
                                        "assign", "binop", "unop", "comp",
                                        "call", "block",
                                        "ifelse", "while", "for", "until",
                                        "param", "function", "return",
                                        "vreg", "root", "vaddr"
                                            };

        public static readonly BitVector32 TYPE_SET = new BitVector32(15);


        BitVector32 attrbits;
        string block_nr;
        Location defloc;

        public Attributes( string bnr, Location loc)
        {
            attrbits = new BitVector32(0);
            block_nr = bnr;
            defloc = loc;
        }

        public object this[int i]
        {
            get { return attrbits[i]; }
            set { attrbits[i] = (bool) value; }
        }

        public object this[Attr a]
        {
            get { return attrbits[(int)a]; }
            set { attrbits[(int)a] = (bool) value; }
        }

        public override string  ToString() 
        {
            string ret = "";
            ret += "{" + block_nr + "}";
            for (int i = 0; i < (int)Attr.BITSET_SIZE; ++i)
            {
                if (attrbits[i])
                {
                    ret += " " + ATTR_NAMES[i];
                }
            }

            // check if is ident
            if ((bool) this[Attr.VARIABLE])
                ret += " (" + defloc.ToString() + ")";
            return ret;
        }
    };
}
