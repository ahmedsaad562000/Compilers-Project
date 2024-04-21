
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
     VOID = 311,
     RETURN = 312,
     PRINT = 313
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
#line 185 "parser.tab.c"

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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    37,    40,    43,    49,
      51,    52,    54,    56,    58,    60,    62,    64,    66,    70,
      72,    74,    78,    82,    86,    90,    94,    98,   102,   106,
     109,   111,   113,   115,   117,   120,   123,   125,   129,   133,
     135,   139,   143,   147,   149,   152,   154,   158,   160,   162,
     166,   168,   170,   174,   179,   183,   185,   187,   189,   191,
     193,   195,   197,   204,   208,   214,   219,   224,   229,   234,
     239,   245,   251,   261,   269,   280,   291,   297,   300,   302,
     307,   311,   313,   315,   317,   319,   321,   326,   332,   337,
     343,   348,   350,   354,   355
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    60,    61,    -1,    61,    -1,    64,    16,
      -1,    18,    60,    19,    -1,    76,    -1,    77,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    87,    -1,    57,    62,    16,    -1,    22,    16,    -1,
      23,    16,    -1,    58,    20,     7,    21,    16,    -1,    63,
      -1,    -1,    64,    -1,    11,    -1,    10,    -1,     8,    -1,
       9,    -1,    12,    -1,    13,    -1,    20,    64,    21,    -1,
      65,    -1,    66,    -1,    64,    37,    66,    -1,    64,    36,
      66,    -1,    64,    39,    66,    -1,    64,    38,    66,    -1,
      64,    35,    66,    -1,    64,    34,    66,    -1,    64,    47,
      64,    -1,    64,    46,    64,    -1,    48,    64,    -1,    12,
      -1,    13,    -1,    68,    -1,    67,    -1,    14,    54,    -1,
      14,    55,    -1,    69,    -1,    68,    41,    69,    -1,    68,
      40,    69,    -1,    70,    -1,    69,    44,    72,    -1,    69,
      43,    72,    -1,    69,    42,    72,    -1,    71,    -1,    40,
      71,    -1,    72,    -1,    20,    68,    21,    -1,     8,    -1,
       9,    -1,    72,    45,    72,    -1,    73,    -1,    14,    -1,
      14,    20,    21,    -1,    14,    20,    74,    21,    -1,    74,
      17,    63,    -1,    63,    -1,     8,    -1,     9,    -1,    11,
      -1,    10,    -1,    12,    -1,    13,    -1,    15,    86,    14,
      49,    75,    16,    -1,    86,    14,    16,    -1,    86,    14,
      49,    63,    16,    -1,    14,    49,    63,    16,    -1,    14,
      50,    63,    16,    -1,    14,    53,    63,    16,    -1,    14,
      51,    63,    16,    -1,    14,    52,    63,    16,    -1,    24,
      64,    18,    60,    19,    -1,    30,    64,    18,    60,    19,
      -1,    30,    64,    18,    60,    19,    31,    18,    60,    19,
      -1,    32,    18,    60,    19,    33,    64,    16,    -1,    25,
      20,    77,    64,    16,    64,    21,    18,    60,    19,    -1,
      25,    20,    78,    64,    16,    64,    21,    18,    60,    19,
      -1,    26,    64,    18,    84,    19,    -1,    84,    85,    -1,
      85,    -1,    27,    63,    29,    60,    -1,    28,    29,    60,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    88,    18,    60,    19,    -1,    56,    14,    20,    89,
      21,    -1,    56,    14,    20,    21,    -1,    86,    14,    20,
      89,    21,    -1,    86,    14,    20,    21,    -1,    90,    -1,
      89,    17,    90,    -1,    -1,    86,    14,    91,    86,    14,
      49,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     131,   133,   133,   133,   133,   133,   133,   133,   136,   137,
     138,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   156,   157,   160,   161,   164,   165,   166,   170,
     171,   172,   173,   175,   176,   178,   179,   183,   184,   185,
     186,   187,   192,   193,   197,   198,   204,   205,   206,   207,
     208,   209,   213,   216,   217,   222,   223,   224,   225,   226,
     230,   235,   236,   240,   244,   245,   249,   253,   254,   257,
     258,   264,   264,   264,   264,   264,   266,   269,   270,   271,
     272,   275,   276,   279,   279
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
  "MINUS_EQ", "MULT_EQ", "INC", "DEC", "VOID", "RETURN", "PRINT",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    80,    80,    81,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    87,    88,    88,    88,
      88,    89,    89,    91,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     5,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     1,     1,     2,     2,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     1,     3,     1,     1,     3,
       1,     1,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     6,     3,     5,     4,     4,     4,     4,     4,
       5,     5,     9,     7,    10,    10,     5,     2,     1,     4,
       3,     1,     1,     1,     1,     1,     4,     5,     4,     5,
       4,     1,     3,     0,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,    92,    93,    95,    94,    57,    58,    40,    41,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     3,     0,    29,
      30,    43,    42,    46,    49,    53,    55,    60,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,    61,
       0,    42,    16,    17,     0,     0,     0,     0,     0,    61,
       0,    54,    39,     0,    57,    58,    23,    22,    40,    41,
       0,    19,    21,     0,     1,     2,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    65,     0,     0,     0,     0,     0,
       0,     0,     5,    28,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,    36,    35,    32,
      31,    34,    33,    38,    37,    48,    47,    52,    51,    50,
      59,    73,     0,     0,     0,     0,    63,    75,    76,    78,
      79,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    98,     0,     0,   101,     0,   100,     0,
       0,    96,    64,    66,    67,    69,    68,    70,    71,     0,
      80,     0,     0,     0,     0,    86,    87,    81,     0,   103,
       0,    97,    18,    99,    74,    72,     0,     0,     0,    90,
       0,     0,     0,   102,     0,     0,    89,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    84,    85,
     104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    80,    81,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   105,   179,    38,    39,    40,
      41,    42,    43,    44,    45,   159,   160,    46,    47,    48,
     165,   166,   202
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
     701,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -14,   395,   701,    87,   -13,    -1,    87,   -15,    87,    87,
      -6,   342,    87,     4,    71,    13,   197,   -39,   123,   -39,
     -39,   -39,   -20,    16,   -39,   -39,   -38,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,    17,   -39,    25,    54,
      71,    71,    71,    71,    71,   -39,   -39,    38,   253,    -4,
     372,   -11,   -39,   -39,   196,   619,   252,   308,   701,    34,
     114,   -39,   -39,    58,    76,   127,   -39,   -39,   223,   279,
      88,   -39,   532,   101,   -39,   -39,   -39,   133,   133,   133,
     133,   133,   133,    87,    87,   114,   114,   137,   137,   137,
     137,    37,   701,   -39,   -39,    11,    99,   105,   108,   115,
     117,   100,   -39,   -39,   -39,   701,   405,    87,    87,   122,
      49,   701,   309,   -11,    66,   -39,   129,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,    16,    16,   -38,   -38,   -38,
     -39,   -39,   160,    71,   365,    71,   -39,   -39,   -39,   -39,
     -39,   -39,   238,   421,   716,   730,    -7,    71,   126,    98,
     -39,   477,   135,   -39,   165,    89,   -39,   155,   -39,   157,
     168,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   169,
     -39,    87,    87,   158,   701,   -39,   -39,   162,    87,   -39,
     395,   -39,   -39,   -39,   -39,   -39,   428,   484,   701,   701,
     171,   744,   395,   -39,   176,   178,   701,   701,   -39,   199,
     701,   701,   533,   167,   589,   645,   -39,   238,   -39,   -39,
     -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -12,   -24,   -39,   -27,    -5,   -39,   215,   -39,    -9,
     112,   -39,   203,   261,   -39,   -39,     1,   -39,   161,   163,
     -39,   -39,   -39,   -39,   -39,   -39,    77,   -10,   -39,   -39,
      83,    48,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
      58,    57,    85,    62,    61,    65,    49,   100,    60,   141,
     114,    64,    68,    66,    67,    63,    49,    72,    73,    82,
      95,    96,   104,   106,   107,   108,   109,   110,   145,    95,
      96,   101,   146,    83,    85,    50,    51,    52,    53,    54,
      55,    56,   143,   102,    82,    82,    82,    82,    82,    82,
      55,    56,   111,   141,    49,   119,   122,   142,    97,    98,
      99,   123,    74,    75,    76,    77,    78,    79,    59,     1,
       2,     3,     4,     5,    13,   103,   157,   158,   124,    74,
      75,    76,    77,    78,    79,    59,   143,   163,   133,   134,
     144,    13,   -24,   -24,    21,     6,     7,   -24,    85,     8,
       9,    59,    22,   153,   125,   -24,   190,    13,   126,   161,
     191,    21,   154,   155,   164,   147,   170,   185,   172,    22,
      85,   148,     6,     7,   149,   157,   158,    21,    69,    85,
     183,   150,   164,   151,    70,    22,   156,    85,    82,    86,
      82,     6,     7,   -25,   -25,     6,     7,    59,   -25,   152,
     167,    69,    82,    70,    21,   184,   -25,    87,    88,    89,
      90,    91,    92,     1,     2,     3,     4,     5,   188,    93,
      94,   192,   199,    21,   190,    85,   196,   197,   193,   189,
     164,   168,    85,   201,   194,   195,   206,   198,    85,   207,
      85,    85,   209,   200,   210,   212,   211,    84,   214,   215,
       1,     2,     3,     4,     5,     6,     7,   135,   136,     8,
       9,    10,    11,   213,   115,    12,   217,    13,   220,    14,
      15,    16,    17,    18,    71,   169,   117,    19,   118,    20,
      87,    88,    89,    90,    91,    92,   186,    21,   203,   -26,
     -26,     0,    93,    94,   -26,    22,   173,   174,   175,   176,
     177,   178,   -26,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     0,     0,     8,     9,    10,    11,     0,
     120,    12,   112,    13,     0,    14,    15,    16,    17,    18,
       0,     0,     0,    19,     0,    20,    87,    88,    89,    90,
      91,    92,     0,    21,     0,   -27,   -27,     0,    93,    94,
     -27,    22,   127,   128,   129,   130,   131,   132,   -27,    23,
      24,    25,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     8,     9,    10,    11,     0,   121,    12,   162,    13,
       0,    14,    15,    16,    17,    18,     0,     0,     0,    19,
       0,    20,    87,    88,    89,    90,    91,    92,     0,    21,
       6,     7,     0,     0,    93,    94,    69,    22,   137,   138,
     139,   140,    70,     0,     0,    23,    24,    25,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     8,     9,    10,
      11,     0,     0,    12,   171,    13,     0,    14,    15,    16,
      17,    18,     0,   113,     0,    19,     0,    20,     1,     2,
       3,     4,     5,     0,     0,    21,    87,    88,    89,    90,
      91,    92,     0,    22,     0,     0,     0,     0,    93,    94,
       0,    23,    24,    25,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     8,     9,    10,    11,     0,     0,    12,
     180,    13,     0,    14,    15,    16,    17,    18,     0,   204,
       0,    19,     0,    20,    50,    51,    52,    53,    54,     0,
       0,    21,    87,    88,    89,    90,    91,    92,     0,    22,
       0,     0,     0,     0,    93,    94,     0,    23,    24,    25,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     8,
       9,    10,    11,     0,     0,    12,   187,    13,     0,    14,
      15,    16,    17,    18,     0,   205,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,    21,    87,    88,
      89,    90,    91,    92,     0,    22,     0,     0,     0,     0,
      93,    94,     0,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     0,     0,     8,     9,    10,    11,     0,
       0,    12,   216,    13,     0,    14,    15,    16,    17,    18,
       0,     0,     0,    19,     0,    20,    87,    88,    89,    90,
      91,    92,     0,    21,     0,     0,     0,     0,    93,    94,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     8,     9,    10,    11,     0,     0,    12,   218,    13,
       0,    14,    15,    16,    17,    18,     0,     0,     0,    19,
       0,    20,     1,     2,     3,     4,     5,     0,     0,    21,
       0,     0,     0,   116,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     8,     9,    10,
      11,     0,     0,    12,   219,    13,     0,    14,    15,    16,
      17,    18,     0,     0,     0,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     8,     9,    10,    11,     0,     0,    12,
       0,    13,     0,    14,    15,    16,    17,    18,     0,     0,
       0,    19,   181,    20,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,   182,     0,     0,    22,
      87,    88,    89,    90,    91,    92,     0,    23,    24,    25,
     208,     0,    93,    94,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,    93,    94,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
      93,    94
};

