%{
// Arrian Chi acchi
// $Id: parser.y,v 1.3 2021-12-08 12:23:51-08 - - $

#pragma GCC diagnostic ignored "-Wold-style-cast"

#include "util.h"
#include "astree.h"


%}

%parse-param {YYSTYPE astree_root}

%destructor { if ($$ != astree_root) delete $$; } <>

%debug
%defines
%error-verbose
%token-table
%verbose

%token TOK_VOID TOK_INT TOK_STRING TOK_FLOAT
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULLPTR TOK_ARRAY TOK_ARROW TOK_ALLOC TOK_PTR
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE TOK_NOT
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON TOK_FLOATCON
%token TOK_ROOT TOK_BLOCK TOK_CALL TOK_FUNCTION TOK_PARAM TOK_TYPE_ID

%start prog

%right      TOK_ELSE
%right      '='
%left       TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%left       '+' '-'
%left       '*' '/' '%'
%right      UNARY
%right      '^'
%left       '[' TOK_ARROW '(' TOK_ALLOC


%%

prog            : prog stat      { $$ = $1->adopt({$2}); }
                |                { $$ = astree_root; }
                ;

stat            : decl                    {$$ = $1;} 
                | assign                  {$$ = $1;} 
                ;

decl            : typeid '=' expr ';'     { delete $4; delete $3; $$ = $1->adopt($3); }
                | typeid ';'              { delete $2; $$ = $1; }
                ;


typeid          : type TOK_IDENT { $$ = ASTNode::mkopt(TOK_TYPE_ID, {$1, $2});  }
                ;

type            : TOK_INT                  {$$ = $1;}  
                | TOK_FLOAT                {$$ = $1;}  
                | TOK_STRING               {$$ = $1;}  
                ;     

assign          : variable '=' expr ';' {delete $4; $$ = $2->adopt({$1, $3}); }
                ;

expr            : '(' expr ')'               {delete $1; delete $3; $$ = $2;}
                | expr '^' expr              { $$ = $2->adopt({$1, $3}); }
                | '+' expr %prec UNARY       { $$ = $1->adopt($2); }
                | '-' expr %prec UNARY       { $$ = $1->adopt($2); }
                | TOK_NOT expr %prec UNARY   { $$ = $1->adopt($2); }
                | expr '*' expr              { $$ = $2->adopt({$1, $3}); }
                | expr '/' expr              { $$ = $2->adopt({$1, $3}); }
                | expr '%' expr              { $$ = $2->adopt({$1, $3}); }
                | expr '+' expr              { $$ = $2->adopt({$1, $3}); }
                | expr '-' expr              { $$ = $2->adopt({$1, $3}); }
                | expr TOK_EQ expr           { $$ = $2->adopt({$1, $3}); }
                | expr TOK_NE expr           { $$ = $2->adopt({$1, $3}); }
                | expr TOK_LT expr           { $$ = $2->adopt({$1, $3}); }
                | expr TOK_LE expr           { $$ = $2->adopt({$1, $3}); }
                | expr TOK_GT expr           { $$ = $2->adopt({$1, $3}); }
                | expr TOK_GE expr           { $$ = $2->adopt({$1, $3}); }
                | constant                   {$$ = $1;} 
                | variable                   {$$ = $1;} 
                ;
                

constant        : TOK_INTCON                 {$$ = $1;} 
                | TOK_STRINGCON              {$$ = $1;} 
                | TOK_FLOATCON               {$$ = $1;} 
                ;

variable        : TOK_IDENT                  {$$ = $1;} 
                ;
%%

const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}