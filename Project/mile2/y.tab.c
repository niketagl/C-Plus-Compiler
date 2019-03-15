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
#line 1 "src/grammar.y" /* yacc.c:339  */


extern int yylex();
void yyerror(const char*);
void yyerror2(const char*);
void yyerror3(char*);
void warning(const char *s);

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char yytext[];
extern int column;
extern int yylineno;



#line 85 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 20 "src/grammar.y" /* yacc.c:355  */

	#include "src/symboltable.h"
	#include "src/tac.h"
	#include <stack>
	#include <iostream>
	#include <vector>
	#include <string>
	using namespace std;
	extern stack < table_ptr > table_stack;
	extern stack < int > offset_stack;
	extern table_ptr struct_namespace;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;

#line 131 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONSTANT = 259,
    CHAR_CONSTANT = 260,
    FLOAT_CONSTANT = 261,
    STRING_LITERAL = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    CHAR = 291,
    SHORT = 292,
    INT = 293,
    LONG = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    FLOAT = 297,
    DOUBLE = 298,
    CONST = 299,
    VOLATILE = 300,
    VOID = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    ELLIPSIS = 305,
    CASE = 306,
    DEFAULT = 307,
    IF = 308,
    ELSE = 309,
    SWITCH = 310,
    WHILE = 311,
    DO = 312,
    FOR = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_CONSTANT 259
#define CHAR_CONSTANT 260
#define FLOAT_CONSTANT 261
#define STRING_LITERAL 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define STRUCT 302
#define UNION 303
#define ENUM 304
#define ELLIPSIS 305
#define CASE 306
#define DEFAULT 307
#define IF 308
#define ELSE 309
#define SWITCH 310
#define WHILE 311
#define DO 312
#define FOR 313
#define GOTO 314
#define CONTINUE 315
#define BREAK 316
#define RETURN 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "src/grammar.y" /* yacc.c:355  */

	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 276 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  506

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    78,    86,    95,   103,   104,   108,   109,
     110,   111,   112,   113,   114,   122,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   136,   140,   141,
     142,   142,   146,   147,   156,   165,   190,   191,   195,   196,
     197,   198,   199,   200,   204,   205,   209,   210,   211,   212,
     213,   213,   214,   214,   215,   215,   219,   220,   221,   222,
     222,   223,   223,   227,   228,   229,   230,   230,   231,   231,
     235,   236,   237,   238,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   247,   248,   249,   250,   250,   251,   251,
     255,   256,   257,   257,   261,   262,   263,   263,   267,   268,
     269,   269,   273,   284,   289,   289,   291,   300,   302,   301,
     313,   313,   317,   318,   322,   323,   324,   324,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   343,
     344,   345,   345,   349,   353,   354,   359,   360,   361,   362,
     363,   364,   368,   369,   370,   370,   372,   375,   376,   380,
     381,   382,   383,   384,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   403,   422,   423,   437,
     441,   442,   446,   447,   451,   455,   456,   457,   458,   462,
     463,   464,   464,   468,   469,   470,   474,   475,   476,   480,
     481,   482,   482,   486,   487,   491,   492,   496,   497,   501,
     515,   516,   530,   545,   589,   590,   633,   633,   634,   634,
     638,   639,   640,   641,   643,   646,   647,   652,   653,   657,
     658,   659,   659,   663,   664,   665,   667,   670,   671,   672,
     672,   676,   677,   681,   682,   683,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   699,   700,   701,   705,   706,
     710,   711,   712,   713,   714,   715,   716,   720,   721,   732,
     740,   744,   745,   746,   747,   751,   752,   756,   761,   767,
     768,   772,   785,   804,   830,   837,   846,   857,   866,   874,
     885,   895,   906,   911,   919,   926,   936,   945,   952,   953,
     958,   963,   964,   968,   969,   973,   974,   995,  1004,  1012,
    1020,  1031
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHAR_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression", "$@1",
  "$@2", "$@3", "$@4", "$@5", "argument_expression_list", "$@6",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@7", "$@8", "$@9", "additive_expression",
  "$@10", "$@11", "shift_expression", "$@12", "$@13",
  "relational_expression", "$@14", "$@15", "$@16", "$@17",
  "equality_expression", "$@18", "$@19", "and_expression", "$@20",
  "exclusive_or_expression", "$@21", "inclusive_or_expression", "$@22",
  "logical_and_expression", "$@23", "logical_and_expressionM",
  "logical_or_expression", "$@24", "$@25", "conditional_expression",
  "assignment_expression", "$@26", "assignment_operator", "expression",
  "$@27", "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@28", "init_declarator_listM",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "mk_tbl2", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "$@29",
  "struct_declarator", "enum_specifier", "enumerator_list", "$@30",
  "enumerator", "type_qualifier", "declarator", "direct_declarator",
  "$@31", "$@32", "pointer", "pointerM", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "$@33", "parameter_declaration",
  "parameter_declaration_M", "identifier_list", "$@34", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "labeled_statement_m", "compound_statement", "declaration_list",
  "statement_list", "expression_statement", "selection_statement", "smark",
  "mark1", "mark2", "iteration_statement", "mark3", "mark4", "mark5",
  "mark6", "mark7", "mark8", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "mk_tbl", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -322

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-322)))

