%{
// Arrian Chi acchi
// $Id: parser.y,v 1.3 2021-12-08 12:23:51-08 - - $
// | forlp                      { $$ = $1->set_bits(attr::FOR); }
// For has weird behavior with scoping. Maybe if you can figure out how to make for into a while...(maybe a precompile?)
// Generate an equivalent while loop.
#pragma GCC diagnostic ignored "-Wold-style-cast"

#include "util.h"
#include "astree.h"
#include "attr.h"


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
%token TOK_INT2FLOAT TOK_FLOAT2INT TOK_INT2STRING TOK_FLOAT2STRING TOK_MOMMY

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

stat            : decl                       { $$ = $1->set_bits(attr::TYPE_ID); } 
                | assign                     { $$ = $1->set_bits(attr::ASSIGN); } 
                | block                      { $$ = $1; }
                | callstmt                   { $$ = $1->set_bits(attr::VADDR); }
                | ifelse                     { $$ = $1->set_bits(attr::IFELSE); }
                | whilelp                    { $$ = $1->set_bits(attr::WHILE); }
                
                | untillp                    { $$ = $1->set_bits(attr::UNTIL); }
                | return                     { $$ = $1->set_bits(attr::RETURN); }
                ;


func            : typeid parameters block    {  $1->set_bits(attr::FUNCTION);
                                                $1->children[1]->set_bits($1);
                                                $$ = ASTNode::mkopt(TOK_FUNCTION, {$1, $2, $3})->set_bits($1)->set_bits(attr::FUNCTION); }
                ;

parameters      : paramhead ')'              { delete $2; $$ = $1; }
                | '(' ')'                    { delete $2; $$ = $1->set_symbol(TOK_PARAM)->set_bits(attr::PARAM); }
                ;

paramhead       : paramhead ',' typeid       { delete $2; $$ = $1->adopt($3); }
                | '(' typeid                 { $$ = $1->adopt_as(TOK_PARAM, $2)->set_bits(attr::PARAM); }
                ;


block           : blockhead '}'              { delete $2; $$ = $1->set_bits(attr::BLOCK); }
                | ';'                        { $$ = $1->set_symbol(TOK_BLOCK)->set_bits(attr::BLOCK); }
                ;

blockhead       : blockhead stat             { $$ = $1->adopt($2); }
                | '{'                        { $$ = $1->set_symbol(TOK_BLOCK); }
                ;


typeid          : type TOK_IDENT             { $2->set_bits($1);
                                               $$ = ASTNode::mkopt(TOK_TYPE_ID, {$1, $2})->set_bits($1);  }
                ;

type            : TOK_INT                    { $$ = $1->set_bits(attr::INT); }  
                | TOK_FLOAT                  { $$ = $1->set_bits(attr::FLOAT); }  
                | TOK_STRING                 { $$ = $1->set_bits(attr::STRING); }  
                ;     

decl            : declhead ';'            { delete $2; 
                                            $1->children[1]->set_bits(attr::VARIABLE);
                                            $$ = $1; }
                ;

declhead        : typeid '=' expr         { delete $2; $$ = $1->adopt($3)->set_bits(attr::ASSIGN); }
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

condition   : '(' expr ')'   { ASTNode::erase({$1, $3}); $$ = $2; }
            ;

ifelse      : TOK_IF condition stat TOK_ELSE stat    
                                    { delete $4;
                                      $$ = $1->adopt({$2, $3, $5});
                                    }

            | TOK_IF condition stat %prec TOK_ELSE        
                                    { $$ = $1->adopt({$2, $3});}
            ;

whilelp     : TOK_WHILE condition stat
                                    { $$ = $1->adopt({$2, $3});}
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

expr            : binop                      { $$ = $1->set_bits(attr::BINOP); }
                | unop                       { $$ = $1->set_bits(attr::UNOP); } 
                | call                       { $$ = $1->set_bits(attr::VADDR); }
                | constant                   { $$ = $1->set_bits(attr::CONST); } 
                | variable                   { $$ = $1->set_bits(attr::VARIABLE); } 
                | '(' expr ')'               {delete $1; delete $3; $$ = $2; }
                ;


unop            : '+' expr %prec UNARY       { $$ = $1->adopt($2); }
                | '-' expr %prec UNARY       { $$ = $1->adopt($2); }
                | TOK_NOT expr %prec UNARY   { $$ = $1->adopt($2); }
                ;

binop           : expr '^' expr              { $$ = $2->adopt({$1, $3}); }
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
                ;
                

constant        : TOK_INTCON                 { $$ = $1->set_bits(attr::INT); } 
                | TOK_STRINGCON              { $$ = $1->set_bits(attr::STRING); } 
                | TOK_FLOATCON               { $$ = $1->set_bits(attr::FLOAT); } 
                ;

variable        : TOK_IDENT                  { $$ = $1->set_bits(attr::VARIABLE); } 
                ;
%%

const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}