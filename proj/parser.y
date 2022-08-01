%{
// Arrian Chi acchi
// $Id: parser.y,v 1.3 2021-12-08 12:23:51-08 - - $

#pragma GCC diagnostic ignored "-Wold-style-cast"


// #include "lyutils.h"
#include "astree.h"

%}

%parse-param {YYSTYPE astree_root}

%destructor { if ($$ != astree_root) delete $$; } <>

%debug
%defines
%error-verbose
%token-table
%verbose

%token TOK_VOID TOK_INT TOK_STRING TOK_TYPE_ID TOK_NOT
%token TOK_IF TOK_WHILE TOK_RETURN TOK_STRUCT TOK_INDEX
%token TOK_NULLPTR TOK_ARRAY TOK_ARROW TOK_ALLOC TOK_PTR
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON
%token TOK_ROOT TOK_BLOCK TOK_CALL TOK_FUNCTION TOK_PARAM

%right      TOK_ELSE
%right      '='
%left       TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%left       '+' '-'
%left       '*' '/' '%'
%right      UNARY
%left       '[' TOK_ARROW '(' TOK_ALLOC

%start program

%%

program     : program structdef     { $$ = $1->adopt ($2); }
            | program function      { $$ = $1->adopt ($2); }
            | program vardecl       { $$ = $1->adopt ($2); }
            | program error '}'     { delete $3; $$ = $1; }
            | program error ';'     { delete $3; $$ = $1; }
            |                       { $$ = astree_root; }
            ;

typeid      : type TOK_IDENT        { $$ = astree::mkopt(TOK_TYPE_ID,
                                                         $1, $2); 
                                    }
            | TOK_VOID TOK_IDENT    { $$ = astree::mkopt(TOK_TYPE_ID,
                                                         $1, $2); 
                                    }
            ;

structdef   : structhead '}' ';'    { delete $2; delete $3; $$ = $1; }
            ;

structhead  : structhead typeid ';' { delete $3; 
                                      $$ = $1->adopt($2);
                                    }
            | TOK_STRUCT TOK_IDENT '{'
                                    { delete $3;
                                      $$ = $1->adopt($2);
                                    }
            ;

vardecl     : typeid '=' expr ';'   { delete $2; delete $4;
                                      $$ = $1->adopt($3); 
                                    }
            | typeid ';'            { delete $2; $$ = $1; }
            ;

type        : plaintype             { $$ = $1; }
            | TOK_ARRAY TOK_LT plaintype TOK_GT 
                                    { delete $2; delete $4;
                                      $$ = $1->adopt($3); 
                                    }
            ;

plaintype   : TOK_INT               { $$ = $1; }
            | TOK_STRING            { $$ = $1; }
            | TOK_PTR TOK_LT TOK_STRUCT TOK_IDENT TOK_GT
                                    { delete $2;
                                      delete $3; 
                                      delete $5;
                                      $$ = $1->adopt($4);
                                    }
            ;

function    : typeid parameters block  
                                    { $$ = astree::mkopt(
                                      TOK_FUNCTION, $1,
                                      $2)->adopt($3); 
                                    }
            ;

parameters  : paramhead ')'         { delete $2; $$ = $1; }
            | '(' ')'               { delete $2;
                                      $1->symbol = TOK_PARAM;
                                      $$ = $1;
                                    }
            ;

paramhead   : paramhead ',' typeid  { delete $2;
                                      $$ = $1->adopt($3);
                                    }
            | '(' typeid            { $$ = $1->adopt_as(TOK_PARAM,
                                                         $2);
                                    }
            ;

block       : blockhead '}'         { delete $2; $$ = $1; }
            | ';'                   { $1->symbol = TOK_BLOCK;
                                      $$ = $1;
                                    }
            ;

blockhead   : blockhead statement   { $$ = $1->adopt($2); }
            | '{'                   { $1->symbol = TOK_BLOCK;
                                      $$ = $1;
                                    }
            ;

statement   : vardecl               { $$ = $1; }
            | block                 { $$ = $1; }
            | while                 { $$ = $1; }
            | ifelse                { $$ = $1; }
            | return                { $$ = $1; }
            | expr ';'              { delete $2; $$ = $1; }
            ;
            

