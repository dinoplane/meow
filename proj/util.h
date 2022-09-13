#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <fstream>
#include "astree.h"
#include "location.h"
// #include "cpp_pipe.h"

#define YYSTYPE astree_ptr
#include "yyparse.h"



using namespace std;

int yylex();
int yylex_destroy(void);

extern FILE* yyin;
extern char* yytext; 
extern int yyleng; 
extern int yy_flex_debug;

int yyparse(YYSTYPE astree_root);
void yyerror (astree_ptr, const char* message);
extern int yydebug;
const char* get_parser_yytname (int symbol);


class lex_util {
   const static int MAX_NAME_LENGTH = 13;
   private:
      location loc {.linenr=1, .offset=0};
      size_t last_yyleng {0};
      ofstream out_file;

   public:
      ~lex_util();
      void open_file(string fn);
      void close_file();
      void advance();
      void newline();
      int token (int symbol);
      void badchar(unsigned char c);
      void lex_fatal_error (const char* msg);
      ostream& lex_error();
};
extern lex_util lexer;

class parse_util {
   private:
      string filename;
      FILE * script;
      astree_ptr astree_root = ASTNode::make (TOK_ROOT, {}, "[ROOT]");

   public:
      parse_util (string fn, bool parse_debug, bool lex_debug);
      ~parse_util() { fclose(script); 
      delete astree_root; };
      void parse();
      astree_ptr root() { return astree_root; }
      void write_file();
};


#endif