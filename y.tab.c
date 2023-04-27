/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     INT = 260,
     FLOAT = 261,
     CHAR = 262,
     WHILE = 263,
     VOID = 264,
     INCLUDE = 265,
     RETURN = 266,
     LE = 267,
     GE = 268,
     LT = 269,
     GT = 270,
     EQ = 271,
     NE = 272,
     NUM = 273,
     AND = 274,
     OR = 275,
     TR = 276,
     FL = 277,
     STRLT = 278,
     ID = 279,
     printff = 280,
     scanff = 281
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define WHILE 263
#define VOID 264
#define INCLUDE 265
#define RETURN 266
#define LE 267
#define GE 268
#define LT 269
#define GT 270
#define EQ 271
#define NE 272
#define NUM 273
#define AND 274
#define OR 275
#define TR 276
#define FL 277
#define STRLT 278
#define ID 279
#define printff 280
#define scanff 281




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "lex.yy.c"

char nL[3];

void yyerror(const char*);
int yylex();
int yywrap();
void insert_type();
void add(char);
int sym_search(char *);
int search(char *);
void addTo(char i,char *n);
void FOO();
void add_ptr();
void pop();
void insert_type_table();
char temptype(char *,char*);
void type_check(char *,char*);
void printtree(struct node1*);
void optimized();
struct node{ int val;} x;
struct dataType{
	char * id_name;
	char * data_type;
	char * type;
	int line_no;
	}symbolTable[100];
int ifd=0;//Label
int eld=20;
char typeStack[10][100];
int typeStack_top = 0;
char type[10];
char count=0;
int nxt=1;//printed next once
int c=0;//Temp var count
int q;
extern int countn;
struct intermediate
{
	char op[2];
	char op1[5];
	char op2[5];
	char res[5];
}intermediate_code[20];
int code=0;
struct node1{ struct node1*left;struct node1*right;char* token;};
struct node1* mknode(struct node1 *left,struct node1 *right, char *token);



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 55 "parser.y"
{ struct var_name {char name[100];struct node1* nd;} nam ; 
	struct gen_code{char tr[10];char fal[10];struct node1* nd;} gen;
	 }
