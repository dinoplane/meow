/** Grammars always start with a grammar header. This grammar is called
* ArrayInit and must match the filename: ArrayInit.g4
*/
grammar Meow;
/** A rule called init that matches comma-separated values between {...}. */

prog        : stat*
            ;

stat        : decl
            | assign
            | block
            | callstmt
            | ifelse
            | whilelp
            | return
            ;

block       : '{' stat* '}'
            ;

typeid      : type TOK_IDENT
            ;

type        : TOK_INT
            | TOK_FLOAT
            | TOK_STRING
            ;     

decl        : declhead ';'
            ;

declhead    : typeid '=' expr
            | typeid
            ;

assign      : assignhead ';'
            ;
assignhead  : variable '=' expr
            | crement
            ;

crement     : variable TOK_ADDEQ expr
            | variable TOK_SUBEQ expr
            | variable TOK_INC
            | variable TOK_DEC
            ;

callstmt    : call ';'
            ;

call        : TOK_IDENT '(' expr? (',' expr)* ')'
            ;

condition   : '(' expr ')'
            ;

// Deal with associativity later
ifelse      : TOK_IF condition stat (TOK_ELSE stat)?
            ;

whilelp     : TOK_WHILE condition stat
            ;

forlp       : TOK_FOR '(' declhead ';' expr ';' assignhead ')' stat
            ;

return      : TOK_RETURN expr? ';'
            ;

// expr        : binop
//             | unop
//             | call
//             | constant
//             | variable
//             | '(' expr ')'
//             ;

expr        : comp (op=(TOK_EQ|TOK_NE) comp)*
            ;

comp        : factor (op=(TOK_LT|TOK_GT|TOK_LE|TOK_GE) factor)*
            ;

factor      : term (op=('+'|'-') term)*   
            ;

term        : expo (op=('*'|'/') expo)*
            ;

expo        : unop ('^' unop)*
            ;

unop        : '+' unit
            | '-' unit
            | TOK_NOT unit
            | unit
            ;

unit        : constant
            | variable
            | '(' expr ')'
            ;

constant    : TOK_INTCON
            | TOK_FLOATCON
            | TOK_STRINGCON
            ;

variable    : TOK_IDENT
            ;

// parser rules start with lowercase letters, lexer rules with uppercase

WS : [ \t\r\n]+ -> skip ; // Define whitespace rule, toss it out

TOK_VOID:   'void';
TOK_INT:    'int';
TOK_FLOAT:  'float';
TOK_STRING: 'string';
TOK_IF:     'if';
TOK_ELSE:   'else';
TOK_WHILE:  'while';
TOK_FOR:    'for';
TOK_RETURN: 'return';
TOK_NOT:    'not';

TOK_ADDEQ: '+=';
TOK_SUBEQ: '-=';
TOK_INC: '++';
TOK_DEC: '--';
TOK_LT: '<';
TOK_GT: '>';
TOK_EQ: '==';
TOK_NE: '!=';
TOK_LE: '<=';
TOK_GE: '>=';
TOK_ARROW: '->';

TOK_INTCON : [1-9][0-9]*|'0'; // Define token INT as one or more digits
TOK_FLOATCON: TOK_INTCON*'.'TOK_INTCON+;
TOK_STRINGCON: '"IAMASTRING"';

TOK_IDENT:  [A-Za-z_]([A-Za-z_]|[0-9])*;
BAD_CHAR: .;