#include <cassert>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <fstream>

#include "util.h"

using namespace std;

lex_util lexer;

void yyerror (const char* message) {
   cerr << ": " << message << endl;
}

lex_util::~lex_util(){
    yylex_destroy();
}

void lex_util::open_file(const char* fn){
    const string filename (fn);
    string tokens_file (filename.substr(0, filename.length()-3) \
                           + ".tokens");
   out_file.open(tokens_file, ofstream::out);
}

void lex_util::close_file(){
   out_file.close();
}

void lex_util::advance() {
   loc.offset += last_yyleng;
   last_yyleng = yyleng;
}

void lex_util::newline() {
   ++loc.linenr;
   loc.offset = 0;
}

int lex_util::token (int symbol) {
//    if (yylval != nullptr)
//       cout << get_parser_yytname(yylval->symbol) << endl;
   //yylval = astree::make (symbol, loc, yytext);
      
   // First 3 columns: file line:offset symbol
   out_file << setw(3) << loc.linenr
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

parse_util::parse_util(const char* fn, bool parse_debug, bool lex_debug){
   yydebug = parse_debug;
   yy_flex_debug = lex_debug;

   FILE * script;
   script = fopen(fn, "r");
   if (script == nullptr)
      cout << "error" << endl;
   else {
      yyin = script; // You're gonna need to change this later because editor.
   }

   const string tmp_fn (fn);
   filename = (tmp_fn.substr(0, tmp_fn.length()-3) + ".ast");
}

void parse_util::parse(){
   yyparse();
}