/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_TINYPARSER_HPP_INCLUDED
# define YY_YY_TINYPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEAN_TYPE = 258,
    CHAR_TYPE = 259,
    INTEGER_TYPE = 260,
    STRING_TYPE = 261,
    ID = 262,
    MAIN = 263,
    VAR = 264,
    STRING = 265,
    INTEGER = 266,
    BOOLEAN = 267,
    CHAR = 268,
    LEFT_PAR = 269,
    RIGHT_PAR = 270,
    LEFT_BRA = 271,
    RIGHT_BRA = 272,
    LEFT_SQA = 273,
    RIGHT_SQA = 274,
    SEMICOLON = 275,
    COLON = 276,
    COMMA = 277,
    IF = 278,
    ELSE = 279,
    WHILE = 280,
    PROCEDURE = 281,
    RETURN = 282,
    ASSIGN = 283,
    OR = 284,
    AND = 285,
    NEGATE = 286,
    EQUAL = 287,
    NOT_EQUAL = 288,
    BIG = 289,
    BIG_EQUAL = 290,
    SMALL = 291,
    SMALL_EQUAL = 292,
    PLUS = 293,
    MINUS = 294,
    ASTERISK = 295,
    SLASH = 296,
    ABSOLUTE = 297,
    ONLYIF = 298,
    UNIARY = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "tinyparser.y" /* yacc.c:1909  */

    struct Node *ast;
    int intV;
    int charV;
    char *stringV;
    int opr;
    struct SymbolTable *symbol;

#line 108 "tinyparser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TINYPARSER_HPP_INCLUDED  */