#define YYTABLE_NINF -234

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1905,     3,    56,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,    30,   172,     7,  -322,    80,  2244,  2244,  -322,
      40,  -322,  2244,  2188,  -322,    43,  1758,  -322,  -322,  -322,
    -322,  -322,  1086,   -16,   285,    26,  -322,    32,   155,    28,
    -322,    -4,  -322,  2132,  -322,  -322,    44,  2163,  -322,   444,
    -322,    80,  -322,  2188,  -322,  -322,  -322,   116,   117,  2032,
    1641,  -322,  -322,  -322,  -322,  -322,  1209,  1221,  1221,  1099,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,   332,  -322,
    1295,  -322,   153,   -13,   202,   181,   253,   119,   112,   154,
     187,    82,  -322,   167,   285,   178,   179,   -12,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,   651,  -322,  2188,  -322,
    2163,  2061,  -322,    97,  2163,   852,   196,  1307,   213,   235,
     241,  -322,  -322,   249,   310,   232,   248,   743,  -322,  -322,
    1753,  -322,  -322,    65,  -322,  -322,  -322,  -322,   530,  -322,
    -322,  -322,  -322,   262,  -322,  -322,  -322,  -322,   278,  -322,
    -322,  -322,   283,   281,  -322,   177,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,   287,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
     352,  1099,  -322,  1319,  -322,  -322,   952,   180,   122,   288,
     350,  -322,  -322,  1173,  1319,   351,  -322,  1295,  1295,  1295,
    1331,  1331,  1343,  1343,  1417,  1417,  1417,  1417,  1429,  1429,
    1441,  1453,  1465,  -322,  -322,  1319,  -322,     2,  -322,  1307,
     353,  -322,   172,   172,  1048,   651,  -322,  -322,  -322,  2163,
    -322,  -322,  -322,   211,  1307,   125,  -322,   273,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,   634,   284,  -322,  1319,  1319,   302,   634,
     727,   289,  -322,  -322,  -322,   148,  1539,  1539,  -322,   874,
    -322,  -322,   364,   156,  -322,  2208,  -322,   365,   368,  1343,
    1343,  1417,  1417,  1429,  1429,  1551,  1563,   308,  1575,  1319,
     371,  1441,  1295,  1331,  1331,  1295,  1295,  1417,  1417,  1453,
    1465,   313,  -322,  1856,  1185,   228,  -322,   256,  1295,  -322,
     973,  -322,   192,  -322,   269,  -322,  -322,  -322,  -322,   227,
     153,   153,   393,   -13,   -13,   255,   202,   202,   202,   202,
    1983,   181,   181,  1967,   253,  1946,   119,  1755,   112,  1551,
    1563,   -21,  -322,   353,  -322,  -322,  -322,  -322,  -322,   100,
    2112,  -322,  -322,   102,  -322,  1307,  1539,  1539,  -322,  -322,
     634,   193,   217,  1319,   322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  2244,   376,  1807,  -322,   106,  -322,  -322,  -322,
    -322,  -322,   -13,   -13,   202,   202,   181,   181,  1677,   154,
    1659,   187,  -322,   219,   270,  -322,   253,  -322,   153,   153,
    -322,  -322,   202,   202,   119,   112,  -322,   312,  -322,   317,
     318,  -322,   321,   256,  2081,  1197,  -322,  -322,  -322,  1539,
    -322,   154,   187,  1307,  -322,   548,  -322,  -322,   102,  -322,
    -322,  -322,  -322,   634,  -322,  -322,  -322,   237,  -322,   776,
     776,  -322,  -322,   212,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,   319,  -322,   323,  1539,  -322,  -322,  -322,  -322,  -322,
    -322,   634,   634,  -322,   329,  -322,   330,  -322,  -322,  -322,
     342,  -322,   634,  1319,  1319,  -322,  1319,  -322,  -322,   242,
     340,   634,   340,   634,   314,   336,  -322,   346,  -322,  -322,
    -322,  -322,   634,   634,  -322,  -322
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   199,   165,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   161,   162,   159,   160,   195,   196,   154,
     170,   171,     0,     0,   210,   296,     0,   136,   138,   163,
       0,   164,   140,     0,   198,     0,     0,   293,   295,   208,
     206,   301,     0,   188,     0,     0,   215,     0,   211,     0,
     134,     0,   142,   147,   137,   139,   168,     0,   141,     0,
     265,     0,   300,     0,   197,     1,   294,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,     0,     0,
     202,    38,    39,    40,    41,    42,    43,     8,    32,    44,
       0,    46,    56,    63,    70,    83,    90,    94,    98,   102,
     107,   112,   133,     0,     0,     0,   193,     0,   189,   200,
     212,   216,   213,   144,   146,   135,     0,   298,     0,   169,
     176,     0,   172,     0,   178,     0,     2,     0,     0,     0,
       0,   282,   282,     0,     0,     0,     0,     0,   269,   261,
      44,   114,   129,     0,   256,   267,   250,   251,     0,   252,
     253,   254,   255,   147,   266,   299,   209,   207,     0,   227,
     205,   226,     0,   217,   219,     0,    24,    26,    27,    66,
      68,    79,    81,    86,    88,   104,   110,    20,    16,    22,
      92,    50,    59,    61,    52,    54,    75,    77,    96,   100,
       0,     0,    36,     0,    33,    34,     0,     0,   231,     0,
       0,    14,    15,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   108,     0,   201,     0,   191,     0,
       0,   186,     0,     0,     0,     0,   245,   148,   297,     0,
     175,   167,   173,     0,     0,     0,   179,   183,   177,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     118,   264,   116,     0,     0,   260,     0,     0,     0,     0,
       0,     0,   289,   290,   291,     0,     0,     0,   270,     0,
     262,   268,   221,     0,   203,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,   233,   232,   234,     0,    13,
       0,    10,     0,    28,     0,    12,    47,    48,    49,     0,
      57,    58,     0,    64,    65,     0,    73,    74,    71,    72,
       0,    84,    85,     0,    91,     0,    95,     0,    99,     0,
       0,     0,   187,     0,   194,   190,   145,   143,   248,     0,
       0,   181,   184,     0,   174,     0,     0,     0,   257,   260,
       0,     0,     0,     0,     0,   282,   282,   288,   292,   115,
     130,   263,     0,     0,     0,   223,     0,   224,   218,   220,
     228,    25,    67,    69,    80,    82,    87,    89,     0,   105,
       0,   111,    19,     0,     0,    23,    93,    51,    60,    62,
      53,    55,    76,    78,    97,   101,    37,     0,   241,     0,
       0,   237,     0,   235,     0,     0,    45,    30,    11,     0,
       9,   103,   109,     0,   192,     0,   246,   166,     0,   180,
     185,   132,   117,     0,   259,   275,   274,     0,   284,     0,
       0,   222,   230,     0,    21,    17,   221,   242,   236,   238,
     243,     0,   239,     0,     0,    29,   113,   247,   249,   182,
     258,     0,     0,   283,     0,   285,   285,   244,   240,    31,
     271,   273,     0,     0,     0,   283,     0,   276,   277,     0,
     286,     0,   286,     0,     0,     0,   279,     0,   272,   278,
     287,   287,     0,     0,   281,   280
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,   113,  -322,
     -59,  -322,   -55,  -162,  -322,  -322,  -322,  -159,  -322,  -322,
    -130,  -322,  -322,   -63,  -322,  -322,  -322,  -322,  -179,  -322,
    -322,  -198,  -322,  -192,  -322,  -245,  -322,  -199,  -322,  -322,
    -322,  -322,  -322,   -32,   -95,  -322,   274,   -77,  -322,  -116,
      29,     4,  -322,  -322,  -322,    91,  -322,   -45,  -322,  -322,
    -322,   182,  -105,   -53,  -322,  -322,  -321,  -322,   316,  -322,
    -216,    15,     1,   -29,  -322,  -322,   -40,  -322,  -322,   -66,
    -322,  -322,  -270,  -322,  -322,  -322,   225,  -160,  -287,  -222,
    -322,  -143,  -322,    49,    -8,   369,  -322,  -248,  -322,  -322,
    -322,  -322,  -322,  -123,   -56,  -322,   -50,   -62,   -70,  -322,
    -322,   397,  -322,  -322
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   299,   297,   298,   300,   288,   322,   464,
      89,    90,    91,    92,   302,   305,   306,    93,   303,   304,
      94,   289,   290,    95,   307,   308,   291,   292,    96,   293,
     294,    97,   301,    98,   309,    99,   310,   100,   295,   349,
     101,   350,   296,   141,   142,   367,   262,   143,   366,   103,
     144,    61,    51,   232,   233,    52,    27,    28,    29,   239,
      30,   121,   122,   123,   245,   438,   246,    31,   107,   353,
     108,    32,   153,    34,    68,    67,    35,    47,    48,   419,
     163,   382,   164,   283,   165,   383,   199,   420,   317,   237,
     359,   145,   146,   370,   147,    63,   148,   149,   150,   472,
     471,   493,   151,   268,   482,   474,   484,   495,   502,   152,
      36,    37,    38,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,    33,   197,   162,    26,   281,    64,   110,   112,   269,
     102,   264,   120,   358,   355,   389,   242,   192,   194,   195,
     140,   236,   376,   346,    45,    62,   198,    53,   423,    25,
     348,    54,    55,    43,   120,   206,    58,    33,   316,    46,
      26,   344,   439,    56,     1,   117,     2,   277,   330,   331,
     399,    17,    18,   333,   334,   155,   230,   140,   210,   211,
     275,   433,    60,   111,   114,    25,    39,   240,    40,   104,
     230,   248,   124,   161,   231,   120,   120,  -214,   140,   120,
     115,    49,    60,     2,   336,   337,   338,   339,   352,   140,
     109,    39,   154,    40,   124,   102,   113,   401,   243,   423,
       2,   224,    24,     1,   431,     2,    23,     1,   323,     2,
     238,   414,   451,   354,   197,    44,   197,   469,   415,    41,
     368,    42,   406,   387,   247,    57,   374,   324,   362,   119,
     392,   393,   140,   277,   140,   124,   124,   434,   198,   124,
     236,   408,   409,    23,   140,   140,   120,   154,   351,   278,
      24,   432,   326,   327,   328,   341,   342,     1,   315,     2,
      23,   394,   395,   225,    50,    23,   140,    24,   435,   384,
    -233,   314,    24,     1,  -233,     2,   140,   412,   413,   244,
     156,   379,   380,   157,   244,   313,   436,   314,   220,   371,
     372,   221,    24,   363,   120,   214,   215,   102,   422,    17,
      18,   475,   476,   323,   140,   223,   124,   140,   140,   364,
     140,   140,   102,   468,   212,   213,   277,   140,   140,   384,
    -225,   314,   404,   207,  -225,    24,    24,   444,   208,   209,
     396,   397,   378,   226,   222,    23,   166,   167,   168,   140,
     140,   286,    24,   386,   312,   287,   228,   407,   277,   440,
     410,   411,   449,   450,   124,   242,   428,   445,   216,   217,
     429,   277,   229,   426,   166,   167,   168,   169,   170,   218,
     219,   441,   442,   315,    39,    39,    40,    40,   263,   361,
     456,   446,   102,   454,   385,   277,   105,   429,   106,   161,
     177,   313,   178,   314,   179,   265,   447,   181,   266,   375,
     470,   473,   184,   185,   267,   277,   494,   140,   140,   463,
     277,   140,   270,   271,   140,   120,   272,   161,   177,   424,
     178,   425,   179,   356,   357,   181,   182,   183,   480,   481,
     184,   185,   273,   102,   465,   430,   455,   277,   277,   488,
     236,   200,   201,   202,   386,   116,   282,   284,   496,   285,
     498,   -18,   318,   319,   325,   365,   106,    64,   461,   504,
     505,   166,   167,   168,   247,   373,   369,  -229,   390,   479,
     140,   391,   402,   377,   405,   124,   140,   416,   448,   452,
     456,   457,   458,   477,   140,    45,   161,   459,   161,   478,
     140,   140,   483,   102,   485,   203,   487,   204,   499,   205,
     500,   466,   166,   167,   168,   140,   489,   490,   277,   492,
     501,   403,   140,   140,   276,   177,   311,   178,   443,   179,
     227,   360,   118,   140,   140,   140,   486,   140,   161,   491,
     497,   503,   140,    66,   140,     0,     0,     0,     0,   247,
       0,     0,     0,   140,   140,   125,     0,   126,    72,    73,
      74,    75,    76,     0,    77,    78,   177,     0,   178,     0,
     179,     0,     0,   181,   182,   183,     0,     0,   184,   185,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,   127,   128,   129,     0,   130,
     131,   132,   133,   134,   135,   136,   137,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,    59,
     139,   279,     0,   126,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,     0,     0,     0,     0,     0,   234,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,   127,   128,   129,     0,   130,   131,   132,   133,   134,
     135,   136,   137,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,    79,     0,     0,   138,    59,   280,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   467,   196,     0,   126,    72,    73,
      74,    75,    76,     0,    77,    78,     0,     0,     0,     0,
       0,     0,   234,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,   127,   128,   129,     0,   130,
     131,   132,   133,   134,   135,   136,   137,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,    79,     0,     0,     0,   138,    59,
      81,    82,    83,    84,    85,    86,     0,     0,   196,     0,
      71,    72,    73,    74,    75,    76,   235,    77,    78,     0,
       0,     0,     0,     0,   196,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   196,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,    79,     0,     0,     0,
       0,   138,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,     0,   178,     0,   179,
     259,   180,   181,   182,   183,     0,     0,   184,   185,   186,
     187,   188,   189,     0,     0,   260,     0,   177,   261,   178,
       0,   179,   259,   180,   181,   182,   183,     0,     0,   184,
     185,   186,   187,   188,   189,     0,     0,   260,     0,     0,
     381,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,     0,   178,     0,   179,
     259,   180,   181,   182,   183,     0,     0,   184,   185,   186,
     187,   188,   189,     0,     0,   260,   177,     0,   178,     0,
     179,   427,   180,   181,   182,   183,     0,     0,   184,   185,
     186,   187,   188,   189,     0,     0,   260,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
     196,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,   177,     0,   178,     0,   179,     0,   180,   181,   182,
     183,     0,     0,   184,   185,   186,   187,   188,   189,     3,
       0,   260,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    79,
       0,     0,    80,     0,     0,    81,    82,    83,    84,    85,
      86,     0,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,   320,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,    70,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,    70,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
     190,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,   190,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,    79,   321,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    79,     0,
       0,   421,     0,     0,    81,    82,    83,    84,    85,    86,
      79,     0,     0,   462,     0,     0,    81,    82,    83,    84,
      85,    86,   191,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,   193,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,   190,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,    70,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
     196,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,   329,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,   332,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,     0,    79,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,   335,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
     340,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,   343,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,   345,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,   347,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,     0,     0,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    79,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
     234,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,   398,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,   400,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,   320,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    79,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,     0,     0,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,   178,     0,   179,     0,
     180,   181,   182,   183,     0,     0,   184,   185,   186,   187,
     188,   189,   177,     0,   178,     0,   179,     0,   180,   181,
     182,   183,     0,     0,   184,   185,   186,   187,   188,   189,
     177,     0,   178,     0,   179,     0,   180,   181,   182,   183,
       0,     0,   184,   185,   186,   187,   188,   189,    65,     1,
       0,     2,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   453,     0,
       2,     0,     0,     0,     0,     0,     0,     0,   177,     0,
     178,    23,   179,     0,   180,   181,   182,   183,    24,     0,
     184,   185,   186,   187,   188,     0,   260,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   417,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     384,   418,   314,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     1,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
     418,   314,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   166,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,     0,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,   178,     0,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,     0,     0,     0,     0,     0,
     177,     0,   178,   158,   179,   159,     0,   181,   182,   183,
       0,     0,   184,   185,   186,   187,   177,     0,   178,     0,
     179,     0,     0,   181,   182,   183,     0,     0,   184,   185,
     186,   187,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   417,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,   160,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   460,     0,   241,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,   437,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,   116,     0,    59,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   388,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      59,     0,    79,    69,     0,   148,    35,    47,    48,   132,
      42,   127,    57,   235,   230,   285,   121,    76,    77,    78,
      79,   116,   270,   221,    23,    33,    79,    26,   315,     0,
     222,    27,    28,     3,    79,    90,    32,    36,   198,    24,
      36,   220,   363,     3,     1,    53,     3,    68,   210,   211,
     295,    44,    45,   212,   213,    63,    68,   116,    71,    72,
     137,    82,    33,    48,    68,    36,    63,   120,    65,    85,
      68,   124,    57,    69,    86,   120,   121,    70,   137,   124,
      84,     1,    53,     3,   214,   215,   216,   217,    86,   148,
      64,    63,    63,    65,    79,   127,    68,   296,     1,   386,
       3,    19,    70,     1,   349,     3,    63,     1,   203,     3,
     118,   309,   382,   229,   191,    85,   193,   438,   310,    63,
     263,    65,   301,   283,   123,    85,   269,   204,   244,    85,
     289,   290,   191,    68,   193,   120,   121,   353,   191,   124,
     235,   303,   304,    63,   203,   204,   191,   118,   225,    84,
      70,   350,   207,   208,   209,   218,   219,     1,   198,     3,
      63,   291,   292,    81,    84,    63,   225,    70,    68,    63,
      64,    65,    70,     1,    68,     3,   235,   307,   308,    82,
      64,   276,   277,    66,    82,    63,    86,    65,    69,   266,
     267,    79,    70,    68,   239,    14,    15,   229,   314,    44,
      45,   449,   450,   298,   263,    18,   191,   266,   267,    84,
     269,   270,   244,   435,    12,    13,    68,   276,   277,    63,
      64,    65,   299,    70,    68,    70,    70,   370,    75,    76,
     293,   294,    84,    66,    80,    63,     9,    10,    11,   298,
     299,    64,    70,   283,    64,    68,    68,   302,    68,   365,
     305,   306,   375,   376,   239,   360,    64,    64,    77,    78,
      68,    68,    83,   318,     9,    10,    11,    12,    13,    16,
      17,   366,   367,   313,    63,    63,    65,    65,    82,    68,
      68,    64,   314,    64,   283,    68,     1,    68,     3,   285,
      63,    63,    65,    65,    67,    82,   373,    70,    63,   270,
     443,    64,    75,    76,    63,    68,    64,   366,   367,   425,
      68,   370,    63,     3,   373,   360,    84,   313,    63,    63,
      65,    65,    67,   232,   233,    70,    71,    72,   471,   472,
      75,    76,    84,   365,   429,    66,    66,    68,    68,   482,
     435,     9,    10,    11,   384,    83,    68,    64,   491,    68,
     493,    64,    64,     3,     3,    82,     3,   386,   424,   502,
     503,     9,    10,    11,   363,    63,    82,     3,     3,   464,
     429,     3,    64,    84,     3,   360,   435,    64,    56,     3,
      68,    64,    64,    64,   443,   384,   382,    66,   384,    66,
     449,   450,    63,   425,    64,    63,    54,    65,    84,    67,
      64,   433,     9,    10,    11,   464,   483,   484,    68,   486,
      64,   298,   471,   472,   140,    63,   191,    65,   369,    67,
     104,   239,    53,   482,   483,   484,   476,   486,   424,   485,
     492,   501,   491,    36,   493,    -1,    -1,    -1,    -1,   438,
      -1,    -1,    -1,   502,   503,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    63,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    84,    85,    86,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    84,    85,
      69,    70,    71,    72,    73,    74,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    85,    10,    11,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    84,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    63,    86,    65,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    63,    -1,    65,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    63,    -1,    65,    -1,    67,    -1,    69,    70,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    30,
      -1,    83,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    63,    -1,
      -1,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
      63,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    63,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      63,    -1,    65,    -1,    67,    -1,    69,    70,    71,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,     0,     1,
      -1,     3,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    63,    67,    -1,    69,    70,    71,    72,    70,    -1,
      75,    76,    77,    78,    79,    -1,    83,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,     1,    67,     3,    -1,    70,    71,    72,
      -1,    -1,    75,    76,    77,    78,    63,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,
      77,    78,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    64,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    64,    -1,    86,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    86,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    83,    -1,    85,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    63,    70,   137,   138,   143,   144,   145,
     147,   154,   158,   159,   160,   163,   197,   198,   199,    63,
      65,    63,    65,     3,    85,   159,   158,   164,   165,     1,
      84,   139,   142,   159,   138,   138,     3,    85,   138,    85,
     137,   138,   181,   182,   160,     0,   198,   162,   161,   200,
       1,     3,     4,     5,     6,     7,     8,    10,    11,    63,
      66,    69,    70,    71,    72,    73,    74,    88,    89,    97,
      98,    99,   100,   104,   107,   110,   115,   118,   120,   122,
     124,   127,   130,   136,    85,     1,     3,   155,   157,    64,
     163,   158,   163,    68,    68,    84,    83,   181,   182,    85,
     144,   148,   149,   150,   158,     1,     3,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    84,    86,
      97,   130,   131,   134,   137,   178,   179,   181,   183,   184,
     185,   189,   196,   159,   137,   181,    64,    66,     1,     3,
      64,   138,   166,   167,   169,   171,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    63,    65,    67,
      69,    70,    71,    72,    75,    76,    77,    78,    79,    80,
       1,    63,    97,    63,    97,    97,     1,   134,   150,   173,
       9,    10,    11,    63,    65,    67,    99,    70,    75,    76,
      71,    72,    12,    13,    14,    15,    77,    78,    16,    17,
      69,    79,    80,    18,    19,    81,    66,   155,    68,    83,
      68,    86,   140,   141,     1,    85,   131,   176,   181,   146,
     150,    86,   149,     1,    82,   151,   153,   159,   150,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    68,
      83,    86,   133,    82,   136,    82,    63,    63,   190,   190,
      63,     3,    84,    84,    84,   134,   133,    68,    84,     1,
      86,   178,    68,   170,    64,    68,    64,    68,    94,   108,
     109,   113,   114,   116,   117,   125,   129,    91,    92,    90,
      93,   119,   101,   105,   106,   102,   103,   111,   112,   121,
     123,   173,    64,    63,    65,   163,   174,   175,    64,     3,
       1,    64,    95,   131,   134,     3,    99,    99,    99,     1,
     100,   100,     1,   104,   104,     1,   107,   107,   107,   107,
       1,   110,   110,     1,   115,     1,   118,     1,   120,   126,
     128,   134,    86,   156,   136,   157,   142,   142,   176,   177,
     148,    68,   136,    68,    84,    82,   135,   132,   178,    82,
     180,   134,   134,    63,   178,   137,   184,    84,    84,   131,
     131,    86,   168,   172,    63,   159,   163,   174,    50,   169,
       3,     3,   104,   104,   107,   107,   110,   110,     1,   122,
       1,   124,    64,    95,   134,     3,   115,    99,   100,   100,
      99,    99,   107,   107,   118,   120,    64,     1,    64,   166,
     174,    66,   136,   175,    63,    65,    99,    68,    64,    68,
      66,   122,   124,    82,   157,    68,    86,    86,   152,   153,
     136,   131,   131,   180,   178,    64,    64,   134,    56,   190,
     190,   169,     3,     1,    64,    66,    68,    64,    64,    66,
      64,   166,    66,   136,    96,   131,   130,    86,   176,   153,
     178,   187,   186,    64,   192,   184,   184,    64,    66,   131,
     178,   178,   191,    63,   193,    64,   193,    54,   178,   134,
     134,   191,   134,   188,    64,   194,   178,   194,   178,    84,
      64,    64,   195,   195,   178,   178
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    89,    91,    89,
      92,    89,    93,    89,    94,    89,    89,    89,    95,    95,
      96,    95,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     101,   100,   102,   100,   103,   100,   104,   104,   104,   105,
     104,   106,   104,   107,   107,   107,   108,   107,   109,   107,
     110,   110,   110,   110,   110,   111,   110,   112,   110,   113,
     110,   114,   110,   115,   115,   115,   116,   115,   117,   115,
     118,   118,   119,   118,   120,   120,   121,   120,   122,   122,
     123,   122,   124,   124,   125,   124,   126,   127,   128,   127,
     129,   127,   130,   130,   131,   131,   132,   131,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     134,   135,   134,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   139,   139,   140,   139,   141,   142,   142,   143,
     143,   143,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   145,   146,
     147,   147,   148,   148,   149,   150,   150,   150,   150,   151,
     151,   152,   151,   153,   153,   153,   154,   154,   154,   155,
     155,   156,   155,   157,   157,   158,   158,   159,   159,   160,
     160,   160,   160,   160,   160,   160,   161,   160,   162,   160,
     163,   163,   163,   163,   164,   165,   165,   166,   166,   167,
     167,   168,   167,   169,   169,   169,   170,   171,   171,   172,
     171,   173,   173,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   176,   177,   177,
     178,   178,   178,   178,   178,   178,   178,   179,   179,   179,
     180,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     184,   185,   185,   185,   186,   187,   188,   189,   189,   189,
     189,   189,   190,   191,   192,   193,   194,   195,   196,   196,
     196,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     199,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     0,     5,     0,     4,
       0,     5,     0,     4,     0,     4,     2,     2,     1,     3,
       0,     4,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       0,     4,     0,     4,     0,     4,     1,     3,     3,     0,
       4,     0,     4,     1,     3,     3,     0,     4,     0,     4,
       1,     3,     3,     3,     3,     0,     4,     0,     4,     0,
       4,     0,     4,     1,     3,     3,     0,     4,     0,     4,
       1,     3,     0,     4,     1,     3,     0,     4,     1,     3,
       0,     4,     1,     4,     0,     4,     0,     1,     0,     4,
       0,     4,     1,     5,     1,     3,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     4,     1,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     4,     0,     4,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     4,     2,     0,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     0,     4,     1,     2,     3,     4,     5,     2,     1,
       3,     0,     4,     1,     3,     1,     1,     2,     1,     1,
       3,     4,     3,     5,     5,     4,     0,     4,     0,     4,
       1,     2,     3,     3,     0,     1,     2,     1,     3,     1,
       3,     0,     4,     3,     3,     2,     0,     1,     3,     0,
       4,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     4,
       0,     2,     3,     4,     3,     1,     2,     1,     2,     1,
       2,     6,     9,     6,     0,     0,     0,     7,     9,     8,
      11,    11,     0,     0,     0,     0,     0,     0,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     4,     3,     3,
       2,     0
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
        case 2:
#line 64 "src/grammar.y" /* yacc.c:1646  */
    { 
						if(!lookup(table_stack.top(),(yyvsp[0].stringval)))
						{
							char* error = (char *) malloc (100 * sizeof(char));
							sprintf(error, "%s%s%s","Identifier \"", (yyvsp[0].stringval), "\" not declared");
							yyerror3(error);
							(yyval.entry) = new table_entry;
							(yyval.entry)->type = new_basic_type(ERROR);
						}
						else
						{
							(yyval.entry) = lookup(table_stack.top(), (yyvsp[0].stringval));
						} 
					}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 78 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(INTEGER);
									(yyval.entry)->type->value = (yyvsp[0].intval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%d",(yyvsp[0].intval)); 
									(yyval.entry)->name = s;  
							}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(CHR); 
									(yyval.entry)->type->value = (int)(yyvsp[0].charval); 
									(yyval.entry)->type->constnt = 1; 
									string s1(1, (yyvsp[0].charval)); 
									string s = "'" + s1 + "'";
									(yyval.entry)->name = s; 
							}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(FLT); 
									(yyval.entry)->type->value = (int)(yyvsp[0].floatval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%f",(yyvsp[0].floatval)); 
									(yyval.entry)->name = s; 
							}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("[]",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s);  }
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("()",(yyval.entry),(yyvsp[-2].entry),NULL)) yyerror3(s); }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("()",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s); }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4(".",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4("->",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 114 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("+=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 122 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("-=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 130 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 135 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 146 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 148 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER); 
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("+=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER);
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("-=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "src/grammar.y" /* yacc.c:1646  */
    {
								if(!strcmp((yyvsp[-1].stringval), "!"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = 0;
									temp->name = "0";
									if(char* s = type_check("==",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);								
								}
								else if(!strcmp((yyvsp[-1].stringval), "-"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = -1;
									temp->name = "-1";
									if(char* s = type_check("*=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
								}
								else
								{
									(yyval.entry) = (yyvsp[0].entry);
								}
							}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 195 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&"); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*"); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+"); }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 198 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-"); }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "~"); }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 200 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "!"); }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 204 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 209 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 210 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 211 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 212 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 213 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 214 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 215 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 219 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 220 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 221 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 222 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 223 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 227 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 229 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 230 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 231 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 235 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 236 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 238 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 239 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 240 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 242 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 243 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 251 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 255 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 256 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 257 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 261 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 262 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 263 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 267 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 268 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 269 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 274 "src/grammar.y" /* yacc.c:1646  */
    { 
									(yyval.entry) = (yyvsp[0].entry); 
									(yyval.entry)->isbool=0; 
									(yyval.entry)->nextlist.resize(0);
									(yyval.entry)->breaklist.resize(0);
									(yyval.entry)->contlist.resize(0);
									(yyval.entry)->truelist.resize(0);
									(yyval.entry)->falselist.resize(0); 
								}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 285 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->falselist.insert((yyval.entry)->falselist.end(), (yyvsp[-3].entry)->falselist.begin(),(yyvsp[-3].entry)->falselist.end() );
	  						}
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 289 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 291 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[(-1) - (0)].entry);
								e1->falselist.push_back(code_line);
								emit(V, "if(", e1->name, "== 0) goto");
								backpatch(V,e1->truelist,code_line);
						}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 300 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);  }
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 302 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[-1].entry);
								e1->truelist.push_back(code_line);
								emit(V, "if(", e1->name, "!= 0) goto");
								backpatch(V,e1->falselist,code_line);
							}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->truelist.insert((yyval.entry)->truelist.end(), (yyvsp[-3].entry)->truelist.begin(),(yyvsp[-3].entry)->truelist.end() );
	  						}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 313 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 317 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 322 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 323 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 324 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("lvalue required as left operand of assignment");}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 330 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 332 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 333 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 334 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 335 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 336 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 337 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 338 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 339 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 343 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);}
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 345 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 353 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 354 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 359 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 360 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 361 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 362 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 363 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 364 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 368 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 369 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-3].type);}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 370 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 372 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 375 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 381 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 382 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 384 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 388 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 389 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 390 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 391 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 392 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 393 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 394 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 395 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 396 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 397 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 404 "src/grammar.y" /* yacc.c:1646  */
    {
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup(struct_namespace,(yyvsp[-5].stringval)))
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Multiple declarations for structure or union \"", (yyvsp[-5].stringval), "\"");
											yyerror3(error);
											(yyval.type) = new_basic_type(ERROR); 
										}
										else
										{
											(yyval.type) = new_struct_type((yyvsp[-1].type), (yyvsp[-4].stringval)) ;
											enter_proc(struct_namespace, (yyvsp[-4].stringval), (yyval.type), t1);
											t1->scope = table_stack.top()->name;
										}
									}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 423 "src/grammar.y" /* yacc.c:1646  */
    {
										if(lookup(struct_namespace, (yyvsp[0].stringval)))
										{
											(yyval.type) = new_struct_type(lookup(struct_namespace, (yyvsp[0].stringval))->type, (yyvsp[0].stringval)) ;
										}
										else
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Undeclared structure \"", (yyvsp[0].stringval), "\"");
											yyerror3(error);
											(yyval.type) = new_basic_type(ERROR);
										}
									}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 437 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 455 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 456 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 457 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 458 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 462 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 463 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 464 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 468 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 482 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 491 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 492 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 496 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 497 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 501 "src/grammar.y" /* yacc.c:1646  */
    { 
						if(same_lookup(table_stack.top(),(yyvsp[0].stringval)))
						{
							char* error = (char *) malloc (100 * sizeof(char));
							sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[0].stringval), "\"");
							yyerror3(error);
							(yyval.type) = new_basic_type(ERROR);
						}
						else
						{
							enter(table_stack.top(), (yyvsp[0].stringval), (yyvsp[-1].type), 0 );
							(yyval.type) = (yyvsp[-1].type);
						}
					}
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 516 "src/grammar.y" /* yacc.c:1646  */
    {	
													if(same_lookup(table_stack.top(),(yyvsp[-3].stringval)))
													{
														char* error = (char *) malloc (100 * sizeof(char));
														sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-3].stringval), "\"");
														yyerror3(error);
														(yyval.type) = new_basic_type(ERROR);
													}
													else
													{
														(yyval.type) = new_array_type((yyvsp[-4].type), (yyvsp[-1].type)->value);
														enter(table_stack.top(), (yyvsp[-3].stringval), (yyval.type), 0 );
													}	
												}
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 530 "src/grammar.y" /* yacc.c:1646  */
    {
								if(same_lookup(table_stack.top(),(yyvsp[-2].stringval)))
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-2].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
								}
								else
								{
									(yyval.type) = new_pointer_type((yyvsp[-3].type));
									enter(table_stack.top(), (yyvsp[-2].stringval), (yyval.type), 0 );
								}
							}
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 546 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								table_entry_ptr e = same_lookup(table_stack.top(),(yyvsp[-4].stringval));
								if(e != NULL && !e->proc_decl)
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-4].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
									table_stack.push(t1); offset_stack.push(0);
								}
								else if( e != NULL && e->proc_decl)
								{
									(yyval.type) = new_function_type((yyvsp[-1].type),(yyvsp[-5].type));
									if(type_compare(e->type, (yyval.type)))
									{
										table_entry_ptr ne = enter_proc(table_stack.top(), (yyvsp[-4].stringval), (yyval.type), t1);
										if(e==NULL)ne->proc_decl=0;
										t1->name.append((yyvsp[-4].stringval));
										t1->scope = t1->name;
										table_stack.push(t1); offset_stack.push(0);
									}
									else
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Declaration and definition do not match for identifier \"", (yyvsp[-4].stringval), "\"");
										yyerror3(error);
										(yyval.type) = new_basic_type(ERROR);
										table_stack.push(t1); offset_stack.push(0);
									}
								}
								else
								{
									(yyval.type) = new_function_type((yyvsp[-1].type),(yyvsp[-5].type));
									table_entry_ptr ne = enter_proc(table_stack.top(), (yyvsp[-4].stringval), (yyval.type), t1);
									if(e==NULL)ne->proc_decl=0;
									t1->name.append((yyvsp[-4].stringval));
									t1->scope = t1->name;
									table_stack.push(t1); offset_stack.push(0);
								}
							}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 591 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								table_entry_ptr e = same_lookup(table_stack.top(),(yyvsp[-3].stringval));
								if( (e != NULL)? !e->proc_decl : 0 )
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-3].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); offset_stack.push(0);
								}
								else if( e != NULL && e->proc_decl)
								{
									(yyval.type) = new_function_type(NULL,(yyvsp[-4].type));
									if(type_compare(e->type, (yyval.type)))
									{
										table_entry_ptr ne = enter_proc(table_stack.top(), (yyvsp[-3].stringval), (yyval.type), t1);
										if(e==NULL)ne->proc_decl=0;
										t1->name.append((yyvsp[-3].stringval));
										t1->scope = t1->name;
										table_stack.push(t1); offset_stack.push(0);
									}
									else
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Declaration and definition do not match for identifier \"", (yyvsp[-3].stringval), "\"");
										yyerror3(error);
										(yyval.type) = new_basic_type(ERROR);
									}
								}
								else
								{
									(yyval.type) = new_function_type(NULL,(yyvsp[-4].type));
									table_entry_ptr ne = enter_proc(table_stack.top(), (yyvsp[-3].stringval), (yyval.type), t1);
									if(e==NULL)ne->proc_decl=0;
									t1->name.append((yyvsp[-3].stringval));
									t1->scope = t1->name;
									table_stack.push(t1); offset_stack.push(0);
								}
							}
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 633 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 634 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 638 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 640 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 643 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 652 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 657 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 658 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 659 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 663 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 665 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 667 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); (yyval.type)->param=1;}
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 672 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 710 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 711 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 712 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 713 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 714 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 715 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 716 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 722 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											char *name = (char*)malloc(15*sizeof(char));

											sprintf(name, "%d",(yyvsp[-3].entry)->type->value);
											
											V[l-100]->label = name;
										}
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 733 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											V[l-100]->label = "default";
										}
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 740 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.intval) = code_line;}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 744 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry;}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 745 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 746 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 747 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 751 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 752 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 757 "src/grammar.y" /* yacc.c:1646  */
    {
										(yyval.entry) = (yyvsp[0].entry); 
									}
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 761 "src/grammar.y" /* yacc.c:1646  */
    {
										(yyval.entry) = (yyvsp[0].entry);
									}
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 768 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 773 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = new table_entry; 

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end());

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->nextlist.begin(), (yyvsp[0].entry)->nextlist.end());

											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end());

											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(), (yyvsp[0].entry)->contlist.begin(), (yyvsp[0].entry)->contlist.end());

										}
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 786 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = new table_entry; 

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end());

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->nextlist.begin(), (yyvsp[-3].entry)->nextlist.end());

											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(), (yyvsp[-3].entry)->breaklist.begin(), (yyvsp[-3].entry)->breaklist.end());

											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(), (yyvsp[-3].entry)->contlist.begin(), (yyvsp[-3].entry)->contlist.end());

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->nextlist.begin(), (yyvsp[0].entry)->nextlist.end());

											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end());

											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(), (yyvsp[0].entry)->contlist.begin(), (yyvsp[0].entry)->contlist.end());

										}
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 805 "src/grammar.y" /* yacc.c:1646  */
    {

							(yyval.entry) = new table_entry;
							(yyval.entry)->nextlist.push_back(code_line);
							emit(V, "goto");



							backpatch(V, (yyvsp[-1].entry)->nextlist, code_line);

							table_entry_ptr s = (yyvsp[0].entry);
							table_entry_ptr e = (yyvsp[-3].entry);
							for(int i=0; i < s->labellist.size(); i++)
							{
								if(V[s->labellist[i]-100]->label == "default")
								emit(V, "goto");
								else
								emit(V, "if(", e->name,"==",V[s->labellist[i]-100]->label,") goto");
								V[code_line-101]->goto_line = s->labellist[i];
								V[s->labellist[i]-100]->label = "";
							}

							(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), s->breaklist.begin(), s->breaklist.end());
						}
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 830 "src/grammar.y" /* yacc.c:1646  */
    {
			(yyval.entry) = new table_entry;
			(yyval.entry)->nextlist.push_back(code_line);
			emit(V, "goto");
		}
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 837 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0) goto");	
			backpatch(V, exp->truelist, code_line);
			exp->truelist.resize(0);
		}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 846 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			table_entry_ptr s1 = (yyvsp[(-1) - (0)].entry);
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
			exp->falselist.resize(0);
		}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 857 "src/grammar.y" /* yacc.c:1646  */
    { 	
															(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
															(yyvsp[0].entry)->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
															backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
														}
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 866 "src/grammar.y" /* yacc.c:1646  */
    {
																	(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-2].entry)->falselist.begin(), (yyvsp[-2].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->breaklist.begin(), (yyvsp[-6].entry)->breaklist.end() );
																	(yyvsp[-2].entry)->truelist.push_back(code_line);
																	emit(V, "if(", (yyvsp[-2].entry)->name, "!= 0) goto");
																	backpatch(V, (yyvsp[-2].entry)->truelist, (yyvsp[-7].intval));
																}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 874 "src/grammar.y" /* yacc.c:1646  */
    { 	

																						(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																						(yyvsp[0].entry)->nextlist.push_back(code_line);
																						emit(V, "goto");
																						backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-4].intval));
																						backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-4].intval));

																					}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 886 "src/grammar.y" /* yacc.c:1646  */
    {
								(yyval.entry) = new table_entry; 
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
								(yyvsp[0].entry)->nextlist.push_back(code_line);
								emit(V, "goto");
								backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
								backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
					}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 895 "src/grammar.y" /* yacc.c:1646  */
    {
																										(yyval.entry) = new table_entry;
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																										(yyvsp[0].entry)->nextlist.push_back(code_line);
																										emit(V, "goto");
																										backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
																										backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
																									}
