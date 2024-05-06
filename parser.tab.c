
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
    #include <stdarg.h>
    #include "./SemanticAnalysis/SemanticAnalysis.cpp"
    extern FILE *yyin;
    extern int lineno; /* Line Number tacker from lexer */
    extern int yylex();
    int yywrap();
    void yyerror(char*);
    

/* Line 189 of yacc.c  */
#line 86 "parser.tab.c"

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
#line 13 "parser.y"

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
#line 199 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 211 "parser.tab.c"

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
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   849

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

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
     141,   143,   146,   148,   152,   154,   156,   160,   162,   164,
     168,   169,   175,   179,   181,   183,   185,   187,   189,   191,
     193,   200,   204,   210,   215,   220,   225,   230,   235,   236,
     237,   247,   248,   249,   259,   260,   261,   262,   263,   279,
     280,   281,   282,   295,   296,   297,   310,   311,   312,   325,
     326,   335,   338,   340,   345,   349,   351,   353,   355,   357,
     359,   364,   365,   372,   373,   379,   380,   387,   388,   394,
     396,   400,   403
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    61,    62,    -1,    62,    -1,    66,    16,
      -1,    -1,    18,    63,    61,    19,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    85,    -1,    92,    -1,    96,
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
      21,    -1,     9,    -1,    10,    -1,    74,    45,    74,    -1,
      75,    -1,     8,    -1,     8,    20,    21,    -1,    -1,     8,
      20,    76,    77,    21,    -1,    77,    17,    65,    -1,    65,
      -1,     9,    -1,    10,    -1,    12,    -1,    11,    -1,    13,
      -1,    14,    -1,    15,   105,     8,    49,    78,    16,    -1,
     105,     8,    16,    -1,   105,     8,    49,    65,    16,    -1,
       8,    49,    65,    16,    -1,     8,    50,    65,    16,    -1,
       8,    53,    65,    16,    -1,     8,    51,    65,    16,    -1,
       8,    52,    65,    16,    -1,    -1,    -1,    24,    20,    66,
      83,    21,    18,    84,    61,    19,    -1,    -1,    -1,    30,
      20,    66,    86,    21,    18,    87,    61,    19,    -1,    -1,
      -1,    -1,    -1,    30,    20,    66,    88,    21,    18,    89,
      61,    19,    90,    31,    18,    91,    61,    19,    -1,    -1,
      -1,    -1,    32,    18,    93,    61,    19,    94,    33,    20,
      66,    95,    21,    16,    -1,    -1,    -1,    25,    97,    20,
      80,    66,    98,    16,    66,    21,    18,    61,    19,    -1,
      -1,    -1,    25,    99,    20,    81,    66,   100,    16,    66,
      21,    18,    61,    19,    -1,    -1,    26,    20,    66,    21,
      18,   102,   103,    19,    -1,   103,   104,    -1,   104,    -1,
      27,    65,    29,    61,    -1,    28,    29,    61,    -1,     3,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   107,
      18,    61,    19,    -1,    -1,    57,     8,    20,   108,   112,
      21,    -1,    -1,    57,     8,    20,   109,    21,    -1,    -1,
     105,     8,    20,   110,   112,    21,    -1,    -1,   105,     8,
      20,   111,    21,    -1,   113,    -1,   112,    17,   113,    -1,
     105,     8,    -1,   105,     8,    49,    78,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   160,   160,   161,   164,   165,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     181,   181,   183,   183,   183,   186,   187,   189,   208,   222,
     237,   252,   267,   282,   283,   284,   285,   286,   287,   291,
     292,   295,   296,   299,   300,   301,   304,   305,   306,   307,
     309,   310,   312,   313,   317,   318,   319,   320,   321,   348,
     349,   349,   380,   396,   416,   417,   418,   419,   420,   421,
     425,   459,   472,   510,   513,   514,   515,   516,   520,   520,
     520,   525,   527,   525,   528,   530,   530,   530,   528,   534,
     534,   534,   534,   538,   538,   538,   539,   539,   539,   543,
     543,   547,   548,   551,   552,   558,   558,   558,   558,   558,
     560,   563,   563,   576,   576,   588,   588,   601,   601,   616,
     617,   620,   633
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
  "negat", "para", "factor", "function_call", "$@2", "call_params",
  "constant", "const_dec_stmt", "var_dec_stmt", "assign_stmt",
  "while_stmt", "$@3", "$@4", "if_stmt", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "repeat_until_stmt", "$@11", "$@12", "$@13", "for_stmt", "$@14",
  "$@15", "$@16", "$@17", "switch_stmt", "$@18", "case_stmts", "case_stmt",
  "type", "function", "function_prototype", "$@19", "$@20", "$@21", "$@22",
  "params", "param", 0
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
      72,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      76,    75,    77,    77,    78,    78,    78,    78,    78,    78,
      79,    80,    80,    81,    81,    81,    81,    81,    83,    84,
      82,    86,    87,    85,    88,    89,    90,    91,    85,    93,
      94,    95,    92,    97,    98,    96,    99,   100,    96,   102,
     101,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     106,   108,   107,   109,   107,   110,   107,   111,   107,   112,
     112,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     5,
       1,     0,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     1,     3,     1,     1,     3,     1,     1,     3,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       6,     3,     5,     4,     4,     4,     4,     4,     0,     0,
       9,     0,     0,     9,     0,     0,     0,     0,    15,     0,
       0,     0,    12,     0,     0,    12,     0,     0,    12,     0,
       8,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       4,     0,     6,     0,     5,     0,     6,     0,     5,     1,
       3,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   106,   107,   109,   108,    58,    54,    55,    37,
      38,     0,     5,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     3,     0,    25,
      26,    40,    39,    43,    46,    50,    52,    57,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,     0,    60,
       0,     0,     0,     0,     0,    41,    42,     0,     0,    58,
       0,    25,    39,    17,    18,     0,     0,     0,     0,     0,
      89,    58,     0,    51,    35,     0,    24,    23,     0,    20,
      22,     0,     1,     2,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    53,    78,     0,     0,     0,    81,     0,     0,   111,
      16,     0,    32,    31,    28,    27,    30,    29,    34,    33,
      45,    44,    49,    48,    47,    56,    71,   115,     0,     0,
      63,     0,    73,    74,    76,    77,    75,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,    61,    64,    65,    67,
      66,    68,    69,     0,     0,    94,     0,    97,    99,     0,
       0,    90,     0,     0,   119,   114,    19,     0,   118,    72,
      62,    70,    79,     0,     0,     0,    82,    85,     0,   121,
       0,   112,   116,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
     100,   101,     0,     0,     0,   122,    80,     0,     0,     0,
     104,    83,    86,    91,     0,     0,   103,     0,     0,     0,
       0,     0,     0,    95,    98,    87,    92,     0,     0,    88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    58,    78,    79,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   102,   141,   173,    38,
      39,    40,    41,   149,   203,    42,   155,   210,   156,   211,
     237,   247,    43,   117,   198,   238,    44,    66,   193,    67,
     194,    45,   195,   208,   209,    46,    47,    48,   158,   159,
     161,   162,   183,   184
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
     790,   -57,   -57,   -57,   -57,   -57,    43,   -57,   -57,   -57,
     -57,   196,   -57,    64,    -5,    14,     8,   -57,    15,    17,
      25,   140,    64,    44,    11,    38,   220,   -57,   130,   -57,
     -57,   -57,   -35,    66,   -57,   -57,    30,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,    52,   -57,    58,    60,
      11,    11,    11,    11,    11,   -57,   -57,    74,   790,    -7,
      86,    65,   -14,   -57,   -57,    64,    71,    80,    64,    64,
     -57,    81,    79,   -57,   -57,    83,   -57,   -57,    69,   -57,
      86,    11,   -57,   -57,   -57,    97,    97,    97,    97,    97,
      97,    64,    64,    79,    79,   106,   106,   106,   106,    16,
     790,   -57,    11,   102,   111,   112,   114,   118,    87,   277,
     -57,   -57,    86,   196,   127,   227,    86,   790,   -14,   119,
     -57,   121,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
      66,    66,    30,    30,    30,   -57,   -57,   122,    11,   334,
     -57,   -13,   -57,   -57,   -57,   -57,   -57,   171,   -57,   123,
      64,   131,   156,    64,   133,   124,   136,   391,   196,   137,
     145,   196,   141,   155,   -57,    11,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   158,   134,    86,    18,    86,   -57,   154,
     157,   -57,   178,    12,   -57,   -57,   -57,    47,   -57,   -57,
     -57,   -57,   -57,   172,   174,    22,   -57,   -57,   162,   138,
     196,   -57,   -57,   790,    64,    64,    11,   182,    27,   -57,
     790,   790,   199,   171,   -57,   448,   284,   341,   192,   790,
     -57,   -57,   505,   562,    64,   -57,   -57,   213,   214,   790,
     790,   -57,   -57,    86,   790,   790,   790,   205,   216,   619,
     676,   221,   225,   -57,   -57,   -57,   -57,   790,   733,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -56,   -26,   -57,   -57,   -36,   -12,   234,   168,   -57,
     -10,   -23,   -57,   228,   120,   -57,   -57,   -57,    46,   -57,
     159,   153,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,    61,    -2,   -57,   -57,   -57,   -57,
     -57,   -57,    90,    70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -118
