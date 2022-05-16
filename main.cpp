// Arrian Chi acchi
// $Id: main.cpp,v 1.1 2021-12-08 12:07:42-08 - - $

#include <cstring>
#include <iostream>
#include <fstream>

#include <string>
#include <vector>
using namespace std;

#include <libgen.h>
#include <unistd.h>

#include "astree.h"
#include "auxlib.h"
#include "debug.h"
#include "lyutils.h"

struct usage_error: exception {
   usage_error() {
      exec::status (EXIT_FAILURE);
   }
};

struct options {
   int lex_debug {0};
   int parse_debug {0};
   string suppressed {""};
   const char* oc_filename {nullptr};
   options (int argc, char** argv);
};

options::options (int argc, char** argv) {
   opterr = 0;
   for(;;) {
      int opt = getopt (argc, argv, "@D:ly");
      if (opt == EOF) break;
      switch (opt) {
         case '@': debugflags::setflags (optarg); break;
         case 'l': lex_debug = 1; break;
         case 'y': parse_debug = 1; break;
         case 'D': suppressed = "-D" + string(optarg); break;
         default: exec::error() << "invalid option ("
                        << char (optopt) << ")" << endl;
      }
   }
   if (optind + 1 < argc) throw usage_error();
   oc_filename = optind == argc ? "-" : argv[optind];
}


int main (int argc, char** argv) {
   ios_base::sync_with_stdio (true);
   exec::name (argv[0]);
   try {
      options opts (argc, argv);
      lexer.open_file(opts.oc_filename);
      parse_util parser (opts.oc_filename,
                 opts.parse_debug, opts.lex_debug, opts.suppressed);
      parser.parse(); 
      lexer.close_file();
   }catch (usage_error&) {
      cerr << "Usage: " << exec::name() << " [-ly@D] [program]" << endl;
   }catch (fatal_error& reason) {
      exec::error() << reason.what() << endl;
   }   
   return exec::status();
}