#line 3624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 906 "src/grammar.y" /* yacc.c:1646  */
    { 
			(yyval.intval) = code_line;
		}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 911 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			backpatch(V, exp->truelist, code_line);	
		}
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 919 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[(-1) - (0)].entry);
			backpatch(V, s->nextlist, code_line);
			backpatch(V, s->contlist, code_line);	
		}
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 926 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[0].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			exp->truelist.push_back(code_line);
			emit(V, "goto");
			(yyval.intval) = code_line;	
		}
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 936 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[0].entry);
			int val = (yyvsp[(-3) - (0)].intval);
			s->nextlist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, s->nextlist, val);
		}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 945 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			backpatch(V, exp->truelist, code_line);	
		}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 953 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->contlist.push_back(code_line);
									emit(V, "goto");
								}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 958 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->breaklist.push_back(code_line);
									emit(V, "goto");
								}
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 974 "src/grammar.y" /* yacc.c:1646  */
    { 
						if((yyvsp[0].type)->info==FUNCTION)
						{
							table_ptr t1 = table_stack.top();
							table_stack.pop();offset_stack.pop();
							char *nam = strdup(t1->name.c_str());
							table_entry_ptr e = same_lookup(table_stack.top(),nam);
							
							if(e->proc_decl)
							{
								char* error = (char *) malloc (100 * sizeof(char));
								sprintf(error, "%s%s%s","Multiple declarations for identifier \"", nam, "\"");
								yyerror3(error);
							}
							else e->proc_decl=1;

						} 
					}
#line 3730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 996 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());

																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1005 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1013 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1021 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1031 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3789 "y.tab.c" /* yacc.c:1646  */
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
#line 1034 "src/grammar.y" /* yacc.c:1906  */




void yyerror(const char *s)
{
	fflush(stdout);
	printf("%s at line no : %d \n", s, yylineno);
}

void yyerror2(const char *s)
{
	fflush(stdout);
	printf("\t%s before token ( %s )\n", s, yylval.stringval);
}
void yyerror3(char *s)
{
	fflush(stdout);
	printf("Semantic Error in line no : %d \n \t%s\n", yylineno, s);
}

void warning(const char *s)
{
	fflush(stdout);
	printf("Line No : %d [ WARNING ! ] \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);

}
