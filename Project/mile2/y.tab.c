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
	extern vector < code_ptr > V;

#line 130 "y.tab.c" /* yacc.c:355  */

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
#line 35 "src/grammar.y" /* yacc.c:355  */

	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 275 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 292 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  487

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
       0,    63,    63,    77,    85,    94,   102,   103,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   121,   125,   126,
     127,   127,   131,   132,   133,   134,   135,   136,   140,   141,
     142,   143,   144,   145,   149,   150,   154,   155,   156,   157,
     158,   158,   159,   159,   160,   160,   164,   165,   166,   167,
     167,   168,   168,   172,   173,   174,   175,   175,   176,   176,
     180,   181,   182,   183,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   192,   193,   194,   195,   195,   196,   196,
     200,   201,   202,   202,   206,   207,   208,   208,   212,   213,
     214,   214,   218,   219,   220,   220,   224,   225,   226,   226,
     230,   231,   235,   236,   237,   237,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   255,   256,   257,
     257,   261,   265,   266,   271,   272,   273,   274,   275,   276,
     280,   281,   282,   282,   284,   287,   288,   292,   293,   294,
     295,   296,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   315,   334,   335,   337,   341,   342,
     346,   347,   351,   355,   356,   357,   358,   362,   363,   364,
     364,   368,   369,   370,   374,   375,   376,   380,   381,   382,
     382,   386,   387,   391,   392,   396,   397,   401,   415,   416,
     430,   445,   470,   471,   495,   495,   496,   496,   500,   501,
     502,   503,   505,   508,   509,   514,   515,   519,   520,   521,
     521,   525,   526,   527,   531,   532,   533,   533,   537,   538,
     542,   543,   544,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   560,   561,   562,   566,   567,   571,   572,   573,
     574,   575,   576,   577,   581,   582,   583,   587,   588,   589,
     590,   594,   595,   599,   600,   604,   605,   609,   610,   611,
     614,   617,   618,   619,   620,   621,   625,   626,   627,   628,
     629,   633,   634,   638,   639,   660,   667,   674,   681,   691
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
  "logical_and_expression", "$@23", "logical_or_expression", "$@24",
  "conditional_expression", "assignment_expression", "$@25",
  "assignment_operator", "expression", "$@26", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list", "$@27",
  "init_declarator_listM", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "mk_tbl2",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "$@28",
  "struct_declarator", "enum_specifier", "enumerator_list", "$@29",
  "enumerator", "type_qualifier", "declarator", "direct_declarator",
  "$@30", "$@31", "pointer", "pointerM", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "$@32", "parameter_declaration",
  "identifier_list", "$@33", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "mark", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "mk_tbl", YY_NULLPTR
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

#define YYPACT_NINF -328

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-328)))

