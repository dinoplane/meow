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
%token TOK_IF TOK_ELSE TOK_WHILE TOK_FOR TOK_UNTIL TOK_RETURN TOK_STRUCT
%token TOK_NULLPTR TOK_ARRAY TOK_ARROW TOK_ALLOC TOK_PTR
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE TOK_NOT
%token TOK_ADDEQ TOK_SUBEQ TOK_INC TOK_DEC
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

prog            : prog stat                  { $$ = $1->adopt({$2}); }
                | prog func                  { $$ = $1->adopt({$2}); }
                | prog error                 { $$ = $1; }
                |                            { $$ = astree_root; }
                ;

stat            : decl                       { $$ = $1; } 
                | assign                     { $$ = $1; } 
                | block                      { $$ = $1; }
                | callstmt                   { $$ = $1; }
                | ifelse                     { $$ = $1; }
                | whilelp                    { $$ = $1; }
                | forlp                      { $$ = $1; }
                | untillp                    { $$ = $1; }
                | return                     { $$ = $1; }
                ;


func            : typeid parameters block    { $$ = ASTNode::mkopt(TOK_FUNCTION, {$1, $2, $3}); }
                ;

parameters      : paramhead ')'              { delete $2; $$ = $1; }
                | '(' ')'                    { delete $2; $$ = $1->set_symbol(TOK_PARAM); }
                ;

paramhead       : paramhead ',' typeid       { delete $2; $$ = $1->adopt($3); }
                | '(' typeid                 { $$ = $1->adopt_as(TOK_PARAM, $2); }
                ;


block           : blockhead '}'              { delete $2; $$ = $1; }
                | ';'                        { $$ = $1->set_symbol(TOK_BLOCK); }
                ;

blockhead       : blockhead stat             { $$ = $1->adopt($2); }
                | '{'                        { $$ = $1->set_symbol(TOK_BLOCK); }
                ;


typeid          : type TOK_IDENT             { $$ = ASTNode::mkopt(TOK_TYPE_ID, {$1, $2});  }
                ;

type            : TOK_INT                    { $$ = $1; }  
                | TOK_FLOAT                  { $$ = $1; }  
                | TOK_STRING                 { $$ = $1; }  
                ;     

decl            : declhead ';'            { delete $2; $$ = $1; }
                ;

declhead        : typeid '=' expr         { delete $2; $$ = $1->adopt($3); }
                | typeid                  { $$ = $1; }
                ;

assign          : assignhead ';'             { delete $2; $$ = $1; }
                ;

assignhead      : variable '=' expr          { $$ = $2->adopt({$1, $3}); }
                | crement                    { $$ = $1; }
                ;

crement         : variable TOK_ADDEQ expr       { $$ = $2->adopt({$1, $3}); }
                | variable TOK_SUBEQ expr       { $$ = $2->adopt({$1, $3}); }
                | variable TOK_INC              { $$ = $2->adopt($1); }
                | variable TOK_DEC              { $$ = $2->adopt($1); }
                ;

callstmt        : call ';'                   { delete $2; $$ = $1; }
                ;

call            : callhead ')'               { delete $2; $$ = $1; }
                | TOK_IDENT '(' ')'          { delete $3; $$ = $2->adopt_as(TOK_CALL, $1); }
                ;

callhead        : callhead ',' expr          { delete $2; $$ = $1->adopt($3); }
                | TOK_IDENT '(' expr         { $$ =$2->adopt_as(TOK_CALL, {$1, $3}); }
                ;


ifelse      : TOK_IF '(' expr ')' stat TOK_ELSE stat    
                                    { ASTNode::erase({$2, $4, $6}); 
                                      $$ = $1->adopt({$3, $5, $7});
                                    }

            | TOK_IF '(' expr ')' stat %prec TOK_ELSE        
                                    { delete $2; delete $4; 
                                      $$ = $1->adopt({$3, $5});
                                    }
            ;

whilelp     : TOK_WHILE '(' expr ')' stat
                                    { delete $2; delete $4;
                                      $$ = $1->adopt({$3, $5});
                                    }
            ;

forlp       : TOK_FOR '(' declhead ';' expr ';' assignhead ')' stat     
                                    { ASTNode::erase({$2, $4, $6, $8});
                                      $$ = $1->adopt({$3, $5, $7, $9});
                                    }
            ;

untillp     : TOK_UNTIL '(' expr ')' stat
                                    { delete $2; delete $4;
                                      $$ = $1->adopt({$3, $5});
                                    }
            ;


return      : TOK_RETURN expr ';'   { delete $3; $$ = $1-> adopt($2); }
            ;

expr            : '(' expr ')'               {delete $1; delete $3; $$ = $2; }
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
                | call                       { $$ = $1; }
                | constant                   { $$ = $1; } 
                | variable                   { $$ = $1; } 
                ;
                

constant        : TOK_INTCON                 { $$ = $1; } 
                | TOK_STRINGCON              { $$ = $1; } 
                | TOK_FLOATCON               { $$ = $1; } 
                ;

variable        : TOK_IDENT                  { $$ = $1; } 
                ;
%%

const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}