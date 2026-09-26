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
     CREATE = 258,
     AUTOMATON = 259,
     CLOCKS = 260,
     ACTIONS = 261,
     INTEGERS = 262,
     LOCATIONS = 263,
     TRANSITIONS = 264,
     SYMM = 265,
     INI = 266,
     URG = 267,
     COM = 268,
     INV = 269,
     LBRACE = 270,
     RBRACE = 271,
     LSQUARE = 272,
     RSQUARE = 273,
     LPAR = 274,
     RPAR = 275,
     COMMA = 276,
     SEMI = 277,
     DCOLON = 278,
     COLON = 279,
     ASSIGN = 280,
     PLUS = 281,
     MINUS = 282,
     MUL = 283,
     DIV = 284,
     OR = 285,
     AND = 286,
     BOOL = 287,
     INT = 288,
     LITERAL = 289,
     EXCLAM = 290,
     DOUBLE_EXCLAM = 291,
     INTERROG = 292,
     DOUBLE_INTERROG = 293,
     LE = 294,
     GE = 295,
     EQ = 296,
     LT = 297,
     GT = 298
   };
#endif
/* Tokens.  */
#define CREATE 258
#define AUTOMATON 259
#define CLOCKS 260
#define ACTIONS 261
#define INTEGERS 262
#define LOCATIONS 263
#define TRANSITIONS 264
#define SYMM 265
#define INI 266
#define URG 267
#define COM 268
#define INV 269
#define LBRACE 270
#define RBRACE 271
#define LSQUARE 272
#define RSQUARE 273
#define LPAR 274
#define RPAR 275
#define COMMA 276
#define SEMI 277
#define DCOLON 278
#define COLON 279
#define ASSIGN 280
#define PLUS 281
#define MINUS 282
#define MUL 283
#define DIV 284
#define OR 285
#define AND 286
#define BOOL 287
#define INT 288
#define LITERAL 289
#define EXCLAM 290
#define DOUBLE_EXCLAM 291
#define INTERROG 292
#define DOUBLE_INTERROG 293
#define LE 294
#define GE 295
#define EQ 296
#define LT 297
#define GT 298




/* Copy the first part of user declarations.  */
#line 3 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "translator.h"

extern int yylineno;
extern FILE *yyin;

