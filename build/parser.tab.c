
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include "./SemanticAnalysis/SemanticAnalysis.cpp"
    #include "./CodeGen/CodeGenerator.h"
    #include "./CodeGen/quad.h"
    CodeGenerator generator;
    extern FILE *yyin;
    extern int lineno; /* Line Number tacker from lexer */
    extern int yylex();
    int yywrap();
    void yyerror(char*);
    

/* Line 189 of yacc.c  */
#line 90 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     BOOL = 261,
     STRING = 262,
     IDENTIFIER = 263,
     INT_VAL = 264,
     FLOAT_VAL = 265,
     CHAR_VAL = 266,
     STRING_VAL = 267,
     TRUE_VAL = 268,
     FALSE_VAL = 269,
     CONST = 270,
     SEMICOLON = 271,
     COMMA = 272,
     LBRACE = 273,
     RBRACE = 274,
     LPAREN = 275,
     RPAREN = 276,
     BREAK = 277,
     CONTINUE = 278,
     WHILE = 279,
     FOR = 280,
     SWITCH = 281,
     CASE = 282,
     DEFAULT = 283,
     COLON = 284,
     IF = 285,
     ELSE = 286,
     REPEAT = 287,
     UNTIL = 288,
     LE = 289,
     GE = 290,
     NE = 291,
     EQUAL = 292,
     LESS = 293,
     GREATER = 294,
     MINUS = 295,
     PLUS = 296,
     MOD = 297,
     DIV = 298,
     MULT = 299,
     EXP = 300,
     OR = 301,
     AND = 302,
     NOT = 303,
     ASSIGN = 304,
     DIV_EQ = 305,
     PLUS_EQ = 306,
     MINUS_EQ = 307,
     MULT_EQ = 308,
     INC = 309,
     DEC = 310,
     UMINUS = 311,
     VOID = 312,
     RETURN = 313,
     PRINT = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "parser.y"

        int varType;
        struct Lexeme{
                int type;
                char *stringRep;
                int intVal;
                float floatVal;
                char* stringVal;
                bool boolVal;
                char charVal;
                bool isIdentifier;
        }lexeme;

        char* stringValue;



