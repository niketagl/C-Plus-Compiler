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

extern char yytext[];
extern int column;
extern int yylineno;



#line 83 "y.tab.c" /* yacc.c:339  */

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
#line 18 "src/grammar.y" /* yacc.c:355  */

	#include "src/symboltable.h"
	#include "src/tac.h"
	#include <stack>
	#include <iostream>
	#include <vector>
	extern stack < table_ptr > table_stack;
	extern stack < int > offset_stack;
	extern table_ptr struct_namespace;
	extern int code_line;
	extern vector < code_ptr > V;

#line 126 "y.tab.c" /* yacc.c:355  */

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
#line 31 "src/grammar.y" /* yacc.c:355  */

	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 271 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 288 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  287
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  483

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
       0,    59,    59,    73,    74,    75,    76,    77,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    95,    99,   100,
     101,   101,   105,   106,   107,   108,   109,   110,   114,   115,
     116,   117,   118,   119,   123,   124,   128,   129,   130,   131,
     132,   132,   133,   133,   134,   134,   138,   139,   140,   141,
     141,   142,   142,   146,   147,   148,   149,   149,   150,   150,
     154,   155,   156,   157,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   166,   167,   168,   169,   169,   170,   170,
     174,   175,   176,   176,   180,   181,   182,   182,   186,   187,
     188,   188,   192,   193,   194,   194,   198,   199,   200,   200,
     204,   205,   209,   210,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   228,   229,   230,   230,   234,
     238,   239,   244,   245,   246,   247,   248,   249,   253,   254,
     255,   255,   257,   260,   261,   265,   266,   267,   268,   269,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   288,   307,   308,   310,   314,   315,   319,   320,
     324,   328,   329,   330,   331,   335,   336,   337,   337,   341,
     342,   343,   347,   348,   349,   353,   354,   355,   355,   359,
     360,   364,   365,   369,   370,   374,   388,   389,   403,   418,
     441,   442,   464,   464,   465,   465,   469,   470,   471,   472,
     474,   477,   478,   483,   484,   488,   489,   490,   490,   494,
     495,   496,   500,   501,   502,   502,   506,   507,   511,   512,
     513,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     529,   530,   531,   535,   536,   540,   541,   542,   543,   544,
     545,   546,   550,   551,   552,   556,   557,   558,   559,   563,
     564,   568,   569,   573,   574,   578,   579,   580,   583,   586,
     587,   588,   589,   590,   594,   595,   596,   597,   598,   602,
     603,   607,   608,   612,   614,   615,   616,   620
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
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "$@25", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "$@26",
  "init_declarator_listM", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "mk_tbl2",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "$@27",
  "struct_declarator", "enum_specifier", "enumerator_list", "$@28",
  "enumerator", "type_qualifier", "declarator", "direct_declarator",
  "$@29", "$@30", "pointer", "pointerM", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "$@31", "parameter_declaration",
  "identifier_list", "$@32", "type_name", "abstract_declarator",
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