int yylex();
void yyerror(char *s);


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
#line 19 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
{
    bool bval;
    char* sval;
}
/* Line 193 of yacc.c.  */
#line 201 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/.build/translator.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/.build/translator.tab.c"

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
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    16,    22,    26,    32,    34,    38,
      44,    46,    50,    51,    57,    59,    63,    69,    71,    75,
      76,    82,    83,    85,    87,    89,    93,    97,   101,   107,
     109,   111,   115,   119,   123,   127,   133,   135,   139,   155,
     158,   159,   161,   163,   165,   167,   170,   174,   176,   180,
     188,   190,   192,   194,   196,   198,   199,   201,   203,   207,
     208,   211,   212,   217,   219,   223,   227,   229,   231,   235,
     239,   243,   247,   251,   253,   257,   261,   265
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     3,     4,    34,    46,    15,    47,    49,
      51,    53,    63,    16,    -1,    -1,    23,    10,    42,    33,
      43,    -1,     5,    15,    16,    -1,     5,    15,    48,    22,
      16,    -1,    34,    -1,    48,    21,    34,    -1,     6,    15,
      50,    22,    16,    -1,    34,    -1,    50,    21,    34,    -1,
      -1,     7,    15,    52,    22,    16,    -1,    34,    -1,    52,
      21,    34,    -1,     8,    15,    54,    22,    16,    -1,    55,
      -1,    54,    21,    55,    -1,    -1,    34,    56,    42,    57,
      43,    -1,    -1,    59,    -1,    58,    -1,    62,    -1,    59,
      21,    58,    -1,    59,    21,    62,    -1,    58,    21,    62,
      -1,    59,    21,    58,    21,    62,    -1,    60,    -1,    61,
      -1,    11,    24,    32,    -1,    12,    24,    32,    -1,    13,
      24,    32,    -1,    14,    24,    68,    -1,     9,    15,    64,
      22,    16,    -1,    65,    -1,    64,    21,    65,    -1,    19,
      34,    21,    66,    21,    68,    21,    74,    17,    72,    18,
      21,    75,    34,    20,    -1,    34,    67,    -1,    -1,    35,
      -1,    37,    -1,    36,    -1,    38,    -1,    17,    18,    -1,
      17,    69,    18,    -1,    70,    -1,    69,    21,    70,    -1,
      19,    34,    21,    71,    21,    33,    20,    -1,    42,    -1,
      39,    -1,    41,    -1,    40,    -1,    43,    -1,    -1,    73,
      -1,    34,    -1,    73,    21,    34,    -1,    -1,    79,    21,
      -1,    -1,    17,    76,    18,    21,    -1,    77,    -1,    76,
      21,    77,    -1,    34,    25,    78,    -1,    33,    -1,    34,
      -1,    19,    78,    20,    -1,    78,    26,    78,    -1,    78,
      27,    78,    -1,    78,    28,    78,    -1,    78,    29,    78,
      -1,    32,    -1,    19,    79,    20,    -1,    78,    71,    78,
      -1,    79,    31,    79,    -1,    79,    30,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,   261,   263,   267,   268,   272,   277,   285,
     289,   295,   302,   304,   308,   313,   321,   325,   326,   331,
     330,   350,   352,   353,   354,   355,   356,   357,   358,   362,
     363,   367,   374,   381,   388,   395,   399,   400,   404,   434,
     446,   449,   449,   449,   449,   454,   458,   465,   467,   476,
     489,   489,   489,   489,   489,   495,   498,   503,   508,   520,
     523,   529,   532,   539,   541,   550,   559,   559,   561,   566,
     572,   578,   584,   593,   597,   602,   611,   617
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "AUTOMATON", "CLOCKS",
  "ACTIONS", "INTEGERS", "LOCATIONS", "TRANSITIONS", "SYMM", "INI", "URG",
  "COM", "INV", "LBRACE", "RBRACE", "LSQUARE", "RSQUARE", "LPAR", "RPAR",
  "COMMA", "SEMI", "DCOLON", "COLON", "ASSIGN", "PLUS", "MINUS", "MUL",
  "DIV", "OR", "AND", "BOOL", "INT", "LITERAL", "EXCLAM", "DOUBLE_EXCLAM",
  "INTERROG", "DOUBLE_INTERROG", "LE", "GE", "EQ", "LT", "GT", "$accept",
  "system", "symm_rule", "clock_block", "clock_list", "action_block",
  "action_list", "integer_block", "integer_list", "location_block",
  "location_list", "loc_rule", "@1", "loc_props", "urg_com", "ini", "urg",
  "com", "inv", "transition_block", "transition_list", "transition_rule",
  "actions_rule", "io_opt", "guard_rule", "clock_constraint_list",
  "clock_constraint", "comp_op", "reset_opt", "reset_list", "bool_opt",
  "assign_opt", "assign_list", "assign_expr", "arithm_expr", "bool_expr", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      50,    50,    51,    51,    52,    52,    53,    54,    54,    56,
      55,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    60,    61,    62,    63,    64,    64,    65,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     0,     5,     3,     5,     1,     3,     5,
       1,     3,     0,     5,     1,     3,     5,     1,     3,     0,
       5,     0,     1,     1,     1,     3,     3,     3,     5,     1,
       1,     3,     3,     3,     3,     5,     1,     3,    15,     2,
       0,     1,     1,     1,     1,     2,     3,     1,     3,     7,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     0,
       2,     0,     4,     1,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     4,     5,     7,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     8,     6,     0,     0,    14,     0,     0,     0,     0,
      11,     9,     0,     0,    19,     0,    17,     0,     2,    15,
      13,     0,     0,     0,     0,     0,    36,    21,    18,    16,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    22,
      29,    30,    24,     0,    37,    35,     0,     0,     0,     0,
      20,     0,     0,    40,     0,    31,    32,    33,     0,    34,
      27,    25,    26,    41,    43,    42,    44,    39,     0,    45,
       0,     0,    47,     0,     0,     0,    46,     0,    28,    59,
       0,    48,     0,    73,    66,    67,     0,     0,     0,    51,
      53,    52,    50,    54,     0,     0,     0,    55,     0,     0,
       0,     0,     0,    60,     0,     0,     0,    68,    74,    57,
       0,    56,     0,    69,    70,    71,    72,    75,    77,    76,
       0,     0,     0,     0,    49,    61,    58,     0,     0,     0,
       0,    63,     0,     0,     0,     0,    38,    65,    62,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    12,    20,    16,    27,    23,    36,    30,
      45,    46,    51,    67,    68,    69,    70,    71,    72,    39,
      55,    56,    84,    97,    89,   101,   102,   132,   140,   141,
     116,   158,   160,   161,   117,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int16 yypact[] =
{
      -2,    -1,    12,     3,  -113,    31,    47,    44,    50,    92,
      68,    85,    96,    61,    -3,    88,    98,  -113,  -113,  -113,
      65,    73,    91,   100,    75,    94,  -113,    67,    77,    97,
     104,  -113,  -113,    80,    99,  -113,    69,    82,   102,   103,
    -113,  -113,    84,   105,  -113,    72,  -113,   101,  -113,  -113,
    -113,    81,    82,   106,    90,    74,  -113,    60,  -113,  -113,
     107,   101,   109,   108,   110,   111,   112,    83,   116,   117,
    -113,  -113,  -113,    93,  -113,  -113,   113,   114,   115,   122,
    -113,   119,    71,    40,   120,  -113,  -113,  -113,    22,  -113,
    -113,   121,  -113,  -113,  -113,  -113,  -113,  -113,   122,  -113,
      95,    18,  -113,   119,   123,   127,  -113,   124,  -113,    10,
      27,  -113,    10,  -113,  -113,  -113,   132,     6,   -16,  -113,
    -113,  -113,  -113,  -113,   129,   -18,    30,   118,    19,    19,
      19,    19,    19,  -113,    10,    10,   125,  -113,  -113,  -113,
     133,   134,    19,    70,    70,  -113,  -113,    53,   126,  -113,
     136,   138,   128,    36,  -113,   137,  -113,   130,   131,   135,
      37,  -113,   141,    19,   142,   130,  -113,    53,  -113,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,    78,  -113,  -113,    49,  -113,  -113,  -113,   -75,  -113,
    -113,    79,  -113,  -113,    55,  -113,    59,    57,  -113,  -113,
    -113,  -113,  -113,     4,  -112,  -108
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     125,     1,   137,     3,   126,   133,    90,    92,   128,   129,
     130,   131,     4,    18,   134,   135,   143,   144,   145,   146,
     147,   119,   120,   121,   122,   123,   148,   149,   108,   112,
     153,    19,   128,   129,   130,   131,   106,     5,   142,   107,
      99,   100,   113,   114,   115,   119,   120,   121,   122,   123,
     138,   167,   114,   115,     6,   164,   137,     8,   165,     9,
     134,   135,   128,   129,   130,   131,   119,   120,   121,   122,
     123,    63,    64,    65,    66,    93,    94,    95,    96,   128,
     129,   130,   131,    64,    65,    66,    24,    25,    33,    34,
      42,    43,    10,    52,    53,    61,    62,    11,   130,   131,
      14,    13,    15,    21,    17,    22,    28,    26,    29,    31,
      32,    35,    37,    38,    40,    41,    44,    47,    49,    48,
      54,    50,    59,    57,    60,    75,    80,    83,    73,   105,
      58,    91,    76,    66,    77,    78,    79,    81,    82,    88,
      74,    98,   103,   100,   109,    85,    86,    87,   110,   127,
     136,   151,   139,   104,   157,   152,   154,   135,   150,   155,
     163,   166,   156,   168,   159,   162,   111,   124,     0,   169
};

