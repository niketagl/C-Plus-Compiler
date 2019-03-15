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
#define YYLAST   2290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  299
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  503

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
     110,   111,   112,   113,   114,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   122,   126,   127,
     128,   128,   132,   133,   142,   151,   176,   177,   181,   182,
     183,   184,   185,   186,   190,   191,   195,   196,   197,   198,
     199,   199,   200,   200,   201,   201,   205,   206,   207,   208,
     208,   209,   209,   213,   214,   215,   216,   216,   217,   217,
     221,   222,   223,   224,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   233,   234,   235,   236,   236,   237,   237,
     241,   242,   243,   243,   247,   248,   249,   249,   253,   254,
     255,   255,   259,   260,   265,   265,   267,   276,   278,   277,
     289,   289,   293,   294,   298,   299,   300,   300,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   319,
     320,   321,   321,   325,   329,   330,   335,   336,   337,   338,
     339,   340,   344,   345,   346,   346,   348,   351,   352,   356,
     357,   358,   359,   360,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   379,   398,   399,   413,
     417,   418,   422,   423,   427,   431,   432,   433,   434,   438,
     439,   440,   440,   444,   445,   446,   450,   451,   452,   456,
     457,   458,   458,   462,   463,   467,   468,   472,   473,   477,
     491,   492,   506,   521,   565,   566,   609,   609,   610,   610,
     614,   615,   616,   617,   619,   622,   623,   628,   629,   633,
     634,   635,   635,   639,   640,   641,   643,   646,   647,   648,
     648,   652,   653,   657,   658,   659,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   675,   676,   677,   681,   682,
     686,   687,   688,   689,   690,   691,   692,   696,   697,   698,
     702,   703,   704,   705,   709,   710,   714,   715,   721,   722,
     726,   727,   729,   732,   740,   750,   758,   765,   774,   782,
     792,   797,   805,   812,   822,   831,   838,   839,   844,   849,
     850,   854,   855,   859,   860,   881,   890,   898,   906,   917
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
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "mark1", "mark2",
  "iteration_statement", "mark3", "mark4", "mark5", "mark6", "mark7",
  "mark8", "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "mk_tbl", YY_NULLPTR
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

#define YYPACT_NINF -332

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-332)))