#define YYTABLE_NINF -231

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1882,   127,   169,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,    31,   227,    10,  -328,    81,  2223,  2223,  -328,
      34,  -328,  2223,  2146,  -328,    66,  1735,  -328,  -328,  -328,
    -328,  -328,  1051,   -37,   261,    -8,  -328,   -11,   131,   117,
    -328,    86,  -328,  2126,  -328,  -328,   -17,  2176,  -328,   427,
    -328,    81,  -328,  2146,  -328,  -328,  -328,    14,    19,  2040,
    1618,  -328,  -328,  -328,  -328,  -328,  1186,  1260,  1260,  1064,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   262,  -328,
    1272,  -328,    30,   228,   210,    35,   401,     2,    16,    52,
     142,   107,  -328,   125,   261,   111,   123,    -5,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,   616,  -328,  2146,  -328,
    2176,   492,  -328,    96,  2176,   817,   135,  1284,   159,   184,
     189,   213,   599,   222,   288,   231,   242,   708,  -328,  -328,
     419,  -328,  -328,    90,  -328,  -328,  -328,  -328,   513,  -328,
    -328,  -328,  -328,   229,  -328,  -328,  -328,  -328,   275,  -328,
    -328,   224,   274,   278,  -328,   193,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,   289,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
     299,  1064,  -328,  1296,  -328,  -328,   917,   206,   151,   303,
     367,  -328,  -328,  1138,  1296,   381,  -328,  1272,  1272,  1272,
    1308,  1308,  1382,  1382,  1394,  1394,  1394,  1394,  1406,  1406,
    1418,  1430,  1504,  1516,  1528,  1296,  -328,     5,  -328,  1284,
     394,  -328,   227,   227,  1013,   616,  -328,  -328,  -328,  2176,
    -328,  -328,  -328,   161,  1284,   113,  -328,   319,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,   599,   322,   599,  1296,  1296,  1296,   350,
     692,   325,  -328,  -328,  -328,   118,  1540,  1540,  -328,   839,
    -328,  -328,   411,  1784,  1150,  -328,   295,  -328,   200,  -328,
    2202,  -328,   416,   418,  1382,  1382,  1394,  1394,  1406,  1406,
    1516,  1528,   361,  1552,  1296,   423,  1418,  1272,  1308,  1308,
    1272,  1272,  1394,  1394,  1430,  1504,   365,  -328,  1833,   270,
    -328,  1272,  -328,   938,  -328,   243,  -328,   327,  -328,  -328,
    -328,  -328,  1993,    30,    30,   340,   228,   228,   269,   210,
     210,   210,   210,  1960,    35,    35,  1944,   401,  1923,     2,
    1732,    16,  1654,    52,  1636,   142,   105,  -328,   394,  -328,
    -328,  -328,  -328,  -328,     8,  2069,  -328,  -328,   133,  -328,
    1284,  1540,  1540,  -328,   599,  -328,   284,   301,   312,   386,
     741,   741,  -328,  -328,  -328,  -328,  -328,  2223,   447,   188,
    -328,   387,   388,  -328,   389,   200,  2089,  1162,  -328,  -328,
    -328,  -328,   228,   228,   210,   210,    35,    35,    52,   142,
    -328,   313,   332,  -328,   401,  -328,    30,    30,  -328,  -328,
     210,   210,     2,    16,  -328,   385,  -328,  -328,  -328,  1540,
    -328,  1284,  -328,   232,  -328,  -328,   133,  -328,  -328,  -328,
    -328,  -328,  -328,   599,   599,  1296,  1296,  1174,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   390,  -328,   415,  -328,  -328,
    1540,  -328,  -328,  -328,  -328,  -328,   599,  -328,  -328,   314,
     315,   599,   328,  -328,  -328,  -328,   402,   393,   599,  -328,
     599,  -328,  -328,  -328,  -328,   599,  -328
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   197,   163,   147,   148,   149,   150,   151,   153,
     154,   155,   156,   159,   160,   157,   158,   193,   194,   152,
     168,   169,     0,     0,   208,   284,     0,   134,   136,   161,
       0,   162,   138,     0,   196,     0,     0,   281,   283,   206,
     204,   289,     0,   186,     0,     0,   213,     0,   209,     0,
     132,     0,   140,   145,   135,   137,   166,     0,   139,     0,
     261,     0,   288,     0,   195,     1,   282,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,     0,     0,
     200,    38,    39,    40,    41,    42,    43,     8,    32,    44,
       0,    46,    56,    63,    70,    83,    90,    94,    98,   102,
     106,   110,   131,     0,     0,     0,   191,     0,   187,   198,
     210,   214,   211,   142,   144,   133,     0,   286,     0,   167,
     174,     0,   170,     0,   176,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   257,
      44,   112,   127,     0,   253,   263,   247,   248,     0,   249,
     250,   251,   252,   145,   262,   287,   207,   205,     0,   224,
     203,     0,     0,   215,   217,     0,    24,    26,    27,    66,
      68,    79,    81,    86,    88,   104,   108,    20,    16,    22,
      92,    50,    59,    61,    52,    54,    75,    77,    96,   100,
       0,     0,    36,     0,    33,    34,     0,     0,   228,     0,
       0,    14,    15,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,     0,   189,     0,
       0,   184,     0,     0,     0,     0,   242,   146,   285,     0,
     173,   165,   171,     0,     0,     0,   177,   181,   175,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   129,
     116,   260,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   278,   279,     0,     0,     0,   266,     0,
     258,   264,   219,     0,     0,   221,     0,   222,   231,   201,
       0,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,   230,
     229,     0,    13,     0,    10,     0,    28,     0,    12,    47,
      48,    49,     0,    57,    58,     0,    64,    65,     0,    73,
      74,    71,    72,     0,    84,    85,     0,    91,     0,    95,
       0,    99,     0,   103,     0,   107,     0,   185,     0,   192,
     188,   143,   141,   245,     0,     0,   179,   182,     0,   172,
       0,     0,     0,   254,     0,   256,     0,     0,     0,     0,
       0,     0,   276,   280,   113,   128,   259,     0,     0,     0,
     238,     0,     0,   234,     0,   232,     0,     0,   216,   218,
     225,    25,    67,    69,    80,    82,    87,    89,   105,   109,
      19,     0,     0,    23,    93,    51,    60,    62,    53,    55,
      76,    78,    97,   101,    37,     0,    45,    30,    11,     0,
       9,     0,   190,     0,   243,   164,     0,   178,   183,   130,
     115,   255,   270,     0,     0,     0,     0,     0,   220,   227,
     219,   239,   233,   235,   240,     0,   236,     0,    21,    17,
       0,    29,   111,   244,   246,   180,     0,   269,   271,     0,
       0,     0,     0,   241,   237,    31,   267,     0,     0,   273,
       0,   270,   272,   275,   274,     0,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   190,  -328,
     -58,  -328,   -52,  -166,  -328,  -328,  -328,  -147,  -328,  -328,
    -113,  -328,  -328,  -130,  -328,  -328,  -328,  -328,  -195,  -328,
    -328,  -199,  -328,  -194,  -328,  -190,  -328,  -177,  -328,  -328,
    -328,   -40,  -105,  -328,   351,   -73,  -328,  -122,     7,     3,
    -328,  -328,  -328,   191,  -328,   -28,  -328,  -328,  -328,   253,
    -111,   -63,  -328,  -328,  -327,  -328,   391,  -328,  -218,    29,
       0,   -26,  -328,  -328,   -34,  -328,  -328,   -65,  -328,  -328,
    -273,  -328,  -328,   316,  -115,  -244,  -220,  -328,  -124,  -328,
      -1,   441,  -328,  -243,  -328,    22,  -328,  -328,  -328,   468,
    -328,  -328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   304,   302,   303,   305,   293,   325,   460,
      89,    90,    91,    92,   307,   310,   311,    93,   308,   309,
      94,   294,   295,    95,   312,   313,   296,   297,    96,   298,
     299,    97,   306,    98,   314,    99,   315,   100,   300,   101,
     301,   141,   142,   372,   262,   143,   371,   103,   144,    61,
      51,   232,   233,    52,    27,    28,    29,   239,    30,   121,
     122,   123,   245,   436,   246,    31,   107,   358,   108,    32,
     153,    34,    68,    67,    35,    47,    48,   391,   163,   387,
     164,   165,   388,   199,   392,   288,   237,   364,   145,   146,
     147,    63,   148,   149,   150,   466,   151,   152,    36,    37,
      38,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   140,   102,    26,   162,   264,   197,    25,   269,    64,
     242,   236,   360,   110,   112,   363,   198,   399,   192,   194,
     195,   140,   349,    45,   281,   347,    53,   381,   351,   120,
      54,    55,    62,   353,    43,    58,    33,    56,   206,    26,
      60,   437,   395,    25,   333,   334,   287,   355,   104,   214,
     215,   120,   117,    46,    17,    18,   109,   240,   140,    24,
      60,   248,   155,   230,   275,   336,   337,     1,   119,     2,
     154,   220,   161,   230,   140,   395,   433,   111,   156,   140,
    -212,   231,    49,   320,     2,   157,   124,   102,   344,   345,
     140,   357,   120,   120,   434,   221,   120,   243,   326,     2,
     207,   339,   340,   341,   342,   208,   209,   359,   124,   465,
     408,   414,   216,   217,   448,   422,    44,   238,   197,    57,
     197,   423,   367,   247,   409,   154,   224,   286,   198,    23,
     236,   327,   222,   140,     1,   140,     2,   446,   447,   373,
     432,   375,   416,   417,    23,   140,   140,   402,   403,   124,
     124,    24,   356,   124,   114,   329,   330,   331,   277,    23,
     223,   285,   394,   120,   319,    50,    24,   140,   406,   407,
     115,   384,   385,   277,   278,    17,    18,   140,   244,   228,
      39,   368,    40,   404,   405,   113,   277,   431,   225,   102,
      39,   226,    40,   376,   377,   378,    23,   369,   326,   420,
     421,    24,   383,    24,   102,   140,   229,   140,   140,   140,
     140,   120,   140,   464,   318,   244,   284,   263,   140,   140,
     124,    24,   212,   213,    39,     1,    40,     2,     1,   366,
       2,   412,    41,   234,    42,    71,    72,    73,    74,    75,
      76,   265,    77,    78,   102,   140,   140,   266,   438,   286,
     441,    39,   267,    40,   242,   415,   450,   291,   418,   419,
      64,   292,   105,   396,   106,   397,   439,   440,   124,   426,
     317,   200,   201,   202,   277,   457,   268,   380,   166,   167,
     168,   169,   170,    45,   319,   270,   161,   283,  -223,   284,
      23,   271,  -223,   161,    24,    79,     1,    24,     2,   210,
     211,    81,    82,    83,    84,    85,    86,   428,   166,   167,
     168,   429,   116,   140,   140,   272,   140,   235,   463,   467,
     468,   161,   140,   140,   461,   203,   273,   204,   236,   205,
     102,   455,   177,   318,   178,   284,   179,   120,   289,   181,
     182,   183,   476,   282,   184,   185,   290,   479,   442,   166,
     167,   168,   277,   -18,   483,   475,   484,   102,   283,  -230,
     284,   486,   177,  -230,   178,   443,   179,   321,   247,   277,
     322,   140,   469,   470,   472,   140,   444,   458,   477,   478,
     277,   429,   277,   277,   328,   140,   140,   140,   140,   140,
     161,   462,   480,   430,   124,   277,   277,   106,   459,   161,
     277,   370,   140,   177,   374,   178,   379,   179,   140,   382,
     181,   182,   183,   140,  -226,   184,   185,   218,   219,   400,
     140,   401,   140,   361,   362,   410,   413,   140,   125,   424,
     126,    72,    73,    74,    75,    76,   247,    77,    78,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   445,
     449,   451,   452,   450,   473,   453,   481,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   482,   127,   128,
     129,   474,   130,   131,   132,   133,   134,   135,   136,   137,
      79,   276,   365,   411,   118,   227,    81,    82,    83,    84,
      85,    86,   260,   485,    66,     0,     0,   316,     0,     0,
       0,   138,    59,   139,   279,     0,   126,    72,    73,    74,
      75,    76,     3,    77,    78,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,   127,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,    79,     0,   241,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,    59,   280,
     196,     0,   126,    72,    73,    74,    75,    76,     0,    77,
      78,     0,     0,     0,     0,     0,     0,   234,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
     127,   128,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   137,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,    79,
       0,     0,     0,   138,    59,    81,    82,    83,    84,    85,
      86,     0,     0,   196,     0,    71,    72,    73,    74,    75,
      76,   235,    77,    78,     0,     0,     0,     0,     0,   196,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   196,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,    79,     0,     0,     0,     0,   138,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,   179,   259,   180,   181,   182,   183,
       0,     0,   184,   185,   186,   187,   188,   189,     0,     0,
     260,     0,   177,   261,   178,     0,   179,   259,   180,   181,
     182,   183,     0,     0,   184,   185,   186,   187,   188,   189,
       0,     0,   260,     0,     0,   386,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,   179,   259,   180,   181,   182,   183,
       0,     0,   184,   185,   186,   187,   188,   189,     0,     0,
     260,   177,     0,   178,     0,   179,   427,   180,   181,   182,
     183,     0,     0,   184,   185,   186,   187,   188,   189,     0,
       0,   260,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,   196,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,   177,     0,   178,     0,
     179,     0,   180,   181,   182,   183,     0,     0,   184,   185,
     186,   187,   188,   189,     3,     0,   260,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    79,     0,     0,    80,     0,     0,
      81,    82,    83,    84,    85,    86,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,   323,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,    70,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,    70,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,   196,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   190,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
       0,    79,   324,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    79,     0,     0,   393,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,   456,     0,
       0,    81,    82,    83,    84,    85,    86,    79,   471,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,   191,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,   190,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,   190,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   196,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   332,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,     0,   193,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   335,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,   338,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   343,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   346,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,   348,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,     0,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,   350,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,   352,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,   354,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,   234,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,   323,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   389,     0,     2,     0,     0,
       0,     0,     0,     0,     0,   177,     0,   178,    23,   179,
       0,   180,   181,   182,   183,    24,     0,   184,   185,   186,
     187,   188,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,   390,   284,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     1,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   318,   390,   284,     0,
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
     186,   187,   166,   167,   168,     0,     0,   177,     0,   178,
       0,   179,     0,     0,   181,   182,   183,     0,     0,   184,
     185,   186,   187,   177,     0,   178,     0,   179,     0,     0,
     181,   182,   183,     0,     0,   184,   185,   186,   187,     0,
       0,   158,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,   178,     0,
     179,     0,     0,   181,     0,     0,     0,     0,   184,   185,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,   160,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   454,     0,   435,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   116,
       0,    59,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,    59,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   398,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    59,    42,     0,    69,   127,    79,     0,   132,    35,
     121,   116,   230,    47,    48,   235,    79,   290,    76,    77,
      78,    79,   221,    23,   148,   220,    26,   270,   222,    57,
      27,    28,    33,   223,     3,    32,    36,     3,    90,    36,
      33,   368,   286,    36,   210,   211,   161,   224,    85,    14,
      15,    79,    53,    24,    44,    45,    64,   120,   116,    70,
      53,   124,    63,    68,   137,   212,   213,     1,    85,     3,
      63,    69,    69,    68,   132,   319,    68,    48,    64,   137,
      70,    86,     1,   198,     3,    66,    57,   127,   218,   219,
     148,    86,   120,   121,    86,    79,   124,     1,   203,     3,
      70,   214,   215,   216,   217,    75,    76,   229,    79,   436,
     300,   306,    77,    78,   387,   314,    85,   118,   191,    85,
     193,   315,   244,   123,   301,   118,    19,   161,   191,    63,
     235,   204,    80,   191,     1,   193,     3,   380,   381,   263,
     358,   265,   308,   309,    63,   203,   204,   294,   295,   120,
     121,    70,   225,   124,    68,   207,   208,   209,    68,    63,
      18,   161,   284,   191,   198,    84,    70,   225,   298,   299,
      84,   276,   277,    68,    84,    44,    45,   235,    82,    68,
      63,    68,    65,   296,   297,    68,    68,    82,    81,   229,
      63,    66,    65,   266,   267,   268,    63,    84,   303,   312,
     313,    70,    84,    70,   244,   263,    83,   265,   266,   267,
     268,   239,   270,   433,    63,    82,    65,    82,   276,   277,
     191,    70,    12,    13,    63,     1,    65,     3,     1,    68,
       3,   304,    63,     1,    65,     3,     4,     5,     6,     7,
       8,    82,    10,    11,   284,   303,   304,    63,   370,   283,
     374,    63,    63,    65,   365,   307,    68,    64,   310,   311,
     286,    68,     1,    63,     3,    65,   371,   372,   239,   321,
      64,     9,    10,    11,    68,   397,    63,   270,     9,    10,
      11,    12,    13,   283,   318,    63,   283,    63,    64,    65,
      63,     3,    68,   290,    70,    63,     1,    70,     3,    71,
      72,    69,    70,    71,    72,    73,    74,    64,     9,    10,
      11,    68,    83,   371,   372,    84,   374,    85,    86,   443,
     444,   318,   380,   381,   429,    63,    84,    65,   433,    67,
     370,   396,    63,    63,    65,    65,    67,   365,    64,    70,
      71,    72,   466,    68,    75,    76,    68,   471,    64,     9,
      10,    11,    68,    64,   478,   460,   480,   397,    63,    64,
      65,   485,    63,    68,    65,    64,    67,    64,   368,    68,
       3,   429,   445,   446,   447,   433,    64,    64,    64,    64,
      68,    68,    68,    68,     3,   443,   444,   445,   446,   447,
     387,   431,    64,    66,   365,    68,    68,     3,    66,   396,
      68,    82,   460,    63,    82,    65,    56,    67,   466,    84,
      70,    71,    72,   471,     3,    75,    76,    16,    17,     3,
     478,     3,   480,   232,   233,    64,     3,   485,     1,    64,
       3,     4,     5,     6,     7,     8,   436,    10,    11,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    63,
       3,    64,    64,    68,    64,    66,    54,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    84,    51,    52,
      53,    66,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   140,   239,   303,    53,   104,    69,    70,    71,    72,
      73,    74,    83,   481,    36,    -1,    -1,   191,    -1,    -1,
      -1,    84,    85,    86,     1,    -1,     3,     4,     5,     6,
       7,     8,    30,    10,    11,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    86,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    84,    85,    69,    70,    71,    72,    73,
      74,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    85,    10,    11,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    84,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    63,    86,    65,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    86,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    63,    -1,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    63,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    30,    -1,    83,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    63,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    63,    -1,    -1,    66,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    63,    67,
      -1,    69,    70,    71,    72,    70,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    30,    31,    32,    33,    34,    35,
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
      77,    78,     9,    10,    11,    -1,    -1,    63,    -1,    65,
      -1,    67,    -1,    -1,    70,    71,    72,    -1,    -1,    75,
      76,    77,    78,    63,    -1,    65,    -1,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    76,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    64,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    86,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    83,
      -1,    85,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    85,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    63,    70,   135,   136,   141,   142,   143,
     145,   152,   156,   157,   158,   161,   185,   186,   187,    63,
      65,    63,    65,     3,    85,   157,   156,   162,   163,     1,
      84,   137,   140,   157,   136,   136,     3,    85,   136,    85,
     135,   136,   177,   178,   158,     0,   186,   160,   159,   188,
       1,     3,     4,     5,     6,     7,     8,    10,    11,    63,
      66,    69,    70,    71,    72,    73,    74,    88,    89,    97,
      98,    99,   100,   104,   107,   110,   115,   118,   120,   122,
     124,   126,   128,   134,    85,     1,     3,   153,   155,    64,
     161,   156,   161,    68,    68,    84,    83,   177,   178,    85,
     142,   146,   147,   148,   156,     1,     3,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    84,    86,
      97,   128,   129,   132,   135,   175,   176,   177,   179,   180,
     181,   183,   184,   157,   135,   177,    64,    66,     1,     3,
      64,   136,   164,   165,   167,   168,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    63,    65,    67,
      69,    70,    71,    72,    75,    76,    77,    78,    79,    80,
       1,    63,    97,    63,    97,    97,     1,   132,   148,   170,
       9,    10,    11,    63,    65,    67,    99,    70,    75,    76,
      71,    72,    12,    13,    14,    15,    77,    78,    16,    17,
      69,    79,    80,    18,    19,    81,    66,   153,    68,    83,
      68,    86,   138,   139,     1,    85,   129,   173,   177,   144,
     148,    86,   147,     1,    82,   149,   151,   157,   148,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    68,
      83,    86,   131,    82,   134,    82,    63,    63,    63,   175,
      63,     3,    84,    84,    84,   132,   131,    68,    84,     1,
      86,   175,    68,    63,    65,   157,   161,   171,   172,    64,
      68,    64,    68,    94,   108,   109,   113,   114,   116,   117,
     125,   127,    91,    92,    90,    93,   119,   101,   105,   106,
     102,   103,   111,   112,   121,   123,   170,    64,    63,   161,
     171,    64,     3,     1,    64,    95,   129,   132,     3,    99,
      99,    99,     1,   100,   100,     1,   104,   104,     1,   107,
     107,   107,   107,     1,   110,   110,     1,   115,     1,   118,
       1,   120,     1,   122,     1,   124,   132,    86,   154,   134,
     155,   140,   140,   173,   174,   146,    68,   134,    68,    84,
      82,   133,   130,   175,    82,   175,   132,   132,   132,    56,
     135,   180,    84,    84,   129,   129,    86,   166,   169,     1,
      64,   164,   171,    66,   134,   172,    63,    65,    50,   167,
       3,     3,   104,   104,   107,   107,   110,   110,   122,   124,
      64,    95,   132,     3,   115,    99,   100,   100,    99,    99,
     107,   107,   118,   120,    64,     1,    99,    68,    64,    68,
      66,    82,   155,    68,    86,    86,   150,   151,   134,   129,
     129,   175,    64,    64,    64,    63,   180,   180,   167,     3,
      68,    64,    64,    66,    64,   164,    66,   134,    64,    66,
      96,   129,   128,    86,   173,   151,   182,   175,   175,   132,
     132,    64,   132,    64,    66,   129,   175,    64,    64,   175,
      64,    54,    84,   175,   175,   182,   175
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
     123,   122,   124,   124,   125,   124,   126,   126,   127,   126,
     128,   128,   129,   129,   130,   129,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     132,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   137,   139,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   144,   145,   145,
     146,   146,   147,   148,   148,   148,   148,   149,   149,   150,
     149,   151,   151,   151,   152,   152,   152,   153,   153,   154,
     153,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   159,   158,   160,   158,   161,   161,
     161,   161,   162,   163,   163,   164,   164,   165,   165,   166,
     165,   167,   167,   167,   168,   168,   169,   168,   170,   170,
     171,   171,   171,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   176,   177,   177,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   181,
     182,   183,   183,   183,   183,   183,   184,   184,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   188
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
       0,     4,     1,     3,     0,     4,     1,     3,     0,     4,
       1,     5,     1,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       4,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     4,     0,     4,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     4,     2,     0,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     0,
       4,     1,     2,     3,     4,     5,     2,     1,     3,     0,
       4,     1,     3,     1,     1,     2,     1,     1,     3,     4,
       3,     5,     5,     4,     0,     4,     0,     4,     1,     2,
       3,     3,     0,     1,     2,     1,     3,     1,     3,     0,
       4,     2,     2,     1,     1,     3,     0,     4,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     4,
       3,     1,     2,     1,     2,     1,     2,     6,     9,     5,
       0,     5,     7,     6,     7,     7,     3,     2,     2,     2,
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
#line 63 "src/grammar.y" /* yacc.c:1646  */
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
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(INTEGER);
									(yyval.entry)->type->value = (yyvsp[0].intval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%d",(yyvsp[0].intval)); 
									(yyval.entry)->name = s;  
							}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(CHR); 
									(yyval.entry)->type->value = (int)(yyvsp[0].charval); 
									(yyval.entry)->type->constnt = 1; 
									string s1(1, (yyvsp[0].charval)); 
									string s = "'" + s1 + "'";
									(yyval.entry)->name = s; 
							}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(FLT); 
									(yyval.entry)->type->value = (int)(yyvsp[0].floatval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%f",(yyvsp[0].floatval)); 
									(yyval.entry)->name = s; 
							}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "src/grammar.y" /* yacc.c:1646  */
    { if ( (yyvsp[-1].entry)->type->info != INTEGER ) yyerror3("expecting integer expression");  }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 115 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 117 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 149 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 154 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 155 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 156 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 157 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 158 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 164 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 181 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 182 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 183 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 184 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 185 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 186 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 187 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 188 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 193 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 194 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 195 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 196 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 200 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 201 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 202 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 206 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 207 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 208 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 212 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 213 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 214 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 218 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 220 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 224 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 226 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 230 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 235 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 236 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("lvalue required as left operand of assignment");}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 242 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 243 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 244 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 245 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 246 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 247 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 249 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 250 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 251 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 257 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 261 "src/grammar.y" /* yacc.c:1646  */
    {cout << (yyvsp[0].entry)->type->value << endl; }
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 265 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 266 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 271 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 272 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 273 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 274 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 275 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 276 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 280 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 281 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-3].type);}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 282 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 284 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 287 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 293 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 294 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 296 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 300 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 301 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 302 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 303 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 304 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 305 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 306 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 307 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 308 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 309 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 316 "src/grammar.y" /* yacc.c:1646  */
    {
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup(table_stack.top(),(yyvsp[-5].stringval)))
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Multiple declarations for structure or union \"", (yyvsp[-5].stringval), "\"");
											yyerror3(error);
											(yyval.type) = new_basic_type(ERROR); 
										}
										else
										{
											(yyval.type) = new_struct_type((yyvsp[-1].type)) ;
											enter_proc(struct_namespace, (yyvsp[-4].stringval), (yyval.type), t1);
											t1->scope = table_stack.top()->name;
										}
									}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 337 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 357 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 358 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 362 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 363 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 364 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 368 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 382 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 391 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 392 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 396 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 397 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 401 "src/grammar.y" /* yacc.c:1646  */
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
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 416 "src/grammar.y" /* yacc.c:1646  */
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
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 430 "src/grammar.y" /* yacc.c:1646  */
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
#line 2917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 446 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								table_entry_ptr e = same_lookup(table_stack.top(),(yyvsp[-4].stringval));
								if( e != NULL && !e->proc_decl)
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-4].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); offset_stack.push(0);
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
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 472 "src/grammar.y" /* yacc.c:1646  */
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
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 495 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 496 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 500 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 502 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 505 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 514 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 519 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 520 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 521 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 525 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 527 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 533 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 577 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} }
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 589 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 590 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 614 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.intval) = code_line;}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 639 "src/grammar.y" /* yacc.c:1646  */
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
#line 3092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 661 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																same_lookup(table_stack.top(),nam)->proc_decl = 0;
															}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 668 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																same_lookup(table_stack.top(),nam)->proc_decl = 0;
															}
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 675 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																same_lookup(table_stack.top(),nam)->proc_decl = 0;
															}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 682 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																same_lookup(table_stack.top(),nam)->proc_decl = 0;
															}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 691 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3146 "y.tab.c" /* yacc.c:1646  */
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
#line 694 "src/grammar.y" /* yacc.c:1906  */




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
