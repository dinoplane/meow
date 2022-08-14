#include <cstring>
#include <iostream>
#include <fstream>

#include <string>
#include <vector>
#include <regex>
#include "util.h"
using namespace std;

#include <unistd.h>

struct options {
   int lex_debug {0};
   int parse_debug {0};
//   string suppressed {""};
   string filename;
   options (int argc, char** argv);
};

options::options (int argc, char** argv) {
   opterr = 0;
   for(;;) {
      int opt = getopt (argc, argv, "ly");
      if (opt == EOF) break;
      switch (opt) {
         case 'l': lex_debug = 1; break;
         case 'y': parse_debug = 1; break;
         default: cerr << "invalid option ("
                        << char (optopt) << ")" << endl;
      }
   }
   //if (optind + 1 < argc) throw usage_error();
   regex ext("\\.mw");
   filename = optind == argc ? "-" : regex_replace(argv[optind], ext, "");
}

int main (int argc, char** argv) {
   int status  = 0;

   ios_base::sync_with_stdio (true);
   try {
      options opts (argc, argv);
      lexer.open_file(opts.filename);
      parse_util parser (opts.filename,
                  opts.parse_debug, opts.lex_debug);
      parser.parse(); 
      parser.write_file();
      lexer.close_file();      
   }catch (exception &reason) {
      cerr << "" << endl;
      status  = 1;
   }   
   return status;
}