#define YYTABLE_NINF -234

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1902,   157,   212,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,    38,   172,    26,  -332,    97,  2241,  2241,  -332,
      43,  -332,  2241,  2185,  -332,    41,  1755,  -332,  -332,  -332,
    -332,  -332,  1083,   -50,   292,    -8,  -332,    -4,   133,    83,
    -332,    90,  -332,  2129,  -332,  -332,    -9,  2160,  -332,   441,
    -332,    97,  -332,  2185,  -332,  -332,  -332,    56,    20,  2029,
    1638,  -332,  -332,  -332,  -332,  -332,  1206,  1218,  1218,  1096,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,   234,  -332,
    1292,  -332,   191,   176,   251,    77,   266,    36,    82,    85,
     179,    62,  -332,   136,   292,   145,   138,    -7,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,   648,  -332,  2185,  -332,
    2160,  2058,  -332,   146,  2160,   849,   151,  1304,   188,   213,
     225,  -332,  -332,   249,   312,   170,   232,   740,  -332,  -332,
    1750,  -332,  -332,   112,  -332,  -332,  -332,  -332,   527,  -332,
    -332,  -332,  -332,   246,  -332,  -332,  -332,  -332,   267,  -332,
    -332,  -332,   274,   275,  -332,     5,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,   282,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
     263,  1096,  -332,  1316,  -332,  -332,   949,    35,   124,   285,
     328,  -332,  -332,  1170,  1316,   350,  -332,  1292,  1292,  1292,
    1328,  1328,  1340,  1340,  1414,  1414,  1414,  1414,  1426,  1426,
    1438,  1450,  1462,  -332,  -332,  1316,  -332,     4,  -332,  1304,
     357,  -332,   172,   172,  1045,   648,  -332,  -332,  -332,  2160,
    -332,  -332,  -332,   166,  1304,   114,  -332,   280,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,   631,   281,   631,  1316,  1316,   302,   631,
     724,   288,  -332,  -332,  -332,   115,  1536,  1536,  -332,   871,
    -332,  -332,   363,   192,  -332,  2205,  -332,   366,   371,  1340,
    1340,  1414,  1414,  1426,  1426,  1548,  1560,   313,  1572,  1316,
     376,  1438,  1292,  1328,  1328,  1292,  1292,  1414,  1414,  1450,
    1462,   316,  -332,  1853,  1182,   257,  -332,   260,  1292,  -332,
     970,  -332,   120,  -332,   284,  -332,  -332,  -332,  -332,   308,
     191,   191,   269,   176,   176,   390,   251,   251,   251,   251,
    1980,    77,    77,  1964,   266,  1943,    36,  1752,    82,  1548,
    1560,    -5,  -332,   357,  -332,  -332,  -332,  -332,  -332,    15,
    2109,  -332,  -332,   156,  -332,  1304,  1536,  1536,  -332,   631,
    -332,   137,   168,  1316,   325,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  2241,   379,  1804,  -332,   222,  -332,  -332,  -332,
    -332,  -332,   176,   176,   251,   251,    77,    77,  1674,    85,
    1656,   179,  -332,   182,   293,  -332,   266,  -332,   191,   191,
    -332,  -332,   251,   251,    36,    82,  -332,   319,  -332,   324,
     327,  -332,   326,   260,  2078,  1194,  -332,  -332,  -332,  1536,
    -332,    85,   179,  1304,  -332,   545,  -332,  -332,   156,  -332,
    -332,  -332,  -332,  -332,  -332,   631,   238,  -332,   773,   773,
    -332,  -332,   226,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
     330,  -332,   331,  1536,  -332,  -332,  -332,  -332,  -332,   631,
    -332,  -332,   333,  -332,   334,  -332,  -332,  -332,   353,   631,
    1316,  1316,  -332,  1316,  -332,  -332,   241,   341,   631,   341,
     631,   329,   348,  -332,   351,  -332,  -332,  -332,  -332,   631,
     631,  -332,  -332
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   199,   165,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   161,   162,   159,   160,   195,   196,   154,
     170,   171,     0,     0,   210,   294,     0,   136,   138,   163,
       0,   164,   140,     0,   198,     0,     0,   291,   293,   208,
     206,   299,     0,   188,     0,     0,   215,     0,   211,     0,
     134,     0,   142,   147,   137,   139,   168,     0,   141,     0,
     264,     0,   298,     0,   197,     1,   292,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,     0,     0,
     202,    38,    39,    40,    41,    42,    43,     8,    32,    44,
       0,    46,    56,    63,    70,    83,    90,    94,    98,   102,
     107,   112,   133,     0,     0,     0,   193,     0,   189,   200,
     212,   216,   213,   144,   146,   135,     0,   296,     0,   169,
     176,     0,   172,     0,   178,     0,     2,     0,     0,     0,
       0,   280,   280,     0,     0,     0,     0,     0,   268,   260,
      44,   114,   129,     0,   256,   266,   250,   251,     0,   252,
     253,   254,   255,   147,   265,   297,   209,   207,     0,   227,
     205,   226,     0,   217,   219,     0,    24,    26,    27,    66,
      68,    79,    81,    86,    88,   104,   110,    20,    16,    22,
      92,    50,    59,    61,    52,    54,    75,    77,    96,   100,
       0,     0,    36,     0,    33,    34,     0,     0,   231,     0,
       0,    14,    15,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   108,     0,   201,     0,   191,     0,
       0,   186,     0,     0,     0,     0,   245,   148,   295,     0,
     175,   167,   173,     0,     0,     0,   179,   183,   177,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     118,   263,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,   288,   289,     0,     0,     0,   269,     0,
     261,   267,   221,     0,   203,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,   233,   232,   234,     0,    13,
       0,    10,     0,    28,     0,    12,    47,    48,    49,     0,
      57,    58,     0,    64,    65,     0,    73,    74,    71,    72,
       0,    84,    85,     0,    91,     0,    95,     0,    99,     0,
       0,     0,   187,     0,   194,   190,   145,   143,   248,     0,
       0,   181,   184,     0,   174,     0,     0,     0,   257,     0,
     259,     0,     0,     0,     0,   280,   280,   286,   290,   115,
     130,   262,     0,     0,     0,   223,     0,   224,   218,   220,
     228,    25,    67,    69,    80,    82,    87,    89,     0,   105,
       0,   111,    19,     0,     0,    23,    93,    51,    60,    62,
      53,    55,    76,    78,    97,   101,    37,     0,   241,     0,
       0,   237,     0,   235,     0,     0,    45,    30,    11,     0,
       9,   103,   109,     0,   192,     0,   246,   166,     0,   180,
     185,   132,   117,   258,   273,     0,     0,   282,     0,     0,
     222,   230,     0,    21,    17,   221,   242,   236,   238,   243,
       0,   239,     0,     0,    29,   113,   247,   249,   182,     0,
     272,   281,     0,   283,   283,   244,   240,    31,   270,     0,
       0,     0,   281,     0,   274,   275,     0,   284,     0,   284,
       0,     0,     0,   277,     0,   271,   276,   285,   285,     0,
       0,   279,   278
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,   116,  -332,
     -59,  -332,   -37,  -151,  -332,  -332,  -332,  -179,  -332,  -332,
    -166,  -332,  -332,  -131,  -332,  -332,  -332,  -332,  -180,  -332,
    -332,  -195,  -332,  -193,  -332,  -230,  -332,  -214,  -332,  -332,
    -332,  -332,  -332,   -14,  -108,  -332,   276,   -75,  -332,  -114,
      22,    11,  -332,  -332,  -332,    71,  -332,   -27,  -332,  -332,
    -332,   178,  -111,   -56,  -332,  -332,  -331,  -332,   314,  -332,
    -215,   -12,     1,   -32,  -332,  -332,   -42,  -332,  -332,   -67,
    -332,  -332,  -260,  -332,  -332,  -332,   235,  -177,  -284,  -221,
    -332,  -132,  -332,    21,   370,  -332,  -263,  -332,  -332,  -332,
    -332,  -123,   -57,  -332,   -47,   -61,   -68,  -332,  -332,   396,
    -332,  -332
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   299,   297,   298,   300,   288,   322,   463,
      89,    90,    91,    92,   302,   305,   306,    93,   303,   304,
      94,   289,   290,    95,   307,   308,   291,   292,    96,   293,
     294,    97,   301,    98,   309,    99,   310,   100,   295,   349,
     101,   350,   296,   141,   142,   367,   262,   143,   366,   103,
     144,    61,    51,   232,   233,    52,    27,    28,    29,   239,
      30,   121,   122,   123,   245,   438,   246,    31,   107,   353,
     108,    32,   153,    34,    68,    67,    35,    47,    48,   419,
     163,   382,   164,   283,   165,   383,   199,   420,   317,   237,
     359,   145,   146,   147,    63,   148,   149,   150,   469,   490,
     151,   268,   479,   472,   481,   492,   499,   152,    36,    37,
      38,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,    33,   162,    64,   197,   110,   112,   376,   236,   269,
     242,    26,    46,   264,   358,   355,   281,   192,   194,   195,
     140,   316,    25,   198,    45,   389,   346,    53,   102,   348,
     120,   423,   439,   333,   334,   104,   111,    33,    54,    55,
     344,    43,     1,    58,     2,   124,    56,    26,   336,   337,
     338,   339,   120,   206,    62,    60,   109,   140,    25,   330,
     331,   230,   275,   277,   240,   399,    24,   124,   248,   286,
      17,    18,   230,   287,   117,    60,   119,   433,   140,   231,
     161,   224,   401,   435,   155,   154,   157,   341,   342,   140,
     352,   214,   215,   120,   120,   323,  -214,   120,    49,   312,
       2,   436,   423,   277,    23,   220,   387,   468,   124,   124,
     392,   393,   124,   102,   414,   354,   197,   415,   197,   431,
     156,   406,   450,    44,   247,   394,   395,   236,    57,   324,
     362,   368,   140,   370,   140,   198,   432,   374,   434,   238,
     154,   412,   413,   225,   140,   140,    39,   243,    40,     2,
     351,   113,   408,   409,   216,   217,   315,     1,   114,     2,
      23,   221,   396,   397,   120,   222,   140,    24,   379,   380,
     326,   327,   328,     1,   115,     2,   140,    17,    18,   124,
     277,    50,   363,   277,   428,   473,   474,   313,   429,   314,
     323,   371,   372,     1,    24,     2,   278,   223,   364,   378,
     422,   444,   226,    24,   140,   277,   140,   140,   140,    23,
     140,   140,   120,   228,   467,   102,    24,   140,   140,    23,
      39,   229,    40,     1,   404,     2,    24,   124,   244,    39,
     102,    40,   445,   263,   361,    23,   277,   443,   244,   140,
     140,   386,    24,   200,   201,   202,   453,   210,   211,   242,
     429,   440,   448,   449,   272,   384,  -225,   314,   441,   442,
    -225,   207,    24,   212,   213,   407,   208,   209,   410,   411,
     265,   315,   166,   167,   168,    41,   266,    42,   166,   167,
     168,   426,   218,   219,   385,   384,  -233,   314,   267,    39,
    -233,    40,   375,   105,   455,   106,   161,   203,   446,   204,
     102,   205,   471,   356,   357,   491,   277,   140,   140,   277,
     140,   462,   270,   470,   140,   271,   273,   166,   167,   168,
     313,   464,   314,   424,   161,   425,   177,   236,   178,   116,
     179,   319,   177,   120,   178,   282,   179,   478,   284,   181,
     182,   183,   386,   285,   184,   185,   -18,   485,   124,   318,
     430,   102,   277,   325,    64,   477,   493,   460,   495,   454,
     106,   277,   365,   369,   247,   373,  -229,   501,   502,   390,
     140,   177,   377,   178,   391,   179,   140,   402,   181,   405,
     416,   447,   451,   184,   185,    45,   140,   455,   456,   140,
     140,   457,   458,   161,   475,   161,   480,   476,   482,   166,
     167,   168,   169,   170,   140,   486,   487,   484,   489,   277,
     140,   102,   497,   496,   403,   498,   276,   360,   227,   465,
     140,   140,   140,   118,   140,   488,   311,   483,   494,   140,
     500,   140,    66,     0,     0,   161,     0,     0,     0,   247,
     140,   140,   125,     0,   126,    72,    73,    74,    75,    76,
       0,    77,    78,   177,     0,   178,     0,   179,     0,     0,
     181,   182,   183,     0,     0,   184,   185,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,    59,   139,   279,     0,
     126,    72,    73,    74,    75,    76,     0,    77,    78,     0,
       0,     0,     0,     0,     0,     0,   234,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,   127,   128,
     129,     0,   130,   131,   132,   133,   134,   135,   136,   137,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   138,    59,   280,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235,   466,   196,     0,   126,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,     0,     0,   234,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,    79,     0,     0,     0,   138,    59,    81,    82,    83,
      84,    85,    86,     0,     0,   196,     0,    71,    72,    73,
      74,    75,    76,   235,    77,    78,     0,     0,     0,     0,
       0,   196,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   196,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,    79,     0,     0,     0,     0,   138,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,   178,     0,   179,   259,   180,   181,
     182,   183,     0,     0,   184,   185,   186,   187,   188,   189,
       0,     0,   260,     0,   177,   261,   178,     0,   179,   259,
     180,   181,   182,   183,     0,     0,   184,   185,   186,   187,
     188,   189,     0,     0,   260,     0,     0,   381,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,   178,     0,   179,   259,   180,   181,
     182,   183,     0,     0,   184,   185,   186,   187,   188,   189,
       0,     0,   260,   177,     0,   178,     0,   179,   427,   180,
     181,   182,   183,     0,     0,   184,   185,   186,   187,   188,
     189,     0,     0,   260,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,   196,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,   177,     0,
     178,     0,   179,     0,   180,   181,   182,   183,     0,     0,
     184,   185,   186,   187,   188,   189,     3,     0,   260,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    79,     0,     0,    80,
       0,     0,    81,    82,    83,    84,    85,    86,     0,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,   320,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,    70,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   190,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   190,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,     0,    79,   321,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,   421,     0,
       0,    81,    82,    83,    84,    85,    86,    79,     0,     0,
     461,     0,     0,    81,    82,    83,    84,    85,    86,   191,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,   193,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   190,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   196,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   329,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,   332,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,     0,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,   335,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   340,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   343,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,   345,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,   347,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,   234,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   398,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,   400,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,   320,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,   178,     0,   179,     0,   180,   181,   182,
     183,     0,     0,   184,   185,   186,   187,   188,   189,   177,
       0,   178,     0,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,   189,   177,     0,   178,
       0,   179,     0,   180,   181,   182,   183,     0,     0,   184,
     185,   186,   187,   188,   189,    65,     1,     0,     2,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   452,     0,     2,     0,     0,
       0,     0,     0,     0,     0,   177,     0,   178,    23,   179,
       0,   180,   181,   182,   183,    24,     0,   184,   185,   186,
     187,   188,     0,   260,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   417,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   384,   418,   314,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     1,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   313,   418,   314,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,    24,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,   178,     0,
     179,     0,   180,   181,   182,   183,     0,     0,   184,   185,
     186,   187,     0,     0,     0,     0,     0,   177,     0,   178,
     158,   179,   159,     0,   181,   182,   183,     0,     0,   184,
     185,   186,   187,   177,     0,   178,     0,   179,     0,     0,
     181,   182,   183,     0,     0,   184,   185,   186,   187,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   417,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,   160,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,   459,     0,   241,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,   437,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,   116,     0,    59,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22
};

