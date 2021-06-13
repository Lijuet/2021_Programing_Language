%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "tinydata.h"
    #define YYDEBUG 1

    int yylex(void);
    void yyerror(const char *);

    int mainTableCnt = 0, procTableCnt = 0;

    
%}
%union {
    struct Node *ast;
    int intV;
    int charV;
    char *stringV;
    int opr;
    struct SymbolTable *symbol;
}

/* Enables verbose error messages */
%define parse.error verbose
      
%token  BOOLEAN_TYPE CHAR_TYPE INTEGER_TYPE STRING_TYPE
%token  <stringV> ID MAIN
%token  VAR STRING
%token  <intV> INTEGER BOOLEAN CHAR
%token  LEFT_PAR RIGHT_PAR LEFT_BRA RIGHT_BRA LEFT_SQA RIGHT_SQA
%token  SEMICOLON COLON COMMA 
%token  IF ELSE WHILE
%token  PROCEDURE RETURN
%token  <stringV> ASSIGN OR AND NEGATE 
%token  <stringV> EQUAL NOT_EQUAL BIG BIG_EQUAL SMALL SMALL_EQUAL 
%token  <stringV> PLUS MINUS ASTERISK SLASH ABSOLUTE

%type <ast> statements statement assign_stm var_decl_stm expression lhs factor integer char ids type body body_of_nested_stmt var_decl_stms code_block if_stm while_stm body_of_procedure return_stm procedures procedure_header procedure_decl_stm procedure_id return_type parameter_list argument_list procedure_call_stm
%type <stringV> binary_operator uniary_operator

%nonassoc ONLYIF
%nonassoc ELSE
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left BIG BIG_EQUAL SMALL SMALL_EQUAL
%left PLUS MINUS
%left ASTERISK SLASH
%nonassoc UNIARY
%left LEFT_PAR RIGHT_PAR

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


program
    :   main_procedure_decl_stm
    |   main_procedure_decl_stm procedures
    |   procedures main_procedure_decl_stm
    |   procedures main_procedure_decl_stm procedures
    ;


procedures
    :   procedure_decl_stm
    |   procedures procedure_decl_stm
    ;

main_procedure_decl_stm
    :   PROCEDURE MAIN LEFT_PAR RIGHT_PAR RETURN return_type body_of_procedure {
            root = $7;
            traverse(root);
            if(root->valueType == 'C') printf("%c\n", root->intV);
            else if(root->valueType == 'N') printf("%d\n", root->intV);
            else if(root->valueType == 'B') printf("%s\n", root->intV ? "true":"false"); }

procedure_decl_stm
    :   procedure_header body_of_procedure 
    ;

body_of_procedure
    :   LEFT_BRA body return_stm RIGHT_BRA  { 
            $$ = makeNode('b', $2, $3); }
    ;
    /* |   LEFT_BRA return_stm RIGHT_BRA */

return_stm
    :   RETURN expression SEMICOLON {
            $$ = makeNode('r', $2, NULL); }
    ;

procedure_header
    :   PROCEDURE procedure_id LEFT_PAR parameter_list RIGHT_PAR RETURN return_type
    |   PROCEDURE procedure_id LEFT_PAR RIGHT_PAR RETURN return_type 
    ;

procedure_id
    :   ID
    ;

parameter_list
    :   ids COLON return_type
    |   parameter_list SEMICOLON ids COLON return_type
    ;

statements
    :   statements statement {
            $$ = makeNode('L', $1, $2); }
    |   statement {
            $$ = $1; }
    ;

statement
    :   assign_stm          { $$ = $1; }          
    |   code_block          { $$ = $1; } 
    |   if_stm              { $$ = $1; }
    |   while_stm           { $$ = $1; }
    |   procedure_call_stm  {}
    ;

if_stm
    :   IF LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA %prec ONLYIF{
            $$ = makeNode('I', $3, $6); }
    |   IF LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA ELSE LEFT_BRA body_of_nested_stmt RIGHT_BRA {
            $$ = makeNode('I', $3, $6);
            $$->middle = $10; }
    ;