static const yytype_int16 yycheck[] =
{
     112,     3,    20,     4,   112,    21,    81,    82,    26,    27,
      28,    29,     0,    16,    30,    31,   128,   129,   130,   131,
     132,    39,    40,    41,    42,    43,   134,   135,   103,    19,
     142,    34,    26,    27,    28,    29,    18,    34,    19,    21,
      18,    19,    32,    33,    34,    39,    40,    41,    42,    43,
      20,   163,    33,    34,    23,    18,    20,    10,    21,    15,
      30,    31,    26,    27,    28,    29,    39,    40,    41,    42,
      43,    11,    12,    13,    14,    35,    36,    37,    38,    26,
      27,    28,    29,    12,    13,    14,    21,    22,    21,    22,
      21,    22,    42,    21,    22,    21,    22,     5,    28,    29,
      15,    33,     6,    15,    43,     7,    15,    34,     8,    34,
      16,    34,    15,     9,    34,    16,    34,    15,    34,    16,
      19,    16,    16,    42,    34,    16,    43,    34,    21,    34,
      52,    82,    24,    14,    24,    24,    24,    21,    21,    17,
      61,    21,    21,    19,    21,    32,    32,    32,    21,    17,
      21,    18,    34,    98,    17,    21,    20,    31,    33,    21,
      25,    20,    34,    21,    34,    34,   107,   110,    -1,   165
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,     4,     0,    34,    23,    46,    10,    15,
      42,     5,    47,    33,    15,     6,    49,    43,    16,    34,
      48,    15,     7,    51,    21,    22,    34,    50,    15,     8,
      53,    34,    16,    21,    22,    34,    52,    15,     9,    63,
      34,    16,    21,    22,    34,    54,    55,    15,    16,    34,
      16,    56,    21,    22,    19,    64,    65,    42,    55,    16,
      34,    21,    22,    11,    12,    13,    14,    57,    58,    59,
      60,    61,    62,    21,    65,    16,    24,    24,    24,    24,
      43,    21,    21,    34,    66,    32,    32,    32,    17,    68,
      62,    58,    62,    35,    36,    37,    38,    67,    21,    18,
      19,    69,    70,    21,    68,    34,    18,    21,    62,    21,
      21,    70,    19,    32,    33,    34,    74,    78,    79,    39,
      40,    41,    42,    43,    71,    78,    79,    17,    26,    27,
      28,    29,    71,    21,    30,    31,    21,    20,    20,    34,
      72,    73,    19,    78,    78,    78,    78,    78,    79,    79,
      33,    18,    21,    78,    20,    21,    34,    17,    75,    34,
      76,    77,    34,    25,    18,    21,    20,    78,    21,    77
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
#line 43 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* 1 - print global variables */
        struct VarEntry *i_curr = int_head;
        if (i_curr) {
            printf("int ");
            while (i_curr) {
                printf("%s%s", i_curr->name, i_curr->next ? ", " : ";\n");
                i_curr = i_curr->next;
            }
        }
        
        /* 2 - print binary global channels */
        struct ActionEntry *a_curr = action_head;
        bool first_chan = true; /* flag to track the first binary channel */
        while (a_curr) {
            if (a_curr->type == SYNC_INPUT || a_curr->type == SYNC_OUTPUT) {
                if (first_chan) {
                    printf("chan ");
                    first_chan = false;
                }
                else {
                    printf(", ");
                }
                printf("%s", a_curr->name);
            }
            a_curr = a_curr->next;
        }
        if (!first_chan)
            printf(";\n"); /* close the binary channels list if we found any binary channel */

        /* 3 - print broadcast global channels */
        a_curr = action_head;
        bool first_bcast = true; /* flag to track the first broadcast channel */
        while (a_curr) {
            if (a_curr->type == SYNC_BCAST_INPUT || a_curr->type == SYNC_BCAST_OUTPUT) {
                if (first_bcast) {
                    printf("broadcast chan ");
                    first_bcast = false;
                }
                else {
                    printf(", ");
                }
                printf("%s", a_curr->name);
            }
            a_curr = a_curr->next;
        }
        if (!first_bcast)
            printf(";\n"); /* close the broadcast channels list if we found any broadcast channel */

        /* 4 - start the process block */
        printf("process %s() {\n", (yyvsp[(3) - (11)].sval));

        /* 5 - print local clocks */
        struct VarEntry *c_curr = clock_head;
        if (c_curr) {
            printf("  clock ");
            while (c_curr) {
                printf("%s%s", c_curr->name, c_curr->next ? ", " : ";\n");
                c_curr = c_curr->next;
            }
        }

        /* 6 - print locations with related invariants */
        printf("  state\n    ");
        struct Location *l_curr = loc_head;
        while (l_curr) {
            printf("%s", l_curr->name);
            if (l_curr->invariant)
                printf(" { %s }", l_curr->invariant);
            l_curr = l_curr->next;
            printf("%s", l_curr ? ", " : ";\n");
        }

        /* 7 - print urgent declaration */
        l_curr = loc_head;
        bool first_urg = true; /* flag to track the first urgent state */
        while (l_curr) {
            if (l_curr->is_urg) {
                if (first_urg) {
                    printf("  urgent %s", l_curr->name);
                    first_urg = false;
                }
                else
                    printf(", %s", l_curr->name);
            }
            l_curr = l_curr->next;
        }
        if (!first_urg)
            printf(";\n"); /* close the urgent list if we found any urgent location */

        /* 8 - print committed declaration */
        l_curr = loc_head;
        bool first_com = true; /* flag to track the first committed state */
        while (l_curr) {
            if (l_curr->is_com) {
                if (first_com) {
                    printf("  commit %s", l_curr->name);
                    first_com = false;
                }
                else
                    printf(", %s", l_curr->name);
            }
            l_curr = l_curr->next;
        }
        if (!first_com)
            printf(";\n"); /* close the committed list if we found any committed location */
        
        /* 9 - print initial declaration */
        l_curr = loc_head;
        int init_count = 0;
        char* init_name = NULL;
        while (l_curr) {
            if (l_curr->is_init) {
                init_count++;
                init_name = l_curr->name;
            }
            l_curr = l_curr->next;
        }

        /* check the number of locations declared as initial */
        if (init_count == 0) {
            fprintf(stderr, "Error: Automaton '%s' has no initial state declared\n", (yyvsp[(3) - (11)].sval));
            exit(1);
        }
        else if (init_count > 1) {
            fprintf(stderr, "Error: Automaton '%s' has multiple (%d) initial states declared\n", (yyvsp[(3) - (11)].sval), init_count);
            exit(1);
        }
        else {
            /* exactly 1 initial state is present */
            printf("  init %s;\n", init_name);
        }
        
        /* 10 - print transitions */
        printf("  trans\n");
        struct Transition *t_curr = trans_head;
        while (t_curr) {
            printf("    %s -> %s {\n", t_curr->source, t_curr->target);

            /* print guard */
            if (t_curr->guard)
                printf("      guard %s;\n", t_curr->guard);
            
            /* check if the considered action is synchronized and print it in positive case */
            a_curr = action_head;
            while (a_curr && t_curr->action) {
                int len = strlen(a_curr->name);
                /* check if the base name matches and is immediately followed by '!', '?', '!!', '??', or '\0' */
                if (!strncmp(a_curr->name, t_curr->action, len)) {
                    char* suffix = t_curr->action + len;
                    if (*suffix == '\0' || !strcmp(suffix, "!") || !strcmp(suffix, "?") || !strcmp(suffix, "!!") || !strcmp(suffix, "??"))
                        break; /* match found, exit loop */
                }
                a_curr = a_curr->next;
            }
            if (a_curr && (a_curr->type == SYNC_INPUT || a_curr->type == SYNC_OUTPUT || a_curr->type == SYNC_BCAST_INPUT || a_curr->type == SYNC_BCAST_OUTPUT)) {
                /* duplicate action string to convert '!!' and '??' to '!' and '?' */
                char* sync_str = strdup(t_curr->action);
                int act_len = strlen(sync_str);
                if (act_len >= 2 && (!strcmp(sync_str + act_len - 2, "!!") || !strcmp(sync_str + act_len - 2, "??")))
                    sync_str[act_len - 1] = '\0';
                printf("      sync %s;\n", sync_str);
                free(sync_str);
            }

            /* print assign */
            if (t_curr->assign)
                printf("      assign %s;\n", t_curr->assign);

            printf("    }%s\n", t_curr->next ? "," : ";");
            t_curr = t_curr->next;
        }

        /* 11 - close process and declare system */
        printf("}\nsystem %s;\n", (yyvsp[(3) - (11)].sval));

        /* 12 - cleanup */
        while (int_head) {
            i_curr = int_head;
            int_head = int_head->next;

            free(i_curr->name);
            free(i_curr);
        }
        while (clock_head) {
            c_curr = clock_head;
            clock_head = clock_head->next;

            free(c_curr->name);
            free(c_curr);
        }
        while (loc_head) {
            l_curr = loc_head;
            loc_head = loc_head->next;

            free(l_curr->name);
            if (l_curr->invariant)
                free(l_curr->invariant);
            free(l_curr);
        }
        while (trans_head) {
            t_curr = trans_head;
            trans_head = trans_head->next;

            free(t_curr->source);
            free(t_curr->target);
            if (t_curr->action)
                free(t_curr->action);
            if (t_curr->guard)
                free(t_curr->guard);
            if (t_curr->assign)
                free(t_curr->assign);
            free(t_curr);
        }
        free((yyvsp[(3) - (11)].sval));
    ;}
    break;

  case 7:
#line 273 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        add_clock((yyvsp[(1) - (1)].sval));
        free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 8:
#line 278 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        add_clock((yyvsp[(3) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 10:
#line 290 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* buffer current action instead of printing it for successive semantic analysis */
        add_action((yyvsp[(1) - (1)].sval));
        free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 11:
#line 296 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        add_action((yyvsp[(3) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 14:
#line 309 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        add_int((yyvsp[(1) - (1)].sval));
        free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 15:
#line 314 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        add_int((yyvsp[(3) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 19:
#line 331 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* reset initial, urgency and committed flag for each location */
        is_init = false;
        is_urg = false;
        is_com = false;
    ;}
    break;

  case 20:
#line 338 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {   
        /* buffer current location instead of printing it for successive semantic analysis */
        add_location((yyvsp[(1) - (5)].sval), invar, is_init, is_urg, is_com);
        
        free((yyvsp[(1) - (5)].sval));
        if (invar) {
            free(invar);
            invar = NULL;
        }
    ;}
    break;

  case 31:
#line 368 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        is_init = (yyvsp[(3) - (3)].bval);
    ;}
    break;

  case 32:
#line 375 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        is_urg = (yyvsp[(3) - (3)].bval);
    ;}
    break;

  case 33:
#line 382 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        is_com = (yyvsp[(3) - (3)].bval);
    ;}
    break;

  case 34:
