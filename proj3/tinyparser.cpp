/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "tinyparser.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "tinydata.h"
    #define YYDEBUG 1

    int yylex(void);
    void yyerror(const char *);

    int mainTableCnt = 0, procTableCnt = 0;

    

#line 81 "tinyparser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tinyparser.hpp".  */
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
#line 15 "tinyparser.y" /* yacc.c:355  */

    struct Node *ast;
    int intV;
    int charV;
    char *stringV;
    int opr;
    struct SymbolTable *symbol;

#line 175 "tinyparser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TINYPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 192 "tinyparser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    69,    70,    71,    76,    77,    81,    89,
      93,    99,   104,   105,   109,   113,   114,   118,   120,   125,
     126,   127,   128,   129,   133,   135,   141,   146,   151,   156,
     158,   161,   164,   169,   171,   173,   176,   184,   191,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   218,   219,   220,   224,   228,   230,   232,   236,   238,
     240,   242,   247,   250,   253,   259,   262,   265,   273,   275,
     280,   288,   289,   290,   294,   297,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN_TYPE", "CHAR_TYPE",
  "INTEGER_TYPE", "STRING_TYPE", "ID", "MAIN", "VAR", "STRING", "INTEGER",
  "BOOLEAN", "CHAR", "LEFT_PAR", "RIGHT_PAR", "LEFT_BRA", "RIGHT_BRA",
  "LEFT_SQA", "RIGHT_SQA", "SEMICOLON", "COLON", "COMMA", "IF", "ELSE",
  "WHILE", "PROCEDURE", "RETURN", "ASSIGN", "OR", "AND", "NEGATE", "EQUAL",
  "NOT_EQUAL", "BIG", "BIG_EQUAL", "SMALL", "SMALL_EQUAL", "PLUS", "MINUS",
  "ASTERISK", "SLASH", "ABSOLUTE", "ONLYIF", "UNIARY", "$accept",
  "program", "procedures", "main_procedure_decl_stm", "procedure_decl_stm",
  "body_of_procedure", "return_stm", "procedure_header", "procedure_id",
  "parameter_list", "statements", "statement", "if_stm", "while_stm",
  "assign_stm", "lhs", "expression", "factor", "integer", "char",
  "binary_operator", "uniary_operator", "code_block", "body",
  "body_of_nested_stmt", "return_type", "type", "var_decl_stms",
  "var_decl_stm", "argument_list", "procedure_call_stm", "ids", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -76

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-76)))

#define YYTABLE_NINF -15

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    46,    27,     6,    21,   -76,    33,   -76,    22,    42,
     -76,    21,   -76,    51,    21,   156,   -76,    49,     2,    21,
     -76,    61,   156,    81,    94,    32,   -76,   -76,   -76,   -76,
      63,   -76,    93,   156,   -76,   -76,    95,   -76,    96,    20,
      39,    59,    32,   104,   156,    -1,    -1,   -76,    12,    -1,
     107,    32,   -76,    80,    80,    98,    61,    80,   119,    83,
     -76,    32,   -76,   -76,   -76,   -76,    -1,   -76,   -76,   -76,
      37,   -76,   -76,   -76,    -1,    64,   113,   116,    99,   121,
     -76,   -76,   -76,   -76,    33,   -76,    80,    68,   -76,   -76,
     -76,   -76,   -76,   122,    77,   127,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    -1,   -76,
     128,    -1,   -76,   -76,   -76,   -76,    80,   -76,   -76,   156,
     153,   156,   153,    -7,   -76,   129,   130,   125,    -1,   124,
     -76,   -76,   153,   133,   156,   135,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     6,     0,    14,     0,     0,
       1,     4,     7,     0,     3,     0,     9,     0,     0,     5,
      28,     0,    58,     0,     0,    57,    18,    21,    22,    19,
       0,    20,     0,    55,    69,    23,     0,    76,     0,     0,
       0,     0,    61,     0,    59,     0,     0,    17,     0,     0,
       0,    56,    68,     0,     0,     0,     0,     0,     0,     0,
      54,    60,    33,    37,    35,    38,     0,    53,    51,    52,
       0,    29,    34,    36,     0,     0,    33,     0,     0,     0,
      10,    64,    63,    62,     0,    13,     0,     0,    15,    75,
      67,    66,    65,     0,     0,     0,    50,    49,    43,    44,
      45,    46,    47,    48,    39,    40,    41,    42,     0,    31,
       0,    73,    27,    11,     8,    12,     0,    70,    32,    58,
      30,    58,    72,     0,    16,     0,     0,     0,     0,    24,
      26,    74,    71,     0,    58,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,    10,   163,   161,    84,   -76,   -76,   123,   -76,
       1,   -20,   -76,   -76,   -76,   -76,   -46,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -75,   -53,   -76,   152,   -15,   -76,
     -76,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    16,    50,     6,     9,    39,
      42,    26,    27,    28,    29,    30,    70,    71,    72,    73,
     108,    74,    31,    32,    43,    84,    93,    44,    34,   123,
      35,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    85,    78,    79,    88,    47,    62,    41,   127,    37,
      63,    64,    65,    66,    14,   128,    25,    38,    52,    76,
      94,    19,    47,    63,    64,    65,    66,    10,   109,    52,
      67,    47,     1,   115,    51,    55,    17,    68,    69,    20,
      56,    47,    87,    67,   125,    61,   126,    13,    22,    15,
      68,    69,    95,     7,     8,    23,    18,    24,     7,   135,
      57,    58,   120,   124,    36,   122,    96,    97,    37,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   110,
      59,    58,   132,    81,    82,    83,    90,    91,    92,   116,
      58,    48,   118,    96,    97,    45,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    96,    97,    46,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   112,
      49,    60,    53,    54,    80,    86,    89,   -14,    96,    97,
     111,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   113,   117,   119,   121,   131,   129,   130,   133,   134,
      96,    97,   136,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    20,    12,    21,    11,    33,   114,     0,
       0,    77,    22,     0,     0,    12,     0,     0,     0,    23,
      12,    24,    96,    97,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107
};