while_stm
    :   WHILE LEFT_PAR expression RIGHT_PAR LEFT_BRA body_of_nested_stmt RIGHT_BRA  {
            $$ = makeNode('W', $3, $6); }
    ;

assign_stm
    :   lhs ASSIGN  expression SEMICOLON { 
            $$ = makeNode('A', $1, $3); }
    ;

lhs
    :   ID {
            $$ = makeVariableNode($1); }
    ;

expression
    :   factor {
            $$ = $1; }
    |   expression binary_operator expression {
            $$ = makeNode('O', $1, $3);
            $$->oper = strdup($2); }
    |   uniary_operator expression %prec UNIARY {
            $$ = makeNode('O', NULL, $2);
            $$->oper = strdup($1); }
    |   LEFT_PAR expression RIGHT_PAR {
            $$ = $2; }
    ;

factor
    :   ID { 
            $$ = makeVariableNode($1); }
    |   integer {
            $$ = $1; }
    |   BOOLEAN {
            $$ = makeNode('B', NULL, NULL);
            $$->intV = $1; }
    |   char {
            $$ = $1; }
    ;
    /*
    |   string
    ; */

integer
    :   INTEGER {
            $$ = makeNode('N', NULL, NULL);
            $$->intV = $1; }
    ;
    /* |   ABSOLUTE ID ABSOLUTE 
    ; */

char:   CHAR {
            $$ = makeNode('C', NULL, NULL);
            $$->intV = $1;}
    ;
    /* |   ID LEFT_SQA expression RIGHT_SQA
    ; */

string: STRING
    |   ID LEFT_SQA expression RIGHT_SQA
    ;

binary_operator
    :   PLUS        { $$ = "+"; }
    |   MINUS       { $$ = "-"; }
    |   ASTERISK    { $$ = "*"; }
    |   SLASH       { $$ = "/"; }
    |   EQUAL       { $$ = "=="; }
    |   NOT_EQUAL   { $$ = "!="; }
    |   BIG         { $$ = ">"; }
    |   BIG_EQUAL   { $$ = ">="; }
    |   SMALL       { $$ = "<"; }
    |   SMALL_EQUAL { $$ = "<="; }
    |   AND         { $$ = "&&"; }
    |   OR          { $$ = "||"; }
    ;

uniary_operator
    :   PLUS        { $$ = "+"; }
    |   MINUS       { $$ = "-"; }
    |   NEGATE      { $$ = "!"; }
    ;

code_block
    :   LEFT_BRA body_of_nested_stmt RIGHT_BRA  { $$ = $2; }
    ;

body
    :   var_decl_stms { 
            $$ = $1; }
    |   var_decl_stms statements { 
            $$ = makeNode('L', $1, $2); }
    |   statements { 
            $$ = $1; }
    ;

body_of_nested_stmt
    :   /*empty*/ 
    |   var_decl_stms { 
            $$ = $1; }
    |   var_decl_stms statements { 
            $$ = makeNode('L', $1, $2); }
    |   statements { 
            $$ = $1; }
    ;

return_type
    :   INTEGER_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'N'; }
    |   CHAR_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'C'; }
    |   BOOLEAN_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'B'; }
    ;

type
    :   INTEGER_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'N'; }
    |   CHAR_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'C'; }
    |   BOOLEAN_TYPE {
            $$ = makeNode('T', NULL, NULL);
            $$->valueType = 'B'; }
    ;
    /* |   STRING_TYPE LEFT_SQA expression RIGHT_SQA
    ; */

var_decl_stms
    :   var_decl_stms var_decl_stm {
            $$ = makeNode('L', $1, $2); }
    |   var_decl_stm {
            $$ = $1; }
    ;

var_decl_stm
    :   VAR ids COLON type SEMICOLON {
            $$ = makeNode('D', $2, $4);
            
            for(int i = 0; i < mainTableCnt; i++)
                if(mainTable[i].type == NULL) mainTable[i].type = $4->valueType;
 }

