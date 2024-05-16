
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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   788

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

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
      23,    25,    27,    29,    31,    33,    35,    39,    42,    45,
      51,    53,    54,    56,    58,    60,    62,    64,    68,    72,
      76,    80,    84,    88,    92,    96,    99,   103,   105,   107,
     109,   111,   114,   117,   119,   123,   127,   129,   133,   137,
     141,   143,   146,   148,   152,   156,   158,   160,   162,   164,
     165,   170,   171,   177,   181,   183,   185,   187,   189,   191,
     193,   195,   202,   206,   212,   217,   222,   227,   232,   237,
     238,   239,   249,   250,   251,   252,   264,   265,   271,   272,
     273,   274,   275,   288,   289,   293,   294,   305,   306,   317,
     318,   327,   330,   332,   337,   341,   343,   345,   347,   349,
     351,   352,   358,   359,   366,   367,   373,   374,   381,   382,
     388,   390,   394,   397
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    61,    62,    -1,    62,    -1,    66,    16,
      -1,    -1,    18,    63,    61,    19,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    86,    -1,    92,    -1,    96,
      -1,   101,    -1,   106,    -1,    58,    64,    16,    -1,    22,
      16,    -1,    23,    16,    -1,    59,    20,    65,    21,    16,
      -1,    65,    -1,    -1,    66,    -1,    12,    -1,    11,    -1,
      67,    -1,    68,    -1,    66,    37,    68,    -1,    66,    36,
      68,    -1,    66,    39,    68,    -1,    66,    38,    68,    -1,
      66,    35,    68,    -1,    66,    34,    68,    -1,    66,    47,
      66,    -1,    66,    46,    66,    -1,    48,    66,    -1,    20,
      67,    21,    -1,    13,    -1,    14,    -1,    70,    -1,    69,
      -1,     8,    54,    -1,     8,    55,    -1,    71,    -1,    70,
      41,    71,    -1,    70,    40,    71,    -1,    72,    -1,    71,
      44,    74,    -1,    71,    43,    74,    -1,    71,    42,    74,
      -1,    73,    -1,    40,    73,    -1,    74,    -1,    20,    70,
      21,    -1,    73,    45,    73,    -1,     9,    -1,    10,    -1,
      75,    -1,     8,    -1,    -1,     8,    20,    76,    21,    -1,
      -1,     8,    20,    77,    78,    21,    -1,    78,    17,    65,
      -1,    65,    -1,     9,    -1,    10,    -1,    12,    -1,    11,
      -1,    13,    -1,    14,    -1,    15,   105,     8,    49,    79,
      16,    -1,   105,     8,    16,    -1,   105,     8,    49,    65,
      16,    -1,     8,    49,    65,    16,    -1,     8,    50,    65,
      16,    -1,     8,    53,    65,    16,    -1,     8,    51,    65,
      16,    -1,     8,    52,    65,    16,    -1,    -1,    -1,    24,
      20,    66,    84,    21,    18,    85,    61,    19,    -1,    -1,
      -1,    -1,    30,    20,    66,    87,    21,    18,    88,    61,
      19,    89,    90,    -1,    -1,    31,    18,    91,    61,    19,
      -1,    -1,    -1,    -1,    -1,    32,    18,    93,    61,    19,
      94,    33,    20,    66,    95,    21,    16,    -1,    -1,    25,
      97,    98,    -1,    -1,    20,    81,    66,    99,    16,    66,
      21,    18,    61,    19,    -1,    -1,    20,    82,    66,   100,
      16,    66,    21,    18,    61,    19,    -1,    -1,    26,    20,
      66,    21,    18,   102,   103,    19,    -1,   103,   104,    -1,
     104,    -1,    27,    65,    29,    61,    -1,    28,    29,    61,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    -1,   108,   107,    18,    61,    19,    -1,    -1,    57,
       8,    20,   109,   113,    21,    -1,    -1,    57,     8,    20,
     110,    21,    -1,    -1,   105,     8,    20,   111,   113,    21,
      -1,    -1,   105,     8,    20,   112,    21,    -1,   114,    -1,
     113,    17,   114,    -1,   105,     8,    -1,   105,     8,    49,
      79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   167,   167,   168,   171,   172,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     188,   188,   190,   190,   190,   193,   194,   196,   250,   301,
     353,   405,   457,   510,   559,   609,   644,   648,   649,   654,
     655,   658,   700,   743,   744,   814,   885,   886,   948,  1020,
    1074,  1075,  1140,  1141,  1142,  1217,  1218,  1219,  1220,  1246,
    1246,  1276,  1276,  1307,  1323,  1343,  1344,  1345,  1346,  1347,
    1348,  1352,  1391,  1409,  1465,  1525,  1585,  1639,  1694,  1750,
    1750,  1750,  1755,  1757,  1757,  1755,  1760,  1760,  1761,  1766,
    1766,  1766,  1766,  1770,  1770,  1773,  1773,  1774,  1774,  1778,
    1778,  1782,  1783,  1786,  1787,  1793,  1793,  1793,  1793,  1793,
    1795,  1795,  1798,  1798,  1812,  1812,  1825,  1825,  1839,  1839,
    1855,  1856,  1859,  1872
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
  "while_stmt", "$@4", "$@5", "if_stmt", "$@6", "$@7", "$@8",
  "if_expression_stmt", "$@9", "repeat_until_stmt", "$@10", "$@11", "$@12",
  "for_stmt", "$@13", "for_expression_stmt", "$@14", "$@15", "switch_stmt",
  "$@16", "case_stmts", "case_stmt", "type", "function", "$@17",
  "function_prototype", "$@18", "$@19", "$@20", "$@21", "params", "param", 0
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
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      64,    64,    65,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    74,    74,    74,    74,    76,
      75,    77,    75,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    82,    84,
      85,    83,    87,    88,    89,    86,    91,    90,    90,    93,
      94,    95,    92,    97,    96,    99,    98,   100,    98,   102,
     101,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     107,   106,   109,   108,   110,   108,   111,   108,   112,   108,
     113,   113,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     5,
       1,     0,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     1,     3,     3,     1,     1,     1,     1,     0,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     6,     3,     5,     4,     4,     4,     4,     4,     0,
       0,     9,     0,     0,     0,    11,     0,     5,     0,     0,
       0,     0,    12,     0,     3,     0,    10,     0,    10,     0,
       8,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       0,     5,     0,     6,     0,     5,     0,     6,     0,     5,
       1,     3,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   106,   107,   109,   108,    58,    55,    56,    37,
      38,     0,     5,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     3,     0,    25,
      26,    40,    39,    43,    46,    50,    52,    57,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,   110,    61,
       0,     0,     0,     0,     0,    41,    42,     0,     0,    58,
       0,    25,    39,    17,    18,     0,     0,     0,     0,    89,
      58,     0,    51,    35,     0,    24,    23,     0,    20,    22,
       0,     1,     2,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      53,    79,     0,    94,     0,    82,     0,     0,   112,    16,
       0,    32,    31,    28,    27,    30,    29,    34,    33,    45,
      44,    49,    48,    47,    54,    72,   116,     0,     0,    60,
      64,     0,    74,    75,    77,    78,    76,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    65,    66,    68,    67,
      69,    70,     0,     0,    95,    97,     0,    99,     0,    90,
       0,     0,   120,   115,    19,     0,   119,    73,   111,    63,
      71,    80,     0,     0,     0,    83,     0,   122,     0,   113,
     117,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   121,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   123,    81,     0,     0,     0,   104,    84,    91,     0,
       0,   103,    88,     0,     0,     0,     0,    85,     0,    96,
      98,    86,    92,     0,     0,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    58,    77,    78,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   100,   101,   141,   172,
      38,    39,    40,    41,   149,   201,    42,   155,   208,   232,
     237,   243,    43,   116,   196,   233,    44,    66,   113,   192,
     193,    45,   194,   206,   207,    46,    47,    99,    48,   157,
     158,   160,   161,   181,   182
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     729,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   129,   -72,    59,     1,    22,    36,   -72,    38,    56,
      -4,    83,    59,    72,    17,    63,   216,   -72,    78,   -72,
     -72,   -72,    57,    -9,   -72,    42,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,    93,   -72,   -72,    84,
      17,    17,    17,    17,    17,   -72,   -72,    98,   729,   -12,
     329,    87,   -17,   -72,   -72,    59,   102,    59,    59,   -72,
     109,    80,    42,   -72,   122,   -72,   -72,   127,   -72,   329,
      17,   -72,   -72,   -72,   101,   101,   101,   101,   101,   101,
      59,    59,    80,    80,   118,   118,   118,    83,    55,   126,
     130,    17,   136,   137,   139,   141,   143,    99,   273,   -72,
     -72,   329,   246,   -72,   133,   329,   729,   -17,   140,   -72,
     144,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    -9,
      -9,   -72,   -72,   -72,   -72,   -72,   145,    17,   729,   -72,
     -72,    -2,   -72,   -72,   -72,   -72,   -72,   297,   -72,   153,
     132,    59,    59,   152,   157,   155,   330,   129,   166,   146,
     129,   168,   174,   387,    17,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   176,   177,   329,   329,   -13,   -72,   181,   -72,
     186,    49,   -72,   -72,   -72,    60,   -72,   -72,   -72,   -72,
     -72,   -72,   185,   187,    91,   -72,   169,   158,   129,   -72,
     -72,   729,    59,    59,    17,   175,    13,   -72,   729,   190,
     297,   -72,   444,   223,   280,   182,   729,   -72,   -72,   501,
      59,   -72,   -72,   188,   194,   729,   729,   -72,   329,   729,
     729,   729,   184,   192,   558,   615,   199,   -72,   211,   -72,
     -72,   -72,   -72,   729,   672,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -52,   -26,   -72,   -72,   -41,    -6,   215,   295,   -72,
      -8,   -71,   -72,   -19,    44,   -72,   -72,   -72,   -72,    23,
     -72,   120,   123,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,    31,   -10,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,    85,    45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -119