/* Line 193 of yacc.c.  */
#line 207 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
      33,    34,    29,    27,    37,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    31,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,     8,    24,    27,
      29,    31,    33,    35,    37,    38,    43,    47,    50,    52,
      53,    54,    58,    59,    63,    64,    65,    72,    77,    78,
      83,    84,    85,    90,    94,    95,    97,    99,   101,   105,
     108,   109,   116,   117,   127,   128,   129,   130,   131,   132,
     145,   147,   151,   154,   155,   162,   163,   173,   174,   175,
     176,   177,   178,   191,   193,   197,   200,   201,   208,   209,
     219,   220,   221,   222,   229,   230,   232,   236,   240,   243,
     245,   249,   250,   255,   257,   259,   261,   263,   264,   270,
     276,   277,   282,   283,   288,   290,   291,   296,   297,   302,
     304,   305,   310,   312,   313,   318,   319,   323,   324,   327,
     329,   331,   333,   335
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      24,    44,    33,    45,    51,    34,    46,    35,    47,    63,
      48,    61,    36,    -1,    49,    49,    -1,    10,    -1,     5,
      -1,     6,    -1,     7,    -1,     9,    -1,    -1,    51,    37,
      52,    51,    -1,    50,    54,    53,    -1,    54,    53,    -1,
      38,    -1,    -1,    -1,    24,    55,    57,    -1,    -1,    29,
      56,    54,    -1,    -1,    -1,    39,    58,    18,    59,    40,
      57,    -1,    39,    24,    40,    57,    -1,    -1,    39,    60,
      40,    57,    -1,    -1,    -1,    11,    18,    62,    38,    -1,
      11,    24,    38,    -1,    -1,    66,    -1,    73,    -1,    87,
      -1,    50,    24,    53,    -1,    63,    63,    -1,    -1,    25,
      64,    33,    23,    34,    38,    -1,    -1,    26,    65,    33,
      23,    37,    41,    24,    34,    38,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    67,    33,    84,    34,    68,    35,    69,
      63,    36,    70,    80,    -1,    87,    -1,    50,    24,    53,
      -1,    63,    63,    -1,    -1,    25,    71,    33,    23,    34,
      38,    -1,    -1,    26,    72,    33,    23,    37,    41,    24,
      34,    38,    -1,    -1,    -1,    -1,    -1,    -1,     8,    74,
      33,    84,    34,    75,    35,    76,    63,    36,    77,    80,
      -1,    87,    -1,    50,    24,    53,    -1,    63,    63,    -1,
      -1,    25,    78,    33,    23,    34,    38,    -1,    -1,    26,
      79,    33,    23,    37,    41,    24,    34,    38,    -1,    -1,
      -1,    -1,     4,    81,    35,    82,    63,    36,    -1,    -1,
      23,    -1,    84,    19,    85,    -1,    84,    20,    85,    -1,
      17,    85,    -1,    85,    -1,    89,   101,    89,    -1,    -1,
      24,    31,    86,    89,    -1,    22,    -1,    21,    -1,    24,
      -1,    18,    -1,    -1,    24,    31,    88,    89,    38,    -1,
      24,    33,    83,    34,    38,    -1,    -1,    89,    27,    90,
      89,    -1,    -1,    89,    28,    91,    89,    -1,    92,    -1,
      -1,    92,    29,    93,    92,    -1,    -1,    92,    30,    94,
      92,    -1,    95,    -1,    -1,    95,    32,    96,    95,    -1,
      97,    -1,    -1,    33,    98,    89,    34,    -1,    -1,    24,
      99,    57,    -1,    -1,    18,   100,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    71,    71,    71,    71,    71,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    81,    83,    83,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    87,    87,    87,    87,    89,    90,    91,    92,    97,
      98,    98,    99,    99,   100,   104,   104,   104,   104,   104,
     109,   110,   115,   116,   116,   117,   117,   118,   121,   121,
     121,   121,   121,   126,   127,   132,   133,   133,   134,   134,
     135,   137,   137,   137,   140,   143,   145,   145,   145,   145,
     148,   156,   156,   165,   168,   171,   179,   184,   184,   199,
     201,   201,   214,   214,   226,   228,   228,   241,   241,   258,
     260,   260,   275,   277,   277,   277,   277,   277,   277,   281,
     281,   281,   281,   281
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "FLOAT", "CHAR",
  "WHILE", "VOID", "INCLUDE", "RETURN", "LE", "GE", "LT", "GT", "EQ", "NE",
  "NUM", "AND", "OR", "TR", "FL", "STRLT", "ID", "printff", "scanff",
  "'+'", "'-'", "'*'", "'/'", "'='", "'^'", "'('", "')'", "'{'", "'}'",
  "','", "';'", "'['", "']'", "'&'", "$accept", "P", "@1", "@2", "@3",
  "@4", "@5", "I", "M", "R", "@6", "TER", "N", "@7", "@8", "G", "@9",
  "@10", "@11", "U", "@12", "S", "@13", "@14", "S1", "@15", "@16", "@17",
  "@18", "@19", "@20", "S2", "@21", "@22", "@23", "@24", "@25", "@26",
  "EL", "@27", "@28", "Arg", "C", "B", "@29", "assign", "@30", "E", "@31",
  "@32", "F", "@33", "@34", "T", "@35", "Q", "@36", "@37", "@38", "relop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    43,    45,    42,
      47,    61,    94,    40,    41,   123,   125,    44,    59,    91,
      93,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    45,    46,    47,    48,    43,    49,    49,
      50,    50,    50,    50,    52,    51,    51,    51,    53,    53,
      55,    54,    56,    54,    58,    59,    57,    57,    60,    57,
      57,    62,    61,    61,    61,    63,    63,    63,    63,    63,
      64,    63,    65,    63,    63,    67,    68,    69,    70,    66,
      66,    66,    66,    71,    66,    72,    66,    66,    74,    75,
      76,    77,    73,    73,    73,    73,    78,    73,    79,    73,
      73,    81,    82,    80,    80,    83,    84,    84,    84,    84,
      85,    86,    85,    85,    85,    85,    85,    88,    87,    87,
      90,    89,    91,    89,    89,    93,    92,    94,    92,    92,
      96,    95,    95,    98,    97,    99,    97,   100,    97,   101,
     101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,    15,     2,     1,
       1,     1,     1,     1,     0,     4,     3,     2,     1,     0,
       0,     3,     0,     3,     0,     0,     6,     4,     0,     4,
       0,     0,     4,     3,     0,     1,     1,     1,     3,     2,
       0,     6,     0,     9,     0,     0,     0,     0,     0,    12,
       1,     3,     2,     0,     6,     0,     9,     0,     0,     0,
       0,     0,    12,     1,     3,     2,     0,     6,     0,     9,
       0,     0,     0,     6,     0,     1,     3,     3,     2,     1,
       3,     0,     4,     1,     1,     1,     1,     0,     5,     5,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     1,
       0,     4,     1,     0,     4,     0,     3,     0,     2,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,     1,    10,    11,    12,    13,     8,
       0,     2,     0,     3,     0,    20,    22,     0,     0,    19,
      30,     0,    19,     4,    14,    18,    17,    24,    21,    23,
      16,     0,     0,     0,     0,     0,     5,    15,    30,    25,
      30,    44,    27,     0,    29,    45,    58,     0,    40,    42,
       0,     6,    35,    36,    37,    30,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    19,    34,    39,    26,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,   107,    84,    83,   105,   103,
       0,    79,     0,    94,    99,   102,     0,   107,   105,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     7,
      78,   108,    81,    30,     0,     0,     0,    46,   109,   110,
     111,   112,   113,    90,    92,     0,    95,    97,   100,    59,
      88,    89,     0,     0,     0,     0,     0,     0,     0,    33,
       0,   106,     0,    76,    77,     0,     0,     0,    80,     0,
       0,     0,     0,    41,    54,    67,     0,     0,     0,    32,
      82,   104,    47,    91,    93,    96,    98,   101,    60,     0,
       0,     0,    44,    44,     0,     0,     0,     0,     0,    43,
      56,    69,    48,    61,    74,    74,    71,    49,    62,     0,
      72,    44,     0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    12,    14,    31,    41,    67,     9,    50,    18,
      32,    26,    19,    20,    21,    28,    34,    43,    35,    83,
     138,    68,    60,    63,    52,    56,   145,   172,   184,    61,
      64,    53,    57,   152,   173,   185,    62,    65,   187,   189,
     191,    74,    90,    91,   140,    54,    72,    92,   146,   147,
      93,   149,   150,    94,   151,    95,   114,   113,   111,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
      11,   -72,    30,   132,   -72,   -72,   -72,   -72,   -72,    11,
      12,   -72,     6,   -72,    59,   -72,   -72,     8,    19,     3,
      28,     8,     3,   -72,   -72,   -72,   -72,   -18,   -72,   -72,
     -72,    23,    59,     4,    66,    47,   -72,    68,    28,   -72,
      28,    86,   -72,    84,   -72,   -72,   -72,    92,   -72,   -72,
     104,    86,   -72,   -72,   -72,    28,    75,    97,   -72,   110,
     107,   114,   115,   118,   119,   120,     3,   124,    86,   -72,
      80,    80,     7,   -72,   121,   126,   131,   133,   134,   135,
     136,   -72,     5,   125,    85,    62,   -72,   -72,    95,   -72,
     100,   -72,    58,    70,   128,   -72,   102,   -72,   -72,    89,
     127,   129,   130,   137,   138,   139,   140,   -72,   141,   -72,
     -72,   -72,   -72,    28,     7,    85,    85,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     7,   -72,   -72,   -72,   -72,
     -72,   -72,   142,   143,   144,   145,   146,   147,   151,   -72,
       7,   -72,    21,   -72,   -72,   148,     7,     7,   116,     7,
       7,     7,   149,   -72,   -72,   -72,   150,   154,   161,   -72,
     116,   -72,   -72,   -72,   -72,   -72,   -72,   128,   -72,   156,
     157,   158,    86,    86,   155,   159,   160,     2,     9,   -72,
     -72,   -72,   -72,   -72,   162,   162,   -72,   -72,   -72,   164,
     -72,    86,    54,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   167,    10,   163,
     -72,   -19,    29,   -72,   -72,   -36,   -72,   -72,   -72,   -72,
     -72,   -41,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -23,   -72,
     -72,   -72,    98,   -64,   -72,   -72,   -72,   -71,   -72,   -72,
      -4,   -72,   -72,    17,   -72,   -72,   -72,   -72,   -72,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -87