while       : TOK_WHILE '(' expr ')' statement  
                                    { delete $2; delete $4;
                                      $$ = $1->adopt($3, $5);
                                    }
            ;

ifelse      : TOK_IF '(' expr ')' statement TOK_ELSE statement    
                                    { delete $2; delete $4;
                                      delete $6; 
                                      $1->adopt($3, $5);
                                      $$ = $1->adopt($7);
                                    }

            | TOK_IF '(' expr ')' statement %prec TOK_ELSE        
                                    { delete $2; delete $4; 
                                      $$ = $1->adopt($3, $5);
                                    }
            ;

return      : TOK_RETURN expr ';'   { delete $3; 
                                      $$ = $1->adopt($2); 
                                    }
            | TOK_RETURN ';'        { delete $2; $$ = $1; }
            ;

expr        : expr '=' expr         { $$ = $2->adopt($1, $3); }
            | expr TOK_EQ expr      { $$ = $2->adopt($1, $3); }
            | expr TOK_NE expr      { $$ = $2->adopt($1, $3); }
            | expr TOK_LT expr      { $$ = $2->adopt($1, $3); }
            | expr TOK_LE expr      { $$ = $2->adopt($1, $3); }
            | expr TOK_GT expr      { $$ = $2->adopt($1, $3); }
            | expr TOK_GE expr      { $$ = $2->adopt($1, $3); }
            | expr '+' expr         { $$ = $2->adopt($1, $3); }
            | expr '-' expr         { $$ = $2->adopt($1, $3); }
            | expr '*' expr         { $$ = $2->adopt($1, $3); }
            | expr '/' expr         { $$ = $2->adopt($1, $3); }
            | expr '%' expr         { $$ = $2->adopt($1, $3); }
            | '+' expr %prec UNARY  { $$ = $1->adopt($2); }
            | '-' expr %prec UNARY  { $$ = $1->adopt($2); }
            | TOK_NOT expr %prec UNARY 
                                    { $$ = $1->adopt($2); }
            | alloc                 { $$ = $1; }
            | call                  { $$ = $1; }
            | variable              { $$ = $1; }
            | constant              { $$ = $1; }
            | '(' expr ')'          { delete $1; delete $3; $$ = $2; }
            ;

alloc       : TOK_ALLOC TOK_LT TOK_STRING TOK_GT '(' expr ')'
                                    { delete $2; delete $4;
                                      delete $5; delete $7;
                                      $$ = $1->adopt($3, $6);
                                    }

            | TOK_ALLOC TOK_LT TOK_STRUCT TOK_IDENT TOK_GT '(' ')'
                                    { delete $2; delete $5;
                                      delete $6; delete $7;
                                      delete $3;
                                      $$ = $1->adopt($4);
                                    }

            | TOK_ALLOC TOK_LT TOK_ARRAY TOK_LT plaintype TOK_GT TOK_GT
              '(' expr ')'          { delete $2; delete $4;
                                      delete $6; delete $7;
                                      delete $8; delete $10;
                                      $3->adopt($5);
                                      $$ = $1->adopt($3, $9);
                                    }
            ;

call        : callhead ')'          { delete $2; $$ = $1; }
            | TOK_IDENT '(' ')'     { delete $3; 
                                      $$ = $2->adopt_as(TOK_CALL, $1);
                                    }
            ;

callhead    : callhead ',' expr     { delete $2; 
                                      $$ = $1->adopt($3); 
                                    }
            | TOK_IDENT '(' expr    { $2->adopt_as(TOK_CALL, $1);
                                      $$ = $2->adopt($3);
                                    }
            ;

variable    : expr '[' expr ']'     { delete $4;
                                      $2->adopt_as(TOK_INDEX, $1);
                                      $$ = $2->adopt($3);
                                    }
            | expr TOK_ARROW TOK_IDENT 
                                    { $$ = $2->adopt($1, $3); }
            | TOK_IDENT             { $$ = $1; }
            ;

constant    : TOK_INTCON            { $$ = $1; }
            | TOK_CHARCON           { $$ = $1; }
            | TOK_STRINGCON         { $$ = $1; }
            | TOK_NULLPTR           { $$ = $1; }
            ;

%%


const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


