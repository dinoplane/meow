/* Arrian Chi acchi */
/* $Id: scanner.l,v 1.3 2021-12-08 12:23:51-08 - - $ */

%{

#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "lyutils.h"

#define YY_USER_ACTION  { lexer.advance(); }
#define YY_FATAL_ERROR(msg) { lexer.lex_fatal_error (msg); }

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

OCTCON         (0[0-7])
HEXCON         (0[Xx][{DECIMAL}A-Fa-f])
TOK_INTCON     ({DECIMAL}+|{OCTCON}+|{HEXCON}+)

BAD_ESCAPE     (\\[^\\'"0nt])
CHARCON        ([^\\'\n]|\\[\\'"0nt])
BAD_CHARCON    ({CHARCON}|{BAD_ESCAPE})
TOK_CHARCON    ('{CHARCON}')

MID_BADCHAR    ({BAD_CHARCON}*{BAD_ESCAPE}+{BAD_CHARCON}*)
MANY_CHARCON   ({CHARCON}{CHARCON}+)
NOT_CHARCON    ('{BAD_CHARCON}+|'{MID_BADCHAR}'*|'{MANY_CHARCON}'*)

STRINGCON      ([^\\"\n]|\\[\\'"0nt])
BAD_STRINGCON  ({STRINGCON}|{BAD_ESCAPE})
TOK_STRINGCON  (\"{STRINGCON}*\")

MID_BADSTRCON  ({BAD_STRINGCON}*{BAD_ESCAPE}+{BAD_STRINGCON}*)
NOT_STRINGCON  (\"{STRINGCON}+|\"{MID_BADSTRCON}\"*)

%%

^"#".*\n          { lexer.include(); lexer.newline(); }
[ \t]+            { }
\n                { lexer.newline(); }

"void"            { return lexer.token (TOK_VOID); }
"int"             { return lexer.token (TOK_INT); }
"string"          { return lexer.token (TOK_STRING); }
"struct"          { return lexer.token (TOK_STRUCT); }
"array"           { return lexer.token (TOK_ARRAY); }
"ptr"             { return lexer.token (TOK_PTR); }
"if"              { return lexer.token (TOK_IF); }
"else"            { return lexer.token (TOK_ELSE); }
"while"           { return lexer.token (TOK_WHILE); }
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

{TOK_INTCON}      { return lexer.token (TOK_INTCON); }
{TOK_CHARCON}     { return lexer.token (TOK_CHARCON); }
{TOK_STRINGCON}   { return lexer.token (TOK_STRINGCON); }

{TOK_IDENT}       { return lexer.token (TOK_IDENT); }

{NOT_IDENT}       { return lexer.badtoken(TOK_IDENT); }
{NOT_CHARCON}     { return lexer.badtoken(TOK_CHARCON); }
{NOT_STRINGCON}   { return lexer.badtoken(TOK_STRINGCON); }
.                 { lexer.badchar (*yytext); }

%%