static const yytype_int16 yytable[] =
{
      51,    99,    42,    30,    44,    45,    33,     5,     6,     7,
      46,     8,    45,    10,     5,     6,     7,    46,     8,    69,
     110,     1,   -28,   107,    17,    97,    47,    48,    49,   108,
       4,    98,    15,    47,    48,    49,    11,    16,   182,    13,
      89,    25,    17,   142,    38,   183,    22,    81,   123,   124,
      29,   143,   144,    23,   148,   161,    24,    45,    36,     5,
       6,     7,    46,     8,     5,     6,     7,    27,     8,   160,
     118,   119,   120,   121,   122,   163,   164,   141,    47,    48,
      49,   -86,   -86,    15,    39,   123,   124,    40,    16,    45,
     193,     5,     6,     7,    46,     8,   -86,    84,    85,   126,
     127,    86,    87,    85,    88,    24,    86,    87,    70,    88,
      47,    48,    49,    89,   -85,   -85,   123,   124,    89,   115,
     116,   115,   116,    58,    55,    59,   112,   130,    66,   -85,
      71,   177,   178,    73,   117,    82,   129,     5,     6,     7,
      75,     8,     1,   123,   124,   165,   166,    76,    77,   101,
     192,    78,    79,    80,   102,   100,   103,   104,   105,   106,
     128,   109,   188,   132,   133,   131,   186,     3,   167,    96,
       0,   134,     0,     0,   169,   135,   136,   137,   170,   139,
     153,   154,   155,   162,   168,   171,   156,   157,   158,   159,
     174,   175,   176,   179,     0,    37,     0,   180,   181,   190
};