#line 389 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        invar = (yyvsp[(3) - (3)].sval) ? strdup((yyvsp[(3) - (3)].sval)) : NULL;
    ;}
    break;

  case 38:
#line 405 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* merge respectively the clock guard with the variable guard and the clock reset with the variable assignment */
        char* final_guard = cat((yyvsp[(6) - (15)].sval), " && ", (yyvsp[(8) - (15)].sval));
        char* final_assign = cat((yyvsp[(10) - (15)].sval), ", ", (yyvsp[(13) - (15)].sval));
        
        /* buffer current transition instead of printing it for successive semantic analysis */
        add_transition((yyvsp[(2) - (15)].sval), (yyvsp[(4) - (15)].sval), final_guard, final_assign, (yyvsp[(14) - (15)].sval));

        /* cleanup */
        if (final_guard)
            free(final_guard);
        if (final_assign)
            free(final_assign);
        free((yyvsp[(2) - (15)].sval));
        free((yyvsp[(14) - (15)].sval));
        if ((yyvsp[(4) - (15)].sval))
            free((yyvsp[(4) - (15)].sval));
        if ((yyvsp[(6) - (15)].sval))
            free((yyvsp[(6) - (15)].sval));
        if ((yyvsp[(8) - (15)].sval))
            free((yyvsp[(8) - (15)].sval));
        if ((yyvsp[(10) - (15)].sval))
            free((yyvsp[(10) - (15)].sval));
        if ((yyvsp[(13) - (15)].sval))
            free((yyvsp[(13) - (15)].sval));
    ;}
    break;

  case 39:
#line 435 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* update considered buffered action and check consistency with previous uses in other transitions */
        update_action((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
        (yyval.sval) = cat((yyvsp[(1) - (2)].sval), "", (yyvsp[(2) - (2)].sval));
        free((yyvsp[(1) - (2)].sval));
        free((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 40:
#line 446 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = strdup("");
    ;}
    break;

  case 45:
#line 455 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = NULL;
    ;}
    break;

  case 46:
#line 459 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = (yyvsp[(2) - (3)].sval);
    ;}
    break;

  case 48:
#line 468 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " && ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 49:
#line 477 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        /* cat() function can be exploited in this way to simply concatenate something like "x >= 1" */
        char* temp = cat((yyvsp[(2) - (7)].sval), " ", (yyvsp[(4) - (7)].sval));
        (yyval.sval) = cat(temp, " ", (yyvsp[(6) - (7)].sval));
        free(temp);
        free((yyvsp[(2) - (7)].sval));
        free((yyvsp[(4) - (7)].sval));
        free((yyvsp[(6) - (7)].sval));
    ;}
    break;

  case 55:
#line 495 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = NULL;
    ;}
    break;

  case 57:
#line 504 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (1)].sval), " = ", "0"); /* append " = 0" at the end of the clock reset list */
        free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 58:
#line 509 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        char* temp = cat((yyvsp[(3) - (3)].sval), " = ", "0");
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), ", ", temp);
        free(temp);
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval)); 
    ;}
    break;

  case 59:
#line 520 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = NULL;
    ;}
    break;

  case 61:
#line 529 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = NULL;
    ;}
    break;

  case 62:
#line 533 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = (yyvsp[(2) - (4)].sval);
    ;}
    break;

  case 64:
#line 542 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), ", ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 65:
#line 551 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " = ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 68:
#line 562 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat("(", (yyvsp[(2) - (3)].sval), ")");
        free((yyvsp[(2) - (3)].sval));
    ;}
    break;

  case 69:
#line 567 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " + ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 70:
#line 573 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " - ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 71:
#line 579 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " * ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 72:
#line 585 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " / ", (yyvsp[(3) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 73:
#line 594 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = strdup((yyvsp[(1) - (1)].bval) ? "true" : "false"); 
    ;}
    break;

  case 74:
#line 598 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat("(", (yyvsp[(2) - (3)].sval), ")"); 
        free((yyvsp[(2) - (3)].sval)); 
    ;}
    break;

  case 75:
#line 603 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        char* temp = cat((yyvsp[(1) - (3)].sval), " ", (yyvsp[(2) - (3)].sval));
        (yyval.sval) = cat(temp, " ", (yyvsp[(3) - (3)].sval));
        free(temp);
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(2) - (3)].sval));
        free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 76:
#line 612 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " && ", (yyvsp[(3) - (3)].sval)); 
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval)); 
    ;}
    break;

  case 77:
#line 618 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
    {
        (yyval.sval) = cat((yyvsp[(1) - (3)].sval), " || ", (yyvsp[(3) - (3)].sval)); 
        free((yyvsp[(1) - (3)].sval));
        free((yyvsp[(3) - (3)].sval)); 
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2111 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/.build/translator.tab.c"
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


#line 625 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"


/* user code */

void yyerror(char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char **argv) {
    if (argc == 2) {
        /* open the file passed as a command-line argument */
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
            return EXIT_FAILURE;
        }
    }
    else if (argc == 1) {
        /* default to stdin if no file is provided */
        yyin = stdin;
    }
    else {
        /* invalid number of arguments */
        fprintf(stderr, "Usage: %s [<file_path>]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!yyparse()) {
        if (yyin != stdin)
            fclose(yyin);
        return EXIT_SUCCESS;
    }
    else {
        fprintf(stderr, "Parsing failed\n"); 
        if (yyin != stdin)
            fclose(yyin);
        return EXIT_FAILURE;
    }
}