static const yytype_int16 yycheck[] =
{
      12,    11,    26,    16,    13,    20,    20,    45,    13,    16,
      21,    16,    18,    18,    19,    16,    20,    22,    14,    24,
      40,    41,    49,    50,    51,    52,    53,    54,    17,    40,
      41,    14,    21,    20,    58,    49,    50,    51,    52,    53,
      54,    55,    49,    18,    49,    50,    51,    52,    53,    54,
      54,    55,    14,    16,    20,    65,    68,    20,    42,    43,
      44,    70,     8,     9,    10,    11,    12,    13,    14,     3,
       4,     5,     6,     7,    20,    21,    27,    28,    20,     8,
       9,    10,    11,    12,    13,    14,    49,    21,    93,    94,
     102,    20,    16,    17,    40,     8,     9,    21,   122,    12,
      13,    14,    48,   115,    16,    29,    17,    20,     7,   121,
      21,    40,   117,   118,   124,    16,   143,    19,   145,    48,
     144,    16,     8,     9,    16,    27,    28,    40,    14,   153,
     157,    16,   142,    16,    20,    48,    14,   161,   143,    16,
     145,     8,     9,    16,    17,     8,     9,    14,    21,    49,
      21,    14,   157,    20,    40,    29,    29,    34,    35,    36,
      37,    38,    39,     3,     4,     5,     6,     7,    33,    46,
      47,    16,   184,    40,    17,   199,   181,   182,    21,    14,
     190,    21,   206,   188,    16,    16,   198,    29,   212,    18,
     214,   215,   202,    31,    18,   207,    18,     0,   210,   211,
       3,     4,     5,     6,     7,     8,     9,    95,    96,    12,
      13,    14,    15,    14,    18,    18,    49,    20,   217,    22,
      23,    24,    25,    26,    21,   142,    65,    30,    65,    32,
      34,    35,    36,    37,    38,    39,   159,    40,   190,    16,
      17,    -1,    46,    47,    21,    48,     8,     9,    10,    11,
      12,    13,    29,    56,    57,    58,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      18,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    34,    35,    36,    37,
      38,    39,    -1,    40,    -1,    16,    17,    -1,    46,    47,
      21,    48,    87,    88,    89,    90,    91,    92,    29,    56,
      57,    58,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    15,    -1,    18,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    34,    35,    36,    37,    38,    39,    -1,    40,
       8,     9,    -1,    -1,    46,    47,    14,    48,    97,    98,
      99,   100,    20,    -1,    -1,    56,    57,    58,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    21,    -1,    30,    -1,    32,     3,     4,
       5,     6,     7,    -1,    -1,    40,    34,    35,    36,    37,
      38,    39,    -1,    48,    -1,    -1,    -1,    -1,    46,    47,
      -1,    56,    57,    58,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    21,
      -1,    30,    -1,    32,    49,    50,    51,    52,    53,    -1,
      -1,    40,    34,    35,    36,    37,    38,    39,    -1,    48,
      -1,    -1,    -1,    -1,    46,    47,    -1,    56,    57,    58,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    21,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    34,    35,
      36,    37,    38,    39,    -1,    48,    -1,    -1,    -1,    -1,
      46,    47,    -1,    56,    57,    58,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    34,    35,    36,    37,
      38,    39,    -1,    40,    -1,    -1,    -1,    -1,    46,    47,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,     3,     4,     5,     6,     7,    -1,    -1,    40,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    16,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    16,    -1,    -1,    48,
      34,    35,    36,    37,    38,    39,    -1,    56,    57,    58,
      16,    -1,    46,    47,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    13,
      14,    15,    18,    20,    22,    23,    24,    25,    26,    30,
      32,    40,    48,    56,    57,    58,    60,    61,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    76,    77,
      78,    79,    80,    81,    82,    83,    86,    87,    88,    20,
      49,    50,    51,    52,    53,    54,    55,    86,    60,    14,
      64,    68,    16,    16,    64,    20,    64,    64,    18,    14,
      20,    71,    64,    14,     8,     9,    10,    11,    12,    13,
      62,    63,    64,    20,     0,    61,    16,    34,    35,    36,
      37,    38,    39,    46,    47,    40,    41,    42,    43,    44,
      45,    14,    18,    21,    63,    74,    63,    63,    63,    63,
      63,    14,    19,    21,    21,    18,    14,    77,    78,    86,
      18,    18,    60,    68,    20,    16,     7,    66,    66,    66,
      66,    66,    66,    64,    64,    69,    69,    72,    72,    72,
      72,    16,    20,    49,    60,    17,    21,    16,    16,    16,
      16,    16,    49,    60,    64,    64,    14,    27,    28,    84,
      85,    60,    19,    21,    86,    89,    90,    21,    21,    89,
      63,    19,    63,     8,     9,    10,    11,    12,    13,    75,
      19,    16,    16,    63,    29,    19,    85,    19,    33,    14,
      17,    21,    16,    21,    16,    16,    64,    64,    29,    60,
      31,    64,    91,    90,    21,    21,    60,    18,    16,    86,
      18,    18,    60,    14,    60,    60,    19,    49,    19,    19,
      75
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
        case 47:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {printf("PLUS\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {printf("MINUS\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {printf("MULT\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {printf("DIV\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {printf("MOD\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {printf("--------------negation------------------------\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {printf("INT_VAL\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {printf("FLOAT_VAL\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("EXP\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {printf("FUNCTION_CALL\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {printf("IDENTIFIER\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {printf("WHILE\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {printf("IF\n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {printf("IF ELSE\n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {printf("REPEAT UNTIL\n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {printf("FOR\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {printf("FOR ELSE\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {printf("SWITCH\n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {printf("CASE\n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {printf("DEFAULT\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {printf("FUNCTION\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {printf("VOID FUNCTION WITH PARAMS\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {printf("VOID FUNCTION WITHOUT PARAMS\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {printf("TYPE FUNCTION WITH PARAMS\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {printf("TYPE FUNCTION WITHOUT PARAMS\n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {printf("Multiple PARAMS\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {printf("Param without default\n");}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {printf("Param with default\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1888 "parser.tab.c"
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
#line 282 "parser.y"








void yyerror(char* s)
{
    fprintf(stderr, "\n ERROR LINE %d :\n %s \n", lineno, s);
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






