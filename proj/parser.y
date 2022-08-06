%{
// Arrian Chi acchi
// $Id: parser.y,v 1.3 2021-12-08 12:23:51-08 - - $

#pragma GCC diagnostic ignored "-Wold-style-cast"


#include "util.h"


%}


%debug
%defines
%error-verbose
%token-table
%verbose


%token TOK_EOL TOK_INTCON

%left       '+' '-'
%left       '*' '/' 

%start calc

%%

calc        : calc expr TOK_EOL     { std::cout << "= " << $2 << std::endl; }
            | 
            ;

expr        : expr '+' expr         { $$ = $1 + $3; }
            | expr '-' expr         { $$ = $1 - $3; }
            | expr '*' expr         { $$ = $1 * $3; }
            | expr '/' expr         { $$ = $1 / $3; }
            | TOK_INTCON            { $$ = $1; }
            ;

%%

const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}