static const yytype_int16 yycheck[] =
{
      59,     0,    69,    35,    79,    47,    48,   270,   116,   132,
     121,     0,    24,   127,   235,   230,   148,    76,    77,    78,
      79,   198,     0,    79,    23,   285,   221,    26,    42,   222,
      57,   315,   363,   212,   213,    85,    48,    36,    27,    28,
     220,     3,     1,    32,     3,    57,     3,    36,   214,   215,
     216,   217,    79,    90,    33,    33,    64,   116,    36,   210,
     211,    68,   137,    68,   120,   295,    70,    79,   124,    64,
      44,    45,    68,    68,    53,    53,    85,    82,   137,    86,
      69,    19,   296,    68,    63,    63,    66,   218,   219,   148,
      86,    14,    15,   120,   121,   203,    70,   124,     1,    64,
       3,    86,   386,    68,    63,    69,   283,   438,   120,   121,
     289,   290,   124,   127,   309,   229,   191,   310,   193,   349,
      64,   301,   382,    85,   123,   291,   292,   235,    85,   204,
     244,   263,   191,   265,   193,   191,   350,   269,   353,   118,
     118,   307,   308,    81,   203,   204,    63,     1,    65,     3,
     225,    68,   303,   304,    77,    78,   198,     1,    68,     3,
      63,    79,   293,   294,   191,    80,   225,    70,   276,   277,
     207,   208,   209,     1,    84,     3,   235,    44,    45,   191,
      68,    84,    68,    68,    64,   448,   449,    63,    68,    65,
     298,   266,   267,     1,    70,     3,    84,    18,    84,    84,
     314,    64,    66,    70,   263,    68,   265,   266,   267,    63,
     269,   270,   239,    68,   435,   229,    70,   276,   277,    63,
      63,    83,    65,     1,   299,     3,    70,   239,    82,    63,
     244,    65,    64,    82,    68,    63,    68,   369,    82,   298,
     299,   283,    70,     9,    10,    11,    64,    71,    72,   360,
      68,   365,   375,   376,    84,    63,    64,    65,   366,   367,
      68,    70,    70,    12,    13,   302,    75,    76,   305,   306,
      82,   313,     9,    10,    11,    63,    63,    65,     9,    10,
      11,   318,    16,    17,   283,    63,    64,    65,    63,    63,
      68,    65,   270,     1,    68,     3,   285,    63,   373,    65,
     314,    67,    64,   232,   233,    64,    68,   366,   367,    68,
     369,   425,    63,   445,   373,     3,    84,     9,    10,    11,
      63,   429,    65,    63,   313,    65,    63,   435,    65,    83,
      67,     3,    63,   360,    65,    68,    67,   469,    64,    70,
      71,    72,   384,    68,    75,    76,    64,   479,   360,    64,
      66,   365,    68,     3,   386,   463,   488,   424,   490,    66,
       3,    68,    82,    82,   363,    63,     3,   499,   500,     3,
     429,    63,    84,    65,     3,    67,   435,    64,    70,     3,
      64,    56,     3,    75,    76,   384,   445,    68,    64,   448,
     449,    64,    66,   382,    64,   384,    63,    66,    64,     9,
      10,    11,    12,    13,   463,   480,   481,    54,   483,    68,
     469,   425,    64,    84,   298,    64,   140,   239,   104,   433,
     479,   480,   481,    53,   483,   482,   191,   474,   489,   488,
     498,   490,    36,    -1,    -1,   424,    -1,    -1,    -1,   438,
     499,   500,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    63,    -1,    65,    -1,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    84,    85,    86,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    84,    85,    69,    70,    71,
      72,    73,    74,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    85,    10,    11,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    84,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    63,    86,    65,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    63,    -1,    65,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    63,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    76,    77,    78,    79,    80,    30,    -1,    83,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    63,    -1,    -1,    66,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,    63,    -1,    -1,
      66,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    67,    -1,    69,    70,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    63,    -1,    65,
      -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,     0,     1,    -1,     3,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    63,    67,
      -1,    69,    70,    71,    72,    70,    -1,    75,    76,    77,
      78,    79,    -1,    83,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
       1,    67,     3,    -1,    70,    71,    72,    -1,    -1,    75,
      76,    77,    78,    63,    -1,    65,    -1,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    77,    78,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    64,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    64,    -1,    86,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    86,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    83,    -1,    85,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    63,    70,   137,   138,   143,   144,   145,
     147,   154,   158,   159,   160,   163,   195,   196,   197,    63,
      65,    63,    65,     3,    85,   159,   158,   164,   165,     1,
      84,   139,   142,   159,   138,   138,     3,    85,   138,    85,
     137,   138,   180,   181,   160,     0,   196,   162,   161,   198,
       1,     3,     4,     5,     6,     7,     8,    10,    11,    63,
      66,    69,    70,    71,    72,    73,    74,    88,    89,    97,
      98,    99,   100,   104,   107,   110,   115,   118,   120,   122,
     124,   127,   130,   136,    85,     1,     3,   155,   157,    64,
     163,   158,   163,    68,    68,    84,    83,   180,   181,    85,
     144,   148,   149,   150,   158,     1,     3,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    84,    86,
      97,   130,   131,   134,   137,   178,   179,   180,   182,   183,
     184,   187,   194,   159,   137,   180,    64,    66,     1,     3,
      64,   138,   166,   167,   169,   171,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    63,    65,    67,
      69,    70,    71,    72,    75,    76,    77,    78,    79,    80,
       1,    63,    97,    63,    97,    97,     1,   134,   150,   173,
       9,    10,    11,    63,    65,    67,    99,    70,    75,    76,
      71,    72,    12,    13,    14,    15,    77,    78,    16,    17,
      69,    79,    80,    18,    19,    81,    66,   155,    68,    83,
      68,    86,   140,   141,     1,    85,   131,   176,   180,   146,
     150,    86,   149,     1,    82,   151,   153,   159,   150,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    68,
      83,    86,   133,    82,   136,    82,    63,    63,   188,   188,
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
     178,   134,   134,    63,   178,   137,   183,    84,    84,   131,
     131,    86,   168,   172,    63,   159,   163,   174,    50,   169,
       3,     3,   104,   104,   107,   107,   110,   110,     1,   122,
       1,   124,    64,    95,   134,     3,   115,    99,   100,   100,
      99,    99,   107,   107,   118,   120,    64,     1,    64,   166,
     174,    66,   136,   175,    63,    65,    99,    68,    64,    68,
      66,   122,   124,    82,   157,    68,    86,    86,   152,   153,
     136,   131,   131,   178,    64,    64,   134,    56,   188,   188,
     169,     3,     1,    64,    66,    68,    64,    64,    66,    64,
     166,    66,   136,    96,   131,   130,    86,   176,   153,   185,
     178,    64,   190,   183,   183,    64,    66,   131,   178,   189,
      63,   191,    64,   191,    54,   178,   134,   134,   189,   134,
     186,    64,   192,   178,   192,   178,    84,    64,    64,   193,
     193,   178,   178
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
     180,   180,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   184,   185,   186,   187,   187,   187,   187,   187,
     188,   189,   190,   191,   192,   193,   194,   194,   194,   194,
     194,   195,   195,   196,   196,   197,   197,   197,   197,   198
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
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     4,     3,     1,     2,     1,     2,     1,     2,
       6,     9,     5,     0,     0,     7,     9,     8,    11,    11,
       0,     0,     0,     0,     0,     0,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2,     0
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
#line 2141 "y.tab.c" /* yacc.c:1646  */
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
#line 2153 "y.tab.c" /* yacc.c:1646  */
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
#line 2166 "y.tab.c" /* yacc.c:1646  */
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
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("[]",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s);  }
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("()",(yyval.entry),(yyvsp[-2].entry),NULL)) yyerror3(s); }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("()",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s); }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4(".",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4("->",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 128 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 132 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER); 
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("+=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER);
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("-=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "src/grammar.y" /* yacc.c:1646  */
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
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&"); }
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*"); }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+"); }
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 184 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-"); }
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 185 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "~"); }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 186 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "!"); }
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 190 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 195 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 197 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 198 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 199 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 200 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 201 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 205 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 206 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 207 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 208 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 209 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 214 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 215 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 227 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 228 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 229 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 233 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 234 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 235 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 236 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 241 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 242 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 243 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 247 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 249 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 253 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 254 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);  }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 261 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->falselist.insert((yyval.entry)->falselist.end(), (yyvsp[-3].entry)->falselist.begin(),(yyvsp[-3].entry)->falselist.end() );
	  						}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 265 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 267 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[(-1) - (0)].entry);
								e1->falselist.push_back(code_line);
								emit(V, "if(", e1->name, "== 0) goto");
								backpatch(V,e1->truelist,code_line);
						}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 276 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);  }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 278 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[-1].entry);
								e1->truelist.push_back(code_line);
								emit(V, "if(", e1->name, "!= 0) goto");
								backpatch(V,e1->falselist,code_line);
							}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 285 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->truelist.insert((yyval.entry)->truelist.end(), (yyvsp[-3].entry)->truelist.begin(),(yyvsp[-3].entry)->truelist.end() );
	  						}
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 289 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 293 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 298 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 299 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 300 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("lvalue required as left operand of assignment");}
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 306 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 307 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 308 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 309 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 310 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 311 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 312 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 313 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 314 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 315 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 319 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 321 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 325 "src/grammar.y" /* yacc.c:1646  */
    {cout << (yyvsp[0].entry)->type->value << endl; }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 329 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 330 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 335 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 336 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 337 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 338 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 339 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 340 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 344 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 345 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-3].type);}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 346 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 348 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 351 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 357 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 358 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 360 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 364 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 365 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 366 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 367 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 368 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 369 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 370 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 371 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 372 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 373 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 380 "src/grammar.y" /* yacc.c:1646  */
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
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 399 "src/grammar.y" /* yacc.c:1646  */
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
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 413 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 431 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 432 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 433 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 438 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 439 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 440 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 444 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 458 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 467 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 468 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 472 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 473 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 477 "src/grammar.y" /* yacc.c:1646  */
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
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 492 "src/grammar.y" /* yacc.c:1646  */
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
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 506 "src/grammar.y" /* yacc.c:1646  */
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
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 522 "src/grammar.y" /* yacc.c:1646  */
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
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 567 "src/grammar.y" /* yacc.c:1646  */
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
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 609 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 610 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 614 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 616 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 619 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 628 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 633 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 634 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 635 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 3262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 639 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 641 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 643 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); (yyval.type)->param=1;}
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 648 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 686 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 687 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 688 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 689 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 690 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 691 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 692 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 702 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry;}
#line 3334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 703 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 704 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 705 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 709 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 710 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 714 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry); }
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 715 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
									}
