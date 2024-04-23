
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
    #include <stdlib.h>

    extern FILE *yyin;
    extern int lineno; /* Line Number tacker from lexer */
    int yylex();
    int yywrap();
    void yyerror(char*);
    

/* Line 189 of yacc.c  */
#line 85 "parser.tab.c"

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
     INT_VAL = 263,
     FLOAT_VAL = 264,
     CHAR_VAL = 265,
     STRING_VAL = 266,
     TRUE_VAL = 267,
     FALSE_VAL = 268,
     IDENTIFIER = 269,
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "parser.tab.c"

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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   808

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

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
       0,     0,     3,     6,     8,    11,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    37,    40,    43,    49,
      51,    52,    54,    56,    58,    60,    62,    66,    70,    74,
      78,    82,    86,    90,    94,    97,   101,   103,   105,   107,
     109,   112,   115,   117,   121,   125,   127,   131,   135,   139,
     141,   144,   146,   150,   152,   154,   158,   160,   162,   166,
     171,   175,   177,   179,   181,   183,   185,   187,   189,   196,
     200,   206,   211,   216,   221,   226,   231,   239,   247,   259,
     269,   280,   291,   299,   302,   304,   309,   313,   315,   317,
     319,   321,   323,   328,   334,   339,   345,   350,   352,   356,
     357
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    61,    62,    -1,    62,    -1,    65,    16,
      -1,    18,    61,    19,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    88,    -1,    58,    63,    16,    -1,    22,    16,    -1,
      23,    16,    -1,    59,    20,     7,    21,    16,    -1,    64,
      -1,    -1,    65,    -1,    11,    -1,    10,    -1,    66,    -1,
      67,    -1,    65,    37,    67,    -1,    65,    36,    67,    -1,
      65,    39,    67,    -1,    65,    38,    67,    -1,    65,    35,
      67,    -1,    65,    34,    67,    -1,    65,    47,    65,    -1,
      65,    46,    65,    -1,    48,    65,    -1,    20,    66,    21,
      -1,    12,    -1,    13,    -1,    69,    -1,    68,    -1,    14,
      54,    -1,    14,    55,    -1,    70,    -1,    69,    41,    70,
      -1,    69,    40,    70,    -1,    71,    -1,    70,    44,    73,
      -1,    70,    43,    73,    -1,    70,    42,    73,    -1,    72,
      -1,    40,    72,    -1,    73,    -1,    20,    69,    21,    -1,
       8,    -1,     9,    -1,    73,    45,    73,    -1,    74,    -1,
      14,    -1,    14,    20,    21,    -1,    14,    20,    75,    21,
      -1,    75,    17,    64,    -1,    64,    -1,     8,    -1,     9,
      -1,    11,    -1,    10,    -1,    12,    -1,    13,    -1,    15,
      87,    14,    49,    76,    16,    -1,    87,    14,    16,    -1,
      87,    14,    49,    64,    16,    -1,    14,    49,    64,    16,
      -1,    14,    50,    64,    16,    -1,    14,    53,    64,    16,
      -1,    14,    51,    64,    16,    -1,    14,    52,    64,    16,
      -1,    24,    20,    65,    21,    18,    61,    19,    -1,    30,
      20,    65,    21,    18,    61,    19,    -1,    30,    20,    65,
      21,    18,    61,    19,    31,    18,    61,    19,    -1,    32,
      18,    61,    19,    33,    20,    65,    21,    16,    -1,    25,
      20,    78,    65,    16,    65,    21,    18,    61,    19,    -1,
      25,    20,    79,    65,    16,    65,    21,    18,    61,    19,
      -1,    26,    20,    65,    21,    18,    85,    19,    -1,    85,
      86,    -1,    86,    -1,    27,    64,    29,    61,    -1,    28,
      29,    61,    -1,     3,    -1,     4,    -1,     5,    -1,     7,
      -1,     6,    -1,    89,    18,    61,    19,    -1,    57,    14,
      20,    90,    21,    -1,    57,    14,    20,    21,    -1,    87,
      14,    20,    90,    21,    -1,    87,    14,    20,    21,    -1,
      91,    -1,    90,    17,    91,    -1,    -1,    87,    14,    92,
      87,    14,    49,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   133,
     133,   135,   135,   135,   138,   139,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   156,   157,
     160,   161,   164,   165,   166,   169,   170,   171,   172,   174,
     175,   177,   178,   182,   183,   184,   185,   186,   191,   192,
     196,   197,   203,   204,   205,   206,   207,   208,   212,   215,
     216,   221,   222,   223,   224,   225,   229,   234,   235,   239,
     243,   244,   248,   252,   253,   256,   257,   263,   263,   263,
     263,   263,   265,   268,   269,   270,   271,   274,   275,   278,
     278
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "BOOL", "STRING",
  "INT_VAL", "FLOAT_VAL", "CHAR_VAL", "STRING_VAL", "TRUE_VAL",
  "FALSE_VAL", "IDENTIFIER", "CONST", "SEMICOLON", "COMMA", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "BREAK", "CONTINUE", "WHILE", "FOR",
  "SWITCH", "CASE", "DEFAULT", "COLON", "IF", "ELSE", "REPEAT", "UNTIL",
  "LE", "GE", "NE", "EQUAL", "LESS", "GREATER", "MINUS", "PLUS", "MOD",
  "DIV", "MULT", "EXP", "OR", "AND", "NOT", "ASSIGN", "DIV_EQ", "PLUS_EQ",
  "MINUS_EQ", "MULT_EQ", "INC", "DEC", "UMINUS", "VOID", "RETURN", "PRINT",
  "$accept", "stmts", "stmt", "ret_val", "value", "expr", "bool_expr",
  "arithmetic_expr", "unary_expr", "binary_expr", "term", "negat", "para",
  "factor", "function_call", "call_params", "constant", "const_dec_stmt",
  "var_dec_stmt", "assign_stmt", "while_stmt", "if_stmt",
  "repeat_until_stmt", "for_stmt", "switch_stmt", "case_stmts",
  "case_stmt", "type", "function", "function_prototype", "params", "param",
  "$@1", 0
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
       0,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    78,
      78,    79,    79,    79,    79,    79,    80,    81,    81,    82,
      83,    83,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    88,    89,    89,    89,    89,    90,    90,    92,
      91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     5,     1,
       0,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       2,     2,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     1,     3,     1,     1,     3,     1,     1,     3,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     6,     3,
       5,     4,     4,     4,     4,     4,     7,     7,    11,     9,
      10,    10,     7,     2,     1,     4,     3,     1,     1,     1,
       1,     1,     4,     5,     4,     5,     4,     1,     3,     0,
       7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    88,    89,    91,    90,    53,    54,    36,    37,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     3,     0,    24,
      25,    39,    38,    42,    45,    49,    51,    56,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,    57,
       0,    24,    38,    16,    17,     0,     0,     0,     0,     0,
      57,     0,    50,    34,     0,    23,    22,     0,    19,    21,
       0,     1,     2,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    61,     0,     0,     0,     0,     0,     0,     0,     5,
      35,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    31,    30,    27,    26,    29,    28,
      33,    32,    44,    43,    48,    47,    46,    55,    69,     0,
       0,     0,     0,    59,    71,    72,    74,    75,    73,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      97,     0,    96,     0,     0,    92,    60,    62,    63,    65,
      64,    66,    67,     0,     0,     0,     0,     0,     0,     0,
      99,     0,    93,    18,    95,    70,    68,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,    98,    76,     0,
       0,     0,     0,    82,    83,    77,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,    85,     0,    79,
       0,    80,    81,     0,   100,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    77,    78,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   102,   173,    38,    39,    40,
      41,    42,    43,    44,    45,   192,   193,    46,    47,    48,
     159,   160,   196
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int16 yypact[] =
{
     717,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
      69,   405,   717,    65,     2,    20,    30,    33,    43,    52,
      62,    19,    65,    15,    56,    66,   204,   -43,   732,   -43,
     -43,   -43,    98,   107,   -43,   -43,    37,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,    74,   -43,    79,    11,
      56,    56,    56,    56,    56,   -43,   -43,    88,   261,   -17,
     545,    85,    14,   -43,   -43,    65,    87,    65,    65,   717,
      92,   117,   -43,   -43,    94,   -43,   -43,   100,   -43,   545,
     123,   -43,   -43,   -43,   132,   132,   132,   132,   132,   132,
      65,    65,   117,   117,   101,   101,   101,   101,    32,   717,
     -43,   -43,     9,   116,   118,   120,   131,   137,   105,   -43,
     -43,   -43,   211,   416,    65,    65,   141,   268,   325,   318,
      14,   173,   -43,   135,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   107,   107,    37,    37,    37,   -43,   -43,   234,
      56,   375,    56,   -43,   -43,   -43,   -43,   -43,   -43,   286,
     140,   746,   761,     0,   142,   143,   126,   -43,   150,    54,
     -43,   149,   -43,    82,   151,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   157,   717,    65,    65,    13,   717,   154,
     -43,   405,   -43,   -43,   -43,   -43,   -43,   432,   382,   439,
      56,   146,   -14,   -43,   489,    65,   405,   -43,   -43,   163,
     164,   155,   717,   -43,   -43,   158,   496,   171,   717,   717,
     717,   717,   177,   184,   152,   546,   603,   717,   717,   -43,
     286,   -43,   -43,   660,   -43,   -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -12,   -24,   -43,   -42,    -7,   189,   267,   -43,    -9,
      35,   -43,   182,    48,   -43,   -43,   -15,   -43,   148,   159,
     -43,   -43,   -43,   -43,   -43,   -43,    23,   -10,   -43,   -43,
      81,    40,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      58,    57,    82,    49,    62,   203,    60,   101,   103,   104,
     105,   106,   107,   190,   191,    73,   138,    79,    63,     6,
       7,    75,    76,     8,     9,    59,   142,     6,     7,    74,
     143,    13,   100,    70,    82,   111,    64,    55,    56,    71,
     190,   191,    79,    79,    79,    79,    79,    79,   138,   140,
      65,    21,   139,    66,    92,    93,   116,   119,   112,    22,
     117,   118,   120,    67,     6,     7,    75,    76,     8,     9,
      59,   181,    68,     6,     7,   182,    13,     8,     9,    59,
      69,   140,    97,   130,   131,    13,    80,   141,    98,    49,
       1,     2,     3,     4,     5,    82,    21,    99,   164,   181,
     166,   113,   108,   184,    22,    21,   110,   151,   152,     6,
       7,   158,    49,    22,   121,    70,   122,    82,    50,    51,
      52,    53,    54,    55,    56,     6,     7,   132,   133,   158,
     123,    70,   144,    79,   145,    79,   146,    71,    92,    93,
       6,     7,   134,   135,   136,   137,    59,   147,   201,    94,
      95,    96,    71,   148,   149,   153,   161,    21,   174,   179,
     177,   178,   187,    82,   180,   183,   194,   185,   188,   189,
      82,   158,    21,   186,   195,   202,     1,     2,     3,     4,
       5,   208,   209,    79,   210,   214,   207,    82,   206,   212,
     211,    82,    82,    82,   157,   218,   215,   216,   217,    82,
     219,   220,    61,    72,    81,   224,   223,     1,     2,     3,
       4,     5,     6,     7,   114,   204,     8,     9,    10,    11,
     163,   197,    12,     0,    13,   115,    14,    15,    16,    17,
      18,     0,   150,     0,    19,     0,    20,     1,     2,     3,
       4,     5,     0,     0,    21,    84,    85,    86,    87,    88,
      89,     0,    22,     0,     0,   162,     0,    90,    91,     0,
       0,    23,    24,    25,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     8,     9,    10,    11,     0,     0,    12,
     109,    13,     0,    14,    15,    16,    17,    18,     0,   154,
       0,    19,     0,    20,   167,   168,   169,   170,   171,   172,
       0,    21,    84,    85,    86,    87,    88,    89,     0,    22,
       0,     0,     0,     0,    90,    91,     0,     0,    23,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     0,     0,
       8,     9,    10,    11,     0,     0,    12,   156,    13,     0,
      14,    15,    16,    17,    18,     0,   155,     0,    19,     0,
      20,   124,   125,   126,   127,   128,   129,     0,    21,    84,
      85,    86,    87,    88,    89,     0,    22,     0,     0,     0,
       0,    90,    91,     0,     0,    23,    24,    25,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     8,     9,    10,
      11,     0,     0,    12,   165,    13,     0,    14,    15,    16,
      17,    18,     0,   199,     0,    19,     0,    20,     1,     2,
       3,     4,     5,     0,     0,    21,    84,    85,    86,    87,
      88,    89,     0,    22,     0,     0,     0,     0,    90,    91,
       0,     0,    23,    24,    25,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     8,     9,    10,    11,     0,     0,
      12,   198,    13,     0,    14,    15,    16,    17,    18,     0,
     200,     0,    19,     0,    20,    50,    51,    52,    53,    54,
       0,     0,    21,    84,    85,    86,    87,    88,    89,     0,
      22,     0,     0,     0,     0,    90,    91,     0,     0,    23,
      24,    25,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     8,     9,    10,    11,     0,     0,    12,   205,    13,
       0,    14,    15,    16,    17,    18,     0,   213,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    21,
      84,    85,    86,    87,    88,    89,     0,    22,     0,     0,
       0,     0,    90,    91,     0,     0,    23,    24,    25,     1,
       2,     3,     4,     5,     6,     7,     0,     0,     8,     9,
      10,    11,     0,     0,    12,   221,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,    19,     0,    20,    84,
      85,    86,    87,    88,    89,     0,    21,     0,     0,     0,
       0,    90,    91,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     0,     0,     8,     9,    10,    11,     0,
       0,    12,   222,    13,     0,    14,    15,    16,    17,    18,
       0,     0,     0,    19,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     8,     9,    10,    11,     0,     0,    12,   225,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     8,
       9,    10,    11,     0,     0,    12,     0,    13,     0,    14,
      15,    16,    17,    18,     0,     0,     0,    19,    83,    20,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,   175,     0,     0,    22,    84,    85,    86,    87,
      88,    89,     0,     0,    23,    24,    25,   176,    90,    91,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,    90,    91
};