static const yytype_int16 yycheck[] =
{
      41,    72,    38,    22,    40,     3,    24,     5,     6,     7,
       8,     9,     3,     3,     5,     6,     7,     8,     9,    55,
      84,    10,    40,    18,    14,    18,    24,    25,    26,    24,
       0,    24,    24,    24,    25,    26,    24,    29,    36,    33,
      33,    38,    32,   114,    40,    36,    17,    66,    27,    28,
      21,   115,   116,    34,   125,    34,    37,     3,    35,     5,
       6,     7,     8,     9,     5,     6,     7,    39,     9,   140,
      12,    13,    14,    15,    16,   146,   147,   113,    24,    25,
      26,    19,    20,    24,    18,    27,    28,    40,    29,     3,
      36,     5,     6,     7,     8,     9,    34,    17,    18,    29,
      30,    21,    22,    18,    24,    37,    21,    22,    33,    24,
      24,    25,    26,    33,    19,    20,    27,    28,    33,    19,
      20,    19,    20,    31,    40,    33,    31,    38,    24,    34,
      33,   172,   173,    23,    34,    11,    34,     5,     6,     7,
      33,     9,    10,    27,    28,   149,   150,    33,    33,    23,
     191,    33,    33,    33,    23,    34,    23,    23,    23,    23,
      32,    36,   185,    34,    34,    38,     4,     0,   151,    71,
      -1,    34,    -1,    -1,    24,    37,    37,    37,    24,    38,
      38,    38,    38,    35,    35,    24,    41,    41,    41,    38,
      34,    34,    34,    38,    -1,    32,    -1,    38,    38,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    43,    49,     0,     5,     6,     7,     9,    49,
      50,    24,    44,    33,    45,    24,    29,    50,    51,    54,
      55,    56,    54,    34,    37,    38,    53,    39,    57,    54,
      53,    46,    52,    24,    58,    60,    35,    51,    40,    18,
      40,    47,    57,    59,    57,     3,     8,    24,    25,    26,
      50,    63,    66,    73,    87,    40,    67,    74,    31,    33,
      64,    71,    78,    65,    72,    79,    24,    48,    63,    57,
      33,    33,    88,    23,    83,    33,    33,    33,    33,    33,
      33,    53,    11,    61,    17,    18,    21,    22,    24,    33,
      84,    85,    89,    92,    95,    97,    84,    18,    24,    89,
      34,    23,    23,    23,    23,    23,    23,    18,    24,    36,
      85,   100,    31,    99,    98,    19,    20,    34,    12,    13,
      14,    15,    16,    27,    28,   101,    29,    30,    32,    34,
      38,    38,    34,    34,    34,    37,    37,    37,    62,    38,
      86,    57,    89,    85,    85,    68,    90,    91,    89,    93,
      94,    96,    75,    38,    38,    38,    41,    41,    41,    38,
      89,    34,    35,    89,    89,    92,    92,    95,    35,    24,
      24,    24,    69,    76,    34,    34,    34,    63,    63,    38,
      38,    38,    36,    36,    70,    77,     4,    80,    80,    81,
      35,    82,    63,    36
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 71 "parser.y"
    {insert_type_table();}
    break;

  case 3:
#line 71 "parser.y"
    {add('t');}
    break;

  case 4:
#line 71 "parser.y"
    {add('t');}
    break;

  case 5:
#line 71 "parser.y"
    {add('t');}
    break;

  case 6:
#line 71 "parser.y"
    { printf("Label next:\n");}
    break;

  case 7:
#line 71 "parser.y"
    {(yyval.nam).nd = mknode(NULL,(yyvsp[(12) - (15)].nam).nd,"start");
printf("\n\n#######################################################################################\n");
printf("\t\t\tSyntax Tree in Inorder traversal\n");
printf("#######################################################################################\n");
printtree((yyval.nam).nd);
printf("\n\n");
add('t');
optimized();}
    break;

  case 9:
#line 79 "parser.y"
    {add('H');}
    break;

  case 10:
#line 80 "parser.y"
    {insert_type();}
    break;

  case 11:
#line 80 "parser.y"
    {insert_type();}
    break;

  case 12:
#line 80 "parser.y"
    {insert_type();}
    break;

  case 13:
#line 80 "parser.y"
    {insert_type();}
    break;

  case 14:
#line 81 "parser.y"
    {add('t');}
    break;

  case 18:
#line 83 "parser.y"
    {add('t');}
    break;

  case 20:
#line 84 "parser.y"
    {insert_type_table();}
    break;

  case 22:
#line 84 "parser.y"
    {add_ptr();}
    break;

  case 24:
#line 85 "parser.y"
    {add('t');}
    break;

  case 25:
#line 85 "parser.y"
    {add('n');}
    break;

  case 28:
#line 85 "parser.y"
    {add('t');}
    break;

  case 31:
#line 87 "parser.y"
    {add('n');}
    break;

  case 32:
#line 87 "parser.y"
    {add('t');printf("Return\t%s\n",(yyvsp[(2) - (4)].nam).name);}
    break;

  case 33:
#line 87 "parser.y"
    {add('t');printf("Return\t%s\n",(yyvsp[(2) - (3)].nam).name);}
    break;

  case 37:
#line 91 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 38:
#line 92 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"definition"); int i=sym_search((yyvsp[(2) - (3)].nam).name);if(i!=-1)
	{if(strcmp((yyvsp[(1) - (3)].nam).name,"int")==0){addTo('i',(yyvsp[(2) - (3)].nam).name);}
	else if(strcmp((yyvsp[(1) - (3)].nam).name,"float")==0)addTo('f',(yyvsp[(2) - (3)].nam).name);
	else addTo('c',(yyvsp[(2) - (3)].nam).name);}
	else{printf("Variable already defined, error at line no: %d\n",yylineno);exit(0);}}
    break;

  case 39:
#line 97 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (2)].nam).nd,(yyvsp[(2) - (2)].nam).nd,"statement");strcpy((yyval.nam).name,"STATEMENT");}
    break;

  case 40:
#line 98 "parser.y"
    {add('f');}
    break;

  case 41:
#line 98 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"printf");}
    break;

  case 42:
#line 99 "parser.y"
    {add('f');}
    break;

  case 43:
#line 99 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"scanf");}
    break;

  case 44:
#line 100 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"EPSILON");}
    break;

  case 45:
#line 104 "parser.y"
    {add('k');}
    break;

  case 46:
#line 104 "parser.y"
    {printf("\n Label\t%s:\n",(yyvsp[(4) - (5)].gen).tr);}
    break;

  case 47:
#line 104 "parser.y"
    {addTo('{',"Punctuations");}
    break;

  case 48:
#line 104 "parser.y"
    {addTo('}',"Punctuations");
	pop();
	printf("goto next\n");
	printf("\nLabel\t%s:\n",(yyvsp[(4) - (10)].gen).fal);}
    break;

  case 49:
#line 107 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(4) - (12)].gen).nd,(yyvsp[(9) - (12)].nam).nd,"IF");
	strcpy((yyval.nam).name,"IF");}
    break;

  case 50:
#line 109 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 51:
#line 110 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"definition"); int i=sym_search((yyvsp[(2) - (3)].nam).name);if(i!=-1)
	{if(strcmp((yyvsp[(1) - (3)].nam).name,"int")==0){addTo('i',(yyvsp[(2) - (3)].nam).name);}
	else if(strcmp((yyvsp[(1) - (3)].nam).name,"float")==0)addTo('f',(yyvsp[(2) - (3)].nam).name);
	else addTo('c',(yyvsp[(2) - (3)].nam).name);}
	else{printf("Variable already defined, error at line no: %d\n",yylineno);exit(0);}}
    break;

  case 52:
#line 115 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (2)].nam).nd,(yyvsp[(2) - (2)].nam).nd,"statement");strcpy((yyval.nam).name,"STATEMENT");}
    break;

  case 53:
#line 116 "parser.y"
    {add('f');}
    break;

  case 54:
#line 116 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"printf");}
    break;

  case 55:
#line 117 "parser.y"
    {add('f');}
    break;

  case 56:
#line 117 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"scanf");}
    break;

  case 57:
#line 118 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"EPSILON");}
    break;

  case 58:
#line 121 "parser.y"
    {add('k'); sprintf(nL,"L%d",ifd);ifd++;printf("\n Label \t %s : \n",nL);}
    break;

  case 59:
#line 121 "parser.y"
    {printf("\n Label\t%s:\n",(yyvsp[(4) - (5)].gen).tr);}
    break;

  case 60:
#line 121 "parser.y"
    {addTo('{',"Punctuations");}
    break;

  case 61:
#line 121 "parser.y"
    {addTo('}',"Punctuations");
	pop();
	printf("goto %s\n",nL);
	printf("\nLabel\t%s:\n",(yyvsp[(4) - (10)].gen).fal);}
    break;

  case 62:
#line 124 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(4) - (12)].gen).nd,(yyvsp[(9) - (12)].nam).nd,"WHILE");
	strcpy((yyval.nam).name,"WHILE");}
    break;

  case 63:
#line 126 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 64:
#line 127 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"definition"); int i=sym_search((yyvsp[(2) - (3)].nam).name);if(i!=-1)
	{if(strcmp((yyvsp[(1) - (3)].nam).name,"int")==0){addTo('i',(yyvsp[(2) - (3)].nam).name);}
	else if(strcmp((yyvsp[(1) - (3)].nam).name,"float")==0)addTo('f',(yyvsp[(2) - (3)].nam).name);
	else addTo('c',(yyvsp[(2) - (3)].nam).name);}
	else{printf("Variable already defined, error at line no: %d\n",yylineno);exit(0);}}
    break;

  case 65:
#line 132 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (2)].nam).nd,(yyvsp[(2) - (2)].nam).nd,"statement");strcpy((yyval.nam).name,"STATEMENT");}
    break;

  case 66:
#line 133 "parser.y"
    {add('f');}
    break;

  case 67:
#line 133 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"printf");}
    break;

  case 68:
#line 134 "parser.y"
    {add('f');}
    break;

  case 69:
#line 134 "parser.y"
    {(yyval.nam).nd = mknode(NULL,NULL,"scanf");}
    break;

  case 70:
#line 135 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,"EPSILON");}
    break;

  case 71:
#line 137 "parser.y"
    {add('k');}
    break;

  case 72:
#line 137 "parser.y"
    {addTo('{',"Punctuations");}
    break;

  case 73:
#line 137 "parser.y"
    {(yyval.nam)=(yyvsp[(5) - (6)].nam);addTo('}',"Punctuations");
	pop();
	printf("goto next\n");
	printf("\n");}
    break;

  case 74:
#line 140 "parser.y"
    {printf("goto next\n");
	printf("\n");}
    break;

  case 79:
#line 145 "parser.y"
    {(yyval.gen).nd=(yyvsp[(1) - (1)].gen).nd;}
    break;

  case 80:
