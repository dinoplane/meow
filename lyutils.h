// Arrian Chi acchi
// $Id: lyutils.h,v 1.3 2021-12-20 13:07:53-08 - - $

#ifndef LYUTILS_H
#define LYUTILS_H

#include <iostream>
#include <fstream>
#include "astree.h"
#include "cpp_pipe.h"

#define YYSTYPE astree_ptr
#include "yyparse.h"

int yylex();
int yylex_destroy();

extern FILE* yyin;
extern char* yytext; 
extern int yyleng; 
extern int yy_flex_debug;

int yyparse();
void yyerror (astree_ptr, const char* message);
extern int yydebug;
const char* get_parser_yytname (int symbol);

class lex_util {
   const static int MAX_NAME_LENGTH = 13;
   private:
      location loc {.filenr=0, .linenr=1, .offset=0};
      size_t last_yyleng {0};
      ofstream out_file;
   public:
      ~lex_util();
      void open_file(const char* oc_filename);
      void close_file();
      void advance();
      void newline();
      void include();
      int token (int symbol);
      int badtoken (int symbol);
      void badchar (unsigned char bad);
      void lex_fatal_error (const char* msg);
      ostream& lex_error();
};

extern lex_util lexer;

class parse_util {
   private:
      cpp_pipe oc_file;
      astree_ptr astree_root = astree::make (TOK_ROOT, {}, "[ROOT]");
   public:
      parse_util (const char* oc_filename,
                  bool parse_debug, bool lex_debug, string suppressed);
      ~parse_util() { delete astree_root; }
      void parse();
      astree_ptr root() { return astree_root; }
};

#endif