static const yytype_int16 yycheck[] =
{
      12,    11,    26,    20,    13,    19,    13,    49,    50,    51,
      52,    53,    54,    27,    28,    22,    16,    24,    16,     8,
       9,    10,    11,    12,    13,    14,    17,     8,     9,    14,
      21,    20,    21,    14,    58,    21,    16,    54,    55,    20,
      27,    28,    49,    50,    51,    52,    53,    54,    16,    49,
      20,    40,    20,    20,    40,    41,    66,    69,    65,    48,
      67,    68,    71,    20,     8,     9,    10,    11,    12,    13,
      14,    17,    20,     8,     9,    21,    20,    12,    13,    14,
      18,    49,    45,    90,    91,    20,    20,    99,    14,    20,
       3,     4,     5,     6,     7,   119,    40,    18,   140,    17,
     142,    14,    14,    21,    48,    40,    21,   114,   115,     8,
       9,   121,    20,    48,    20,    14,    16,   141,    49,    50,
      51,    52,    53,    54,    55,     8,     9,    92,    93,   139,
       7,    14,    16,   140,    16,   142,    16,    20,    40,    41,
       8,     9,    94,    95,    96,    97,    14,    16,   190,    42,
      43,    44,    20,    16,    49,    14,    21,    40,    18,    33,
      18,    18,   174,   187,    14,    16,   178,    16,   175,   176,
     194,   181,    40,    16,    20,    29,     3,     4,     5,     6,
       7,    18,    18,   190,    29,    14,   196,   211,   195,    31,
     202,   215,   216,   217,    21,    18,   208,   209,   210,   223,
      16,    49,    13,    21,     0,   220,   218,     3,     4,     5,
       6,     7,     8,     9,    66,   192,    12,    13,    14,    15,
     139,   181,    18,    -1,    20,    66,    22,    23,    24,    25,
      26,    -1,    21,    -1,    30,    -1,    32,     3,     4,     5,
       6,     7,    -1,    -1,    40,    34,    35,    36,    37,    38,
      39,    -1,    48,    -1,    -1,    21,    -1,    46,    47,    -1,
      -1,    57,    58,    59,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    21,
      -1,    30,    -1,    32,     8,     9,    10,    11,    12,    13,
      -1,    40,    34,    35,    36,    37,    38,    39,    -1,    48,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    57,    58,
      59,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    -1,    21,    -1,    30,    -1,
      32,    84,    85,    86,    87,    88,    89,    -1,    40,    34,
      35,    36,    37,    38,    39,    -1,    48,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    57,    58,    59,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    21,    -1,    30,    -1,    32,     3,     4,
       5,     6,     7,    -1,    -1,    40,    34,    35,    36,    37,
      38,    39,    -1,    48,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    57,    58,    59,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    -1,
      21,    -1,    30,    -1,    32,    49,    50,    51,    52,    53,
      -1,    -1,    40,    34,    35,    36,    37,    38,    39,    -1,
      48,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    57,
      58,    59,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    21,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      34,    35,    36,    37,    38,    39,    -1,    48,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    57,    58,    59,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    34,
      35,    36,    37,    38,    39,    -1,    40,    -1,    -1,    -1,
      -1,    46,    47,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    16,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    48,    34,    35,    36,    37,
      38,    39,    -1,    -1,    57,    58,    59,    16,    46,    47,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    13,
      14,    15,    18,    20,    22,    23,    24,    25,    26,    30,
      32,    40,    48,    57,    58,    59,    61,    62,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    77,    78,
      79,    80,    81,    82,    83,    84,    87,    88,    89,    20,
      49,    50,    51,    52,    53,    54,    55,    87,    61,    14,
      65,    66,    69,    16,    16,    20,    20,    20,    20,    18,
      14,    20,    72,    65,    14,    10,    11,    63,    64,    65,
      20,     0,    62,    16,    34,    35,    36,    37,    38,    39,
      46,    47,    40,    41,    42,    43,    44,    45,    14,    18,
      21,    64,    75,    64,    64,    64,    64,    64,    14,    19,
      21,    21,    65,    14,    78,    79,    87,    65,    65,    61,
      69,    20,    16,     7,    67,    67,    67,    67,    67,    67,
      65,    65,    70,    70,    73,    73,    73,    73,    16,    20,
      49,    61,    17,    21,    16,    16,    16,    16,    16,    49,
      21,    65,    65,    14,    21,    21,    19,    21,    87,    90,
      91,    21,    21,    90,    64,    19,    64,     8,     9,    10,
      11,    12,    13,    76,    18,    16,    16,    18,    18,    33,
      14,    17,    21,    16,    21,    16,    16,    61,    65,    65,
      27,    28,    85,    86,    61,    20,    92,    91,    19,    21,
      21,    64,    29,    19,    86,    19,    65,    87,    18,    18,
      29,    61,    31,    21,    14,    61,    61,    61,    18,    16,
      49,    19,    19,    61,    76,    19
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
        case 43:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {printf("PLUS\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {printf("MINUS\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {printf("MULT\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {printf("DIV\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {printf("MOD\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {printf("--------------negation------------------------\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {printf("INT_VAL\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {printf("FLOAT_VAL\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {printf("EXP\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("FUNCTION_CALL\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {printf("IDENTIFIER\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    {printf("WHILE\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {printf("IF\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {printf("IF ELSE\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {printf("REPEAT UNTIL\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {printf("FOR\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {printf("FOR ELSE\n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {printf("SWITCH\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {printf("CASE\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {printf("DEFAULT\n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {printf("FUNCTION\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {printf("VOID FUNCTION WITH PARAMS\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {printf("VOID FUNCTION WITHOUT PARAMS\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {printf("TYPE FUNCTION WITH PARAMS\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {printf("TYPE FUNCTION WITHOUT PARAMS\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {printf("Multiple PARAMS\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {printf("Param without default\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {printf("Param with default\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1891 "parser.tab.c"
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
#line 281 "parser.y"








void yyerror(char* s)
{
    fprintf(stderr, "\n ERROR AT LINE %d :\n %s \n", lineno, s);
    exit(1);
}


int main (void)
{
    yyin = fopen("test.txt", "r+");
    if (yyin == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf("====== Test File =====\n\n");
        FILE* testFile; char ch;
        testFile = fopen("test.txt","r");
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
    }
    fclose(yyin);
    return 0;
}






