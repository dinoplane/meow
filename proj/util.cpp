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
#include "astree.h"


using namespace std;

lex_util lexer;



void yyerror (astree_ptr, const char* message) {
   cerr << ": " << message << endl;
}

lex_util::~lex_util(){
    yylex_destroy();
}

void lex_util::open_file(string fn){
    string tokens_file (fn + ".tokens");
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
   yylval = ASTNode::make (symbol, loc, yytext);
      
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

parse_util::parse_util(string fn, bool parse_debug, bool lex_debug){
   yydebug = parse_debug;
   yy_flex_debug = lex_debug;

   FILE * script;
   script = fopen((fn+".mw").c_str(), "r");
   if (script == nullptr)
      cout << "error" << endl;
   else {
      yyin = script; // You're gonna need to change this later because editor.
   }

   filename = fn + ".ast";
}

void parse_util::parse(){
   yyparse(astree_root);
}

void parse_util::write_file(){
   ofstream ast_file(filename + ".ast");
   astree_root->print_tree(ast_file, 0);
   ast_file.close();
};
