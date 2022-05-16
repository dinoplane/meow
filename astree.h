// Arrian Chi acchi
// $Id: astree.h,v 1.2 2021-12-20 13:07:53-08 - - $

#ifndef ASTREE_H
#define ASTREE_H

#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

#include "auxlib.h"

using astree_ptr = struct astree*;

struct location {
   size_t filenr = 0;
   size_t linenr = 0;
   size_t offset = 0;
};

ostream& operator<< (ostream&, const location&);

class astree {
   private:
      astree (int symbol, const location&, const char* lexinfo);
      static unordered_set<string> lextable;

   public:
      int symbol;                  // token code
      location loc;                // source location
      const string* lexinfo;       // pointer to lexical information
      vector<astree_ptr> children; // children of this n-way node
      static vector<string> filenames;

      astree (const astree&) = delete;
      astree& operator= (const astree&) = delete;
      ~astree();

      static void dump_filenames();
      static void print_symbol_value (astree_ptr);
      static astree_ptr make (int symbol, const location&,
                              const char* lexinfo);
      static void erase (astree_ptr&);

   
      void adopt (astree_ptr child1, astree_ptr child2 = nullptr);
      void adopt_as (astree_ptr child, int symbol);
      void dump_tree (int depth = 0);
      void print_tree (ostream& out, int depth = 0);
};

ostream& operator<< (ostream&, const astree&);

#endif

