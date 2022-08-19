/* just like Unix wc
{NOT_IDENT}       { return lexer.badtoken(TOK_IDENT); }
{NOT_CHARCON}     { return lexer.badtoken(TOK_CHARCON); }
{NOT_STRINGCON}   { return lexer.badtoken(TOK_STRINGCON); }
 */


%{
#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wunused-function"


#include "util.h"


#define YY_USER_ACTION  { lexer.advance(); }



%}

%option 8bit
%option debug
%option nobackup
%option nodefault
%option noinput
%option nounput
%option noyywrap
%option warn

LETTER         [A-Za-z_]
DECIMAL        [0-9]
TOK_IDENT      ({LETTER}({LETTER}|{DECIMAL})*)
NOT_IDENT      ({DECIMAL}({LETTER}|{DECIMAL})*)

OCTCON         [0-7]
HEXCON         [{DECIMAL}A-Fa-f]
TOK_INTCON     ({DECIMAL}+|0{OCTCON}+|0[Xx]{HEXCON}+)
TOK_FLOATCON   {DECIMAL}*\.{DECIMAL}+

BAD_ESCAPE     (\\[^\\'"0nt])
CHARCON        ([^\\'\n]|\\[\\'"0nt])
BAD_CHARCON    ({CHARCON}|{BAD_ESCAPE})
TOK_CHARCON    ('{CHARCON}')

MANY_CHARCON   ({BAD_CHARCON}{BAD_CHARCON}+)
NOT_CHARCON    ('{BAD_CHARCON}*|'{BAD_ESCAPE}'|'{MANY_CHARCON}*')

STRINGCON      ([^\\"\n]|\\[\\'"0nt])
BAD_STRINGCON  ({STRINGCON}|{BAD_ESCAPE})
TOK_STRINGCON  (\"{STRINGCON}*\")

MID_BADSTRCON  ({BAD_STRINGCON}*{BAD_ESCAPE}{BAD_STRINGCON}*)
NOT_STRINGCON  (\"{BAD_STRINGCON}*|\"{MID_BADSTRCON}\"*)


%%


[ \t\r]+            { }
\n                { lexer.newline(); }
"//".*            {  }
"/*"[^\*]*"*/"    {  }


"void"            { return lexer.token (TOK_VOID); }
"int"             { return lexer.token (TOK_INT); }
"float"           { return lexer.token (TOK_FLOAT); }
"string"          { return lexer.token (TOK_STRING); }
"struct"          { return lexer.token (TOK_STRUCT); }
"array"           { return lexer.token (TOK_ARRAY); }
"ptr"             { return lexer.token (TOK_PTR); }
"if"              { return lexer.token (TOK_IF); }
"else"            { return lexer.token (TOK_ELSE); }
"while"           { return lexer.token (TOK_WHILE); }
"for"             { return lexer.token (TOK_FOR); }
"until"           { return lexer.token (TOK_UNTIL); }
"alloc"           { return lexer.token (TOK_ALLOC); }
"return"          { return lexer.token (TOK_RETURN); }
"nullptr"         { return lexer.token (TOK_NULLPTR); }
"not"             { return lexer.token (TOK_NOT); }

"+"               { return lexer.token ('+'); }
"-"               { return lexer.token ('-'); }
"*"               { return lexer.token ('*'); }
"/"               { return lexer.token ('/'); }
"%"               { return lexer.token ('%'); }
"="               { return lexer.token ('='); }
"+="              { return lexer.token (TOK_ADDEQ); }
"-="              { return lexer.token (TOK_SUBEQ); }
"++"              { return lexer.token (TOK_INC); }
"--"              { return lexer.token (TOK_DEC); }
"<"               { return lexer.token (TOK_LT); }
">"               { return lexer.token (TOK_GT); }
"=="              { return lexer.token (TOK_EQ); }
"!="              { return lexer.token (TOK_NE); }
"<="              { return lexer.token (TOK_LE); }
">="              { return lexer.token (TOK_GE); }
"->"              { return lexer.token (TOK_ARROW); }
","               { return lexer.token (','); }
";"               { return lexer.token (';'); }
"("               { return lexer.token ('('); }
")"               { return lexer.token (')'); }
"["               { return lexer.token ('['); }
"]"               { return lexer.token (']'); }
"{"               { return lexer.token ('{'); }
"}"               { return lexer.token ('}'); }

{TOK_FLOATCON}    { return lexer.token (TOK_FLOATCON); }
{TOK_INTCON}      { return lexer.token (TOK_INTCON); }
{TOK_CHARCON}     { return lexer.token (TOK_CHARCON); }
{TOK_STRINGCON}   { return lexer.token (TOK_STRINGCON); }


{TOK_IDENT}       { return lexer.token (TOK_IDENT); }

.                 { lexer.badchar(*yytext); }

%%
