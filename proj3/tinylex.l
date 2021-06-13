%option yylineno
%pointer

%{
    #include <stdlib.h>
    #include <string.h>
    #include "tinyparser.hpp"

    void yyerror(const char *);
%}

/** WRITE ME:
 *  Put any definitions you need here. Add your own regular expressions
 *  below for ALL tokens defined in the manual. You can choose not to use
 *  definitions here.
 */


boolean true|false
char \'[^'][']
integer 0|([1-9]+[0-9]*)|(0[Xx][0-9A-F]+)|(0[0-7]+)|([01]+b)
string \"[^"\n]*["]
comment_content \/%([^%]*|%+[^/])*%\/
id [A-Za-z][A-Za-z0-9_]*

/* TODO : comment invalid ex */

/** The example below is very simple, but it shows almost everything you will
 *  need to do for this first part. The syntax is as follows:
 *
 *  regular_expression      {  c code  }
 *
 * The lexer will try to match each regular expression. When it does it will
 * execute the corresponding C code.
*/

%%
Main                { yylval.stringV = strdup(yytext); strcpy(yylval.stringV, yytext); return(MAIN); }
if                  { return(IF); }
else                { return(ELSE); }
while               { return(WHILE); }
var                 { return(VAR); }
procedure           { return(PROCEDURE); }
return              { return(RETURN); }
boolean             { return(BOOLEAN_TYPE); }
char                { return(CHAR_TYPE); }
integer             { return(INTEGER_TYPE); }
string              { return(STRING_TYPE); }
{boolean}           { yylval.intV = strcmp(yytext, "true") == 0 ? 1 : 0; return(BOOLEAN); }
{char}              { yylval.charV = yytext[1]; return CHAR;}
{integer}           { yylval.intV = atoi(yytext); return(INTEGER); }
{string}            { return(STRING); }
{comment_content}   ;
{id}                { yylval.stringV = strdup(yytext); strcpy(yylval.stringV, yytext); return ID;}
\&\&                { return(AND); }
\/                  { return(SLASH); }
\=                  { return(ASSIGN); }
\=\=                { return(EQUAL); }
\>                  { return(BIG); }
\>\=                { return(BIG_EQUAL); }
\<                  { return(SMALL); }
\<\=                { return(SMALL_EQUAL); }
\-                  { return(MINUS); }
\!                  { return(NEGATE); }
\!\=                { return(NOT_EQUAL); }
\|\|                { return(OR); }
\+                  { return(PLUS); }
\*                  { return(ASTERISK); }
\(                  { return(LEFT_PAR); }
\)                  { return(RIGHT_PAR); }
\{                  { return(LEFT_BRA); }
\}                  { return(RIGHT_BRA); }
\[                  { return(LEFT_SQA); }
\]                  { return(RIGHT_SQA); }
";"                 { return(SEMICOLON); }
\:                  { return(COLON); }
\,                  { return(COMMA); }
\|                  { return(ABSOLUTE); }
[\*\(\)\.\+\-\%]    { return(*yytext); }
[0-9][0-9]*         { printf("number"); }
[ \t\n]             ; /* skip whitespace */
.                   { return yytext[0]; }


%%
/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 *  \t\n]             ; 
 *  .                   yyerror((char *) "invalid character");
 */

int yywrap(void) {
    return 1;
}
