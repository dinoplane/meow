/* just like Unix wc */


%{
#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wunused-function"


#include "util.h"


#define YY_USER_ACTION  { lexer.advance(); }

%}

DECIMAL        [0-9]

OCTCON         [0-7]
HEXCON         [{DECIMAL}A-Fa-f]
TOK_INTCON     ({DECIMAL}+|0{OCTCON}+|0[Xx]{HEXCON}+)


%option 8bit
%option debug
%option nobackup
%option nodefault
%option noinput
%option nounput
%option noyywrap
%option warn

%%
[ \t]+            { }
\n                { return TOK_EOL; }

"+"               { return '+'; }
"-"               { return '-'; }
"*"               { return '*'; }
"/"               { return '/'; }



{TOK_INTCON}      { yylval = atoi(yytext); return TOK_INTCON; }

.                 {}

%%