#line 148 "parser.y"
    {(yyval.gen).nd=mknode((yyvsp[(1) - (3)].nam).nd,(yyvsp[(3) - (3)].nam).nd,(yyvsp[(2) - (3)].nam).name);
   	int i=search((yyvsp[(1) - (3)].nam).name);
   	int j=search((yyvsp[(3) - (3)].nam).name);
   	if(i!=0&&j!=0){
   	printf("if %s %s %s \ngoto L%d \nelse goto L%d\n",(yyvsp[(1) - (3)].nam).name,(yyvsp[(2) - (3)].nam).name,(yyvsp[(3) - (3)].nam).name,ifd,eld);
   sprintf((yyval.gen).tr,"L%d",ifd);
   sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}   
   else{printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
    break;

  case 81:
#line 156 "parser.y"
    {add('o');}
    break;

  case 82:
#line 156 "parser.y"
    {int i=search((yyvsp[(1) - (4)].nam).name);
 	int j=search((yyvsp[(4) - (4)].nam).name);
 	if(i!=0&&j!=0)
 	{
 	printf("if %s!=0 goto L%d else goto L%d\n",(yyvsp[(1) - (4)].nam).name,ifd,eld);
 	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;} 
	else{printf(" Variable not declared at line no: %d\n", yylineno);
	exit(0);}}
    break;

  case 83:
#line 165 "parser.y"
    {printf("if False  goto L%d\n",eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
    break;

  case 84:
#line 168 "parser.y"
    {printf("if True  goto L%d\n",ifd);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
    break;

  case 85:
#line 171 "parser.y"
    {int i=search((yyvsp[(1) - (1)].nam).name);
	if(i!=0)
	{
	printf("if %s!=0  goto L%d else goto L%d\n",(yyvsp[(1) - (1)].nam).name,ifd,eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}    
	else {printf(" Variable not declared at line no: %d\n", yylineno);
	exit(0);} }
    break;

  case 86:
#line 179 "parser.y"
    {add('n');
	printf("if %s!=0  goto L%d else goto L%d\n",(yyvsp[(1) - (1)].nam).name,ifd,eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
    break;

  case 87:
#line 184 "parser.y"
    {add('o');}
    break;

  case 88:
#line 184 "parser.y"
    {(yyvsp[(1) - (5)].nam).nd = mknode(NULL,NULL,(yyvsp[(1) - (5)].nam).name);
	  (yyval.nam).nd=mknode((yyvsp[(1) - (5)].nam).nd,(yyvsp[(4) - (5)].nam).nd,"=");
	  strcpy((yyval.nam).name,"=");add('t');
	  int i=search((yyvsp[(1) - (5)].nam).name);
	  int j=search((yyvsp[(4) - (5)].nam).name);
	  if(i!=0&&j!=0) 
	  {
	  type_check((yyvsp[(1) - (5)].nam).name,(yyvsp[(4) - (5)].nam).name);
	  printf("= \t %s\t %s \n",(yyvsp[(4) - (5)].nam).name,(yyvsp[(1) - (5)].nam).name);
		strcpy(intermediate_code[code].op,"=");
		strcpy(intermediate_code[code].res,(yyvsp[(1) - (5)].nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(4) - (5)].nam).name);
		code++;
		} 
	  else {printf("Variable not declared at line no: %d\n", yylineno);
	  exit(0);}}
    break;

  case 89:
#line 199 "parser.y"
    {add('t');}
    break;

  case 90:
#line 201 "parser.y"
    {add('o');}
    break;

  case 91:
#line 201 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (4)].nam).nd,(yyvsp[(4) - (4)].nam).nd,"+");strcpy((yyval.nam).name,"+");
	int i=search((yyvsp[(1) - (4)].nam).name);
	int j=search((yyvsp[(4) - (4)].nam).name);
	sprintf((yyval.nam).name,"t%d",c);c++;
	addTo(temptype((yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","+",(yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name,(yyval.nam).name);strcpy(intermediate_code[code].op,"+");
		strcpy(intermediate_code[code].res,(yyval.nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(1) - (4)].nam).name);
		strcpy(intermediate_code[code].op2,(yyvsp[(4) - (4)].nam).name);
		code++;}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
    break;

  case 92:
#line 214 "parser.y"
    {add('o');}
    break;

  case 93:
#line 214 "parser.y"
    { (yyval.nam).nd=mknode((yyvsp[(1) - (4)].nam).nd,(yyvsp[(4) - (4)].nam).nd,"-");
	strcpy((yyval.nam).name,"-");
	int i=search((yyvsp[(1) - (4)].nam).name);
	int j=search((yyvsp[(4) - (4)].nam).name);
	sprintf((yyval.nam).name,"t%d",c);c++;
	addTo(temptype((yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","-",(yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name,(yyval.nam).name); strcpy(intermediate_code[code].op,"-");
		strcpy(intermediate_code[code].res,(yyval.nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(1) - (4)].nam).name);
		strcpy(intermediate_code[code].op2,(yyvsp[(4) - (4)].nam).name);
		code++;} 
	else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
    break;

  case 94:
#line 226 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 95:
#line 228 "parser.y"
    {add('o');}
    break;

  case 96:
#line 228 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (4)].nam).nd,(yyvsp[(4) - (4)].nam).nd,"*");
	 strcpy((yyval.nam).name,"*");
	 int i=search((yyvsp[(1) - (4)].nam).name);
	 int j=search((yyvsp[(4) - (4)].nam).name);
	 sprintf((yyval.nam).name,"t%d",c);c++;
	 addTo(temptype((yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name),(yyval.nam).name);
	 if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","*",(yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name,(yyval.nam).name);strcpy(intermediate_code[code].op,"*");
		strcpy(intermediate_code[code].res,(yyval.nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(1) - (4)].nam).name);
		strcpy(intermediate_code[code].op2,(yyvsp[(4) - (4)].nam).name);
		code++;}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
    break;

  case 97:
#line 241 "parser.y"
    {add('o');}
    break;

  case 98:
#line 241 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (4)].nam).nd,(yyvsp[(4) - (4)].nam).nd,"/");strcpy((yyval.nam).name,"/"); 
	int i=search((yyvsp[(1) - (4)].nam).name);
	int j=search((yyvsp[(4) - (4)].nam).name);
	sprintf((yyval.nam).name,"%d",c);
	strcat((yyval.nam).name,"t");c++;
	addTo(temptype((yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) 
	{
	printf("%s\t%s\t%s\t%s\n","/",(yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name,(yyval.nam).name);strcpy(intermediate_code[code].op,"/");
		strcpy(intermediate_code[code].res,(yyval.nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(1) - (4)].nam).name);
		strcpy(intermediate_code[code].op2,(yyvsp[(4) - (4)].nam).name);
		code++;
	}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);
	 exit(0);}}
    break;

  case 99:
#line 258 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 100:
#line 260 "parser.y"
    {add('o');}
    break;

  case 101:
#line 260 "parser.y"
    {(yyval.nam).nd=mknode((yyvsp[(1) - (4)].nam).nd,(yyvsp[(4) - (4)].nam).nd,"^");
	strcpy((yyval.nam).name,"^");
	int i=search((yyvsp[(1) - (4)].nam).name);
	int j=search((yyvsp[(4) - (4)].nam).name);
	sprintf((yyval.nam).name,"%d",c);
	strcat((yyval.nam).name,"t");c++;
	addTo(temptype((yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {
	printf("%s\t%s\t%s\t%s\n","^",(yyvsp[(1) - (4)].nam).name,(yyvsp[(4) - (4)].nam).name,(yyval.nam).name);strcpy(intermediate_code[code].op,"^");
		strcpy(intermediate_code[code].res,(yyval.nam).name);
		strcpy(intermediate_code[code].op1,(yyvsp[(1) - (4)].nam).name);
		strcpy(intermediate_code[code].op2,(yyvsp[(4) - (4)].nam).name);
		code++;} 
	else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
    break;

  case 102:
#line 275 "parser.y"
    {(yyval.nam).nd=(yyvsp[(1) - (1)].nam).nd;}
    break;

  case 103:
#line 277 "parser.y"
    {add('t');}
    break;

  case 104:
#line 277 "parser.y"
    {add('t'); (yyval.nam)=(yyvsp[(3) - (4)].nam);}
    break;

  case 105:
#line 277 "parser.y"
    {insert_type_table();}
    break;

  case 106:
#line 277 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,(yyvsp[(1) - (3)].nam).name);strcpy((yyval.nam).name,(yyvsp[(1) - (3)].nam).name);}
    break;

  case 107:
#line 277 "parser.y"
    {add('n');}
    break;

  case 108:
#line 277 "parser.y"
    {(yyval.nam).nd=mknode(NULL,NULL,(yyvsp[(1) - (2)].nam).name);
	strcpy((yyval.nam).name,(yyvsp[(1) - (2)].nam).name);}
    break;

  case 109:
#line 281 "parser.y"
    {add('r');}
    break;

  case 110:
#line 281 "parser.y"
    {add('r');}
    break;

  case 111:
#line 281 "parser.y"
    {add('r');}
    break;

  case 112:
#line 281 "parser.y"
    {add('r');}
    break;

  case 113:
#line 281 "parser.y"
    {add('r');}
    break;


/* Line 1267 of yacc.c.  */
#line 2202 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 285 "parser.y"

int main()
{
	
	extern int yylineno;
	x.val=10;
	printf("\n\n#######################################################################################\n");
	printf("\t\t\tIntermediate code\n");
	printf("#######################################################################################\n");
	yyparse();
	
	printf("\n\tParsing is Successful\n");	
	printf("\n\n#######################################################################################\n");
	printf("\t\t\tSymbol table\n");
	printf("#######################################################################################\n");	
	printf("\n\t\t\tsymbol \t\t type  \t\t identify \t\t line number\n");
	printf("_______________________________________________________________________________________\n");
	int i=0;
	for(i=0;i<100;i++){
		if(symbolTable[i].id_name!=NULL){
			if(i<2){
				printf("\t\t%s\t%s\t\t%s\t\t\t%d\t\n",symbolTable[i].id_name,symbolTable[i].data_type,symbolTable[i].type,symbolTable[i].line_no);
			}
			else{
				printf("\t\t%s\t\t\t%s\t\t%s\t\t%d\t\n",symbolTable[i].id_name,symbolTable[i].data_type,symbolTable[i].type,symbolTable[i].line_no);
			}
		}
	}
	for(i=0;i<count;i++){
		free(symbolTable[i].id_name);
		free(symbolTable[i].type);
	}
	return 0;
}
void yyerror(const char* s)
{
	printf("Not accepted\n");
	exit(0);
}
//insert the type into symboltable
void insert_type(){

	
	strcpy(type,yytext);
	//printf("hey");
	q=search(type);
	//printf("qval=%d",q);
	if(q==0){
		
		symbolTable[count].id_name=strdup(yytext);
		symbolTable[count].data_type=strdup("N/A");
		symbolTable[count].line_no = countn;
		symbolTable[count].type=strdup("KEYWORD\t");
		count++;
	}
	
	
}

struct node1* mknode(struct node1 *left, struct node1 *right, char *token)
{
	
  struct node1 *newnode = (struct node1 *)malloc(sizeof(struct node1));
  char *newstr = (char *)malloc(strlen(token)+1);
  strcpy(newstr, token);
  newnode->left = left;
  newnode->right = right;
  newnode->token = newstr;
  return(newnode);
}
void pop()
{
	int i;
	//printf("count %d\n",count);
	int temp=count-1;
	for(i=temp;i>=0;i--)
	{
		if(strcmp(symbolTable[i].id_name,"{")!=0)
		{
			//printf("$$\n");
			count=count-1;;
		}
		else
		{
			count=count-1;
			break;
		}
	}	
	

}
//add declaration of data to symboltable
void addTo(char i,char *n)
{
	if(i=='i')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="int";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='f')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="float";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='c')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="char";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='{')
	{
			symbolTable[count].id_name=strdup("{");;
			symbolTable[count].data_type="N/A";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("punctuation");
			count++;
	}
	else if(i=='}')
	{
			symbolTable[count].id_name=strdup("}");;
			symbolTable[count].data_type="N/A";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("punctuation");
			count++;
	}


}
char temptype(char* one,char* two)
{
		int y;
	char* onetype;
	char* twotype;
	for(y = 0;y<count;y++)
	{
		if(strcmp(symbolTable[y].id_name,one)==0) onetype=symbolTable[y].data_type;
		if(strcmp(symbolTable[y].id_name,two)==0) twotype=symbolTable[y].data_type;	
	}
	if((strcmp(onetype,"float")==0) || (strcmp(twotype,"float")==0))
		return 'f';
	else
		return 'i';
}
void insert_type_table(){
	
		q=search(yytext);
	
		if(q==0){
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("IDENTIFIER");
			count++;
		}
	
	
}
void type_check(char* one, char* two)
{
	int y;
	char* onetype;
	char* twotype;
	for(y = 0;y<count;y++)
	{
		if(strcmp(symbolTable[y].id_name,one)==0) onetype=symbolTable[y].data_type;
		if(strcmp(symbolTable[y].id_name,two)==0) twotype=symbolTable[y].data_type;	
	}
	if(strcmp(onetype,twotype)>0){ printf("type error at lineno %d\n",yylineno);exit(0);}
}
//ADD the recent parsed string into symboltable
void add(char c)
{
	q=search(yytext);
	if(q==0){
		if(c=='H')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Header");
			count++;
		}
		else if(c=='t')
		{	
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Punctuation");
			count++;
		}
		else if(c=='o')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Operator");
			count++;
		}
		else if(c=='r')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Rel Op\t");
			count++;
		}
		else if(c=='k')
		{
						
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("KEYWORD\t");
			//printf("ADDDDDDDDD%s\n",symbolTable[count].id_name);
			count++;
		}
		else if(c=='n')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("int");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("NUMBER\t");
			count++;
		}
	else if(c=='f')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("FUNCTION\t");
			count++;
		}
	}
}
int  sym_search(char *type)
{
	int i;
	for(i=count -1 ;i>=0&&(strcmp(symbolTable[i].id_name,"{")!=0);i--)
	{
		if(strcmp(symbolTable[i].id_name,type)==0)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
//Search in the Symbol table whether the parsed String is present in Symbol table already
int  search(char *type)
{
	int i;
	for(i=count -1 ;i>=0;i--)
	{
		if(strcmp(symbolTable[i].id_name,type)==0)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
void add_ptr(){
	strcat(type,"*");
}
//print the abstract syntax tree
void printtree(struct node1* tree)
{
  if (tree->left)
	{

		printtree(tree->left);
	}
 printf(" \t%s , ", tree->token);
  if (tree->right)
	{
   
		printtree(tree->right);
	}

 
}
void optimized()
{

int i;
int j;
int n,m;
int k;
char yay[10];
int len;
int rem;
for (i=0;i<code;i++)// Common Subexpression Elimination
    for(j=i+1;j<code;j++)
        if(strcmp(intermediate_code[i].op,intermediate_code[j].op)==0)
            {
            if(strcmp(intermediate_code[i].op1,intermediate_code[j].op1)==0)
                if(strcmp(intermediate_code[i].op2,intermediate_code[j].op2)==0 && strcmp(intermediate_code[i].op1,intermediate_code[i].res)!=0 && strcmp(intermediate_code[i].op2,intermediate_code[i].res)!=0 )
                    {
                        for(k=i+1;k<j;k++)
			if(strcmp(intermediate_code[j].op1,intermediate_code[k].res)==0 ||strcmp(intermediate_code[j].op2,intermediate_code[k].res)==0)
			break;
			if(k==j)
			{
                        strcpy(intermediate_code[j].op,"=");
                        strcpy(intermediate_code[j].op1,intermediate_code[i].res);
                        strcpy(intermediate_code[j].op2,"");
                        }
                    }
        
           if(strcmp(intermediate_code[i].op1,intermediate_code[j].op2)==0 && strcmp(intermediate_code[i].op2,intermediate_code[j].op1)==0    &&(strcmp(intermediate_code[i].op,"+")==0 || strcmp(intermediate_code[i].op,"*")==0))
                    {
                     for(k=i+1;k<j;k++)
			if(strcmp(intermediate_code[j].op1,intermediate_code[k].res)==0 ||strcmp(intermediate_code[j].op2,intermediate_code[k].res)==0)
			break;
			if(k==j)
			{
                        strcpy(intermediate_code[j].op,"=");
                        strcpy(intermediate_code[j].op1,intermediate_code[i].res);
                        strcpy(intermediate_code[j].op2,"");
			}
                    }
            }

//constant Folding
for(i=0;i<code;i++)
    {
        n=strlen(intermediate_code[i].op1);
        m=strlen(intermediate_code[i].op2);
        for(k=0;k<n;k++)
            if(isdigit(intermediate_code[i].op1[k])==0)
                break;
        for(j=0;j<m;j++)
            if(isdigit(intermediate_code[i].op1[j])==0)
                break;
            if(j==m && k==n)
            {
                j=atoi(intermediate_code[i].op1);
                k=atoi(intermediate_code[i].op2);
                if(strcmp(intermediate_code[i].op,"*")==0)
                {
                    m=j*k;
                }
                else if(strcmp(intermediate_code[i].op,"+")==0)
                {
                    m=j+k;
                }
                else if(strcmp(intermediate_code[i].op,"-")==0)
                {
                    m=j-k;
                }
                else if(strcmp(intermediate_code[i].op,"/")==0)
                {
                    m=j/k;
                }
               /* j = m;
                while (j != 0)
                {
                    len++;
                    j /= 10;
                }
                for (i = 0; i < len; i++)
                {
                    rem = j % 10;
                    j = j / 10;
                    yay[len - (i + 1)] = rem + '0';
                }
                yay[len] = '\0';*/
                strcpy(intermediate_code[i].op,"=");
				sprintf(intermediate_code[i].op1,"%d",m);
                //strcpy(intermediate_code[i].op1,yay);
                strcpy(intermediate_code[i].op2,"");
                
            }
    }
            

	printf("\n\n#######################################################################################\n");
	printf("\t\t\tOptimized Code\n");
	printf("#######################################################################################\n");

for (i=0;i<code;i++)
    printf("\t\t\t%s\t%s\t%s\t%s\n",intermediate_code[i].op,intermediate_code[i].op1,intermediate_code[i].op2,intermediate_code[i].res);


	printf("#######################################################################################\n");
}
