grammar Meow;

prog            :   prog func
                |
                ;

func            : '{' stat* '}'
                ;

stat            :   decl
                ;
                // |   assign
                // |   print
                // |   return 
                // |   

type            : TOK_INT
                ;           

tid             : type TOK_IDENT;

decl            : tid ';'
                | tid  '=' expr ';'
                ;

expr            : constant;



// program     : program statement
//             |
//             ;

// statement   : typeid ';'
//             ;

// typeid      : TOK_VOID
//             | TOK_INT
//             | TOK_STRING
//             ;


// program     : program structdef    
//             | program function     
//             | program vardecl
//             |
//             ;

// typeid      : type TOK_IDENT        
//             | TOK_VOID TOK_IDENT    
//             ;

// structdef   : structhead '}' ';'   
//             ;

// structhead  : structhead typeid ';' 
//             | TOK_STRUCT TOK_IDENT '{'           
//             ;

// vardecl     : typeid '=' expr ';'   
//             | typeid ';'          
//             ;

// type        : plaintype           
//             | TOK_ARRAY TOK_LT plaintype TOK_GT      
//             ;

// plaintype   : TOK_INT               
//             | TOK_STRING          
//             | TOK_PTR TOK_LT TOK_STRUCT TOK_IDENT TOK_GT              
//             ;

// function    : typeid parameters block           
//             ;

// parameters  : paramhead ')'        
//             | '(' ')'               
//             ;

// paramhead   : paramhead ',' typeid  
//             | '(' typeid           
//             ;

// block       : blockhead '}'        
//             | ';'                   
//             ;

// blockhead   : blockhead statement   
//             | '{'                   
//             ;

// statement   : vardecl               
//             | block                 
//             | while                 
//             | ifelse                
//             | return                
//             | expr ';'              
//             ;
            

// while       : TOK_WHILE '(' expr ')' statement  
//             ;

// ifelse      : TOK_IF '(' expr ')' statement TOK_ELSE statement    
                          

//             | TOK_IF '(' expr ')' statement %prec TOK_ELSE        
                                  
//             ;

// return      : TOK_RETURN expr ';'   
//             | TOK_RETURN ';'        
//             ;

// expr        : expr '=' expr         
//             | expr TOK_EQ expr      
//             | expr TOK_NE expr      
//             | expr TOK_LT expr      
//             | expr TOK_LE expr      
//             | expr TOK_GT expr      
//             | expr TOK_GE expr      
//             | expr '+' expr         
//             | expr '-' expr         
//             | expr '*' expr         
//             | expr '/' expr         
//             | expr '%' expr         
//             | '+' expr %prec UNARY  
//             | '-' expr %prec UNARY  
//             | TOK_NOT expr %prec UNARY 
                                    
//             | alloc                 
//             | call                  
//             | variable              
//             | constant              
//             | '(' expr ')'          
//             ;

// alloc       : TOK_ALLOC TOK_LT TOK_STRING TOK_GT '(' expr ')'
                             

//             | TOK_ALLOC TOK_LT TOK_STRUCT TOK_IDENT TOK_GT '(' ')'
                             

//             | TOK_ALLOC TOK_LT TOK_ARRAY TOK_LT plaintype TOK_GT TOK_GT
//               '(' expr ')'        
//             ;

// call        : callhead ')'          
//             | TOK_IDENT '(' ')'     
//             ;

// callhead    : callhead ',' expr    
//             | TOK_IDENT '(' expr    
//             ;

// variable    : expr '[' expr ']'
//             | expr TOK_ARROW TOK_IDENT
//             | TOK_IDENT             
//             ;

constant    : TOK_INTCON            
            //| TOK_CHARCON           
            //| TOK_STRINGCON         
            | TOK_NULLPTR           
            ;


TOK_VOID      :     'void';
TOK_INT       :     'int';
TOK_STRING    :     'string';
TOK_NOT       :     'not';
TOK_IF        :     'if';
TOK_ELSE      :     'else';
TOK_WHILE     :     'while';
TOK_RETURN    :     'return';
TOK_STRUCT    :     'struct';
TOK_NULLPTR   :     'nullptr';
TOK_ARRAY     :     'array';
TOK_ARROW     :     '->';
TOK_ALLOC     :     'alloc';
TOK_PTR       :     'ptr';
TOK_FUNCTION  :     'function';
TOK_LT        :     '<';
TOK_GT        :     '>';
TOK_EQ        :     '==';
TOK_NE        :     '!=';
TOK_LE        :     '<=';
TOK_GE        :     '>=';

LETTER        :     [A-Za-z_]; 
DECIMAL       :     [0-9]; 
TOK_IDENT     :     LETTER ( LETTER | DECIMAL ); 
//NOT_IDENT     :     ({DECIMAL}({LETTER}|{DECIMAL})*); 

OCTCON        :     [0-7] ; 
HEXCON        :     [0-9A-Fa-f] ; 
TOK_INTCON    :     DECIMAL+ | '0'OCTCON+ | '0'[Xx]HEXCON+; 

// BAD_ESCAPE    :     (\\[^\\'"0nt]); 
//CHARCON       :     [^\\\'\n] | [\\\'"0nt]; 
// BAD_CHARCON   :     ({CHARCON}|{BAD_ESCAPE}); 
//TOK_CHARCON   :     ''' CHARCON '''; 

// MANY_CHARCON  :     ({BAD_CHARCON}{BAD_CHARCON}+); 
// NOT_CHARCON   :     ('{BAD_CHARCON}*|'{BAD_ESCAPE}'|'{MANY_CHARCON}*'); 

//STRINGCON     :     [^\\\"\n] | [\\\'"0nt]; 
// BAD_STRINGCON :     ({STRINGCON}|{BAD_ESCAPE}); 
//TOK_STRINGCON :     '"' STRINGCON* '"'; 

// MID_BADSTRCON :     ({BAD_STRINGCON}*{BAD_ESCAPE}{BAD_STRINGCON}*); 
// NOT_STRINGCON :     (\"{BAD_STRINGCON}*|\"{MID_BADSTRCON}\"*);

WS            :     [ \t\r\n]+ -> skip;