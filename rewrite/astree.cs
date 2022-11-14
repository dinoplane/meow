using location;
using attr;

namespace astree{
    class ASTNode {
        int symbol;
        Location loc;
        Attributes syminfo;
        string lexinfo;
        
        // an array of children
        List<ASTNode> children;

        // associated vr
        string vr = "";

        public string ToString(){
            return "";
        }

        public ASTNode(int symbol_ , Location loc_, string lexinfo_){
            symbol = symbol_;
            loc = loc_;
            lexinfo = lex_info_;
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

        public ASTNode adopt_as (int symbol_, ASTNode[] args){
            return this.set_symbol(symbol_).adopt(args);
        }

        public ASTNode set_symbol(int symbol_){
            symbol = symbol_;
            return this;

        }

        public ASTNode set_bits(Attr a){
            syminfo.attrbits[a] = 1;
            return this;
        }

        static ASTNode set_bits(List<Attr> args){ // I think use a list?
            foreach(Attr b in args){
                syminfo.attrbits[b] = 1;
            }
            return this;
        }

        static ASTNode set_bits(ASTNode node){
            syminfo.attrbits = node.syminfo.attrbits;
        }

        static ASTNode make(int symbol_, Location loc_, string lexinfo){
            return new ASTNode(symbol_, loc_, lexinfo);
        }

        static ASTNode mkopt(int symbol, List<ASTNode> args){
            Location p = children[0].loc;

            ASTNode ret_ptr = ASTNode.make(symbol, p, "");
            ret_ptr->adopt(args);
            return ret_ptr;
        }
    }
}