static const yytype_int16 yycheck[] =
{
      46,    54,    48,    49,    57,    25,     7,    21,    15,     7,
      11,    12,    13,    14,     4,    22,    15,    15,    33,     7,
      66,    11,    42,    11,    12,    13,    14,     0,    74,    44,
      31,    51,    26,    86,    33,    15,    14,    38,    39,     7,
      20,    61,    56,    31,   119,    44,   121,    26,    16,    16,
      38,    39,    15,     7,     8,    23,    14,    25,     7,   134,
      21,    22,   108,   116,    15,   111,    29,    30,     7,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    15,
      21,    22,   128,     3,     4,     5,     3,     4,     5,    21,
      22,    28,    15,    29,    30,    14,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    29,    30,    14,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    20,
      27,    17,    27,    27,    17,    27,     7,    14,    29,    30,
      14,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    20,    20,    16,    16,    20,    17,    17,    24,    16,
      29,    30,    17,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     7,     3,     9,     3,    15,    84,    -1,
      -1,    48,    16,    -1,    -1,    14,    -1,    -1,    -1,    23,
      19,    25,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    46,    47,    48,    49,    52,     7,     8,    53,
       0,    48,    49,    26,    47,    16,    50,    14,    14,    47,
       7,     9,    16,    23,    25,    55,    56,    57,    58,    59,
      60,    67,    68,    72,    73,    75,    15,     7,    15,    54,
      76,    76,    55,    69,    72,    14,    14,    56,    28,    27,
      51,    55,    73,    27,    27,    15,    20,    21,    22,    21,
      17,    55,     7,    11,    12,    13,    14,    31,    38,    39,
      61,    62,    63,    64,    66,    61,     7,    53,    61,    61,
      17,     3,     4,     5,    70,    70,    27,    76,    70,     7,
       3,     4,     5,    71,    61,    15,    29,    30,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    65,    61,
      15,    14,    20,    20,    50,    70,    21,    20,    15,    16,
      61,    16,    61,    74,    70,    69,    69,    15,    22,    17,
      17,    20,    61,    24,    16,    69,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    46,    46,    47,    47,    48,    49,
      50,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    58,    59,    60,    61,
      61,    61,    61,    62,    62,    62,    62,    63,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    71,    72,    72,
      73,    74,    74,    74,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     2,     7,     2,
       4,     3,     7,     6,     1,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     7,    11,     7,     4,     1,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     3,     1,     0,     7,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 81 "tinyparser.y" /* yacc.c:1646  */
    {
            root = (yyvsp[0].ast);
            traverse(root);
            if(root->valueType == 'C') printf("%c\n", root->intV);
            else if(root->valueType == 'N') printf("%d\n", root->intV);
            else if(root->valueType == 'B') printf("%s\n", root->intV ? "true":"false"); }
#line 1386 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = makeNode('b', (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 1393 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('r', (yyvsp[-1].ast), NULL); }
#line 1400 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('L', (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1407 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[0].ast); }
#line 1414 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 125 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1420 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 126 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1426 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1432 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1438 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 129 "tinyparser.y" /* yacc.c:1646  */
    {}
#line 1444 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 133 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('I', (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 1451 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 135 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('I', (yyvsp[-8].ast), (yyvsp[-5].ast));
            (yyval.ast)->middle = (yyvsp[-1].ast); }
