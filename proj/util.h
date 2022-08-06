#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <fstream>
// #include "astree.h"
// #include "cpp_pipe.h"

//#define YYSTYPE astree_ptr

#include "yyparse.h"


using namespace std;

int yylex();
int yylex_destroy();

extern FILE* yyin;
extern char* yytext; 
extern int yyleng; 
extern int yy_flex_debug;

int yyparse();
void yyerror (const char* message);
extern int yydebug;
const char* get_parser_yytname (int symbol);

struct location {
   size_t filenr = 0;
   size_t linenr = 0;
   size_t offset = 0;
};

class lex_util {
   const static int MAX_NAME_LENGTH = 13;
   private:
      location loc {.linenr=1, .offset=0};
      size_t last_yyleng {0};
      ofstream out_file;

   public:
      ~lex_util();
      void open_file(const char* fn);
      void close_file();
      void advance();
      void newline();
      void include();
      int token (int symbol);
      //int badtoken(int symbol);
};
extern lex_util lexer;

class parse_util {
   private:
      string filename;

   public:
      parse_util (const char* fn, bool parse_debug, bool lex_debug);
      //~parse_util() { delete astree_root; }
      void parse();
      //astree_ptr root() { return astree_root; }
      //void write_file();
};


#endif