argument_list
    :   argument_list COMMA expression {}
    |   expression {}
    |   /*empty*/ {}
    ;

procedure_call_stm
    :   lhs ASSIGN procedure_id LEFT_PAR argument_list RIGHT_PAR SEMICOLON

ids
    :   ids COMMA ID {
            $$ = makeNode('L', $1, makeVariableNode($3));
            makeVariableSymbol($3); }
    |   ID {
            $$ = makeNode('L', NULL, makeVariableNode($1));
            makeVariableSymbol($1); }
    ;

%%

struct Node* makeNode(int type, struct Node *left, struct Node *right){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->type = type;
    newNode->intV = 0;
    newNode->name = NULL;
    newNode->left = left;
    newNode->middle = right;
    newNode->right = right;
    
    return newNode;
}

int lookUpMainTable(char* name){
    for(int i = 0; i < mainTableCnt; i++){
        if(strcmp(mainTable[i].id, name) == 0){
            return i;
        }
    }
    return -1;
}

int makeVariableSymbol(char* name){
    for(int i = 0; i < mainTableCnt; i++){
        if(strcmp(mainTable[i].id, name) == 0){
            return -1;
        }
    }
    mainTable[mainTableCnt].id = strdup(name);
    mainTable[mainTableCnt++].type = NULL;
    return mainTableCnt-1;
}

int makeProcedureSymbol(struct Node* root){
    char *name = root->left->left->name; //root->header->procedure_id->ID
    for(int i = 0; i < mainTableCnt; i++){
        if(strcmp(mainTable[i].id, name) == 0 && mainTable[i].type=='P'){
            return -1;
        }
    }
    mainTable[mainTableCnt].id = strdup(name);
    mainTable[mainTableCnt].type = 'P';
    mainTable[mainTableCnt].type = root->left->left->middle->valueType; //root->header->return_type->INT/CHAR/BOOL_TYPE
    InitParameters(root->left->right, mainTable[mainTableCnt].paramTable); //root->header->parameter_list
    mainTable[mainTableCnt++].procedureRootNode = root;
    
    return mainTableCnt-1;
}

void InitParameters(struct Node* parameter_list, struct SymbolTable *paramTable){
    if(parameter_list == NULL) return;
    paramTable = (struct SymbolTable*)malloc(sizeof(struct SymbolTable));

    struct Node *curParaSet, *curPara;
    int cnt = 0, curParaSetType;
    do{
        curParaSet = parameter_list->right; // parameter_list->'p'Node with ids and return_type(id type)
        curParaSetType = curParaSet->right->valueType; // 'p'Node->return_type->INT/CHAR/BOOL_TYPE
        do{
            curPara = curParaSet->right; // ids->ID
            paramTable[cnt].id = strdup(curPara->name);
            paramTable[cnt].type = curParaSetType;
            cnt++;
            curPara = curParaSet->left;
        }while(!curPara);
        curParaSet = parameter_list->left;
    } while(!curParaSet); //TODO: 터미널 작동 및 NULL 해결
    paramTable->paramCnt = cnt - 1;
}

struct Node* makeVariableNode(char* name){
    struct Node* newNode = makeNode('V', NULL, NULL);
    newNode->name = strdup(name);
    return newNode;
}

struct Node* makeProcedureNode(char* name){
    struct Node* newNode = makeNode('v', NULL, NULL);
    newNode->name = strdup(name);
    return newNode;
}

