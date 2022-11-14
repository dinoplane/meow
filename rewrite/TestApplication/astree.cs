using System;
using System.Collections.Generic;
using location;
using attr;
using symnames;

namespace astree{
    public class ASTNode {
        int symbol;
        Location loc;
        Attributes syminfo;
        string lexinfo;

        // an array of children
        List<ASTNode> children;

        // associated vr
        string vr = "";

        public override string ToString(){
            string ret = Enum.GetName(typeof(SymType), symbol) + " \"" + lexinfo + "\" (" + loc.ToString() + " " + syminfo.ToString();
            if (syminfo[Attr.CONST] ||
                   syminfo[Attr.VARIABLE] ||
                   syminfo[Attr.ASSIGN] ||
                   syminfo[Attr.BINOP] ||
                   syminfo[Attr.UNOP])
            ret += " VR: " + vr;
            ret += " )";

            return ret;
        }

        public ASTNode(int symbol_ , Location loc_, string lexinfo_){
            symbol = symbol_;
            loc = loc_;
            lexinfo = lexinfo_;
            children = new List<ASTNode>();
        }
        public string PrintTree(int n=0){
            string ret = "";
            
            for (int i = 0; i < n; i++){
                ret += "    ";
            }

            ret += ToString()+ "\n";
            foreach (ASTNode c in children){
                ret += c.PrintTree(n+1);
            }
            return ret;
        }

        public bool IsLeafNode(){
            return syminfo[Attr.CONST] || syminfo[Attr.VARIABLE];
        }

        public bool IsBinopNode(){
            return syminfo[Attr.BINOP];
        }

        public bool IsUnopNode(){
            return syminfo[Attr.UNOP];
        }

        public bool IsCompNode(){
            return syminfo[Attr.COMP];
        }

        public bool isConvNode(){
            return syminfo[Attr.INT2FLOAT] || syminfo[Attr.FLOAT2INT];
        }
        
        public ASTNode adopt(ASTNode node){
            children.Add(node);
            return this;
        }

        public ASTNode adopt(List<ASTNode> args){
            foreach (ASTNode n in args){
                children.Add(n);
            }
            return this;
        }

        public ASTNode adopt_as (int symbol_, ASTNode child){
            return this.set_symbol(symbol_).adopt(child);
        }

        public ASTNode adopt_as (int symbol_, List<ASTNode> args){
            return this.set_symbol(symbol_).adopt(args);
        }

        public ASTNode set_symbol(int symbol_){
            symbol = symbol_;
            return this;

        }

        public ASTNode set_bits(Attr a){
            syminfo[a] = true;
            return this;
        }

        public ASTNode set_bits(List<Attr> args){ // I think use a list?
            foreach(Attr b in args){
                syminfo[b] = true;
            }
            return this;
        }

        public ASTNode set_bits(ASTNode node){
            syminfo.attrbits = node.syminfo.attrbits;
            return this;
        }

        static ASTNode make(int symbol_, Location loc_, string lexinfo){
            return new ASTNode(symbol_, loc_, lexinfo);
        }

        static ASTNode mkopt(int symbol, List<ASTNode> args){
            Location p = args[0].loc;

            ASTNode ret_ptr = ASTNode.make(symbol, p, "");
            ret_ptr.adopt(args);
            return ret_ptr;
        }
    }
}