static const yytype_int16 yytable[] =
{
      83,    60,   109,    62,   165,    93,    94,   111,   166,    57,
      74,    63,    80,    49,   103,   104,   105,   106,   107,    59,
       7,     8,    76,    77,     9,    10,    93,    94,    65,   200,
      64,    13,   136,   201,   136,    68,   137,    69,    80,    80,
      80,    80,    80,    70,   139,   121,   220,    55,    56,   206,
     207,    21,    75,   112,   206,   207,   115,   116,    81,    22,
      99,   157,   118,    49,   200,   138,   140,   138,   202,    80,
     130,   131,    59,     7,     8,    98,   100,     9,    10,   128,
     129,   101,   108,    83,    13,   120,   110,    71,     7,     8,
      80,   113,    50,    51,    52,    53,    54,    55,    56,    72,
     114,    49,   163,   119,    21,    59,     7,     8,    95,    96,
      97,   151,    22,    83,    71,     7,     8,    72,   142,    21,
      85,    86,    87,    88,    89,    90,    80,   143,   144,   190,
     145,    83,    91,    92,   146,   152,   147,    21,   175,   176,
    -113,   177,   160,  -117,   174,   179,    84,   215,    71,     7,
       8,   178,   192,    80,   222,   223,   182,   180,   185,   182,
      72,   186,   188,   230,    85,    86,    87,    88,    89,    90,
     218,   189,   196,   236,   191,   197,    91,    92,   239,   240,
     167,   168,   169,   170,   171,   172,   199,   213,   204,    83,
     205,   248,   216,   217,    80,   212,    83,    83,   182,     1,
       2,     3,     4,     5,    83,    50,    51,    52,    53,    54,
      83,   219,   233,    83,    83,   132,   133,   134,   135,   224,
      82,   229,    83,     1,     2,     3,     4,     5,     6,     7,
       8,   234,   235,     9,    10,    11,   241,   242,    12,   245,
      13,   246,    14,    15,    16,    17,    18,    61,   154,    73,
      19,   187,    20,   122,   123,   124,   125,   126,   127,   225,
      21,    85,    86,    87,    88,    89,    90,   153,    22,   221,
     214,     0,   150,    91,    92,     0,     0,    23,    24,    25,
       1,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       9,    10,    11,     0,     0,    12,   148,    13,     0,    14,
      15,    16,    17,    18,     0,   227,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,    21,    85,    86,
      87,    88,    89,    90,     0,    22,     0,     0,     0,     0,
      91,    92,     0,     0,    23,    24,    25,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     9,    10,    11,
       0,     0,    12,   164,    13,     0,    14,    15,    16,    17,
      18,     0,   228,     0,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    21,    85,    86,    87,    88,    89,
      90,     0,    22,     0,     0,     0,     0,    91,    92,     0,
       0,    23,    24,    25,     1,     2,     3,     4,     5,     6,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
     181,    13,     0,    14,    15,    16,    17,    18,     0,     0,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     9,    10,    11,     0,     0,    12,   226,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,     1,     2,
       3,     4,     5,     6,     7,     8,     0,     0,     9,    10,
      11,     0,     0,    12,   231,    13,     0,    14,    15,    16,
      17,    18,     0,     0,     0,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     0,     9,    10,    11,     0,     0,
      12,   232,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,    19,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,     1,     2,     3,     4,     5,     6,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,   243,    13,
       0,    14,    15,    16,    17,    18,     0,     0,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     9,
      10,    11,     0,     0,    12,   244,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     9,    10,    11,     0,
       0,    12,   249,    13,     0,    14,    15,    16,    17,    18,
       0,     0,     0,    19,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     0,     9,    10,    11,     0,     0,    12,     0,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      26,    13,    58,    13,    17,    40,    41,    21,    21,    11,
      22,    16,    24,    20,    50,    51,    52,    53,    54,     8,
       9,    10,    11,    12,    13,    14,    40,    41,    20,    17,
      16,    20,    16,    21,    16,    20,    20,    20,    50,    51,
      52,    53,    54,    18,   100,    81,    19,    54,    55,    27,
      28,    40,     8,    65,    27,    28,    68,    69,    20,    48,
       8,   117,    72,    20,    17,    49,   102,    49,    21,    81,
      93,    94,     8,     9,    10,    45,    18,    13,    14,    91,
      92,    21,     8,   109,    20,    16,    21,     8,     9,    10,
     102,    20,    49,    50,    51,    52,    53,    54,    55,    20,
      20,    20,   138,    20,    40,     8,     9,    10,    42,    43,
      44,   113,    48,   139,     8,     9,    10,    20,    16,    40,
      34,    35,    36,    37,    38,    39,   138,    16,    16,   165,
      16,   157,    46,    47,    16,     8,    49,    40,   150,     8,
      21,   153,    21,    21,    21,    21,    16,   203,     8,     9,
      10,    18,    18,   165,   210,   211,   158,    21,    21,   161,
      20,    16,    21,   219,    34,    35,    36,    37,    38,    39,
     206,    16,    18,   229,    16,    18,    46,    47,   234,   235,
       9,    10,    11,    12,    13,    14,     8,    49,    16,   215,
      16,   247,   204,   205,   206,    33,   222,   223,   200,     3,
       4,     5,     6,     7,   230,    49,    50,    51,    52,    53,
     236,    29,   224,   239,   240,    95,    96,    97,    98,    20,
       0,    29,   248,     3,     4,     5,     6,     7,     8,     9,
      10,    18,    18,    13,    14,    15,    31,    21,    18,    18,
      20,    16,    22,    23,    24,    25,    26,    13,    21,    21,
      30,   161,    32,    85,    86,    87,    88,    89,    90,   213,
      40,    34,    35,    36,    37,    38,    39,   114,    48,   208,
     200,    -1,   113,    46,    47,    -1,    -1,    57,    58,    59,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    21,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    34,    35,
      36,    37,    38,    39,    -1,    48,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    57,    58,    59,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    21,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    34,    35,    36,    37,    38,
      39,    -1,    48,    -1,    -1,    -1,    -1,    46,    47,    -1,
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
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      14,    15,    18,    20,    22,    23,    24,    25,    26,    30,
      32,    40,    48,    57,    58,    59,    61,    62,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    79,    80,
      81,    82,    85,    92,    96,   101,   105,   106,   107,    20,
      49,    50,    51,    52,    53,    54,    55,   105,    63,     8,
      66,    67,    70,    16,    16,    20,    97,    99,    20,    20,
      18,     8,    20,    73,    66,     8,    11,    12,    64,    65,
      66,    20,     0,    62,    16,    34,    35,    36,    37,    38,
      39,    46,    47,    40,    41,    42,    43,    44,    45,     8,
      18,    21,    76,    65,    65,    65,    65,    65,     8,    61,
      21,    21,    66,    20,    20,    66,    66,    93,    70,    20,
      16,    65,    68,    68,    68,    68,    68,    68,    66,    66,
      71,    71,    74,    74,    74,    74,    16,    20,    49,    61,
      65,    77,    16,    16,    16,    16,    16,    49,    19,    83,
      80,   105,     8,    81,    21,    86,    88,    61,   108,   109,
      21,   110,   111,    65,    19,    17,    21,     9,    10,    11,
      12,    13,    14,    78,    21,    66,     8,    66,    18,    21,
      21,    19,   105,   112,   113,    21,    16,   112,    21,    16,
      65,    16,    18,    98,   100,   102,    18,    18,    94,     8,
      17,    21,    21,    84,    16,    16,    27,    28,   103,   104,
      87,    89,    33,    49,   113,    61,    66,    66,    65,    29,
      19,   104,    61,    61,    20,    78,    19,    21,    21,    29,
      61,    19,    19,    66,    18,    18,    61,    90,    95,    61,
      61,    31,    21,    19,    19,    18,    16,    91,    61,    19
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
#line 165 "parser.y"
    {createNewTable();;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {exitCurrentScope();;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {printf("-----------PRINT Statement------------\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
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
    
                }
    
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
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
                }
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
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
                }
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
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
                }
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
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
                }
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
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
                }
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    {printf("PLUS\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {printf("MINUS\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {printf("MULT\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    {printf("DIV\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    {printf("MOD\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    {printf("--------------negation------------------------\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {printf("INT_VAL\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    {printf("FLOAT_VAL\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    {printf("EXP\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {printf("FUNCTION_CALL\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {
                SymbolTableEntry* entry = getIdEntry((yyvsp[(1) - (1)].stringValue));
                if(idExistsInAnEnum(rootSymbolTable,(yyvsp[(1) - (1)].stringValue)))
                        return 0;
                        
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

  case 60:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
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

  case 62:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
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

  case 70:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
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
                        printSemanticError("Type mismatch in variable declaration",lineno);
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
                        addEntryToTable((yyvsp[(3) - (6)].stringValue),lexeme,CONSTANT,true);
                }    
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    {
                
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (3)].stringValue));
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                 LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>((yyvsp[(1) - (3)].varType));
                lexeme->stringRep = getCurrentCount();
                addEntryToTable((yyvsp[(2) - (3)].stringValue),lexeme,VAR,false);
              
         ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope((yyvsp[(2) - (5)].stringValue));
                if(entry){
                    printSemanticError("Variable already declared",lineno);
                    return 0;
                }
                int type1 = (yyvsp[(1) - (5)].varType);
                int type2 = (yyvsp[(4) - (5)].lexeme).type;
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
                        addEntryToTable((yyvsp[(2) - (5)].stringValue),lexeme,VAR,true);
                }
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 511 "parser.y"
    {
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    { checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    {createNewTable();;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    {exitCurrentScope();;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 525 "parser.y"
    {
                checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
    {createNewTable();;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
    {exitCurrentScope();;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 528 "parser.y"
    {
                checkIfLexemIsBool((yyvsp[(3) - (3)].lexeme).type != BOOL_TYPE,lineno);
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {createNewTable();;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {exitCurrentScope();;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {createNewTable();;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {exitCurrentScope();;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    {createNewTable();;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    {exitCurrentScope();;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    { checkIfLexemIsBool((yyvsp[(9) - (9)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    {printf("REPEAT UNTIL\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 538 "parser.y"
    {createNewTable();;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 538 "parser.y"
    {checkIfLexemIsBool((yyvsp[(5) - (5)].lexeme).type != BOOL_TYPE,lineno); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 538 "parser.y"
    {exitCurrentScope();;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    {createNewTable();;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    {checkIfLexemIsBool((yyvsp[(5) - (5)].lexeme).type != BOOL_TYPE,lineno);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    {exitCurrentScope();;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 543 "parser.y"
    {createNewTable();;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 543 "parser.y"
    {exitCurrentScope();;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 551 "parser.y"
    {printf("CASE\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 552 "parser.y"
    {printf("DEFAULT\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
    {exitCurrentScope(); currentFunction = nullptr;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 563 "parser.y"
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
                createNewTable();
        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 575 "parser.y"
    {printf("Void function with parameters \n");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 576 "parser.y"
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
                createNewTable();    
        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 587 "parser.y"
    {printf("Void function without parameters \n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 588 "parser.y"
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
                createNewTable();
        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 600 "parser.y"
    {printf("Typed function with parameters \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 601 "parser.y"
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
                createNewTable();
        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 613 "parser.y"
    {printf("Typed function without parameters \n");}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 617 "parser.y"
    {printf("Multiple PARAMS\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 620 "parser.y"
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

  case 122:

/* Line 1455 of yacc.c  */
#line 633 "parser.y"
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
                }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2539 "parser.tab.c"
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
#line 669 "parser.y"








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
        printSymbolTables();
    }
    fclose(yyin);
   
    return 0;
}