static const yytype_int16 yytable[] =
{
      82,    57,    72,   135,   110,    62,   108,    60,    49,   102,
     103,   104,   105,   106,    69,   164,    73,    63,    79,   165,
      49,   129,   130,    92,    93,    59,     7,     8,    75,    76,
       9,    10,   217,    94,    95,    96,   137,    13,    64,   120,
     204,   205,    55,    56,    79,    79,    79,    79,    79,    50,
      51,    52,    53,    54,    55,    56,    65,    21,    67,   111,
     140,   114,   115,   117,   156,    22,   198,    59,     7,     8,
     199,   135,     9,    10,    79,   136,    68,   198,   134,    13,
      74,   200,    82,    80,   127,   128,   163,    97,    70,     7,
       8,    70,     7,     8,    83,    79,   162,    92,    93,    21,
      71,    98,   153,    71,   137,   -59,   107,    22,   109,    59,
       7,     8,    84,    85,    86,    87,    88,    89,   204,   205,
      21,    71,   112,   189,    90,    91,    70,     7,     8,    49,
      82,    79,     1,     2,     3,     4,     5,    82,   131,   132,
     133,    21,   118,   119,   138,   174,   175,   180,   147,   212,
     180,   139,   142,   143,   154,   144,   219,   145,    79,   146,
     176,  -114,   184,   215,   226,   159,  -118,    84,    85,    86,
      87,    88,    89,   231,   173,   177,   178,   234,   235,    90,
      91,    50,    51,    52,    53,    54,    82,   183,   180,   186,
     187,   244,   190,    82,   197,   191,   213,   214,    79,   195,
      82,   202,   209,   203,   216,    82,   229,   210,    82,    82,
     220,   225,   230,   238,   228,   236,    81,   241,    82,     1,
       2,     3,     4,     5,     6,     7,     8,   242,    61,     9,
      10,    11,   151,   221,    12,   152,    13,   218,    14,    15,
      16,    17,    18,   211,   223,   185,    19,     0,    20,     1,
       2,     3,     4,     5,   150,     0,    21,    84,    85,    86,
      87,    88,    89,     0,    22,     0,     0,     0,     0,    90,
      91,     0,     0,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     9,    10,    11,     0,
       0,    12,   148,    13,     0,    14,    15,    16,    17,    18,
       0,   224,     0,    19,     0,    20,   166,   167,   168,   169,
     170,   171,     0,    21,    84,    85,    86,    87,    88,    89,
       0,    22,     0,     0,     0,     0,    90,    91,     0,     0,
      23,    24,    25,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     0,     9,    10,    11,     0,     0,    12,   179,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
      19,     0,    20,    84,    85,    86,    87,    88,    89,     0,
      21,     0,     0,     0,     0,    90,    91,     0,    22,   121,
     122,   123,   124,   125,   126,     0,     0,    23,    24,    25,
       1,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       9,    10,    11,     0,     0,    12,   188,    13,     0,    14,
      15,    16,    17,    18,     0,     0,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     9,    10,    11,
       0,     0,    12,   222,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,     1,     2,     3,     4,     5,     6,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
     227,    13,     0,    14,    15,    16,    17,    18,     0,     0,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     9,    10,    11,     0,     0,    12,   239,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,     1,     2,
       3,     4,     5,     6,     7,     8,     0,     0,     9,    10,
      11,     0,     0,    12,   240,    13,     0,    14,    15,    16,
      17,    18,     0,     0,     0,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     0,     9,    10,    11,     0,     0,
      12,   245,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,    19,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,     1,     2,     3,     4,     5,     6,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,     0,    13,
       0,    14,    15,    16,    17,    18,     0,     0,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      26,    11,    21,    16,    21,    13,    58,    13,    20,    50,
      51,    52,    53,    54,    18,    17,    22,    16,    24,    21,
      20,    92,    93,    40,    41,     8,     9,    10,    11,    12,
      13,    14,    19,    42,    43,    44,    49,    20,    16,    80,
      27,    28,    54,    55,    50,    51,    52,    53,    54,    49,
      50,    51,    52,    53,    54,    55,    20,    40,    20,    65,
     101,    67,    68,    71,   116,    48,    17,     8,     9,    10,
      21,    16,    13,    14,    80,    20,    20,    17,    97,    20,
       8,    21,   108,    20,    90,    91,   138,    45,     8,     9,
      10,     8,     9,    10,    16,   101,   137,    40,    41,    40,
      20,     8,   112,    20,    49,    21,     8,    48,    21,     8,
       9,    10,    34,    35,    36,    37,    38,    39,    27,    28,
      40,    20,    20,   164,    46,    47,     8,     9,    10,    20,
     156,   137,     3,     4,     5,     6,     7,   163,    94,    95,
      96,    40,    20,    16,    18,   151,   152,   157,    49,   201,
     160,    21,    16,    16,    21,    16,   208,    16,   164,    16,
       8,    21,    16,   204,   216,    21,    21,    34,    35,    36,
      37,    38,    39,   225,    21,    18,    21,   229,   230,    46,
      47,    49,    50,    51,    52,    53,   212,    21,   198,    21,
      16,   243,    16,   219,     8,    18,   202,   203,   204,    18,
     226,    16,    33,    16,    29,   231,    18,    49,   234,   235,
      20,    29,    18,    21,   220,    31,     0,    18,   244,     3,
       4,     5,     6,     7,     8,     9,    10,    16,    13,    13,
      14,    15,   112,   210,    18,   112,    20,   206,    22,    23,
      24,    25,    26,   198,    21,   160,    30,    -1,    32,     3,
       4,     5,     6,     7,     8,    -1,    40,    34,    35,    36,
      37,    38,    39,    -1,    48,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    57,    58,    59,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    21,    -1,    30,    -1,    32,     9,    10,    11,    12,
      13,    14,    -1,    40,    34,    35,    36,    37,    38,    39,
      -1,    48,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      57,    58,    59,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    34,    35,    36,    37,    38,    39,    -1,
      40,    -1,    -1,    -1,    -1,    46,    47,    -1,    48,    84,
      85,    86,    87,    88,    89,    -1,    -1,    57,    58,    59,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    15,    -1,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    15,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      14,    15,    18,    20,    22,    23,    24,    25,    26,    30,
      32,    40,    48,    57,    58,    59,    61,    62,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    80,    81,
      82,    83,    86,    92,    96,   101,   105,   106,   108,    20,
      49,    50,    51,    52,    53,    54,    55,   105,    63,     8,
      66,    67,    70,    16,    16,    20,    97,    20,    20,    18,
       8,    20,    73,    66,     8,    11,    12,    64,    65,    66,
      20,     0,    62,    16,    34,    35,    36,    37,    38,    39,
      46,    47,    40,    41,    42,    43,    44,    45,     8,   107,
      76,    77,    65,    65,    65,    65,    65,     8,    61,    21,
      21,    66,    20,    98,    66,    66,    93,    70,    20,    16,
      65,    68,    68,    68,    68,    68,    68,    66,    66,    71,
      71,    74,    74,    74,    73,    16,    20,    49,    18,    21,
      65,    78,    16,    16,    16,    16,    16,    49,    19,    84,
       8,    81,    82,   105,    21,    87,    61,   109,   110,    21,
     111,   112,    65,    61,    17,    21,     9,    10,    11,    12,
      13,    14,    79,    21,    66,    66,     8,    18,    21,    19,
     105,   113,   114,    21,    16,   113,    21,    16,    19,    65,
      16,    18,    99,   100,   102,    18,    94,     8,    17,    21,
      21,    85,    16,    16,    27,    28,   103,   104,    88,    33,
      49,   114,    61,    66,    66,    65,    29,    19,   104,    61,
      20,    79,    19,    21,    21,    29,    61,    19,    66,    18,
      18,    61,    89,    95,    61,    61,    31,    90,    21,    19,
      19,    18,    16,    91,    61,    19
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
#line 172 "parser.y"
    {createNewTable(); generator.startScope();;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {exitCurrentScope();;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("-----------PRINT Statement------------\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
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

  case 28:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
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

  case 29:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
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

  case 30:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
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

  case 33:

/* Line 1455 of yacc.c  */
#line 511 "parser.y"
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

  case 34:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
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

  case 35:

/* Line 1455 of yacc.c  */
#line 610 "parser.y"
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

  case 36:

/* Line 1455 of yacc.c  */
#line 645 "parser.y"
    {
                (yyval.lexeme) = (yyvsp[(2) - (3)].lexeme);
     ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 648 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 649 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 659 "parser.y"
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

  case 42:

/* Line 1455 of yacc.c  */
#line 701 "parser.y"
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

  case 44:

/* Line 1455 of yacc.c  */
#line 745 "parser.y"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 815 "parser.y"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 887 "parser.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 949 "parser.y"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 1021 "parser.y"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 1075 "parser.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 1141 "parser.y"
    {(yyval.lexeme) = (yyvsp[(2) - (3)].lexeme);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1142 "parser.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 1217 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1218 "parser.y"
    {(yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1219 "parser.y"
    {printf("FUNCTION_CALL\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1220 "parser.y"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 1246 "parser.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 1260 "parser.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 1276 "parser.y"
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

  case 62:

/* Line 1455 of yacc.c  */
#line 1289 "parser.y"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 1307 "parser.y"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 1323 "parser.y"
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

  case 71:

/* Line 1455 of yacc.c  */
#line 1353 "parser.y"
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
                        generator.addQuad("ASSIGN",(yyvsp[(5) - (6)].lexeme).stringRep,"",name);
                }    
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1391 "parser.y"
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

  case 73:

/* Line 1455 of yacc.c  */
#line 1409 "parser.y"
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
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1466 "parser.y"
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
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                        
                }
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1526 "parser.y"
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
                        generator.addQuad("DIV",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1586 "parser.y"
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
                        generator.addQuad("MUL",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1640 "parser.y"
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
                        generator.addQuad("ADD",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1695 "parser.y"
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
                        generator.addQuad("SUB",name,name1,name);
                        generator.clearTemps();
                }
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1750 "parser.y"
    { checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1750 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1750 "parser.y"
    {exitCurrentScope();;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1755 "parser.y"
    {
                checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1757 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1757 "parser.y"
    {exitCurrentScope();;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1760 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1760 "parser.y"
    {exitCurrentScope();;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1766 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1766 "parser.y"
    {exitCurrentScope();;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1766 "parser.y"
    { checkIfLexemIsBool((yyvsp[(9) - (9)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1766 "parser.y"
    {printf("REPEAT UNTIL\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1770 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1773 "parser.y"
    {checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1773 "parser.y"
    {exitCurrentScope();;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1774 "parser.y"
    {checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1774 "parser.y"
    {exitCurrentScope();;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1778 "parser.y"
    {createNewTable();generator.startScope();;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1778 "parser.y"
    {exitCurrentScope();;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1786 "parser.y"
    {printf("CASE\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1787 "parser.y"
    {printf("DEFAULT\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1795 "parser.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1795 "parser.y"
    {exitCurrentScope(); currentFunction = nullptr;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1798 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false,NULL, VOID_TYPE);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1811 "parser.y"
    {printf("Void function with parameters \n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1812 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false,NULL, VOID_TYPE);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1824 "parser.y"
    {printf("Void function without parameters \n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1825 "parser.y"
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
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false,NULL, functionOutput);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
        ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1838 "parser.y"
    {printf("Typed function with parameters \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1839 "parser.y"
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
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,FUNC,false,NULL, functionOutput);
                createNewTable((yyvsp[(2) - (3)].stringValue));
                generator.startScope();
        ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1852 "parser.y"
    {printf("Typed function without parameters \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1859 "parser.y"
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
                addEntryToTable((yyvsp[(2) - (2)].stringValue),lexeme,PARAMETER,true);
        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1872 "parser.y"
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
                        addEntryToTable((yyvsp[(2) - (4)].stringValue),lexeme,PARAMETER,true);
                        generator.addQuad("=", (yyvsp[(2) - (4)].stringValue), (yyvsp[(4) - (4)].lexeme).stringRep , "");
                }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 3816 "parser.tab.c"
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
#line 1909 "parser.y"








void yyerror(char* s)
{
    fprintf(stderr, "\n ERROR AT LINE %d :\n %s \n", lineno, s);
    exit(1);
}


int main (void)
{
    Init();

    yyin = fopen("test.txt", "r+");
    if (yyin == NULL)
    {
        printf(" Test File Not Found\n");
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
        printSymbolTables();
        generator.printQuadsToFile("quadruples.txt");
    }
    fclose(yyin);
   
    return 0;
}