void traverse(Node *node){
    if (!node) return;
    
    switch(node->type){
        case 'V': { //Variable            
            int idx = lookUpMainTable(node->name);
            if(idx != -1){
                node->symbol = &mainTable[idx];
                node->intV = mainTable[idx].intV;
                node->valueType = mainTable[idx].type;
            } 
            break;
        }
        case 'N':   //Integer
            node->valueType='N';
            break;
        case 'B':   //Boolean
            node->valueType='B';
            break;
        case 'C':
            node->valueType='C';
            break;
        case 'T':   //Tyoe
            node->valueType='T';
            break;
        case 'A': { //Assignment
            traverse(node->left);
            traverse(node->right);
            //Assign
            int idx = lookUpMainTable(node->left->name);
            if(idx != -1){
                if(mainTable[idx].type != node->right->valueType){
                    printError(ASSIGN_TYPE_NOT_MATCH);
                }
                else {
                    mainTable[idx].intV = node->right->intV;
                    
                }
            } else {
                printError(ASSIGN_TO_UNDEFINED);
            }
            break;
        }
        case 'D': { //Declaration
            traverse(node->left);
            traverse(node->right);
            int _type = node->right->valueType;
            for(int i = 0; i < mainTableCnt; i++)
                if(mainTable[i].type == NULL) mainTable[i].type = _type;
            break;
        }
        case 'L':   //List(Connect)
            traverse(node->left);
            traverse(node->right);
            node->intV = node->right->intV;            
            node->valueType = node->right->valueType;
            break;
        case 'O':{  //Opperator
            traverse(node->left);
            traverse(node->right);
    
            int result;
            int rhsV = node->right->intV;

            if(node->left != NULL){
                int lhsV = node->left->intV;

                if(!strcmp(node->oper, "+")){
                    result = lhsV + rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "-")){
                    result = lhsV - rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "*")){
                    result = lhsV * rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "/")){
                    result = lhsV / rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "==")){
                    result = (lhsV == rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, "!=")){
                    result = (lhsV != rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, ">")){
                    result = (lhsV > rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, ">=")){
                    result = (lhsV >= rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, "<")){
                    result = (lhsV < rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, "<=")){
                    result = (lhsV <= rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, "&&")){
                    result = (lhsV && rhsV);
                    node->valueType = 'B';
                } else if(!strcmp(node->oper, "||")){
                    result = (lhsV || rhsV);
                    node->valueType = 'B';
                }
            } else {
                if(!strcmp(node->oper, "+")){
                    result = rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "-")){
                    result = (rhsV < 0) ? rhsV : -rhsV;
                    node->valueType = 'N';
                } else if(!strcmp(node->oper, "!")){
                    result = !rhsV;
                    node->valueType = 'B';
                }
            }
            node->intV = result;
            break;
        }
        case 'I': 
            traverse(node->left);
            if(node->left->intV > 0) traverse(node->right);
            else if(node->middle != NULL) traverse(node->middle);
            break;
        case 'W':{   //While
            traverse(node->left);
            while(node->left->intV > 0){
                traverse(node->right);
                traverse(node->left);
            }
            break;
        }
        case 'P': // Procedure Define
            traverse(node->left);   // header
            traverse(node->right);  // body
            break;
        case 'b': //Procedure Body with return stmt
            traverse(node->left);
            traverse(node->right);
            node->intV = node->right->intV;            
            node->valueType = node->right->valueType;
            break;
        case 'r': //return stmt
            traverse(node->left);
            node->intV = node->left->intV;
            node->valueType = node->left->valueType;
            break;
        case 'v': // procedure id
            break;
        case 'h':
            traverse(node->left);   // procedure id
            traverse(node->middle); // return type
            traverse(node->right);  // parameter list
        case 'c':
            traverse(node->middle); // procedure id
            traverse(node->right);  // argument

            // find procedure root node
            // binding arguments with parameters
            // to store value to lhs in 'A' node, need to set intV/charV and valueType
        default:
            break;
    }
}

void printError(enum ERROR ERROR_CODE){
    switch(ERROR_CODE){
        case NO_MAIN:
            printf("ERROR : There is no Main Procedure\n");
            break;
        case ASSIGN_TYPE_NOT_MATCH:
            printf("ERROR : When assign, types don't match each other\n");
            break;
        case ASSIGN_TO_UNDEFINED:
            printf("ERROR : Declare to undefined variable\n");
            break;
    }
    
    exit(1);
}

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