/* Line 214 of yacc.c  */
#line 203 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    12,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    38,    40,
      42,    44,    46,    48,    52,    56,    60,    64,    68,    72,
      76,    80,    83,    87,    89,    91,    93,    95,    98,   101,
     103,   107,   111,   113,   117,   121,   125,   127,   130,   132,
     136,   140,   142,   144,   146,   148,   149,   154,   155,   161,
     165,   167,   169,   171,   173,   175,   177,   179,   186,   190,
     196,   201,   206,   211,   216,   221,   222,   223,   224,   235,
     236,   237,   248,   249,   250,   251,   259,   260,   261,   262,
     263,   276,   277,   281,   282,   283,   295,   296,   297,   309,
     310,   311,   321,   324,   326,   327,   334,   335,   341,   343,
     344,   347,   348,   351,   352,   354,   356,   358,   360,   362,
     368,   372,   373,   374,   381,   382,   388,   389,   396,   397,
     403,   405,   409,   412
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    61,    62,    -1,    62,    -1,    66,    16,
      -1,    -1,    18,    63,    61,    19,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    87,    -1,    94,    -1,    98,
      -1,   105,    -1,   116,    -1,    65,    -1,    -1,    66,    -1,
      12,    -1,    11,    -1,    67,    -1,    68,    -1,    66,    37,
      68,    -1,    66,    36,    68,    -1,    66,    39,    68,    -1,
      66,    38,    68,    -1,    66,    35,    68,    -1,    66,    34,
      68,    -1,    66,    47,    66,    -1,    66,    46,    66,    -1,
      48,    66,    -1,    20,    67,    21,    -1,    13,    -1,    14,
      -1,    70,    -1,    69,    -1,     8,    54,    -1,     8,    55,
      -1,    71,    -1,    70,    41,    71,    -1,    70,    40,    71,
      -1,    72,    -1,    71,    44,    74,    -1,    71,    43,    74,
      -1,    71,    42,    74,    -1,    73,    -1,    40,    73,    -1,
      74,    -1,    20,    70,    21,    -1,    73,    45,    73,    -1,
       9,    -1,    10,    -1,    75,    -1,     8,    -1,    -1,     8,
      20,    76,    21,    -1,    -1,     8,    20,    77,    78,    21,
      -1,    78,    17,    65,    -1,    65,    -1,     9,    -1,    10,
      -1,    12,    -1,    11,    -1,    13,    -1,    14,    -1,    15,
     115,     8,    49,    79,    16,    -1,   115,     8,    16,    -1,
     115,     8,    49,    65,    16,    -1,     8,    49,    65,    16,
      -1,     8,    50,    65,    16,    -1,     8,    53,    65,    16,
      -1,     8,    51,    65,    16,    -1,     8,    52,    65,    16,
      -1,    -1,    -1,    -1,    24,    20,    84,    67,    85,    21,
      18,    86,    61,    19,    -1,    -1,    -1,    30,    20,    66,
      88,    21,    18,    89,    61,    19,    90,    -1,    -1,    -1,
      -1,    91,    31,    92,    18,    93,    61,    19,    -1,    -1,
      -1,    -1,    -1,    32,    18,    95,    61,    19,    96,    33,
      20,    67,    97,    21,    16,    -1,    -1,    25,    99,   100,
      -1,    -1,    -1,    20,    81,   101,    67,   102,    16,    66,
      21,    18,    61,    19,    -1,    -1,    -1,    20,    82,   103,
      67,   104,    16,    66,    21,    18,    61,    19,    -1,    -1,
      -1,    26,    20,    66,   106,    21,    18,   107,   108,    19,
      -1,   108,   109,    -1,   109,    -1,    -1,    27,    79,    29,
     110,   112,   113,    -1,    -1,    28,    29,   111,   112,   114,
      -1,    61,    -1,    -1,    22,    16,    -1,    -1,    22,    16,
      -1,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
       6,    -1,   118,    18,    61,   117,    19,    -1,    58,    64,
      16,    -1,    -1,    -1,    57,     8,    20,   119,   123,    21,
      -1,    -1,    57,     8,    20,   120,    21,    -1,    -1,   115,
       8,    20,   121,   123,    21,    -1,    -1,   115,     8,    20,
     122,    21,    -1,   124,    -1,   123,    17,   124,    -1,   115,
       8,    -1,   115,     8,    49,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   169,   172,   173,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   189,   189,   191,   191,
     191,   194,   195,   197,   251,   302,   354,   406,   458,   511,
     560,   610,   645,   649,   650,   655,   656,   659,   701,   744,
     745,   815,   886,   887,   949,  1021,  1075,  1076,  1141,  1142,
    1143,  1218,  1219,  1220,  1228,  1253,  1253,  1283,  1283,  1316,
    1332,  1352,  1353,  1354,  1355,  1356,  1357,  1361,  1406,  1424,
    1484,  1549,  1613,  1671,  1730,  1791,  1791,  1811,  1791,  1816,
    1816,  1816,  1819,  1830,  1835,  1819,  1836,  1840,  1840,  1840,
    1840,  1869,  1869,  1872,  1872,  1872,  1892,  1892,  1892,  1915,
    1935,  1915,  1939,  1940,  1943,  1943,  1961,  1961,  1963,  1964,
    1966,  1967,  1969,  1970,  1975,  1975,  1975,  1975,  1975,  1977,
    1987,  2008,  2011,  2011,  2026,  2026,  2040,  2040,  2055,  2055,
    2074,  2075,  2078,  2095
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "BOOL", "STRING",
  "IDENTIFIER", "INT_VAL", "FLOAT_VAL", "CHAR_VAL", "STRING_VAL",
  "TRUE_VAL", "FALSE_VAL", "CONST", "SEMICOLON", "COMMA", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "BREAK", "CONTINUE", "WHILE", "FOR",
  "SWITCH", "CASE", "DEFAULT", "COLON", "IF", "ELSE", "REPEAT", "UNTIL",
  "LE", "GE", "NE", "EQUAL", "LESS", "GREATER", "MINUS", "PLUS", "MOD",
  "DIV", "MULT", "EXP", "OR", "AND", "NOT", "ASSIGN", "DIV_EQ", "PLUS_EQ",
  "MINUS_EQ", "MULT_EQ", "INC", "DEC", "UMINUS", "VOID", "RETURN", "PRINT",
  "$accept", "stmts", "stmt", "$@1", "ret_val", "value", "expr",
  "bool_expr", "arithmetic_expr", "unary_expr", "binary_expr", "term",
  "negat", "para", "factor", "function_call", "$@2", "$@3", "call_params",
  "constant", "const_dec_stmt", "var_dec_stmt", "assign_stmt",
  "while_stmt", "$@4", "$@5", "$@6", "if_stmt", "$@7", "$@8", "if_body",
  "$@9", "$@10", "$@11", "repeat_until_stmt", "$@12", "$@13", "$@14",
  "for_stmt", "$@15", "for_expression_stmt", "$@16", "$@17", "$@18",
  "$@19", "switch_stmt", "$@20", "$@21", "case_stmts", "case_stmt", "$@22",
  "$@23", "case_in_scope_stmts", "case_end", "default_case_end", "type",
  "function", "ret_stmt", "function_prototype", "$@24", "$@25", "$@26",
  "$@27", "params", "param", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    63,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    64,    64,    65,    65,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    76,    75,    77,    75,    78,
      78,    79,    79,    79,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    82,    82,    84,    85,    86,    83,    88,
      89,    87,    91,    92,    93,    90,    90,    95,    96,    97,
      94,    99,    98,   101,   102,   100,   103,   104,   100,   106,
     107,   105,   108,   108,   110,   109,   111,   109,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   116,
     117,   117,   119,   118,   120,   118,   121,   118,   122,   118,
     123,   123,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     1,     3,
       3,     1,     1,     1,     1,     0,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     6,     3,     5,
       4,     4,     4,     4,     4,     0,     0,     0,    10,     0,
       0,    10,     0,     0,     0,     7,     0,     0,     0,     0,
      12,     0,     3,     0,     0,    11,     0,     0,    11,     0,
       0,     9,     2,     1,     0,     6,     0,     5,     1,     0,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     5,
       3,     0,     0,     6,     0,     5,     0,     6,     0,     5,
       1,     3,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   114,   115,   116,   118,   117,    54,    51,    52,    33,
      34,     0,     5,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    21,    22,    36,    35,    39,
      42,    46,    48,    53,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    15,     0,    57,     0,     0,     0,     0,
       0,    37,    38,     0,     0,    54,     0,    21,    35,    75,
       0,     0,     0,    87,    54,     0,    47,    31,     0,     1,
       2,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    19,     0,    18,     0,     0,     0,     0,     0,     0,
      32,    49,     0,     0,    92,    99,    79,     0,     0,   122,
      28,    27,    24,    23,    26,    25,    30,    29,    41,    40,
      45,    44,    43,    50,    68,   126,     0,   121,    56,    60,
       0,    70,    71,    73,    74,    72,     0,     6,    21,     0,
      93,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,    58,    61,    62,    64,    63,    65,
      66,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,   130,   125,     0,   129,    69,     0,    16,   119,    59,
      67,     0,    21,    21,   100,    80,     0,   132,     0,   123,
     127,   120,    77,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,   103,     0,     0,   133,
       0,     0,     0,     0,   106,   101,   102,    86,    21,    78,
       0,     0,   104,   109,    81,     0,     0,     0,     0,   109,
     108,   113,    83,     0,     0,     0,   111,     0,   107,     0,
      90,    95,    98,     0,   105,   112,    84,   110,     0,     0,
      85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   230,    23,    54,   176,    92,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    88,    89,   130,   161,
      34,    35,    36,    37,   102,   162,   200,    38,   144,   196,
     224,   225,   239,   248,    39,   107,   186,   226,    40,    60,
     104,   163,   193,   164,   194,    41,   143,   195,   205,   206,
     229,   223,   231,   244,   238,    42,    43,   152,    44,   146,
     147,   148,   149,   170,   171
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -197
static const yytype_int16 yypact[] =
{
     643,  -197,  -197,  -197,  -197,  -197,   -14,  -197,  -197,  -197,
    -197,   114,  -197,    56,    -3,  -197,     6,     8,    14,    82,
      56,    26,   229,  -197,    99,  -197,  -197,  -197,    15,    81,
    -197,    18,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,    45,  -197,    50,    58,    11,    11,    11,    11,
      11,  -197,  -197,    76,   643,     7,   133,    92,     9,  -197,
     110,    56,    56,  -197,   112,    63,    18,  -197,   121,  -197,
    -197,  -197,    91,    91,    91,    91,    91,    91,    56,    56,
      63,    63,   119,   119,   119,    82,    -2,   643,   118,    11,
    -197,  -197,    72,   133,    96,   128,   137,   140,    94,   321,
    -197,  -197,    56,   216,  -197,   133,   133,   643,     9,   136,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,    81,    81,
    -197,  -197,  -197,  -197,  -197,   154,    11,   275,  -197,  -197,
      12,  -197,  -197,  -197,  -197,  -197,   253,  -197,   155,   134,
    -197,  -197,   150,   156,   157,   367,   114,   160,   114,   168,
     174,    11,   175,    11,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,   177,   180,    56,    56,    -1,   184,   185,  -197,   187,
      60,  -197,  -197,    61,  -197,  -197,   196,  -197,  -197,  -197,
    -197,   195,   209,   210,  -197,  -197,   181,   182,   114,  -197,
    -197,  -197,  -197,   224,   225,    78,   643,   226,   253,  -197,
     643,    56,    56,   253,   221,    67,  -197,   413,    56,  -197,
     459,   127,   171,   222,  -197,  -197,  -197,   214,   231,  -197,
     238,   239,  -197,   643,  -197,   227,   247,   643,   643,   643,
     643,   254,  -197,   244,   505,   551,   265,   276,  -197,   273,
    -197,  -197,  -197,   278,  -197,  -197,  -197,  -197,   643,   597,
    -197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,     0,   -19,  -197,  -197,   -37,    -4,    -9,   198,  -197,
      -5,    29,  -197,   -18,    68,  -197,  -197,  -197,  -197,  -196,
    -197,   193,   194,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,    93,
    -197,  -197,    73,  -197,  -197,    -6,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,   158,   115
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -129
static const yytype_int16 yytable[] =
{
      22,    66,   209,    70,    57,    53,    45,   213,    58,    56,
      94,    95,    96,    97,   124,   124,    67,    59,   125,    55,
       7,     8,    90,    91,     9,    10,    61,    45,    62,   153,
     101,    13,    63,   154,    68,    46,    47,    48,    49,    50,
      51,    52,    93,    93,    93,    93,    93,   126,   126,    80,
      81,    19,   129,    86,    99,    80,    81,   105,   106,    20,
     108,    51,    52,    85,    55,     7,     8,   123,    87,     9,
      10,    64,     7,     8,   116,   117,    13,   188,   188,   -55,
      70,   189,   190,    65,    98,    93,   215,   127,   131,   150,
      64,     7,     8,   138,   203,   204,    19,   142,    56,    55,
       7,     8,    65,    19,    20,   203,   204,   145,    70,   118,
     119,    65,   132,   100,   177,    71,   179,     1,     2,     3,
       4,     5,    93,    82,    83,    84,    70,    64,     7,     8,
     103,    19,    45,    72,    73,    74,    75,    76,    77,   128,
     169,   109,   169,   136,   133,    78,    79,    93,   220,    93,
     120,   121,   122,   134,   182,   183,   135,  -124,   165,    56,
      56,    72,    73,    74,    75,    76,    77,    72,    73,    74,
      75,    76,    77,    78,    79,  -128,   -76,   166,   167,    78,
      79,   172,   169,    46,    47,    48,    49,    50,    70,   174,
     175,    70,   221,   180,   178,   187,   207,   211,   212,   218,
     210,   181,   184,   185,    56,    72,    73,    74,    75,    76,
      77,    70,   191,   192,   197,    70,    70,    78,    79,     1,
       2,     3,     4,     5,   139,   -94,   -97,   234,   235,    69,
      70,   198,     1,     2,     3,     4,     5,     6,     7,     8,
     201,   202,     9,    10,    11,   -82,   208,    12,   249,    13,
     214,   222,   -89,    14,    15,    16,   227,   228,   232,    17,
     240,    18,   155,   156,   157,   158,   159,   160,   233,    19,
     110,   111,   112,   113,   114,   115,   237,    20,     1,     2,
       3,     4,     5,     6,     7,     8,    21,   243,     9,    10,
      11,   246,   245,    12,   247,    13,   140,   141,   216,    14,
      15,    16,   236,   199,     0,    17,   173,    18,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,    20,     1,     2,     3,     4,     5,     6,
       7,     8,    21,   151,     9,    10,    11,     0,     0,    12,
     137,    13,     0,     0,     0,    14,    15,    16,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,    20,
       1,     2,     3,     4,     5,     6,     7,     8,    21,     0,
       9,    10,    11,     0,     0,    12,   168,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,    20,     1,     2,     3,     4,
       5,     6,     7,     8,    21,     0,     9,    10,    11,     0,
       0,    12,   217,    13,     0,     0,     0,    14,    15,    16,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,    20,     1,     2,     3,     4,     5,     6,     7,     8,
      21,     0,     9,    10,    11,     0,     0,    12,   219,    13,
       0,     0,     0,    14,    15,    16,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,    20,     1,     2,
       3,     4,     5,     6,     7,     8,    21,     0,     9,    10,
      11,     0,     0,    12,   241,    13,     0,     0,     0,    14,
      15,    16,     0,     0,     0,    17,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,    20,     1,     2,     3,     4,     5,     6,
       7,     8,    21,     0,     9,    10,    11,     0,     0,    12,
     242,    13,     0,     0,     0,    14,    15,    16,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,    20,
       1,     2,     3,     4,     5,     6,     7,     8,    21,     0,
       9,    10,    11,     0,     0,    12,   250,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,    20,     1,     2,     3,     4,
       5,     6,     7,     8,    21,     0,     9,    10,    11,     0,
       0,    12,     0,    13,     0,     0,     0,    14,    15,    16,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21
};

static const yytype_int16 yycheck[] =
{
       0,    19,   198,    22,    13,    11,    20,   203,    13,    13,
      47,    48,    49,    50,    16,    16,    20,    20,    20,     8,
       9,    10,    11,    12,    13,    14,    20,    20,    20,    17,
      21,    20,    18,    21,     8,    49,    50,    51,    52,    53,
      54,    55,    46,    47,    48,    49,    50,    49,    49,    40,
      41,    40,    89,     8,    54,    40,    41,    61,    62,    48,
      65,    54,    55,    45,     8,     9,    10,    85,    18,    13,
      14,     8,     9,    10,    78,    79,    20,    17,    17,    21,
      99,    21,    21,    20,     8,    89,    19,    87,    16,   126,
       8,     9,    10,   102,    27,    28,    40,   103,   102,     8,
       9,    10,    20,    40,    48,    27,    28,   107,   127,    80,
      81,    20,    16,    21,   151,    16,   153,     3,     4,     5,
       6,     7,   126,    42,    43,    44,   145,     8,     9,    10,
      20,    40,    20,    34,    35,    36,    37,    38,    39,    21,
     146,    20,   148,    49,    16,    46,    47,   151,    21,   153,
      82,    83,    84,    16,   163,   164,    16,    21,     8,   163,
     164,    34,    35,    36,    37,    38,    39,    34,    35,    36,
      37,    38,    39,    46,    47,    21,    21,    21,    21,    46,
      47,    21,   188,    49,    50,    51,    52,    53,   207,    21,
      16,   210,    21,    16,    19,     8,   196,   201,   202,   208,
     200,    21,    18,    18,   208,    34,    35,    36,    37,    38,
      39,   230,    16,    18,    33,   234,   235,    46,    47,     3,
       4,     5,     6,     7,     8,    16,    16,   227,   228,     0,
     249,    49,     3,     4,     5,     6,     7,     8,     9,    10,
      16,    16,    13,    14,    15,    31,    20,    18,   248,    20,
      29,    29,    21,    24,    25,    26,    18,    18,    31,    30,
      16,    32,     9,    10,    11,    12,    13,    14,    21,    40,
      72,    73,    74,    75,    76,    77,    22,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    57,    22,    13,    14,
      15,    18,    16,    18,    16,    20,   103,   103,   205,    24,
      25,    26,   229,   188,    -1,    30,   148,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    57,    58,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
       3,     4,     5,     6,     7,     8,     9,    10,    57,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,     3,     4,     5,     6,
       7,     8,     9,    10,    57,    -1,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    10,
      57,    -1,    13,    14,    15,    -1,    -1,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    57,    -1,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    57,    -1,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
       3,     4,     5,     6,     7,     8,     9,    10,    57,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,     3,     4,     5,     6,
       7,     8,     9,    10,    57,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      14,    15,    18,    20,    24,    25,    26,    30,    32,    40,
      48,    57,    61,    62,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    80,    81,    82,    83,    87,    94,
      98,   105,   115,   116,   118,    20,    49,    50,    51,    52,
      53,    54,    55,   115,    63,     8,    66,    67,    70,    20,
      99,    20,    20,    18,     8,    20,    73,    66,     8,     0,
      62,    16,    34,    35,    36,    37,    38,    39,    46,    47,
      40,    41,    42,    43,    44,    45,     8,    18,    76,    77,
      11,    12,    65,    66,    65,    65,    65,    65,     8,    61,
      21,    21,    84,    20,   100,    66,    66,    95,    70,    20,
      68,    68,    68,    68,    68,    68,    66,    66,    71,    71,
      74,    74,    74,    73,    16,    20,    49,    61,    21,    65,
      78,    16,    16,    16,    16,    16,    49,    19,    67,     8,
      81,    82,   115,   106,    88,    61,   119,   120,   121,   122,
      65,    58,   117,    17,    21,     9,    10,    11,    12,    13,
      14,    79,    85,   101,   103,     8,    21,    21,    19,   115,
     123,   124,    21,   123,    21,    16,    64,    65,    19,    65,
      16,    21,    67,    67,    18,    18,    96,     8,    17,    21,
      21,    16,    18,   102,   104,   107,    89,    33,    49,   124,
      86,    16,    16,    27,    28,   108,   109,    61,    20,    79,
      61,    66,    66,    79,    29,    19,   109,    19,    67,    19,
      21,    21,    29,   111,    90,    91,    97,    18,    18,   110,
      61,   112,    31,    21,    61,    61,   112,    22,   114,    92,
      16,    19,    19,    22,   113,    16,    18,    16,    93,    61,
      19
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {createNewTable(); generator.startScope();;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {exitCurrentScope();generator.endScope("");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    { (yyval.lexeme).type = VOID_TYPE; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }
                else
                {
                (yyval.lexeme).type = BOOL_TYPE;
                (yyval.lexeme).stringRep = getCurrentCount();
                LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                (yyval.lexeme).boolVal = checkEQ_EQ(lex1,lex2);
                
                // Code Gen
                char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                char* realname1 = generator.getTemp(name1);
                char* realname2 = generator.getTemp(name2);
                
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name1 = realname1;
                }

                if (strcmp(realname2 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                        realname2 = generator.getAssignment(entry);
                        name2 = realname2;
                }
                
                char* name = generator.addTemp(realname1 , "==" , realname2);
                (yyval.lexeme).stringRep = name;
                

                if (strcmp(name1 , "") == 0)
                {
                        name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                }

                if (strcmp(name2 , "") == 0)
                {
                        name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                }
                generator.addQuad("EQ_EQ", name1, name2, name);
        }
    
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {               /* != */
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                        (yyval.lexeme).boolVal = checkNE(lex1,lex2);
                        
                // Code Gen
                char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                char* realname1 = generator.getTemp(name1);
                char* realname2 = generator.getTemp(name2);
                
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name1 = realname1;
                }

                if (strcmp(realname2 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                        realname2 = generator.getAssignment(entry);
                        name2 = realname2;
                }
                
                char* name = generator.addTemp(realname1 , "!=" , realname2);
                (yyval.lexeme).stringRep = name;
                

                if (strcmp(name1 , "") == 0)
                {
                        name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                }

                if (strcmp(name2 , "") == 0)
                {
                        name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                }
                generator.addQuad("NOT_EQ", name1, name2, name);

                }
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                        (yyval.lexeme).boolVal = checkGT(lex1,lex2);
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , ">" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("GREATER", name1, name2, name);

                }
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                        (yyval.lexeme).boolVal = checkLT(lex1,lex2);
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "<" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("LESS", name1, name2, name);

                }
        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                        (yyval.lexeme).boolVal = checkGE(lex1,lex2);
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , ">=" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("GE", name1, name2, name);

                }
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry((yyvsp[(1) - (3)].lexeme).type, (yyvsp[(1) - (3)].lexeme).stringRep, (yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(1) - (3)].lexeme).stringVal, (yyvsp[(1) - (3)].lexeme).boolVal, (yyvsp[(1) - (3)].lexeme).charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry((yyvsp[(3) - (3)].lexeme).type, (yyvsp[(3) - (3)].lexeme).stringRep, (yyvsp[(3) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).stringVal, (yyvsp[(3) - (3)].lexeme).boolVal, (yyvsp[(3) - (3)].lexeme).charVal);
                        (yyval.lexeme).boolVal = checkLE(lex1,lex2);
                        
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "<=" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("LE", name1, name2, name);

                }
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(type1 != BOOL_TYPE || type2 != BOOL_TYPE)
                {
                        printSemanticError("AND Operation should be between boolean types",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        (yyval.lexeme).boolVal = (yyvsp[(1) - (3)].lexeme).boolVal && (yyvsp[(3) - (3)].lexeme).boolVal;
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "&&" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("AND", name1, name2, name);
                }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 561 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if(type1 != BOOL_TYPE || type2 != BOOL_TYPE)
                {
                        printSemanticError("OR Operation should be between boolean types",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        (yyval.lexeme).boolVal = (yyvsp[(1) - (3)].lexeme).boolVal || (yyvsp[(3) - (3)].lexeme).boolVal;
                        
                        
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "||" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("OR", name1, name2, name);
                }
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 611 "parser.y"
    {                                       /* ! */ 
                int type = (yyvsp[(2) - (2)].lexeme).type;
                if(type != BOOL_TYPE)
                {
                        printSemanticError("NOT Operation should be on boolean type",lineno);
                }else{
                        (yyval.lexeme).type = BOOL_TYPE;
                        (yyval.lexeme).stringRep = getCurrentCount();
                        (yyval.lexeme).boolVal = !(yyvsp[(2) - (2)].lexeme).boolVal;
                        
                        // Code Gen
                        char* name1 = (yyvsp[(2) - (2)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(2) - (2)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("!" , realname1 , "");
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(2) - (2)].lexeme).stringRep;
                        }
                        generator.addQuad("NOT", name1, "", name);
                  
                }
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 646 "parser.y"
    {
                (yyval.lexeme) = (yyvsp[(2) - (3)].lexeme);
     ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 649 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 650 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 660 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                 if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                VariableType type=entry->getLexemeEntry()->type;
                
                if(type != INT_TYPE && type != FLOAT_TYPE)
                {
                        printSemanticError("Unary Operation should be on integer or float type",lineno);
                }
                else
                {
                        if(type == INT_TYPE)
                        {
                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = entry->getLexemeEntry()->intVal + 1;
                                entry->getLexemeEntry()->intVal = (yyval.lexeme).intVal;
                                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                        }else
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = entry->getLexemeEntry()->floatVal + 1;
                                entry->getLexemeEntry()->floatVal = (yyval.lexeme).floatVal;
                                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                        }
                        // Code Gen
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                        const char* realname1 = generator.getAssignment(entry);
                        generator.addQuad("INC", realname1, "", realname1); 
                        (yyval.lexeme).stringRep = (yyvsp[(1) - (2)].stringValue);
                    
                }
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 702 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                 if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                VariableType type=entry->getLexemeEntry()->type;
                if(type != INT_TYPE && type != FLOAT_TYPE)
                {
                        printSemanticError("Unary Operation should be on integer or float type",lineno);
                }
                else
                {
                        
                        if(type == INT_TYPE)
                        {
                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = entry->getLexemeEntry()->intVal - 1;
                                entry->getLexemeEntry()->intVal = (yyval.lexeme).intVal;
                        }else
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = entry->getLexemeEntry()->floatVal - 1;
                                entry->getLexemeEntry()->floatVal = (yyval.lexeme).floatVal;
                        }
                        // Code Gen
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                        const char* realname1 = generator.getAssignment(entry);
                        generator.addQuad("DEC", realname1, "", realname1); 

                        (yyval.lexeme).stringRep = (yyvsp[(1) - (2)].stringValue);

                    
                }
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 746 "parser.y"
    {          
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Addition operation must be between 2 numbers",lineno);
                }
                else
                {
                        
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal + (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).intVal + (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal + (yyvsp[(3) - (3)].lexeme).intVal;
                        }
                        else{
                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = (yyvsp[(1) - (3)].lexeme).intVal + (yyvsp[(3) - (3)].lexeme).intVal;
                        }

                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "+" , realname2);
                        (yyval.lexeme).stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        generator.addQuad("ADD", name1, name2, name);
                        
                
                }
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 816 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Minus operation must be between 2 numbers",lineno);
                }
                else
                {
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal - (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).intVal - (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal - (yyvsp[(3) - (3)].lexeme).intVal;
                        }
                        else
                        {
                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = (yyvsp[(1) - (3)].lexeme).intVal - (yyvsp[(3) - (3)].lexeme).intVal;
                        }

                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "-" , realname2);
                        (yyval.lexeme).stringRep = name; 

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }
                        
                        generator.addQuad("SUB", name1, name2, name);
                
                }
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 888 "parser.y"
    {
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Multiplication operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal * (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).intVal * (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal * (yyvsp[(3) - (3)].lexeme).intVal;
                        }
                        else{

                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = (yyvsp[(1) - (3)].lexeme).intVal * (yyvsp[(3) - (3)].lexeme).intVal;
                        }

                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                        }
                        
                        char* name = generator.addTemp(realname1 , "*" , realname2);
                        (yyval.lexeme).stringRep = name; 
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        }                        
                        generator.addQuad("MUL", name1, name2, name);
                }
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 950 "parser.y"
    {
               
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Division operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                if ((yyvsp[(3) - (3)].lexeme).floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal / (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                if ((yyvsp[(3) - (3)].lexeme).floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).intVal / (yyvsp[(3) - (3)].lexeme).floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                if ((yyvsp[(3) - (3)].lexeme).intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = (yyvsp[(1) - (3)].lexeme).floatVal / (yyvsp[(3) - (3)].lexeme).intVal;
                        }
                        else{
                                if ((yyvsp[(3) - (3)].lexeme).intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = (yyvsp[(1) - (3)].lexeme).intVal / (yyvsp[(3) - (3)].lexeme).intVal;
                        }
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "/" , realname2);
                        (yyval.lexeme).stringRep = name; 
                        
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        } 



                        generator.addQuad("DIV", name1, name2, name);
                }
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1022 "parser.y"
    {
               
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                
                if((type1 != INT_TYPE ) && (type2 != INT_TYPE))
                {
                        printSemanticError("Mod operation must be between 2 Integers",lineno);
                }
                else{
                        (yyval.lexeme).type = INT_TYPE;
                        (yyval.lexeme).intVal = (yyvsp[(1) - (3)].lexeme).intVal % (yyvsp[(3) - (3)].lexeme).intVal;
                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "%" , realname2);
                        (yyval.lexeme).stringRep = name; 
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        } 



                        generator.addQuad("MOD", name1, name2, name); 
                }
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1076 "parser.y"
    {

                
                if ((yyvsp[(2) - (2)].lexeme).type == FLOAT_TYPE)
                {
                        (yyval.lexeme).stringRep = getCurrentCount();
                        (yyval.lexeme).type = (yyvsp[(2) - (2)].lexeme).type;
                        (yyval.lexeme).floatVal = -(yyvsp[(2) - (2)].lexeme).floatVal;
                        // Code Gen
                        char* name1 = (yyvsp[(2) - (2)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(2) - (2)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("0" , "-" , realname1);
                        (yyval.lexeme).stringRep = name; 


                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(2) - (2)].lexeme).stringRep;
                        }
                        
                        generator.addQuad("NEG", name1, "", name); 
                }
                else if ((yyvsp[(2) - (2)].lexeme).type == INT_TYPE)
                {
                        (yyval.lexeme).stringRep = getCurrentCount();
                        (yyval.lexeme).type = (yyvsp[(2) - (2)].lexeme).type;
                        (yyval.lexeme).intVal = -(yyvsp[(2) - (2)].lexeme).intVal;
                        // Code Gen
                        char* name1 = (yyvsp[(2) - (2)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(2) - (2)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("0" , "-" , realname1);
                        (yyval.lexeme).stringRep = name;

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(2) - (2)].lexeme).stringRep;
                        }

                        
                        generator.addQuad("NEG", name1, "", name); 
                }
                else
                {
                        printSemanticError("Negation Operation should be on integer or float type",lineno);
                }  
      ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1142 "parser.y"
    {(yyval.lexeme) = (yyvsp[(2) - (3)].lexeme);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1143 "parser.y"
    {
                
                int type1 = (yyvsp[(1) - (3)].lexeme).type;
                int type2 = (yyvsp[(3) - (3)].lexeme).type;
                
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Power operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {

                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = pow((yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).floatVal);
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {

                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = pow((yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).floatVal);
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {

                                (yyval.lexeme).type = FLOAT_TYPE;
                                (yyval.lexeme).floatVal = pow((yyvsp[(1) - (3)].lexeme).floatVal, (yyvsp[(3) - (3)].lexeme).intVal);
                        }
                        else{

                                (yyval.lexeme).type = INT_TYPE;
                                (yyval.lexeme).intVal = pow((yyvsp[(1) - (3)].lexeme).intVal, (yyvsp[(3) - (3)].lexeme).intVal);
                        }

                        // Code Gen
                        char* name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        char* name2 = (yyvsp[(3) - (3)].lexeme).stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (3)].lexeme).stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "^" , realname2);
                        (yyval.lexeme).stringRep = name; 


                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(1) - (3)].lexeme).stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = (yyvsp[(3) - (3)].lexeme).stringRep;
                        } 
                        
                        generator.addQuad("EXP", name1, name2, name);
                }

        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1218 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1219 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1220 "parser.y"
    {
                
                generator.addQuad("CALL","","",(yyvsp[(1) - (1)].lexeme).stringRep);
                
                (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);

        
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1228 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (1)].stringValue));
             
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                entry->setIsUsed(true);
                (yyval.lexeme).type = (int)entry->getLexemeEntry()->type;
                (yyval.lexeme).stringRep = (yyvsp[(1) - (1)].stringValue);
                (yyval.lexeme).intVal = entry->getLexemeEntry()->intVal;
                (yyval.lexeme).floatVal = entry->getLexemeEntry()->floatVal;
                (yyval.lexeme).stringVal = entry->getLexemeEntry()->stringVal;
                (yyval.lexeme).boolVal = entry->getLexemeEntry()->boolVal;
                (yyval.lexeme).charVal = entry->getLexemeEntry()->charVal;
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1253 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                if(entry == NULL){
                        printSemanticError("Function not declared",lineno);
                        return 0;
                }
                if(*entry->getKind() != FUNC)
                {
                        printSemanticError("Cannot call a non function type",lineno);
                        return 0;
                }
                entry->setIsUsed(true);
                convertFunctionParamsToStack(entry);
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1267 "parser.y"
    {
                if(functionParameters.size() != 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                (yyval.lexeme).type = (int)entry->getFunctionOutputType();
                (yyval.lexeme).stringRep = (yyvsp[(1) - (4)].stringValue);
                (yyval.lexeme).intVal = entry->getLexemeEntry()->intVal;
                (yyval.lexeme).floatVal = entry->getLexemeEntry()->floatVal;
                (yyval.lexeme).stringVal = entry->getLexemeEntry()->stringVal;
                (yyval.lexeme).boolVal = entry->getLexemeEntry()->boolVal;
                (yyval.lexeme).charVal = entry->getLexemeEntry()->charVal;
                printf("%s \n" , "Function called successfully");
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1283 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (2)].stringValue));
                if(entry == NULL){
                        printSemanticError("Function not declared",lineno);
                        return 0;
                }
                if(*entry->getKind() != FUNC)
                {
                        printSemanticError("Cannot call a non function type",lineno);
                        return 0;
                }
                entry->setIsUsed(true);
                convertFunctionParamsToStack(entry);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1296 "parser.y"
    {
                if(functionParameters.size() != 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (5)].stringValue));
                (yyval.lexeme).type = (int)entry->getFunctionOutputType();
                (yyval.lexeme).stringRep = (yyvsp[(1) - (5)].stringValue);
                (yyval.lexeme).intVal = entry->getLexemeEntry()->intVal;
                (yyval.lexeme).floatVal = entry->getLexemeEntry()->floatVal;
                (yyval.lexeme).stringVal = entry->getLexemeEntry()->stringVal;
                (yyval.lexeme).boolVal = entry->getLexemeEntry()->boolVal;
                (yyval.lexeme).charVal = entry->getLexemeEntry()->charVal;

                
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1316 "parser.y"
    {
                if(functionParameters.size() == 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                int type1 = (int)functionParameters.top();
                int type2 = (yyvsp[(3) - (3)].lexeme).type;

                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in function call",lineno);
                }else{
                        functionParameters.pop();
                }
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1332 "parser.y"
    {
                if(functionParameters.size() == 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                int type1 = (int)functionParameters.top();
                int type2 = (yyvsp[(1) - (1)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in function call",lineno);
                }else{
                        functionParameters.pop();
                }
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1362 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(3) - (6)].stringValue));
                if(entry){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                int type1 = (yyvsp[(2) - (6)].varType);
                int type2 = (yyvsp[(5) - (6)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in const declaration",lineno);
                }else{
                        LexemeEntry* lexeme = new LexemeEntry;
                        lexeme->type = static_cast<VariableType>(type1);
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)(yyvsp[(5) - (6)].lexeme).floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)(yyvsp[(5) - (6)].lexeme).intVal;
                        }else{
                                lexeme->intVal = (yyvsp[(5) - (6)].lexeme).intVal;
                                lexeme->floatVal = (yyvsp[(5) - (6)].lexeme).floatVal;
                                lexeme->stringVal = (yyvsp[(5) - (6)].lexeme).stringVal;
                                lexeme->boolVal = (yyvsp[(5) - (6)].lexeme).boolVal;
                                lexeme->charVal = (yyvsp[(5) - (6)].lexeme).charVal;
                        }
                        entry = addEntryToTable((yyvsp[(3) - (6)].stringValue),lexeme,CONSTANT,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);

                        generator.addQuad("ALLOC",(yyvsp[(3) - (6)].stringValue),"",name);
                        
                        char* name1 = (yyvsp[(5) - (6)].lexeme).stringRep;

                        generator.addQuad("ASSIGN",name1,"",name);

                        generator.clearTemps();
                }    
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1406 "parser.y"
    {
                
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                lexeme->stringRep = getCurrentCount();
                entry = addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,VAR,false);

                // Code Gen
                const char* name = generator.addAssignment(entry);
                generator.addQuad("ALLOC",(yyvsp[(2) - (3)].stringValue),"",name);

              
         ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1424 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (5)].stringValue));
                if(entry){
                    printSemanticError("Variable already declared",lineno);
                    return 0;
                }
                int type1 = (yyvsp[(1) - (5)].varType);
                int type2 = (yyvsp[(4) - (5)].lexeme).type;
                printf("Type1: %d Type2: %d\n",type1,type2);
                 if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in variable declaration",lineno);
                }
                
                else
                {
                        LexemeEntry* lexeme = new LexemeEntry;
                        lexeme->type = static_cast<VariableType>(type1);
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)(yyvsp[(4) - (5)].lexeme).floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)(yyvsp[(4) - (5)].lexeme).intVal;
                        }else{
                                lexeme->intVal = (yyvsp[(4) - (5)].lexeme).intVal;
                                lexeme->floatVal = (yyvsp[(4) - (5)].lexeme).floatVal;
                                lexeme->stringVal = (yyvsp[(4) - (5)].lexeme).stringVal;
                                lexeme->boolVal = (yyvsp[(4) - (5)].lexeme).boolVal;
                                lexeme->charVal = (yyvsp[(4) - (5)].lexeme).charVal;
                        }
                        entry = addEntryToTable((yyvsp[(2) - (5)].stringValue),lexeme,VAR,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);
                        generator.addQuad("ALLOC",(yyvsp[(2) - (5)].stringValue),"",name);
                        
                        char* name1 = (yyvsp[(4) - (5)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(4) - (5)].lexeme).stringRep;
                        }
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1485 "parser.y"
    {  
                
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                
                
                if(entry == NULL)
                {       
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                
                
                
                if(*entry->getKind() != VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                int type1 = (int) entry->getLexemeEntry()->type;
                int type2 = (yyvsp[(3) - (4)].lexeme).type;
                printf("Type1 = %d Type2 = %d\n",type1,type2);
                if(!isTypeMatching(type1,type2))
                {


                        printSemanticError("Type mismatch in assignment statement",lineno);
                }
                else
                {
 
                        entry->setIsInitialized(true);
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = (int)(yyvsp[(3) - (4)].lexeme).floatVal;
                                 
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = (float)(yyvsp[(3) - (4)].lexeme).intVal;
                        }else{
                                entry->setLexemeEntry(convertLexemeToEntry((yyvsp[(3) - (4)].lexeme).type, (yyvsp[(3) - (4)].lexeme).stringRep, (yyvsp[(3) - (4)].lexeme).intVal, (yyvsp[(3) - (4)].lexeme).floatVal, (yyvsp[(3) - (4)].lexeme).stringVal, (yyvsp[(3) - (4)].lexeme).boolVal, (yyvsp[(3) - (4)].lexeme).charVal));
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = (yyvsp[(3) - (4)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(3) - (4)].lexeme).stringRep;
                        }
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                        
                }
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1550 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = (yyvsp[(3) - (4)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Division operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {       
                                if ((int)(yyvsp[(3) - (4)].lexeme).floatVal == 0) printSemanticError("Division by zero", lineno), 0;

                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal / (int)(yyvsp[(3) - (4)].lexeme).floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {       
                                if ((float)(yyvsp[(3) - (4)].lexeme).intVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal / (float)(yyvsp[(3) - (4)].lexeme).intVal ;
                        
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {       if ((yyvsp[(3) - (4)].lexeme).intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal / (yyvsp[(3) - (4)].lexeme).intVal ;
                        }else{
                                if ((yyvsp[(3) - (4)].lexeme).floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;

                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal / (yyvsp[(3) - (4)].lexeme).floatVal ;
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = (yyvsp[(3) - (4)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(3) - (4)].lexeme).stringRep;
                        }
                        generator.addQuad("DIV",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1614 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = (yyvsp[(3) - (4)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Multiplication operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal * (int)(yyvsp[(3) - (4)].lexeme).floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal * (float)(yyvsp[(3) - (4)].lexeme).intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal * (yyvsp[(3) - (4)].lexeme).intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal * (yyvsp[(3) - (4)].lexeme).floatVal ;
                        }
                        
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = (yyvsp[(3) - (4)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(3) - (4)].lexeme).stringRep;
                        }
                        generator.addQuad("MUL",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1672 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = (yyvsp[(3) - (4)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Addition operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal + (int)(yyvsp[(3) - (4)].lexeme).floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal + (float)(yyvsp[(3) - (4)].lexeme).intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal + (yyvsp[(3) - (4)].lexeme).intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal + (yyvsp[(3) - (4)].lexeme).floatVal ;
                        }

                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = (yyvsp[(3) - (4)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(3) - (4)].lexeme).stringRep;
                        }
                        generator.addQuad("ADD",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1731 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (4)].stringValue));
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = (yyvsp[(3) - (4)].lexeme).type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Minus operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal - (int)(yyvsp[(3) - (4)].lexeme).floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal - (float)(yyvsp[(3) - (4)].lexeme).intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal - (yyvsp[(3) - (4)].lexeme).intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal - (yyvsp[(3) - (4)].lexeme).floatVal ;
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = (yyvsp[(3) - (4)].lexeme).stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = (yyvsp[(3) - (4)].lexeme).stringRep;
                        }

                        generator.addQuad("SUB",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1791 "parser.y"
    {generator.startScope();;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1791 "parser.y"
    { 
                
                checkIfLexemIsBool((yyvsp[(4) - (4)].lexeme).type != BOOL_TYPE,lineno);
                char* name = (yyvsp[(4) - (4)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(4) - (4)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(4) - (4)].lexeme).stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);
                
        
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1811 "parser.y"
    {createNewTable();;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1811 "parser.y"
    {exitCurrentScope();generator.endScope("while");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1816 "parser.y"
    {checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1816 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1819 "parser.y"
    {
                
        
        char* endLabel = generator.addLC("" , 1);

        generator.addQuad("JMP","","",endLabel);

        

        
        
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1830 "parser.y"
    {        
        exitCurrentScope();
        
        generator.endScope("if");

        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1835 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1835 "parser.y"
    {exitCurrentScope();generator.endScope("else");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1836 "parser.y"
    {exitCurrentScope();generator.endScope("if");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1840 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1840 "parser.y"
    {exitCurrentScope();;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1840 "parser.y"
    { 
                checkIfLexemIsBool((yyvsp[(9) - (9)].lexeme).type != BOOL_TYPE,lineno);
                char* name = (yyvsp[(9) - (9)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(9) - (9)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(9) - (9)].lexeme).stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JT",name,"",endLabel);
                
                
                
                
                
                
                
                
                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1865 "parser.y"
    {printf("REPEAT UNTIL\n");generator.endScope("repeat");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1869 "parser.y"
    {createNewTable();;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1872 "parser.y"
    {generator.startScope();;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1872 "parser.y"
    {
                checkIfLexemIsBool((yyvsp[(4) - (4)].lexeme).type != BOOL_TYPE,lineno); 
                char* name = (yyvsp[(4) - (4)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(4) - (4)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(4) - (4)].lexeme).stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);
                
                
                 ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1891 "parser.y"
    {exitCurrentScope();generator.endScope("for");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1892 "parser.y"
    {generator.startScope();;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1892 "parser.y"
    {
                
                checkIfLexemIsBool((yyvsp[(4) - (4)].lexeme).type != BOOL_TYPE,lineno); 
                char* name = (yyvsp[(4) - (4)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(4) - (4)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(4) - (4)].lexeme).stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);

                ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1911 "parser.y"
    {exitCurrentScope();generator.endScope("for");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1915 "parser.y"
    {
                char* name = (yyvsp[(3) - (3)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(3) - (3)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(3) - (3)].lexeme).stringRep;
                }
                
                generator.setSwitchValue(name);

                // getting the label
                generator.addLC("" , 2);

                ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1935 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1935 "parser.y"
    {exitCurrentScope();generator.endScope("switch"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1943 "parser.y"
    {
                
                createNewTable();
                generator.startScope();
                // Code Gen
                char* switchValue = generator.getSwitchValue();
                char* constName = (yyvsp[(2) - (3)].lexeme).stringRep;
                char* Temp = generator.addTemp(switchValue , "==" , constName);

                generator.addQuad("EQ_EQ", switchValue, constName, Temp);
                
                
                // getting the label
                char* label = generator.addLC(Temp , 1);
                generator.addQuad("JF",Temp,"",label);
        
        
        ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1961 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1966 "parser.y"
    {generator.endScope("caseBreak");exitCurrentScope();;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1967 "parser.y"
    {generator.endScope("case");exitCurrentScope();;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1969 "parser.y"
    {generator.endScope("");exitCurrentScope();;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1970 "parser.y"
    {generator.endScope("");exitCurrentScope();;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1977 "parser.y"
    {
        
        char* funcName = generator.getFunctionName();
        
        generator.endScope(funcName);
        exitCurrentScope(); 
        currentFunction = nullptr;
        
        ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1987 "parser.y"
    {
        if ((yyvsp[(2) - (3)].lexeme).type == VOID_TYPE){
                generator.addQuad("RET", "", "", "");
        }
        else{
                char* name = (yyvsp[(2) - (3)].lexeme).stringRep;
                char* realname1 = generator.getTemp(name);
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry((yyvsp[(2) - (3)].lexeme).stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = (yyvsp[(2) - (3)].lexeme).stringRep;
                }
                generator.addQuad("ASSIGN", name, "", generator.getFunctionName());
                generator.addQuad("RET", generator.getFunctionName(), "", "");
        }
;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 2008 "parser.y"
    {generator.addQuad("RET", "", "", "");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 2011 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false, VOID_TYPE);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
                generator.setFunctionName((yyvsp[(2) - (3)].stringValue));
        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 2025 "parser.y"
    {printf("Void function with parameters \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 2026 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false, VOID_TYPE);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
                generator.setFunctionName((yyvsp[(2) - (3)].stringValue));
        ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 2039 "parser.y"
    {printf("Void function without parameters \n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 2040 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                lexeme->stringRep = getCurrentCount();
                VariableType functionOutput = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false, functionOutput);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
                generator.setFunctionName((yyvsp[(2) - (3)].stringValue));
        ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 2054 "parser.y"
    {printf("Typed function with parameters \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 2055 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                lexeme->stringRep = getCurrentCount();
                VariableType functionOutput = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false, functionOutput);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
                generator.setFunctionName((yyvsp[(2) - (3)].stringValue));
                

        ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 2071 "parser.y"
    {printf("Typed function without parameters \n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 2078 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (2)].stringValue));
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                VariableType t = static_cast<VariableType>((yyvsp[(1) - (2)].varType));
                lexeme->type = t;
                currentFunction->addFunctionInputsType(t);
                lexeme->stringRep = getCurrentCount();
                entry = addEntryToTable((yyvsp[(2) - (2)].stringValue),lexeme,PARAMETER,true);

                // Code Gen
                const char* name = generator.addAssignment(entry);
                generator.addQuad("ALLOC",(yyvsp[(2) - (2)].stringValue),"",name);
        ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 2095 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (4)].stringValue));
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                int type1 = (yyvsp[(1) - (4)].varType);
                int type2 = (yyvsp[(4) - (4)].lexeme).type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in variable declaration",lineno);
                }
                else{
                        LexemeEntry* lexeme = new LexemeEntry;
                        VariableType t = static_cast<VariableType>(type1);
                        lexeme->type = t;
                        currentFunction->addFunctionInputsType(t);
                        lexeme->type = t;
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)(yyvsp[(4) - (4)].lexeme).floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)(yyvsp[(4) - (4)].lexeme).intVal;
                        }else{
                                lexeme->intVal = (yyvsp[(4) - (4)].lexeme).intVal;
                                lexeme->floatVal = (yyvsp[(4) - (4)].lexeme).floatVal;
                                lexeme->stringVal = (yyvsp[(4) - (4)].lexeme).stringVal;
                                lexeme->boolVal = (yyvsp[(4) - (4)].lexeme).boolVal;
                                lexeme->charVal = (yyvsp[(4) - (4)].lexeme).charVal;
                        }
                        entry = addEntryToTable((yyvsp[(2) - (4)].stringValue),lexeme,PARAMETER,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);

                        generator.addQuad("ALLOC",(yyvsp[(2) - (4)].stringValue),"",name);
                        
                        char* name1 = (yyvsp[(4) - (4)].lexeme).stringRep;

                        generator.addQuad("ASSIGN",name1,"",name);

                }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 4117 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 2141 "parser.y"








void yyerror(char* s)
{
        printSyntaxError( s, lineno );
    exit(0);
}


int main (void)
{
    Init();

    yyin = fopen("test2.txt", "r+");
    if (yyin == NULL)
    {
        printf(" Test File Not Found\n");
    }
    else
    {
        printf("====== Test File =====\n\n");
        FILE* testFile; char ch;
        testFile = fopen("test2.txt","r");
        while((ch=fgetc(testFile))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(testFile);
        printf("\n\n====== Parsing =====\n\n");
        int result = yyparse();

        printf("\n=================\n");
        
        if (result == 0) {
            printf("Parsing Successful\n");
        }
        else {
            printf("Parsing Failed\n");
        }
        printSymbolTables();
        generator.printQuadsToFile("output/quadruples.txt");
    }
    fclose(yyin);
   
    return 0;
}