#line 3378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 722 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 726 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry; (yyval.entry)->nextlist = merge_list((yyvsp[-3].entry)->falselist, (yyvsp[0].entry)->nextlist);}
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 728 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry; (yyval.entry)->nextlist = merge_list((yyvsp[0].entry)->falselist, (yyvsp[-3].entry)->nextlist);}
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 732 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0) goto");	
			backpatch(V, exp->truelist, code_line);
		}
#line 3407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 740 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			table_entry_ptr s1 = (yyvsp[(-1) - (0)].entry);
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
		}
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 750 "src/grammar.y" /* yacc.c:1646  */
    { 	
															(yyval.entry) = new table_entry;  
															(yyval.entry)->nextlist = merge_list((yyvsp[-3].entry)->falselist,(yyvsp[0].entry)->breaklist); 
															(yyvsp[0].entry)->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
															backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
														}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 758 "src/grammar.y" /* yacc.c:1646  */
    {
																	(yyval.entry) = new table_entry;
																	(yyval.entry)->nextlist = merge_list((yyvsp[-2].entry)->falselist,(yyvsp[-6].entry)->breaklist);
																	(yyvsp[-2].entry)->truelist.push_back(code_line);
																	emit(V, "if(", (yyvsp[-2].entry)->name, "!= 0) goto");
																	backpatch(V, (yyvsp[-2].entry)->truelist, (yyvsp[-7].intval));
																}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 765 "src/grammar.y" /* yacc.c:1646  */
    { 	
																						(yyval.entry) = new table_entry;  
																						(yyval.entry)->nextlist = merge_list((yyvsp[-3].entry)->falselist,(yyvsp[0].entry)->breaklist); 
																						(yyvsp[0].entry)->nextlist.push_back(code_line);
																						emit(V, "goto");
																						backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-4].intval));
																						backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-4].intval));

																					}
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 774 "src/grammar.y" /* yacc.c:1646  */
    {
																												(yyval.entry) = new table_entry;
																												(yyval.entry)->nextlist = merge_list((yyvsp[-6].entry)->falselist,(yyvsp[0].entry)->breaklist);
																												(yyvsp[0].entry)->nextlist.push_back(code_line);
																												emit(V, "goto");
																												backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
																												backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
																											}
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 782 "src/grammar.y" /* yacc.c:1646  */
    {
																										(yyval.entry) = new table_entry;
																										(yyval.entry)->nextlist = merge_list((yyvsp[-6].entry)->falselist,(yyvsp[0].entry)->breaklist);
																										(yyvsp[0].entry)->nextlist.push_back(code_line);
																										emit(V, "goto");
																										backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
																										backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
																									}
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 792 "src/grammar.y" /* yacc.c:1646  */
    { 
			(yyval.intval) = code_line;
		}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 797 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			backpatch(V, exp->truelist, code_line);	
		}
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 805 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[(-1) - (0)].entry);
			backpatch(V, s->nextlist, code_line);
			backpatch(V, s->contlist, code_line);	
		}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 812 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[0].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			exp->truelist.push_back(code_line);
			emit(V, "goto");
			(yyval.intval) = code_line;	
		}
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 822 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[0].entry);
			int val = (yyvsp[(-3) - (0)].intval);
			s->nextlist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, s->nextlist, val);
		}
#line 3538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 831 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			backpatch(V, exp->truelist, code_line);	
		}
#line 3547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 839 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->contlist.push_back(code_line);
									emit(V, "goto");
								}
#line 3557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 844 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->breaklist.push_back(code_line);
									emit(V, "goto");
								}
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 860 "src/grammar.y" /* yacc.c:1646  */
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
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 882 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());

																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 891 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 899 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 907 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 917 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3649 "y.tab.c" /* yacc.c:1646  */
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
#line 920 "src/grammar.y" /* yacc.c:1906  */




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
