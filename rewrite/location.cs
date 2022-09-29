namespace location{

    struct Location {
        int meownr = 0;
        int linenr = 0;
        int offset = 0;
        public Location (int ln, int of) {
            linenr = ln;
            offset= of;
        } 

        public string ToString() { return linenr.ToString() + "." + offset.ToString(); }

    };
}
