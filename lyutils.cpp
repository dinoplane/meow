// Arrian Chi acchi
// $Id: lyutils.cpp,v 1.1 2021-12-08 12:07:42-08 - - $

#include <cassert>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <fstream>
using namespace std;

#include "auxlib.h"
#include "lyutils.h"

lex_util lexer;

void yyerror (astree_ptr, const char* message) {
   lexer.lex_error() << ": " << message << endl;
}

lex_util::~lex_util() {
   yylex_destroy();
}

void lex_util::open_file(const char* oc_filename){
   const string filename (oc_filename);
   string tokens_file (filename.substr(0, filename.length()-3) \
                           + ".tokens");
   out_file.open(tokens_file, ofstream::out);
};

void lex_util::close_file(){
   out_file.close();
};

void lex_util::advance() {
   loc.offset += last_yyleng;
   last_yyleng = yyleng;
}

void lex_util::newline() {
   ++loc.linenr;
   loc.offset = 0;
}


void lex_util::include() { 
   size_t linenr;
   size_t filename_len = strlen (yytext) + 1;
   unique_ptr<char[]> filename = make_unique<char[]> (filename_len);
   int scan_rc = sscanf (yytext, "# %zu \"%[^\"]\"",
                         &linenr, filename.get());
   if (scan_rc != 2) {
      lex_error() << "invalid directive, ignored: " << yytext << endl;
   }else {
      if (yy_flex_debug) {
         cerr << "--included # " << linenr << " \"" << filename.get()
              << "\"" << endl;
      }
      loc.linenr = linenr - 1;
      loc.filenr = astree::filenames.size();
      astree::filenames.push_back (filename.get());
   }
   out_file << "#" << setw(3) << linenr << " \""
            << filename.get() << "\"" << endl;
}

int lex_util::token (int symbol) {
   astree_ptr tmp = yylval;
   yylval = astree::make (symbol, loc, yytext);
   astree::erase(tmp);
      
   // First 3 columns: file line:offset symbol
   out_file << setw(4) << loc.filenr << " " << setw(3) << loc.linenr
            << "." << setfill('0') << setw(3) << loc.offset << "  "
            << setfill(' ') << setw(3) << symbol;
   
   // Token name
   string symbol_name (get_parser_yytname(symbol));
   out_file << "  " << symbol_name;

   // Token value
   int padnum = MAX_NAME_LENGTH - symbol_name.length();   
   string padding (padnum, ' ');
   string text (yytext);
   out_file << padding << "  " << text << endl;   
   
   return symbol;
}

int lex_util::badtoken (int symbol) {
   lex_error() << ": invalid token (" << yytext << ")" << endl;
   return token (symbol);
}

void lex_util::badchar (unsigned char bad) {
   ostringstream buffer;
   if (isgraph (bad)) buffer << bad;
                 else buffer << "\\" << setfill('0') << setw(3)
                             << unsigned (bad);
   lex_error() << ": invalid source character ("
           << buffer.str() << ")" << endl;
}

void lex_util::lex_fatal_error (const char* message) {
   throw ::fatal_error (message);
}

ostream& lex_util::lex_error() {
   return exec::error() << loc << ": ";
}

parse_util::parse_util (const char* oc_filename,
                        bool parse_debug, bool lex_debug, \
                              string suppressed):
                        oc_file (oc_filename, lex_debug, suppressed) {
   yydebug = parse_debug;
   yy_flex_debug = lex_debug;
   yyin = oc_file.get_pipe();
}

void parse_util::parse() {
   int not_ok = yyparse (astree_root);
   if (not_ok) exec::error() << "parse failed.";
   if (yydebug or yy_flex_debug) {
      astree_root->dump_tree();
      astree::dump_filenames();
   }
   astree::erase(yylval);
}

