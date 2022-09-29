namespace location{

    public struct Location {
        int linenr;
        int offset;
        public Location (int ln, int of) {
            linenr = ln;
            offset= of;
        } 

        public override string ToString() { 
            return linenr.ToString() + "." + offset.ToString(); 
        }

    };
}