#line 1459 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('W', (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 1466 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = makeNode('A', (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 1473 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeVariableNode((yyvsp[0].stringV)); }
#line 1480 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 156 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[0].ast); }
#line 1487 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 158 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('O', (yyvsp[-2].ast), (yyvsp[0].ast));
            (yyval.ast)->oper = strdup((yyvsp[-1].stringV)); }
#line 1495 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('O', NULL, (yyvsp[0].ast));
            (yyval.ast)->oper = strdup((yyvsp[-1].stringV)); }
#line 1503 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 164 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[-1].ast); }
#line 1510 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 169 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = makeVariableNode((yyvsp[0].stringV)); }
#line 1517 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 171 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[0].ast); }
#line 1524 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 173 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('B', NULL, NULL);
            (yyval.ast)->intV = (yyvsp[0].intV); }
#line 1532 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 176 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[0].ast); }
#line 1539 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 184 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('N', NULL, NULL);
            (yyval.ast)->intV = (yyvsp[0].intV); }
#line 1547 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 191 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('C', NULL, NULL);
            (yyval.ast)->intV = (yyvsp[0].intV);}
#line 1555 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 203 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "+"; }
#line 1561 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 204 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "-"; }
#line 1567 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 205 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "*"; }
#line 1573 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 206 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "/"; }
#line 1579 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 207 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "=="; }
#line 1585 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 208 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "!="; }
#line 1591 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 209 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = ">"; }
#line 1597 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = ">="; }
#line 1603 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "<"; }
#line 1609 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 212 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "<="; }
#line 1615 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 213 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "&&"; }
#line 1621 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 214 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "||"; }
#line 1627 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 218 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "+"; }
#line 1633 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "-"; }
#line 1639 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 220 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.stringV) = "!"; }
#line 1645 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "tinyparser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 1651 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 228 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = (yyvsp[0].ast); }
#line 1658 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 230 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = makeNode('L', (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1665 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 232 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = (yyvsp[0].ast); }
#line 1672 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 238 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = (yyvsp[0].ast); }
#line 1679 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 240 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = makeNode('L', (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1686 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 242 "tinyparser.y" /* yacc.c:1646  */
    { 
            (yyval.ast) = (yyvsp[0].ast); }
#line 1693 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 247 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'N'; }
#line 1701 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 250 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'C'; }
#line 1709 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 253 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'B'; }
#line 1717 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 259 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'N'; }
#line 1725 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 262 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'C'; }
#line 1733 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 265 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('T', NULL, NULL);
            (yyval.ast)->valueType = 'B'; }
#line 1741 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 273 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('L', (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1748 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 275 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = (yyvsp[0].ast); }
#line 1755 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 280 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('D', (yyvsp[-3].ast), (yyvsp[-1].ast));
            
            for(int i = 0; i < mainTableCnt; i++)
                if(mainTable[i].type == NULL) mainTable[i].type = (yyvsp[-1].ast)->valueType;
 }
#line 1766 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 288 "tinyparser.y" /* yacc.c:1646  */
    {}
#line 1772 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 289 "tinyparser.y" /* yacc.c:1646  */
    {}
#line 1778 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 290 "tinyparser.y" /* yacc.c:1646  */
    {}
#line 1784 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 297 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('L', (yyvsp[-2].ast), makeVariableNode((yyvsp[0].stringV)));
            makeVariableSymbol((yyvsp[0].stringV)); }
#line 1792 "tinyparser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 300 "tinyparser.y" /* yacc.c:1646  */
    {
            (yyval.ast) = makeNode('L', NULL, makeVariableNode((yyvsp[0].stringV)));
            makeVariableSymbol((yyvsp[0].stringV)); }
#line 1800 "tinyparser.cpp" /* yacc.c:1646  */
    break;


#line 1804 "tinyparser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 305 "tinyparser.y" /* yacc.c:1906  */


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