#define YYTABLE_NINF -229

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1774,     5,    13,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,    37,   151,    -1,  -328,    34,  2144,  2144,  -328,
      42,  -328,  2144,  2088,  -328,    79,  1627,  -328,  -328,  -328,
    -328,  -328,   929,   -63,   187,   -18,  -328,   -13,   121,   150,
    -328,    19,  -328,  2032,  -328,  -328,    10,  2063,  -328,   421,
    -328,    34,  -328,  2088,  -328,  -328,  -328,    51,    54,  1932,
    1456,  -328,  -328,  -328,  -328,  -328,  1052,  1077,  1077,   880,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   215,  -328,
    1089,  -328,   181,   188,   323,   171,   338,    65,    81,    83,
     191,    35,  -328,   102,   187,   152,   146,   101,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,   628,  -328,  2088,  -328,
    2063,  1961,  -328,    80,  2063,   796,   141,  1101,   160,   182,
     202,   209,   611,   249,   295,   267,   280,   720,  -328,  -328,
     414,  -328,  -328,    25,  -328,  -328,  -328,  -328,   507,  -328,
    -328,  -328,  -328,   259,  -328,  -328,  -328,  -328,   256,  -328,
    -328,   199,   296,   297,  -328,   -15,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,   303,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
     224,   880,  -328,  1126,  -328,  -328,  1413,   168,   140,   309,
     371,  -328,  -328,   954,  1126,   372,  -328,  1089,  1089,  1089,
    1175,  1175,  1200,  1200,  1212,  1212,  1212,  1212,  1224,  1224,
    1249,  1298,  1323,  1335,  1347,  1126,  -328,   133,  -328,  1101,
     373,  -328,   151,   151,   628,  -328,  -328,  -328,  2063,  -328,
    -328,  -328,   190,  1101,   143,  -328,   298,  -328,  -328,  -328,
     611,   305,   611,  1126,  1126,  1126,   321,   704,   294,  -328,
    -328,  -328,   144,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  1101,  1101,  -328,   829,  -328,  -328,
     376,  1676,   966,  -328,   276,  -328,   221,  -328,  2108,  -328,
     385,   386,  1200,  1200,  1212,  1212,  1224,  1224,  1335,  1347,
     326,  1372,  1126,   388,  1249,  1089,  1175,  1175,  1089,  1089,
    1212,  1212,  1298,  1323,   329,  -328,  1725,   229,  -328,  1089,
    -328,  1438,  -328,   235,  -328,   241,  -328,  -328,  -328,  -328,
    1885,   181,   181,   230,   188,   188,   336,   323,   323,   323,
     323,  1852,   171,   171,  1836,   338,  1815,    65,  1566,    81,
    1546,    83,  1528,   191,    30,  -328,   373,  -328,  -328,  -328,
    -328,  -328,   136,  2012,  -328,  -328,   107,  -328,  1101,  1101,
    -328,   611,  -328,   240,   246,   253,   331,   753,   753,  -328,
    -328,  -328,  -328,  -328,  2144,   393,   205,  -328,   333,   341,
    -328,   334,   221,  1981,   978,  -328,  -328,  -328,  -328,   188,
     188,   323,   323,   171,   171,    83,   191,  -328,   258,   293,
    -328,   338,  -328,   181,   181,  -328,  -328,   323,   323,    65,
      81,  -328,   342,  -328,  -328,  -328,  1101,  -328,  1101,  -328,
     525,  -328,  -328,   107,  -328,  -328,  -328,  -328,  -328,   611,
     611,  1126,  1126,  1003,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,   349,  -328,   348,  -328,  -328,  1101,  -328,  -328,  -328,
    -328,  -328,   611,  -328,  -328,   261,   266,   611,   269,  -328,
    -328,  -328,   361,   318,   611,  -328,   611,  -328,  -328,  -328,
    -328,   611,  -328
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   195,   161,   145,   146,   147,   148,   149,   151,
     152,   153,   154,   157,   158,   155,   156,   191,   192,   150,
     166,   167,     0,     0,   206,   282,     0,   132,   134,   159,
       0,   160,   136,     0,   194,     0,     0,   279,   281,   204,
     202,   287,     0,   184,     0,     0,   211,     0,   207,     0,
     130,     0,   138,   143,   133,   135,   164,     0,   137,     0,
     259,     0,   286,     0,   193,     1,   280,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,     0,     0,
     198,    38,    39,    40,    41,    42,    43,     8,    32,    44,
       0,    46,    56,    63,    70,    83,    90,    94,    98,   102,
     106,   110,   129,     0,     0,     0,   189,     0,   185,   196,
     208,   212,   209,   140,   142,   131,     0,   284,     0,   165,
     172,     0,   168,     0,   174,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,   255,
      44,   112,   125,     0,   251,   261,   245,   246,     0,   247,
     248,   249,   250,   143,   260,   285,   205,   203,     0,   222,
     201,     0,     0,   213,   215,     0,    24,    26,    27,    66,
      68,    79,    81,    86,    88,   104,   108,    20,    16,    22,
      92,    50,    59,    61,    52,    54,    75,    77,    96,   100,
       0,     0,    36,     0,    33,    34,     0,     0,   226,     0,
       0,    14,    15,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,     0,   187,     0,
       0,   182,     0,     0,     0,   240,   144,   283,     0,   171,
     163,   169,     0,     0,     0,   175,   179,   173,   127,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
     276,   277,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   114,     0,     0,   264,     0,   256,   262,
     217,     0,     0,   219,     0,   220,   229,   199,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,   228,   227,     0,
      13,     0,    10,     0,    28,     0,    12,    47,    48,    49,
       0,    57,    58,     0,    64,    65,     0,    73,    74,    71,
      72,     0,    84,    85,     0,    91,     0,    95,     0,    99,
       0,   103,     0,   107,     0,   183,     0,   190,   186,   141,
     139,   243,     0,     0,   177,   180,     0,   170,     0,     0,
     252,     0,   254,     0,     0,     0,     0,     0,     0,   274,
     278,   113,   126,   257,     0,     0,     0,   236,     0,     0,
     232,     0,   230,     0,     0,   214,   216,   223,    25,    67,
      69,    80,    82,    87,    89,   105,   109,    19,     0,     0,
      23,    93,    51,    60,    62,    53,    55,    76,    78,    97,
     101,    37,     0,    45,    30,    11,     0,     9,     0,   188,
       0,   241,   162,     0,   176,   181,   128,   253,   268,     0,
       0,     0,     0,     0,   218,   225,   217,   237,   231,   233,
     238,     0,   234,     0,    21,    17,     0,    29,   111,   242,
     244,   178,     0,   267,   269,     0,     0,     0,     0,   239,
     235,    31,   265,     0,     0,   271,     0,   268,   270,   273,
     272,     0,   266
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   116,  -328,
     -58,  -328,   -34,  -159,  -328,  -328,  -328,   -55,  -328,  -328,
    -155,  -328,  -328,  -117,  -328,  -328,  -328,  -328,  -205,  -328,
    -328,  -207,  -328,  -189,  -328,  -168,  -328,  -161,  -328,  -328,
    -328,   -36,  -103,  -328,   -72,  -328,  -118,    31,     2,  -328,
    -328,  -328,   130,  -328,   -32,  -328,  -328,  -328,   183,  -111,
     -47,  -328,  -328,  -327,  -328,   315,  -328,  -227,    -7,     0,
     -30,  -328,  -328,   -20,  -328,  -328,   -65,  -328,  -328,  -277,
    -328,  -328,   239,  -113,  -242,  -222,  -328,  -124,  -328,    33,
     367,  -328,  -241,  -328,   -33,  -328,  -328,  -328,   409,  -328,
    -328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   302,   300,   301,   303,   291,   323,   456,
      89,    90,    91,    92,   305,   308,   309,    93,   306,   307,
      94,   292,   293,    95,   310,   311,   294,   295,    96,   296,
     297,    97,   304,    98,   312,    99,   313,   100,   298,   101,
     299,   141,   142,   274,   143,   369,   103,   144,    61,    51,
     232,   233,    52,    27,    28,    29,   238,    30,   121,   122,
     123,   244,   433,   245,    31,   107,   356,   108,    32,   153,
      34,    68,    67,    35,    47,    48,   388,   163,   384,   164,
     165,   385,   199,   389,   286,   236,   362,   145,   146,   147,
      63,   148,   149,   150,   462,   151,   152,    36,    37,    38,
      69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   140,    26,   358,   162,    64,   102,   197,   256,   251,
     241,   396,   361,   235,   347,   345,   378,    46,   192,   194,
     195,   140,   104,    45,   279,   120,    53,   110,   112,    54,
      55,    25,   198,   349,    58,    49,    33,     2,    26,   434,
      43,   111,   392,    17,    18,    56,   109,   120,   285,   289,
     124,   331,   332,   290,   224,   351,   206,    24,   140,   337,
     338,   339,   340,   353,    60,   262,    62,    25,    39,  -210,
      40,   161,   124,   239,   140,   392,    41,   247,    42,   140,
       1,   242,     2,     2,    60,   318,   117,   114,   120,   120,
     140,   102,   120,   275,   154,   119,   155,    23,   275,   411,
     324,   342,   343,   115,    24,   419,   461,   444,     1,   276,
       2,   357,   428,   124,   124,   156,   225,   124,    50,   197,
     157,   197,    44,   246,   420,   365,   370,    57,   372,   429,
     405,   235,   325,   140,   220,   140,   442,   443,   406,   401,
     402,   284,    23,    23,   198,   140,   140,   413,   414,   154,
      24,   237,     1,   354,     2,   417,   418,   334,   335,   120,
     221,   283,   243,   222,   391,    17,    18,   140,   226,   230,
      23,   381,   382,   327,   328,   329,   140,    24,   317,   403,
     404,   373,   374,   375,   124,   214,   215,   231,   105,   243,
     106,    24,   140,   102,   140,   140,   140,   140,   324,   140,
       1,   230,     2,   316,   430,   282,   120,   102,   460,   223,
      24,   366,   275,    39,    23,    40,   140,   140,   113,   355,
     228,    24,   431,   250,   200,   201,   202,   367,   380,   229,
     409,   124,   315,   166,   167,   168,   275,   399,   400,   166,
     167,   168,   252,   140,   140,   253,   102,   437,   216,   217,
     435,   207,   241,    39,    64,    40,   208,   209,   364,   210,
     211,   284,   281,  -221,   282,   254,   436,  -221,    39,    24,
      40,   412,   255,   446,   415,   416,   453,     1,   203,     2,
     204,    45,   205,   161,   393,   423,   394,   177,   377,   178,
     161,   179,   316,   177,   282,   178,   317,   179,   258,   425,
     181,   182,   183,   426,   438,   184,   185,   427,   275,   275,
     439,   140,   257,   140,   275,   463,   464,   440,   161,   140,
     140,   275,   454,   457,   280,   473,   426,   235,   451,   275,
     474,   120,   102,   476,   275,   212,   213,   275,   472,   281,
    -228,   282,   116,   475,  -228,   166,   167,   168,   169,   170,
     479,   259,   480,   471,   218,   219,   124,   482,   102,   455,
     287,   275,   359,   360,   260,   288,   246,   -18,   140,   465,
     466,   468,   140,   319,   320,   326,   106,   376,   379,  -224,
     368,   140,   140,   140,   140,   140,   161,   371,   397,   398,
     407,   410,   458,   421,   441,   161,   445,   447,   140,   177,
     449,   178,   478,   179,   140,   448,   181,   182,   183,   140,
     446,   184,   185,   469,   470,   477,   140,   408,   140,   227,
     118,   363,   125,   140,   126,    72,    73,    74,    75,    76,
     314,    77,    78,   246,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   481,    66,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,   273,     0,     0,
       0,     0,     0,     0,     0,   138,    59,   139,   277,     0,
     126,    72,    73,    74,    75,    76,     0,    77,    78,     0,
       0,     0,     0,     0,     0,     0,    70,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,   127,   128,
     129,     0,   130,   131,   132,   133,   134,   135,   136,   137,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   138,    59,   278,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   459,   196,     0,   126,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,     0,     0,    70,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,    79,     0,     0,     0,   138,    59,    81,    82,    83,
      84,    85,    86,     0,     0,   196,     0,    71,    72,    73,
      74,    75,    76,   234,    77,    78,     0,     0,     0,     0,
       0,   196,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   196,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,    79,     0,     0,     0,     0,   138,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   261,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,   178,     0,   179,   248,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,   189,     0,     0,     0,
       0,   196,   249,    71,    72,    73,    74,    75,    76,     0,
      77,    78,   177,     0,   178,     0,   179,   248,   180,   181,
     182,   183,     0,     0,   184,   185,   186,   187,   188,   189,
       3,     0,     0,     0,     0,   383,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      70,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,     0,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,   321,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,    70,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,    79,     0,     0,    80,     0,     0,    81,    82,
      83,    84,    85,    86,   196,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,    79,   322,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    79,
       0,     0,   390,     0,     0,    81,    82,    83,    84,    85,
      86,    79,     0,     0,   452,     0,     0,    81,    82,    83,
      84,    85,    86,   190,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,    79,   467,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,   190,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
     190,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,    70,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,     0,   191,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,   196,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
     193,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    79,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,   330,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,     0,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,   333,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,   336,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,   341,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,     0,    79,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
     344,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,     0,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,   346,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,    79,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,   348,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,   350,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,   352,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
       0,    79,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   321,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,    79,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    79,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      79,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,     0,    79,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,   178,     0,
     179,   248,   180,   181,   182,   183,     0,     0,   184,   185,
     186,   187,   188,   189,     0,     0,     0,     0,     0,     0,
       0,   177,     0,   178,     0,   179,   424,   180,   181,   182,
     183,     0,     0,   184,   185,   186,   187,   188,   189,   177,
       0,   178,     0,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,   189,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,     0,     0,     0,     0,
       0,   177,     0,   178,     0,   179,     0,   180,   181,   182,
     183,     0,     0,   184,   185,   186,   187,   188,   189,   177,
       0,   178,     0,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,   189,    65,     1,   177,
       2,   178,     0,   179,     0,   180,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   386,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   422,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     387,   282,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     1,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,   387,
     282,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,    24,   166,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
     178,     0,   179,     0,   180,   181,   182,   183,     0,     0,
     184,   185,   186,   187,   166,   167,   168,     0,     0,   177,
       0,   178,     0,   179,     0,     0,   181,   182,   183,     0,
       0,   184,   185,   186,   187,   177,     0,   178,     0,   179,
       0,     0,   181,   182,   183,     0,     0,   184,   185,   186,
     187,     0,     0,   158,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
     178,     0,   179,     0,     0,   181,     0,     0,     0,     0,
     184,   185,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   422,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,   160,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   450,     0,   240,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,   432,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,   116,     0,    59,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    59,     0,   230,    69,    35,    42,    79,   132,   127,
     121,   288,   234,   116,   221,   220,   257,    24,    76,    77,
      78,    79,    85,    23,   148,    57,    26,    47,    48,    27,
      28,     0,    79,   222,    32,     1,    36,     3,    36,   366,
       3,    48,   284,    44,    45,     3,    64,    79,   161,    64,
      57,   210,   211,    68,    19,   223,    90,    70,   116,   214,
     215,   216,   217,   224,    33,   137,    33,    36,    63,    70,
      65,    69,    79,   120,   132,   317,    63,   124,    65,   137,
       1,     1,     3,     3,    53,   198,    53,    68,   120,   121,
     148,   127,   124,    68,    63,    85,    63,    63,    68,   304,
     203,   218,   219,    84,    70,   312,   433,   384,     1,    84,
       3,   229,    82,   120,   121,    64,    81,   124,    84,   191,
      66,   193,    85,   123,   313,   243,   250,    85,   252,   356,
     298,   234,   204,   191,    69,   193,   377,   378,   299,   294,
     295,   161,    63,    63,   191,   203,   204,   306,   307,   118,
      70,   118,     1,   225,     3,   310,   311,   212,   213,   191,
      79,   161,    82,    80,   282,    44,    45,   225,    66,    68,
      63,   274,   275,   207,   208,   209,   234,    70,   198,   296,
     297,   253,   254,   255,   191,    14,    15,    86,     1,    82,
       3,    70,   250,   229,   252,   253,   254,   255,   301,   257,
       1,    68,     3,    63,    68,    65,   238,   243,   430,    18,
      70,    68,    68,    63,    63,    65,   274,   275,    68,    86,
      68,    70,    86,    82,     9,    10,    11,    84,    84,    83,
     302,   238,    64,     9,    10,    11,    68,   292,   293,     9,
      10,    11,    82,   301,   302,    63,   282,   371,    77,    78,
     368,    70,   363,    63,   284,    65,    75,    76,    68,    71,
      72,   281,    63,    64,    65,    63,   369,    68,    63,    70,
      65,   305,    63,    68,   308,   309,   394,     1,    63,     3,
      65,   281,    67,   281,    63,   319,    65,    63,   257,    65,
     288,    67,    63,    63,    65,    65,   316,    67,     3,    64,
      70,    71,    72,    68,    64,    75,    76,    66,    68,    68,
      64,   369,    63,   371,    68,   439,   440,    64,   316,   377,
     378,    68,    64,   426,    68,    64,    68,   430,   393,    68,
      64,   363,   368,    64,    68,    12,    13,    68,   462,    63,
      64,    65,    83,   467,    68,     9,    10,    11,    12,    13,
     474,    84,   476,   456,    16,    17,   363,   481,   394,    66,
      64,    68,   232,   233,    84,    68,   366,    64,   426,   441,
     442,   443,   430,    64,     3,     3,     3,    56,    84,     3,
      82,   439,   440,   441,   442,   443,   384,    82,     3,     3,
      64,     3,   428,    64,    63,   393,     3,    64,   456,    63,
      66,    65,    84,    67,   462,    64,    70,    71,    72,   467,
      68,    75,    76,    64,    66,    54,   474,   301,   476,   104,
      53,   238,     1,   481,     3,     4,     5,     6,     7,     8,
     191,    10,    11,   433,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   477,    36,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    83,    -1,    -1,
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
      -1,    -1,    -1,    -1,    84,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,     1,    86,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    63,    -1,    65,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      30,    -1,    -1,    -1,    -1,    86,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    69,    70,
      71,    72,    73,    74,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    63,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    63,    -1,    65,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    67,    -1,    69,    70,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,     0,     1,    63,
       3,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    76,    77,    78,     9,    10,    11,    -1,    -1,    63,
      -1,    65,    -1,    67,    -1,    -1,    70,    71,    72,    -1,
      -1,    75,    76,    77,    78,    63,    -1,    65,    -1,    67,
      -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,    77,
      78,    -1,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      75,    76,    30,    31,    32,    33,    34,    35,    36,    37,
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
      47,    48,    49,    63,    70,   134,   135,   140,   141,   142,
     144,   151,   155,   156,   157,   160,   184,   185,   186,    63,
      65,    63,    65,     3,    85,   156,   155,   161,   162,     1,
      84,   136,   139,   156,   135,   135,     3,    85,   135,    85,
     134,   135,   176,   177,   157,     0,   185,   159,   158,   187,
       1,     3,     4,     5,     6,     7,     8,    10,    11,    63,
      66,    69,    70,    71,    72,    73,    74,    88,    89,    97,
      98,    99,   100,   104,   107,   110,   115,   118,   120,   122,
     124,   126,   128,   133,    85,     1,     3,   152,   154,    64,
     160,   155,   160,    68,    68,    84,    83,   176,   177,    85,
     141,   145,   146,   147,   155,     1,     3,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    84,    86,
      97,   128,   129,   131,   134,   174,   175,   176,   178,   179,
     180,   182,   183,   156,   134,   176,    64,    66,     1,     3,
      64,   135,   163,   164,   166,   167,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    63,    65,    67,
      69,    70,    71,    72,    75,    76,    77,    78,    79,    80,
       1,    63,    97,    63,    97,    97,     1,   131,   147,   169,
       9,    10,    11,    63,    65,    67,    99,    70,    75,    76,
      71,    72,    12,    13,    14,    15,    77,    78,    16,    17,
      69,    79,    80,    18,    19,    81,    66,   152,    68,    83,
      68,    86,   137,   138,    85,   129,   172,   176,   143,   147,
      86,   146,     1,    82,   148,   150,   156,   147,    68,    86,
      82,   133,    82,    63,    63,    63,   174,    63,     3,    84,
      84,    84,   131,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    83,   130,    68,    84,     1,    86,   174,
      68,    63,    65,   156,   160,   170,   171,    64,    68,    64,
      68,    94,   108,   109,   113,   114,   116,   117,   125,   127,
      91,    92,    90,    93,   119,   101,   105,   106,   102,   103,
     111,   112,   121,   123,   169,    64,    63,   160,   170,    64,
       3,     1,    64,    95,   129,   131,     3,    99,    99,    99,
       1,   100,   100,     1,   104,   104,     1,   107,   107,   107,
     107,     1,   110,   110,     1,   115,     1,   118,     1,   120,
       1,   122,     1,   124,   131,    86,   153,   133,   154,   139,
     139,   172,   173,   145,    68,   133,    68,    84,    82,   132,
     174,    82,   174,   131,   131,   131,    56,   134,   179,    84,
      84,   129,   129,    86,   165,   168,     1,    64,   163,   170,
      66,   133,   171,    63,    65,    50,   166,     3,     3,   104,
     104,   107,   107,   110,   110,   122,   124,    64,    95,   131,
       3,   115,    99,   100,   100,    99,    99,   107,   107,   118,
     120,    64,     1,    99,    68,    64,    68,    66,    82,   154,
      68,    86,    86,   149,   150,   133,   129,   174,    64,    64,
      64,    63,   179,   179,   166,     3,    68,    64,    64,    66,
      64,   163,    66,   133,    64,    66,    96,   129,   128,    86,
     172,   150,   181,   174,   174,   131,   131,    64,   131,    64,
      66,   129,   174,    64,    64,   174,    64,    54,    84,   174,
     174,   181,   174
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
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   132,   131,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   136,   138,   139,   139,   140,   140,   140,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   143,   144,   144,   145,   145,
     146,   147,   147,   147,   147,   148,   148,   149,   148,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   152,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   158,   157,   159,   157,   160,   160,   160,   160,
     161,   162,   162,   163,   163,   164,   164,   165,   164,   166,
     166,   166,   167,   167,   168,   167,   169,   169,   170,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   172,   173,   173,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   175,   176,   176,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   180,   181,   182,
     182,   182,   182,   182,   183,   183,   183,   183,   183,   184,
     184,   185,   185,   186,   186,   186,   186,   187
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
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     4,
       0,     4,     0,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     4,     2,     0,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     0,     4,     1,
       2,     3,     4,     5,     2,     1,     3,     0,     4,     1,
       3,     1,     1,     2,     1,     1,     3,     4,     3,     5,
       5,     4,     0,     4,     0,     4,     1,     2,     3,     3,
       0,     1,     2,     1,     3,     1,     3,     0,     4,     2,
       2,     1,     1,     3,     0,     4,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     4,     3,     1,
       2,     1,     2,     1,     2,     6,     9,     5,     0,     5,
       7,     6,     7,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     3,     2,     0
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
#line 59 "src/grammar.y" /* yacc.c:1646  */
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
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = new table_entry; (yyval.entry)->type = new_basic_type(INTEGER); (yyval.entry)->type->value = (yyvsp[0].intval); }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = new table_entry; (yyval.entry)->type = new_basic_type(CHR); (yyval.entry)->type->value = (int)(yyvsp[0].charval); }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 75 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = new table_entry; (yyval.entry)->type = new_basic_type(FLT); (yyval.entry)->type->value = (int)(yyvsp[0].floatval); }
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "src/grammar.y" /* yacc.c:1646  */
    { if ( (yyvsp[-1].entry)->type->info != INTEGER ) yyerror3("expecting integer expression");  }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 91 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 101 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 105 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 130 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 131 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 132 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 138 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 139 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 140 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 141 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 148 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 150 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 158 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 159 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 161 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 162 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 166 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 167 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 168 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 169 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 170 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 174 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 175 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 176 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 180 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 181 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 182 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 186 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 187 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 188 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 192 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 194 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 198 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 200 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 204 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 209 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 210 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 215 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 216 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 217 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 218 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 219 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 220 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 221 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 222 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 223 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 224 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 230 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 238 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 239 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-2].type);}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 244 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 245 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 246 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 247 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 249 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 255 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 257 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 266 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 267 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 269 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 273 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 274 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 275 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 276 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 277 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 278 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 279 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 280 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 281 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 282 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 289 "src/grammar.y" /* yacc.c:1646  */
    {
										table_ptr t1 = table_stack.top();
										table_stack.pop();
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
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 310 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 328 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 329 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 330 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 331 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 335 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 336 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 337 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 341 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 355 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 364 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 365 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 369 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 370 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 374 "src/grammar.y" /* yacc.c:1646  */
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
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 389 "src/grammar.y" /* yacc.c:1646  */
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
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 403 "src/grammar.y" /* yacc.c:1646  */
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
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 419 "src/grammar.y" /* yacc.c:1646  */
    {
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								if(same_lookup(table_stack.top(),(yyvsp[-4].stringval)))
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-4].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); 
								}
								else
								{
									(yyval.type) = new_function_type((yyvsp[-1].type),(yyvsp[-5].type));
									enter_proc(table_stack.top(), (yyvsp[-4].stringval), (yyval.type), t1);
									t1->name.append((yyvsp[-4].stringval));
									t1->scope = t1->name;
									table_stack.push(t1);
								}
							}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 443 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								if(same_lookup(table_stack.top(),(yyvsp[-3].stringval)))
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-3].stringval), "\"");
									yyerror3(error);
									(yyval.type) = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); 
								}
								else
								{
									(yyval.type) = new_function_type(NULL,(yyvsp[-4].type));
									enter_proc(table_stack.top(), (yyvsp[-3].stringval), (yyval.type), t1);
									t1->name.append((yyvsp[-3].stringval));
									t1->scope = t1->name;
									table_stack.push(t1);
								}
							}
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 464 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 465 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 469 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 471 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 474 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 483 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 488 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 489 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 490 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 494 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 496 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 502 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 546 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION)table_stack.pop(); }
#line 2978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 558 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 559 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 583 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.intval) = code_line;}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 608 "src/grammar.y" /* yacc.c:1646  */
    {if((yyvsp[0].type)->info==FUNCTION)table_stack.pop();}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 613 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 614 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 615 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 616 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 620 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); }
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3036 "y.tab.c" /* yacc.c:1646  */
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
#line 623 "src/grammar.y" /* yacc.c:1906  */




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
