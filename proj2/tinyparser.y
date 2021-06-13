%{
    #include <stdio.h>
    #include <stdlib.h>
    #define YYDEBUG 1

    int yylex(void);
    void yyerror(const char *);
%}
/* Enables verbose error messages */
%define parse.error verbose

%token  MAIN      
%token  BOOLEAN_TYPE CHAR_TYPE INTEGER_TYPE STRING_TYPE
%token  ID VAR BOOLEAN CHAR STRING INTEGER
%token  LEFT_PAR RIGHT_PAR LEFT_BRA RIGHT_BRA LEFT_SQA RIGHT_SQA
%token  SEMICOLON COLON COMMA 
%token  IF ELSE WHILE
%token  PROCEDURE RETURN
%token  ASSIGN OR AND NEGATE 
%token  EQUAL NOT_EQUAL BIG BIG_EQUAL SMALL SMALL_EQUAL 
%token  PLUS MINUS ASTERISK SLASH ABSOLUTE

%left OR
%left AND
%left EQUAL NOT_EQUAL
%left BIG BIG_EQUAL SMALL SMALL_EQUAL
%left PLUS MINUS
%left ASTERISK SLASH
%nonassoc UNIARY

/** WRITE ME:
 *  - Put all your token definitions here
 *  - Put all your type definitions here
 *  - Put all your precedence/associativity rules here.
 */

%%

/** WRITE ME:
 *  This is the language from Project 1. You need to put the productions for
 *  the grammar for the language for this project here.
 */


program: procedure_decl_stm { printf("Valid input file.\n"); }
    | procedure_decl_stm procedures { printf("Valid input file.\n"); }
    ;

statements: statement
    | statement statements
    ;

statement: assign_stm       
    |   procedure_call_stm  
    |   if_stm              
    |   if_else_stm         
    |   while_stm           
    |   code_block   
    ;

assign_stm: lhs ASSIGN expression SEMICOLON
    ;

if_stm: IF LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA 
    ;

if_else_stm: IF LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA ELSE LEFT_BRA body_of_nested_stmt RIGHT_BRA 
    ;

while_stm: WHILE LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA
    ;

lhs: ID
    | ID LEFT_SQA expression RIGHT_SQA
    ;

expression: expression binary_operator expression
    |   uniary_operator expression %prec UNIARY
    |   LEFT_PAR expression RIGHT_PAR
    |   factor
    ;

factor: ID
    |   integer
    |   BOOLEAN
    |   char
    |   string
    ;

char:   CHAR
    |   ID LEFT_SQA expression RIGHT_SQA
    ;

integer: INTEGER
    |   ABSOLUTE ID ABSOLUTE
    ;

binary_operator: PLUS | MINUS
    |   ASTERISK | SLASH
    |   EQUAL | NOT_EQUAL
    |   BIG | BIG_EQUAL | SMALL | SMALL_EQUAL
    |   AND | OR
    ;

uniary_operator: PLUS | MINUS
    |   NEGATE
    ;

code_block: LEFT_BRA body_of_nested_stmt RIGHT_BRA
    ;

body: var_decl_stms
    |   var_decl_stms statements
    |   statements
    ;

body_of_nested_stmt: var_decl_stm
    |   var_decl_stm statements
    |   statements
    |
    ;

return_type: INTEGER_TYPE
    |   CHAR_TYPE
    |   BOOLEAN_TYPE
    ;

type: INTEGER_TYPE
    |   CHAR_TYPE
    |   BOOLEAN_TYPE
    |   STRING_TYPE LEFT_SQA expression RIGHT_SQA
    ;

string: STRING
    |   ID LEFT_SQA expression RIGHT_SQA
    ;

var_decl_stms: var_decl_stms var_decl_stm
    |   var_decl_stm
    ;

var_decl_stm: VAR ids COLON type SEMICOLON

procedures: procedure_decl_stm
    | procedure_decl_stm procedures 
    ;

procedure_decl_stm: procedure_header body_of_procedure
    ;

body_of_procedure: LEFT_BRA return_stm RIGHT_BRA
    |   LEFT_BRA body return_stm RIGHT_BRA
    ;

return_stm: RETURN expression SEMICOLON
    ;

procedure_header: PROCEDURE procedure_id LEFT_PAR parameter_list RIGHT_PAR RETURN return_type 
    |   PROCEDURE procedure_id LEFT_PAR RIGHT_PAR RETURN return_type
    |   PROCEDURE MAIN LEFT_PAR RIGHT_PAR RETURN return_type
    ;

procedure_id: ID
    ;

parameter_list: ids COLON return_type 
    |   parameter_list SEMICOLON ids COLON return_type 
    ;

argument_list: expression COMMA argument_list
    | expression
    |
    ;

procedure_call_stm: lhs ASSIGN procedure_id LEFT_PAR argument_list RIGHT_PAR SEMICOLON

ids: ids COMMA ID
    | ID
    ;

%%

/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

extern int yylineno;
extern char* yytext;

void yyerror(const char *s)
{
    fprintf(stderr, "Parse error with symbol \'%s\' at line %d\n", yytext, yylineno);
    return;
}
