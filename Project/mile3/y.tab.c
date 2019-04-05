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
	extern vector < table_entry_ptr > arg_list;
	extern stack < int > offset_stack;
	extern table_ptr struct_namespace;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;

#line 132 "y.tab.c" /* yacc.c:355  */

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
    THIS = 306,
    SCOPE_RES = 307,
    ASM = 308,
    CLASS = 309,
    PRIVATE = 310,
    PROTECTED = 311,
    PUBLIC = 312,
    CASE = 313,
    DEFAULT = 314,
    IF = 315,
    ELSE = 316,
    SWITCH = 317,
    WHILE = 318,
    DO = 319,
    FOR = 320,
    GOTO = 321,
    CONTINUE = 322,
    BREAK = 323,
    RETURN = 324
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
#define THIS 306
#define SCOPE_RES 307
#define ASM 308
#define CLASS 309
#define PRIVATE 310
#define PROTECTED 311
#define PUBLIC 312
#define CASE 313
#define DEFAULT 314
#define IF 315
#define ELSE 316
#define SWITCH 317
#define WHILE 318
#define DO 319
#define FOR 320
#define GOTO 321
#define CONTINUE 322
#define BREAK 323
#define RETURN 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "src/grammar.y" /* yacc.c:355  */

	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 291 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 308 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2702

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  338
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  564

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    83,    76,     2,
      70,    71,    77,    78,    75,    79,    74,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    91,
      84,    90,    85,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    87,    93,    81,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    69,    70,    71,    72,    86,    90,    98,
     107,   115,   119,   120,   121,   133,   150,   151,   152,   160,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   174,   178,   179,   184,   184,   188,   189,   198,   207,
     255,   256,   260,   261,   262,   263,   264,   265,   269,   270,
     274,   275,   276,   277,   278,   278,   279,   279,   280,   280,
     284,   285,   286,   287,   287,   288,   288,   292,   293,   294,
     295,   295,   296,   296,   300,   301,   302,   303,   304,   305,
     305,   306,   306,   307,   307,   308,   308,   312,   313,   314,
     315,   315,   316,   316,   320,   321,   322,   322,   326,   327,
     328,   328,   332,   333,   334,   334,   338,   344,   349,   349,
     351,   360,   362,   361,   373,   373,   377,   378,   392,   400,
     420,   421,   422,   422,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   441,   442,   443,   443,   447,
     451,   452,   453,   454,   458,   462,   463,   464,   465,   466,
     467,   471,   472,   473,   473,   475,   478,   479,   483,   484,
     485,   486,   487,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   507,   511,   530,   531,
     545,   548,   549,   553,   554,   558,   562,   563,   564,   565,
     569,   570,   571,   571,   575,   576,   577,   581,   582,   583,
     587,   588,   589,   589,   593,   594,   598,   599,   603,   604,
     608,   622,   623,   637,   652,   696,   697,   741,   741,   742,
     742,   746,   747,   748,   749,   751,   754,   755,   760,   761,
     765,   766,   767,   767,   771,   772,   773,   775,   778,   779,
     780,   780,   784,   785,   789,   790,   791,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   807,   808,   809,   813,
     814,   818,   819,   827,   828,   836,   844,   845,   848,   851,
     852,   863,   871,   875,   876,   877,   878,   882,   883,   887,
     892,   911,   912,   916,   929,   948,   974,   981,   990,  1001,
    1010,  1018,  1029,  1039,  1050,  1055,  1063,  1070,  1080,  1089,
    1096,  1097,  1102,  1107,  1108,  1112,  1113,  1117,  1118,  1140,
    1149,  1161,  1164,  1165,  1169,  1170,  1171,  1175,  1176,  1177,
    1178,  1181,  1182,  1183,  1184,  1185,  1189,  1190,  1194,  1195,
    1199,  1203,  1207,  1208,  1212,  1213,  1217,  1218,  1219
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
  "ENUM", "ELLIPSIS", "THIS", "SCOPE_RES", "ASM", "CLASS", "PRIVATE",
  "PROTECTED", "PUBLIC", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'!'",
  "'~'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "class_name", "primary_expression",
  "literal", "postfix_expression", "$@1", "$@2", "$@3", "$@4", "$@5",
  "argument_expression_list", "$@6", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "$@7", "$@8", "$@9",
  "additive_expression", "$@10", "$@11", "shift_expression", "$@12",
  "$@13", "relational_expression", "$@14", "$@15", "$@16", "$@17",
  "equality_expression", "$@18", "$@19", "and_expression", "$@20",
  "exclusive_or_expression", "$@21", "inclusive_or_expression", "$@22",
  "logical_and_expression", "$@23", "logical_and_expressionM",
  "logical_or_expression", "$@24", "$@25", "conditional_expression",
  "conditional_expression_mark1", "conditional_expression_mark2",
  "assignment_expression", "$@26", "assignment_operator", "expression",
  "$@27", "constant_expression", "declaration", "asm_declaration",
  "declaration_specifiers", "init_declarator_list", "$@28",
  "init_declarator_listM", "init_declarator", "storage_class_specifier",
  "type_specifier", "class_key", "struct_or_union_specifier", "mk_tbl2",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "$@29",
  "struct_declarator", "enum_specifier", "enumerator_list", "$@30",
  "enumerator", "type_qualifier", "declarator", "direct_declarator",
  "$@31", "$@32", "pointer", "pointerM", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "$@33", "parameter_declaration",
  "parameter_declaration_M", "identifier_list", "$@34", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "statementm", "labeled_statement",
  "labeled_statement_m", "compound_statement", "declaration_list",
  "statement_list", "expression_statement", "selection_statement", "smark",
  "mark1", "mark2", "iteration_statement", "mark3", "mark4", "mark5",
  "mark6", "mark7", "mark8", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "mk_tbl",
  "class_specifier", "class_head", "member_list", "member_declaration",
  "member_declarator_list", "member_declarator", "pure_specifier",
  "base_spec", "base_list", "base_specifier", "access_specifier", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      40,    41,    91,    93,    46,    44,    38,    42,    43,    45,
      33,   126,    47,    37,    60,    62,    94,   124,    63,    58,
      61,    59,   123,   125
};
# endif

#define YYPACT_NINF -396

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-396)))

#define YYTABLE_NINF -321

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1513,    41,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,    26,     6,  -396,  -396,  -396,    77,  2648,  2648,    48,
    -396,    29,  -396,  2648,  2598,  -396,  -396,  -396,   -22,   -12,
       5,   198,   158,   227,   298,   112,   152,  -396,     8,  -396,
    1007,  -396,   154,  -396,  -396,  -396,   252,    37,  -396,    86,
    2569,  -396,  -396,  -396,   644,  -396,   198,   202,   137,    12,
    -396,   165,  -396,  -396,  -396,  -396,   865,   299,   212,  -396,
     226,   161,  -396,  -396,  1014,   481,  -396,    77,  -396,  1238,
    -396,  -396,  -396,  -396,  -396,   231,  -396,   308,  -396,  -396,
    2569,   847,  -396,    39,  2569,  -396,  -396,    89,   229,  -396,
     221,   708,   116,  -396,   235,    94,  -396,  1705,   337,  -396,
     260,   283,   287,   112,  2486,  2237,   293,  -396,  -396,  -396,
    -396,  1757,  1788,  1788,  -396,   369,  1568,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   210,  -396,  1809,
    -396,   196,   144,   256,   125,   314,   297,   321,   296,   390,
      70,  -396,   336,  -396,  -396,  -396,  -396,   112,  1510,  1014,
     473,  -396,  -396,  -396,  1297,    38,  1705,   324,   407,   328,
     331,  1113,  -396,  -396,  -396,   151,  -396,  -396,   263,  -396,
     574,  -396,  -396,   333,  -396,  -396,   252,  -396,  2569,  -396,
    -396,  -396,   240,  1705,   155,  -396,   335,  -396,  -396,  1213,
     175,   408,  -396,  -396,  -396,   112,  -396,   772,  -396,   337,
    -396,  -396,  -396,  -396,  -396,  -396,   350,  -396,  -396,  -396,
     356,   353,  -396,    25,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,   358,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  1620,   224,
    1568,  -396,  1840,  -396,  -396,  -396,  1407,   172,   223,   359,
     428,  -396,  -396,  1840,   429,  -396,  1809,  1809,  1809,  1892,
    1892,  1923,  1923,  1944,  1944,  1944,  1944,  1975,  1975,  2027,
    2058,  2079,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     119,  2110,  -396,  -396,   922,   344,  -396,   343,  -396,  -396,
    -396,   181,  2110,  -396,   367,   371,  -396,  -396,   374,  -396,
    -396,  -396,  1322,  -396,  -396,  -396,  1032,  -396,  -396,   111,
    -396,  1705,  -396,  -396,  -396,  -396,  -396,   436,   182,  -396,
    2623,  -396,   442,   443,  1923,  1923,  1944,  1944,  1975,  1975,
    2162,  2193,   376,  2214,  1840,   447,  2027,  1809,  1892,  1892,
    1809,  1809,  1944,  1944,  2058,  2079,  1428,  -396,   189,  -396,
     380,  -396,  2423,  1651,   322,  -396,   325,  1809,  -396,   323,
    -396,  -396,  -396,  -396,   193,   196,   196,   307,   144,   144,
     393,   256,   256,   256,   256,   648,   125,   125,  2492,   314,
    2469,   297,  2316,   321,  2162,  2193,  1840,  2110,   829,  -396,
    -396,  2110,  -396,  -396,   922,  -396,  -396,  -396,  1840,  1840,
     382,   922,  1097,  -396,  -396,   111,  -396,  -396,  2648,   450,
    2374,  -396,   215,  -396,  -396,  -396,  -396,  -396,   144,   144,
     256,   256,   125,   125,  2266,   296,  2287,   390,  -396,   261,
     326,  -396,   314,  -396,   196,   196,  -396,  -396,   256,   256,
     297,   321,  -396,  -396,  2110,  -396,   379,  -396,   384,   385,
    -396,   389,   325,  2548,  1674,  -396,  -396,   296,   390,    97,
    -396,  -396,  -396,  -396,   922,  -396,   281,   282,  1840,   401,
      40,  -396,  -396,  -396,  -396,  -396,   267,  -396,  -396,  2110,
    -396,  -396,  -396,  -396,  -396,  -396,   398,  -396,   400,  -396,
    -396,  -396,  -396,   290,  -396,  1151,  1151,  -396,  -396,  -396,
    1705,   922,   922,  -396,   404,  -396,   409,  -396,   418,  -396,
     922,  1840,  1840,  -396,  1840,  -396,  -396,   291,   406,   922,
     406,   922,   399,   432,  -396,   433,  -396,  -396,  -396,  -396,
     922,   922,  -396,  -396
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   174,   158,   159,   160,   161,   162,   164,   165,
     166,   167,   170,   171,   168,   169,   206,   207,   163,   181,
     182,     0,     0,   176,   308,   143,     0,   145,   147,     0,
     172,     0,   173,   149,     0,   305,   307,   175,     0,     0,
     199,     0,     0,     0,   210,     0,   221,   140,     0,   151,
     156,   209,     0,   146,   148,     2,     0,   316,   314,   179,
       0,   150,     1,   306,     0,   142,     0,     0,   204,     0,
     200,     0,   219,   217,   153,   311,     0,     0,     0,   226,
       0,   222,   155,   141,     0,     0,   277,     0,   310,     0,
     208,   336,   337,   338,   334,   331,   332,     0,   315,   180,
     187,     0,   183,     0,   189,   324,   313,     0,   329,   325,
       0,     0,     0,   326,     0,     0,   202,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     2,     8,     9,    10,
      11,     0,     0,     0,     4,     0,     0,   213,    42,    43,
      44,    45,    46,    47,     6,    12,     3,    36,    48,     0,
      50,    60,    67,    74,    87,    94,    98,   102,   106,   111,
     116,   139,     0,   211,   223,   227,   224,     0,     0,     0,
      48,   120,   256,   157,     0,     2,     0,     0,     0,     0,
       0,     0,   281,   273,   135,     0,   267,   279,     0,   261,
       0,   263,   266,   156,   278,   309,     0,   335,     0,   186,
     178,   184,     0,     0,     0,   190,   194,   188,   323,   329,
       0,     0,   328,   312,   317,     0,   322,     0,   198,     0,
     205,   201,   144,   220,   218,   154,     0,   238,   216,   237,
       0,   228,   230,     0,    28,    30,    31,    70,    72,    83,
      85,    90,    92,   108,   114,    24,    20,    26,    96,    54,
      63,    65,    56,    58,    79,    81,   100,   104,     0,     0,
       0,    40,     0,    37,    38,     5,     0,     0,   242,     0,
       0,    18,    19,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   112,   118,   212,   152,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   124,   122,   259,
       0,     0,   137,   276,     0,     0,   272,     0,   301,   302,
     303,     0,     0,   282,     0,     0,   294,   294,     0,   262,
     264,   265,     0,   274,   280,   333,     0,   192,   195,     0,
     185,     0,   321,   330,   327,   319,   203,   232,     0,   214,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,    32,
       0,     7,     0,     0,   244,   243,   245,     0,    17,     0,
      16,    51,    52,    53,     0,    61,    62,     0,    68,    69,
       0,    77,    78,    75,    76,     0,    88,    89,     0,    95,
       0,    99,     0,   103,     0,     0,     0,     0,     0,   257,
     121,     0,   269,   272,     0,   300,   304,   136,     0,     0,
       0,     0,     0,   275,   177,     0,   191,   196,     0,     0,
       0,   234,     0,   235,   229,   231,   239,    29,    71,    73,
      84,    86,    91,    93,     0,   109,     0,   115,    23,     0,
       0,    27,    97,    55,    64,    66,    57,    59,    80,    82,
     101,   105,    34,    15,     0,    41,     0,   252,     0,     0,
     248,     0,   246,     0,     0,    49,    13,   107,   113,     0,
     123,   258,   260,   138,     0,   271,     0,     0,     0,     0,
       2,   294,   294,   193,   233,   241,     0,    25,    21,     0,
      33,   232,   253,   247,   249,   254,     0,   250,     0,   119,
     270,   287,   286,     0,   296,     0,     0,    35,   255,   251,
       0,     0,     0,   295,     0,   297,   297,   117,   283,   285,
       0,     0,     0,   295,     0,   288,   289,     0,   298,     0,
     298,     0,     0,     0,   291,     0,   284,   290,   299,   299,
       0,     0,   293,   292
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,   -20,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     142,  -396,   -83,  -396,  -126,  -198,  -396,  -396,  -396,  -220,
    -396,  -396,  -211,  -396,  -396,  -185,  -396,  -396,  -396,  -396,
    -244,  -396,  -396,  -232,  -396,  -231,  -396,  -297,  -396,  -201,
    -396,  -396,  -396,  -396,  -396,   -70,  -396,  -396,   -74,  -396,
     338,  -124,  -396,  -109,     4,  -396,     0,  -396,  -396,  -396,
      44,  -396,   -45,  -396,  -396,  -396,  -396,   309,   -87,   -65,
    -396,  -396,  -315,  -396,   440,  -396,   -96,   -35,   -19,   -49,
    -396,  -396,   -60,  -396,  -396,  -119,  -396,  -396,  -319,  -396,
    -396,  -396,   249,  -216,  -299,  -156,  -396,  -173,  -396,  -396,
      87,   -59,  -396,  -396,  -395,  -396,  -396,  -396,  -396,  -396,
    -309,    -7,  -396,    -5,   -13,   -21,  -396,  -396,   508,   164,
    -396,  -396,  -396,   -92,  -396,   445,   339,  -396,   496,  -396,
     360,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   144,   145,   146,   147,   364,   362,   363,   365,   353,
     378,   509,   148,   149,   150,   151,   367,   370,   371,   152,
     368,   369,   153,   354,   355,   154,   372,   373,   356,   357,
     155,   358,   359,   156,   366,   157,   374,   158,   375,   159,
     360,   414,   160,   415,   361,   171,   416,   530,   184,   417,
     308,   185,   421,   162,   186,    25,    87,    48,   123,   167,
      49,    27,    28,    29,    30,   198,    31,   101,   102,   103,
     204,   435,   205,    32,    69,   219,    70,    33,   108,    51,
     122,   121,    52,    80,    81,   478,   231,   438,   232,   348,
     233,   439,   269,   479,   386,   173,   310,   187,   188,   189,
     424,    88,    89,   190,   191,   330,   532,   531,   551,   331,
     430,   540,   534,   542,   553,   560,   192,    34,    35,   109,
     124,    37,    38,   110,   111,   112,   113,   212,    58,    95,
      96,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   170,   170,    90,    24,   230,   161,    50,   220,    57,
     172,    79,   267,   309,   201,   100,    97,   334,   431,   214,
     164,   166,   221,   275,   436,   104,    78,    53,    54,    40,
     195,   445,    59,    61,    26,   199,    94,   502,    24,   207,
     202,    39,    44,    39,    39,   409,   165,   161,   261,   263,
     264,    55,   385,   170,    86,   100,   100,   321,   411,   100,
     413,   398,   399,   455,   107,   104,   104,   315,   193,   104,
      64,   268,   401,   402,   403,   404,    42,   197,    43,    65,
      44,   395,   396,    82,   206,   482,   170,   118,   209,   293,
      77,   100,    44,   194,   338,   172,   351,    66,   170,    83,
     352,   104,   406,   407,   193,   119,   161,   170,   258,    45,
     258,   107,    77,    77,    44,    44,    46,   487,    41,   504,
     503,    60,   462,   346,   229,   345,    56,   314,   203,   329,
     535,   536,   443,   161,   448,   449,   267,    56,   267,   283,
     284,   422,   470,   482,   471,   450,   451,    45,   193,   389,
     391,   392,   393,   100,    46,    77,    97,    44,   294,    45,
     457,   468,   469,   104,    36,    71,    46,   225,    47,   118,
     464,   465,   322,   452,   453,   170,    94,   170,    99,   170,
     208,    45,    45,    77,   379,    44,   519,   218,    46,    46,
     170,   215,   525,   526,   418,   268,    16,    17,    36,    67,
     203,    68,   234,   235,   236,    16,    17,   216,   384,   285,
     286,   296,   419,    86,   488,   100,    77,   107,    44,   270,
     271,   272,   279,   280,    45,   104,   322,   117,   170,  -225,
     339,   170,   437,   234,   235,   236,   120,   420,    46,   170,
     460,   463,   323,   381,   466,   467,   340,   322,   427,   201,
     215,   495,   440,  -236,   383,    55,   322,  -236,   499,    46,
     473,   485,   492,   245,   474,   246,   342,   247,   281,   282,
     249,   161,   426,   276,   481,   252,   253,   116,   277,   278,
     170,   170,   273,   163,   274,   440,  -244,   383,   442,   379,
    -244,   100,   489,   382,   245,   383,   246,    72,   247,    73,
      46,   104,    74,    46,   496,   497,   196,    91,    92,    93,
      72,    55,    73,   161,   213,   337,   234,   235,   236,   211,
     206,   520,   384,   324,   217,   325,   326,   327,   328,   441,
     287,   288,   507,   170,   170,   170,   474,    72,   170,    73,
      68,   170,   511,   490,   172,   170,   170,   493,   170,   170,
     229,   222,   521,   522,   223,    85,   322,   322,   538,   539,
     224,   533,   552,   258,   516,   322,   322,   546,    75,    72,
      76,    73,   265,   289,   523,   518,   554,   245,   556,   246,
     442,   247,   229,   291,   249,   250,   251,   562,   563,   252,
     253,   170,   382,    90,   383,   483,   486,   484,   322,   508,
     510,   322,   234,   235,   236,   237,   238,   290,   292,   295,
     317,   170,   343,   316,   161,   170,   206,   547,   548,   318,
     550,    78,   319,    84,   341,   347,   170,   349,   350,   -22,
     387,   388,   390,   423,   425,   527,   501,   428,   229,  -240,
     229,   429,   170,   170,   432,   446,   447,   458,   170,   170,
     461,   475,   498,   505,   511,   512,   513,   170,   170,   170,
     537,   170,   514,   245,   524,   246,   170,   247,   170,   528,
     249,   250,   251,   529,   541,   252,   253,   170,   170,   545,
     543,   322,   174,   229,   175,   127,   128,   129,   130,   131,
     557,   132,   133,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   558,   559,   459,   115,   336,   311,   380,
     494,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   544,   134,   135,    22,    23,   549,   555,   561,   176,
     177,  -268,    63,  -268,  -268,  -268,  -268,   178,   179,   180,
     181,   136,   210,    98,   344,     0,   335,   138,   139,   140,
     141,   142,   143,   307,     0,     0,     0,     0,     0,     0,
       0,     0,   182,  -268,   183,   332,     0,   175,   127,   128,
     129,   130,   131,     0,   132,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,   134,   135,    22,    23,     0,
       0,     0,   176,   177,  -268,     0,  -268,  -268,  -268,  -268,
     178,   179,   180,   181,   136,    77,     0,    44,     0,     0,
     138,   139,   140,   141,   142,   143,     0,   234,   235,   236,
     237,   238,   239,   240,     0,   182,  -268,   333,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    23,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,    77,
       0,    44,     0,     0,    45,     0,     0,     0,   245,     0,
     246,    46,   247,     0,     0,   249,   250,   251,     0,     0,
     252,   253,   254,   255,     0,   105,     0,   106,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    23,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,    77,     0,    44,     0,     0,    45,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,  -318,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    23,    91,    92,    93,
     168,     0,   126,   127,   128,   129,   130,   131,     0,   132,
     133,     0,    45,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,  -320,   125,     0,   126,   127,
     128,   129,   130,   131,     0,   132,   133,     2,     0,     0,
     134,   135,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,   136,
       0,    23,     0,     0,     0,   138,   139,   140,   141,   142,
     143,     0,     0,     0,     0,     0,   134,   135,     0,     0,
       0,   169,   491,   266,     0,   175,   127,   128,   129,   130,
     131,     0,   132,   133,     0,   136,     0,     0,   137,     0,
     200,   138,   139,   140,   141,   142,   143,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   134,   135,    22,    23,     0,     0,     0,
     176,   177,  -268,     0,  -268,  -268,  -268,  -268,   178,   179,
     180,   181,   136,     0,     0,     0,     0,     0,   138,   139,
     140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   182,  -268,   168,     0,   126,   127,   128,
     129,   130,   131,     0,   132,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,    23,     2,     0,     0,   134,   135,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,   136,     0,    23,     0,     0,     0,
     138,   139,   140,   141,   142,   143,     0,    84,   266,    85,
     500,   127,   128,   129,   130,   131,   169,   132,   133,     0,
       0,     0,     0,     0,   266,     0,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   434,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,   134,   135,
      22,    23,   266,     0,   126,   127,   128,   129,   130,   131,
       0,   132,   133,     0,   134,   135,     0,   136,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   142,   143,     0,
       0,     0,     0,   136,     0,     0,     0,     0,   182,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,   136,     0,     0,     0,     0,     0,   138,   139,   140,
     141,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   182,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,     0,    85,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,     0,     0,     0,
      85,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
       0,   247,   312,   248,   249,   250,   251,     0,     0,   252,
     253,   254,   255,   256,   257,     0,     0,   307,     0,     0,
     313,     0,   245,     0,   246,     0,   247,   312,   248,   249,
     250,   251,     0,     0,   252,   253,   254,   255,   256,   257,
       0,     0,   307,     0,     0,   433,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
       0,   247,   312,   248,   249,   250,   251,     0,     0,   252,
     253,   254,   255,   256,   257,     0,     0,   307,   245,     0,
     246,     0,   247,   472,   248,   249,   250,   251,     0,     0,
     252,   253,   254,   255,   256,   257,     1,     0,   307,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     0,   266,
       0,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     245,     0,   246,     0,   247,     0,   248,   249,   250,   251,
       0,     0,   252,   253,   254,   255,   256,   257,     2,     0,
     307,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,   134,
     135,   376,    23,   126,   127,   128,   129,   130,   131,     0,
     132,   133,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
       0,     0,   125,     0,   126,   127,   128,   129,   130,   131,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,     0,     0,   125,     0,   126,   127,   128,
     129,   130,   131,     0,   132,   133,     0,     0,     0,     0,
     136,   377,     0,     0,     0,     0,   138,   139,   140,   141,
     142,   143,   134,   135,     0,     0,   125,     0,   126,   127,
     128,   129,   130,   131,     0,   132,   133,     0,     0,     0,
       0,   136,     0,     0,   480,   134,   135,   138,   139,   140,
     141,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,   517,     0,     0,
     138,   139,   140,   141,   142,   143,   134,   135,   259,     0,
     126,   127,   128,   129,   130,   131,     0,   132,   133,     0,
       0,     0,     0,     0,     0,   136,     0,     0,     0,     0,
       0,   138,   139,   140,   141,   142,   143,     0,     0,   259,
       0,   126,   127,   128,   129,   130,   131,     0,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     259,     0,   126,   127,   128,   129,   130,   131,     0,   132,
     133,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   142,   143,   134,
     135,   266,     0,   126,   127,   128,   129,   130,   131,     0,
     132,   133,     0,     0,     0,     0,     0,     0,   262,     0,
     134,   135,     0,     0,   138,   139,   140,   141,   142,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,     0,     0,     0,     0,   138,   139,   140,   141,   142,
     143,   134,   135,   394,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,     0,     0,   138,   139,   140,   141,
     142,   143,     0,     0,   397,     0,   126,   127,   128,   129,
     130,   131,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,   400,     0,   126,   127,   128,
     129,   130,   131,     0,   132,   133,     0,     0,     0,     0,
       0,     0,   136,     0,     0,     0,     0,     0,   138,   139,
     140,   141,   142,   143,   134,   135,   405,     0,   126,   127,
     128,   129,   130,   131,     0,   132,   133,     0,     0,     0,
       0,     0,     0,   136,     0,   134,   135,     0,     0,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
     138,   139,   140,   141,   142,   143,   134,   135,   408,     0,
     126,   127,   128,   129,   130,   131,     0,   132,   133,     0,
       0,     0,     0,     0,     0,   136,     0,     0,     0,     0,
       0,   138,   139,   140,   141,   142,   143,     0,     0,   410,
       0,   126,   127,   128,   129,   130,   131,     0,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     412,     0,   126,   127,   128,   129,   130,   131,     0,   132,
     133,     0,     0,     0,     0,     0,     0,   136,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   142,   143,   134,
     135,   168,     0,   126,   127,   128,   129,   130,   131,     0,
     132,   133,     0,     0,     0,     0,     0,     0,   136,     0,
     134,   135,     0,     0,   138,   139,   140,   141,   142,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,     0,     0,     0,     0,   138,   139,   140,   141,   142,
     143,   134,   135,   454,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,     0,     0,   138,   139,   140,   141,
     142,   143,     0,     0,   456,     0,   126,   127,   128,   129,
     130,   131,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,   376,     0,   126,   127,   128,
     129,   130,   131,     0,   132,   133,     0,     0,     0,     0,
       0,     0,   136,     0,     0,     0,     0,     0,   138,   139,
     140,   141,   142,   143,   134,   135,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,   136,     0,   134,   135,     0,     0,   138,
     139,   140,   141,   142,   143,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   136,     0,     0,     0,     0,     0,
     138,   139,   140,   141,   142,   143,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,     0,   245,     0,   246,
       0,   247,     0,   248,   249,   250,   251,     0,     0,   252,
     253,   254,   255,   256,   257,   234,   235,   236,   237,   238,
     239,   240,   241,   242,     0,     0,   245,     0,   246,     0,
     247,     0,   248,   249,   250,   251,     0,     0,   252,   253,
     254,   255,   256,   257,     0,     0,     0,   245,     0,   246,
       0,   247,     0,   248,   249,   250,   251,     0,     0,   252,
     253,   254,   255,   256,   257,   506,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,     0,
     247,     0,   248,   249,   250,   251,     0,     0,   252,   253,
     254,   255,   256,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   476,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,   477,   383,     0,     0,     0,
       0,    46,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    23,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   226,     0,   227,
       0,     0,     0,   382,   477,   383,     0,     0,     0,     0,
      46,   234,   235,   236,   237,   238,   239,   240,   241,   242,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,   245,
      23,   246,     0,   247,     0,   248,   249,   250,   251,   476,
       0,   252,   253,   254,   255,     0,     0,   228,     0,     0,
       0,     0,   245,     0,   246,     0,   247,     0,     0,   249,
     250,   251,     0,     0,   252,   253,   254,   255,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    62,     2,
       0,     1,    23,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   515,
       0,     0,     0,    23,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   444,     0,     0,     0,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    23
};

static const yytype_int16 yycheck[] =
{
       0,    84,    85,    52,     0,   124,    76,    26,   117,    29,
      84,    46,   136,   169,   101,    60,    56,   190,   327,   111,
      80,    81,   118,   149,   339,    60,    45,    27,    28,     3,
      89,   350,     3,    33,    34,   100,    56,   432,    34,   104,
       1,     3,     3,     3,     3,   289,    81,   117,   131,   132,
     133,     3,   268,   136,    50,   100,   101,   181,   290,   104,
     291,   281,   282,   360,    64,   100,   101,   176,    87,   104,
      92,   136,   283,   284,   285,   286,    70,    97,     1,    91,
       3,   279,   280,    75,   103,   384,   169,    75,   107,    19,
       1,   136,     3,    89,   203,   169,    71,    92,   181,    91,
      75,   136,   287,   288,   123,    93,   176,   190,    70,    70,
      70,   111,     1,     1,     3,     3,    77,   414,    92,   438,
     435,    92,   366,   219,   124,   217,    89,    89,    89,   188,
     525,   526,   348,   203,   354,   355,   260,    89,   262,    14,
      15,   314,   374,   442,   375,   356,   357,    70,   167,   273,
     276,   277,   278,   198,    77,     1,   196,     3,    88,    70,
     361,   372,   373,   198,     0,     7,    77,   123,    91,    75,
     368,   369,    75,   358,   359,   258,   196,   260,    92,   262,
      91,    70,    70,     1,   258,     3,    89,    93,    77,    77,
     273,    75,   501,   502,    75,   260,    44,    45,    34,     1,
      89,     3,     9,    10,    11,    44,    45,    91,   268,    84,
      85,   167,    93,   209,   415,   260,     1,   217,     3,     9,
      10,    11,    78,    79,    70,   260,    75,    90,   311,    77,
      75,   314,   341,     9,    10,    11,    71,   311,    77,   322,
     364,   367,    91,    71,   370,   371,    91,    75,   322,   336,
      75,   424,    70,    71,    72,     3,    75,    75,   431,    77,
      71,   387,   418,    70,    75,    72,    91,    74,    12,    13,
      77,   341,    91,    77,   383,    82,    83,    75,    82,    83,
     363,   364,    72,    71,    74,    70,    71,    72,   348,   363,
      75,   336,   416,    70,    70,    72,    72,    70,    74,    72,
      77,   336,    75,    77,   428,   429,    75,    55,    56,    57,
      70,     3,    72,   383,    93,    75,     9,    10,    11,    90,
     339,   494,   382,    60,    89,    62,    63,    64,    65,   348,
      16,    17,    71,   416,   417,   418,    75,    70,   421,    72,
       3,   424,    75,   417,   418,   428,   429,   421,   431,   432,
     350,    91,    71,    71,    71,    92,    75,    75,   531,   532,
      73,    71,    71,    70,   483,    75,    75,   540,    70,    70,
      72,    72,     3,    76,   498,   484,   549,    70,   551,    72,
     440,    74,   382,    87,    77,    78,    79,   560,   561,    82,
      83,   474,    70,   442,    72,    70,    73,    72,    75,    73,
     474,    75,     9,    10,    11,    12,    13,    86,    18,    73,
       3,   494,     4,    89,   484,   498,   435,   541,   542,    91,
     544,   440,    91,    90,    89,    75,   509,    71,    75,    71,
      71,     3,     3,    89,    91,   509,   432,    70,   438,     3,
     440,    70,   525,   526,    70,     3,     3,    71,   531,   532,
       3,    71,    70,     3,    75,    71,    71,   540,   541,   542,
     530,   544,    73,    70,    63,    72,   549,    74,   551,    71,
      77,    78,    79,    73,    70,    82,    83,   560,   561,    61,
      71,    75,     1,   483,     3,     4,     5,     6,     7,     8,
      91,    10,    11,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    71,    71,   363,    66,   198,   170,   260,
     423,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   536,    51,    52,    53,    54,   543,   550,   559,    58,
      59,    60,    34,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   107,    57,   215,    -1,   196,    76,    77,    78,
      79,    80,    81,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    -1,
      -1,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    -1,     3,    -1,    -1,
      76,    77,    78,    79,    80,    81,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,    -1,    70,    -1,    -1,    -1,    70,    -1,
      72,    77,    74,    -1,    -1,    77,    78,    79,    -1,    -1,
      82,    83,    84,    85,    -1,    91,    -1,    93,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    30,    -1,    -1,
      51,    52,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    70,
      -1,    54,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    92,    93,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    70,    -1,    -1,    73,    -1,
      93,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    91,    92,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    30,    -1,    -1,    51,    52,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    70,    -1,    54,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    -1,    90,     1,    92,
       3,     4,     5,     6,     7,     8,    92,    10,    11,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    93,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    51,    52,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    91,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    91,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    92,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      92,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    82,
      83,    84,    85,    86,    87,    -1,    -1,    90,    -1,    -1,
      93,    -1,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    -1,    -1,    93,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    82,
      83,    84,    85,    86,    87,    -1,    -1,    90,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      82,    83,    84,    85,    86,    87,     3,    -1,    90,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      70,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    -1,    82,    83,    84,    85,    86,    87,    30,    -1,
      90,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,     1,    54,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    51,    52,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    51,    52,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    51,    52,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    51,
      52,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      51,    52,    -1,    -1,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    51,    52,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    51,    52,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    51,    52,    -1,    -1,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    51,    52,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    51,
      52,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      51,    52,    -1,    -1,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    51,    52,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    51,    52,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    51,    52,    -1,    -1,    76,
      77,    78,    79,    80,    81,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    70,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    -1,    82,
      83,    84,    85,    86,    87,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    85,    86,    87,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    -1,    82,
      83,    84,    85,    86,    87,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    85,    86,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     1,    -1,     3,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    70,
      54,    72,    -1,    74,    -1,    76,    77,    78,    79,     1,
      -1,    82,    83,    84,    85,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,    77,
      78,    79,    -1,    -1,    82,    83,    84,    85,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,    30,
      -1,     3,    54,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    71,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    54,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    53,    54,   148,   149,   150,   155,   156,   157,
     158,   160,   167,   171,   211,   212,   213,   215,   216,     3,
       3,    92,    70,     1,     3,    70,    77,    91,   151,   154,
     172,   173,   176,   150,   150,     3,    89,    95,   222,     3,
      92,   150,     0,   212,    92,    91,    92,     1,     3,   168,
     170,     7,    70,    72,    75,    70,    72,     1,   172,   171,
     177,   178,    75,    91,    90,    92,   148,   150,   195,   196,
     173,    55,    56,    57,    95,   223,   224,   225,   222,    92,
     156,   161,   162,   163,   171,    91,    93,   150,   172,   213,
     217,   218,   219,   220,   225,   168,    75,    90,    75,    93,
      71,   175,   174,   152,   214,     1,     3,     4,     5,     6,
       7,     8,    10,    11,    51,    52,    70,    73,    76,    77,
      78,    79,    80,    81,    95,    96,    97,    98,   106,   107,
     108,   109,   113,   116,   119,   124,   127,   129,   131,   133,
     136,   139,   147,    71,   176,   171,   176,   153,     1,    92,
     106,   139,   142,   189,     1,     3,    58,    59,    66,    67,
      68,    69,    91,    93,   142,   145,   148,   191,   192,   193,
     197,   198,   210,   172,   148,   195,    75,    95,   159,   163,
      93,   162,     1,    89,   164,   166,   172,   163,    91,   172,
     219,    90,   221,    93,   217,    75,    91,    89,    93,   169,
     147,   170,    91,    71,    73,   154,     1,     3,    71,   150,
     179,   180,   182,   184,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    70,    72,    74,    76,    77,
      78,    79,    82,    83,    84,    85,    86,    87,    70,     1,
      70,   106,    70,   106,   106,     3,     1,   145,   163,   186,
       9,    10,    11,    72,    74,   108,    77,    82,    83,    78,
      79,    12,    13,    14,    15,    84,    85,    16,    17,    76,
      86,    87,    18,    19,    88,    73,   154,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    90,   144,   189,
     190,   144,    75,    93,    89,   147,    89,     3,    91,    91,
      91,   145,    75,    91,    60,    62,    63,    64,    65,   195,
     199,   203,     1,    93,   191,   224,   161,    75,   147,    75,
      91,    89,    91,     4,   220,   217,   170,    75,   183,    71,
      75,    71,    75,   103,   117,   118,   122,   123,   125,   126,
     134,   138,   100,   101,    99,   102,   128,   110,   114,   115,
     111,   112,   120,   121,   130,   132,     1,    71,   104,   142,
     186,    71,    70,    72,   176,   187,   188,    71,     3,   145,
       3,   108,   108,   108,     1,   109,   109,     1,   113,   113,
       1,   116,   116,   116,   116,     1,   119,   119,     1,   124,
       1,   127,     1,   129,   135,   137,   140,   143,    75,    93,
     142,   146,   191,    89,   194,    91,    91,   142,    70,    70,
     204,   204,    70,    93,    93,   165,   166,   147,   181,   185,
      70,   172,   176,   187,    50,   182,     3,     3,   113,   113,
     116,   116,   119,   119,     1,   131,     1,   133,    71,   104,
     145,     3,   124,   108,   109,   109,   108,   108,   116,   116,
     127,   129,    75,    71,    75,    71,     1,    71,   179,   187,
      73,   147,   188,    70,    72,   108,    73,   131,   133,   145,
     142,    93,   189,   142,   194,   191,   145,   145,    70,   191,
       3,   148,   198,   166,   182,     3,     1,    71,    73,   105,
     142,    75,    71,    71,    73,    71,   179,    73,   147,    89,
     191,    71,    71,   145,    63,   204,   204,   142,    71,    73,
     141,   201,   200,    71,   206,   198,   198,   139,   191,   191,
     205,    70,   207,    71,   207,    61,   191,   145,   145,   205,
     145,   202,    71,   208,   191,   208,   191,    91,    71,    71,
     209,   209,   191,   191
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    98,   100,    98,   101,    98,   102,    98,   103,    98,
      98,    98,   104,   104,   105,   104,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   110,   109,   111,   109,   112,   109,
     113,   113,   113,   114,   113,   115,   113,   116,   116,   116,
     117,   116,   118,   116,   119,   119,   119,   119,   119,   120,
     119,   121,   119,   122,   119,   123,   119,   124,   124,   124,
     125,   124,   126,   124,   127,   127,   128,   127,   129,   129,
     130,   129,   131,   131,   132,   131,   133,   133,   134,   133,
     135,   136,   137,   136,   138,   136,   139,   139,   140,   141,
     142,   142,   143,   142,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   145,   147,
     148,   148,   148,   148,   149,   150,   150,   150,   150,   150,
     150,   151,   151,   152,   151,   153,   154,   154,   155,   155,
     155,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   158,   158,   158,
     159,   160,   160,   161,   161,   162,   163,   163,   163,   163,
     164,   164,   165,   164,   166,   166,   166,   167,   167,   167,
     168,   168,   169,   168,   170,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   174,   173,   175,
     173,   176,   176,   176,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   180,   182,   182,   182,   183,   184,   184,
     185,   184,   186,   186,   187,   187,   187,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   192,   193,
     193,   193,   194,   195,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   200,   201,   202,   203,
     203,   203,   203,   203,   204,   205,   206,   207,   208,   209,
     210,   210,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   218,   218,   218,   219,   219,   220,   220,
     221,   222,   223,   223,   224,   224,   225,   225,   225
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       0,     5,     0,     4,     0,     5,     0,     4,     0,     4,
       2,     2,     1,     3,     0,     4,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     0,     4,     0,     4,     0,     4,
       1,     3,     3,     0,     4,     0,     4,     1,     3,     3,
       0,     4,     0,     4,     1,     3,     3,     3,     3,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     3,     3,
       0,     4,     0,     4,     1,     3,     0,     4,     1,     3,
       0,     4,     1,     3,     0,     4,     1,     4,     0,     4,
       0,     1,     0,     4,     0,     4,     1,     7,     0,     0,
       1,     3,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     1,
       2,     3,     3,     1,     5,     1,     2,     1,     2,     1,
       2,     1,     4,     0,     4,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     4,     2,
       0,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     0,     4,     1,     2,     3,     4,     5,     2,
       1,     3,     0,     4,     1,     3,     1,     1,     2,     1,
       1,     3,     4,     3,     5,     5,     4,     0,     4,     0,
       4,     1,     2,     3,     3,     0,     1,     2,     1,     3,
       1,     3,     0,     4,     3,     3,     2,     0,     1,     3,
       0,     4,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       3,     1,     2,     1,     2,     2,     1,     1,     0,     3,
       5,     4,     0,     2,     3,     4,     3,     1,     2,     1,
       2,     1,     2,     6,     9,     6,     0,     0,     0,     7,
       9,     8,    11,    11,     0,     0,     0,     0,     0,     0,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     0,     4,     3,     2,     3,     2,     2,     1,     3,
       2,     3,     2,     2,     1,     1,     1,     3,     2,     1,
       2,     2,     1,     3,     1,     2,     1,     1,     1
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
#line 65 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (yyvsp[0].stringval); }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 69 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "src/grammar.y" /* yacc.c:1646  */
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
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(INTEGER);
									(yyval.entry)->type->value = (yyvsp[0].intval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%d",(yyvsp[0].intval)); 
									(yyval.entry)->name = s;  
							}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(CHR); 
									(yyval.entry)->type->value = (int)(yyvsp[0].charval); 
									(yyval.entry)->type->constnt = 1; 
									string s1(1, (yyvsp[0].charval)); 
									string s = "'" + s1 + "'";
									(yyval.entry)->name = s; 
							}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(FLT); 
									(yyval.entry)->type->value = (int)(yyvsp[0].floatval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%f",(yyvsp[0].floatval)); 
									(yyval.entry)->name = s; 
							}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 120 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("[]",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s);  }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 121 "src/grammar.y" /* yacc.c:1646  */
    { 
																table_entry_ptr temp = same_lookup(table_stack.top()->parent, (yyvsp[-2].stringval));
																if(temp==NULL) temp = same_lookup(table_stack.top(), (yyvsp[-2].stringval));
																
																if(char* s = type_check2("()",(yyval.entry),temp,NULL)) yyerror3(s);
																else
																{
																	emit(V, "call",temp->name);
																	emit(V, "pop_ret_value", (yyval.entry)->name);
																} 
															}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "src/grammar.y" /* yacc.c:1646  */
    { 																
																table_entry_ptr temp = same_lookup(table_stack.top()->parent, (yyvsp[-3].stringval), (yyvsp[-1].entry)->type);
																if(temp==NULL) temp = same_lookup(table_stack.top(), (yyvsp[-3].stringval), (yyvsp[-1].entry)->type);
																if(char* s = type_check2("()",(yyval.entry),temp,(yyvsp[-1].entry))) yyerror3(s);
																else
																{
																	for(int i=0; i<arg_list.size(); i++)
																	{
																		table_entry_ptr e = arg_list[i];
																		emit(V, "push_param", e->name);
																	}
																	arg_list.resize(0);
																	emit(V, "call", temp->name);
																	emit(V, "pop_ret_value", (yyval.entry)->name);
																}
															}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 150 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4(".",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 151 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4("->",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 152 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("+=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 160 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("-=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 168 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 169 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 171 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 172 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 173 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 174 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry); arg_list.push_back((yyval.entry));}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 179 "src/grammar.y" /* yacc.c:1646  */
    {
																arg_list.push_back((yyvsp[0].entry));
																(yyval.entry) = new table_entry; 
																(yyval.entry)->type = new_cartesian_type((yyvsp[-2].entry)->type, (yyvsp[0].entry)->type); 
															}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 184 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 188 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER); 
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("+=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 199 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER);
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("-=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 208 "src/grammar.y" /* yacc.c:1646  */
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
								else if(!strcmp((yyvsp[-1].stringval), "*"))
								{
									if(char* s = type_check3("*",(yyval.entry),(yyvsp[0].entry))) yyerror3(s);
								}
								else if(!strcmp((yyvsp[-1].stringval), "&"))
								{
									if(char* s = type_check3("&",(yyval.entry),(yyvsp[0].entry))) yyerror3(s);
									//char temp_name[12];
									//strcpy(temp_name, )
								}
								else if(!strcmp((yyvsp[-1].stringval), "~"))
								{
									if(char* s = type_check3("~",(yyval.entry),(yyvsp[0].entry))) yyerror3(s);
								}
								else if(!strcmp((yyvsp[-1].stringval), "+"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = 1;
									temp->name = "+1";
									if(char* s = type_check("*=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
								}
								else
								{
									(yyval.entry) = (yyvsp[0].entry);
								}
							}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 260 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&"); }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 261 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*"); }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 262 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+"); }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 263 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-"); }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 264 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "!"); }
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 265 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "~"); }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 269 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 274 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 275 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 276 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 277 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 278 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 279 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 280 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 284 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 285 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 286 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 287 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 288 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 292 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 293 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 294 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 295 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 296 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 300 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 301 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 302 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 303 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 304 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 305 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 306 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 307 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 308 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 312 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 313 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 314 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 315 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 316 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 320 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 321 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 322 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 326 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 327 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 328 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 332 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 333 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 334 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 339 "src/grammar.y" /* yacc.c:1646  */
    { 
									(yyval.entry) = (yyvsp[0].entry); 
									(yyval.entry)->isbool=0; 
								}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 345 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->falselist.insert((yyval.entry)->falselist.end(), (yyvsp[-3].entry)->falselist.begin(),(yyvsp[-3].entry)->falselist.end() );
	  						}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 349 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 351 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[(-1) - (0)].entry);
								e1->falselist.push_back(code_line);
								emit(V, "if(", e1->name, "== 0) goto");
								backpatch(V,e1->truelist,code_line);
						}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 360 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);  }
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 362 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[-1].entry);
								e1->truelist.push_back(code_line);
								emit(V, "if(", e1->name, "!= 0) goto");
								backpatch(V,e1->falselist,code_line);
							}
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 369 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->truelist.insert((yyval.entry)->truelist.end(), (yyvsp[-3].entry)->truelist.begin(),(yyvsp[-3].entry)->truelist.end() );
	  						}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 373 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 377 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 379 "src/grammar.y" /* yacc.c:1646  */
    {
								 	char *name = (char*)malloc(10*sizeof(char));
									sprintf(name, "%s%d", "t-", count);
									(yyval.entry) = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
									count++;

									(yyval.entry)->truelist = merge_list((yyvsp[-3].entry)->truelist, (yyvsp[0].entry)->truelist);
									(yyval.entry)->falselist = merge_list((yyvsp[-3].entry)->falselist, (yyvsp[0].entry)->falselist);

									emit(V,name,"=",(yyvsp[0].entry)->name);

								 }
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 392 "src/grammar.y" /* yacc.c:1646  */
    {
									table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
									exp->falselist.push_back(code_line);
									emit(V, "if(", exp->name, "== 0) goto");	
									backpatch(V, exp->truelist, code_line);
								}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 400 "src/grammar.y" /* yacc.c:1646  */
    {
									table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
									table_entry_ptr s1 = (yyvsp[(-1) - (0)].entry);

								 	char *name = (char*)malloc(10*sizeof(char));
									sprintf(name, "%s%d", "t-", count);
									emit(V,name,"=",s1->name);

									s1->truelist.push_back(code_line);
									emit(V, "if(", name, "== 0) goto");	

									s1->falselist.push_back(code_line);
									emit(V, "if(", name, "!= 0) goto");

									backpatch(V, exp->falselist, code_line);	
							   }
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 420 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 421 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 422 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("lvalue required as left operand of assignment");}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 428 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 429 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 430 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 431 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 432 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 433 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 434 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 435 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 436 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 437 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 441 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 443 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 451 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 452 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 462 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 463 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 464 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 465 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 466 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 467 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 471 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 472 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-3].type);}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 473 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 475 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 478 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 484 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 485 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 3153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 487 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 491 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 492 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 3171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 493 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 3177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 494 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 495 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 496 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 3195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 497 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 3201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 498 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 499 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 3213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 500 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 512 "src/grammar.y" /* yacc.c:1646  */
    {
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup1(struct_namespace,(yyvsp[-5].stringval)))
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
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 531 "src/grammar.y" /* yacc.c:1646  */
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
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 545 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 562 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 563 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 564 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 565 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 569 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 570 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 571 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 575 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 589 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 598 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 599 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 603 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 604 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 608 "src/grammar.y" /* yacc.c:1646  */
    { 
						if(same_lookup1(table_stack.top(),(yyvsp[0].stringval)))
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
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 623 "src/grammar.y" /* yacc.c:1646  */
    {	
													if(same_lookup1(table_stack.top(),(yyvsp[-3].stringval)))
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
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 637 "src/grammar.y" /* yacc.c:1646  */
    {
								if(same_lookup1(table_stack.top(),(yyvsp[-2].stringval)))
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
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 653 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								table_entry_ptr e = same_lookup(table_stack.top(),(yyvsp[-4].stringval), (yyvsp[-1].type));
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
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 698 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								type_ptr t_notype = new_basic_type(NOTYPE);
								table_entry_ptr e = same_lookup(table_stack.top(),(yyvsp[-3].stringval), t_notype);
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
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 741 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 742 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 746 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 748 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 751 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 760 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 765 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 766 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 767 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 771 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 773 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 775 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); (yyval.type)->param=1;}
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 780 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 818 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 819 "src/grammar.y" /* yacc.c:1646  */
    { 
											(yyval.entry) = (yyvsp[0].entry);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 827 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 828 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry); 
											backpatch(V,(yyval.entry)->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 836 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry); 
											backpatch(V,(yyval.entry)->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 844 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 845 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = new table_entry;}
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 848 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0); }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 853 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											char *name = (char*)malloc(15*sizeof(char));

											sprintf(name, "%d",(yyvsp[-3].entry)->type->value);
											
											V[l-100]->label = name;
										}
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 864 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											V[l-100]->label = "default";
										}
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 871 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.intval) = code_line;}
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 875 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry;}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 876 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 877 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 878 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 882 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 883 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 888 "src/grammar.y" /* yacc.c:1646  */
    {
										(yyval.entry) = (yyvsp[0].entry); 
									}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 892 "src/grammar.y" /* yacc.c:1646  */
    {
										(yyval.entry) = new table_entry;
										
										if((yyvsp[0].entry) )
										{
											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(),(yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end());
											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(),(yyvsp[0].entry)->contlist.begin(), (yyvsp[0].entry)->contlist.end());
										}

										if((yyvsp[-1].entry))
										{
											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(),(yyvsp[-1].entry)->breaklist.begin(), (yyvsp[-1].entry)->breaklist.end());
											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(),(yyvsp[-1].entry)->contlist.begin(), (yyvsp[-1].entry)->contlist.end());
										}

									}
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 912 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 917 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = new table_entry; 

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end());

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->nextlist.begin(), (yyvsp[0].entry)->nextlist.end());

											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end());

											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(), (yyvsp[0].entry)->contlist.begin(), (yyvsp[0].entry)->contlist.end());

										}
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 930 "src/grammar.y" /* yacc.c:1646  */
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
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 949 "src/grammar.y" /* yacc.c:1646  */
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
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 974 "src/grammar.y" /* yacc.c:1646  */
    {
			(yyval.entry) = new table_entry;
			(yyval.entry)->nextlist.push_back(code_line);
			emit(V, "goto");
		}
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 981 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0) goto");	
			backpatch(V, exp->truelist, code_line);
			exp->truelist.resize(0);
		}
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 990 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			table_entry_ptr s1 = (yyvsp[(-1) - (0)].entry);
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
			exp->falselist.resize(0);
		}
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1001 "src/grammar.y" /* yacc.c:1646  */
    { 	
															(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
															(yyvsp[0].entry)->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
															backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
														}
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1010 "src/grammar.y" /* yacc.c:1646  */
    {
																	(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-2].entry)->falselist.begin(), (yyvsp[-2].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->breaklist.begin(), (yyvsp[-6].entry)->breaklist.end() );
																	(yyvsp[-2].entry)->truelist.push_back(code_line);
																	emit(V, "if(", (yyvsp[-2].entry)->name, "!= 0) goto");
																	backpatch(V, (yyvsp[-2].entry)->truelist, (yyvsp[-7].intval));
																}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1018 "src/grammar.y" /* yacc.c:1646  */
    { 	

																						(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																						(yyvsp[0].entry)->nextlist.push_back(code_line);
																						emit(V, "goto");
																						backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-4].intval));
																						backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-4].intval));

																					}
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1030 "src/grammar.y" /* yacc.c:1646  */
    {
								(yyval.entry) = new table_entry; 
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
								(yyvsp[0].entry)->nextlist.push_back(code_line);
								emit(V, "goto");
								backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
								backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
					}
#line 3905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1039 "src/grammar.y" /* yacc.c:1646  */
    {
																										(yyval.entry) = new table_entry;
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																										(yyvsp[0].entry)->nextlist.push_back(code_line);
																										emit(V, "goto");
																										backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
																										backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
																									}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1050 "src/grammar.y" /* yacc.c:1646  */
    { 
			(yyval.intval) = code_line;
		}
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1055 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			backpatch(V, exp->truelist, code_line);	
		}
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1063 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[(-1) - (0)].entry);
			backpatch(V, s->nextlist, code_line);
			backpatch(V, s->contlist, code_line);	
		}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1070 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[0].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			exp->truelist.push_back(code_line);
			emit(V, "goto");
			(yyval.intval) = code_line;	
		}
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1080 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[0].entry);
			int val = (yyvsp[(-3) - (0)].intval);
			s->nextlist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, s->nextlist, val);
		}
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1089 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			backpatch(V, exp->truelist, code_line);	
		}
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1097 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->contlist.push_back(code_line);
									emit(V, "goto");
								}
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1102 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->breaklist.push_back(code_line);
									emit(V, "goto");
								}
#line 4002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1107 "src/grammar.y" /* yacc.c:1646  */
    {	(yyval.entry) = new table_entry; emit(V,"return"); }
#line 4008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1108 "src/grammar.y" /* yacc.c:1646  */
    {	(yyval.entry) = (yyvsp[-1].entry); emit(V,"return", (yyvsp[-1].entry)->name);}
#line 4014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1118 "src/grammar.y" /* yacc.c:1646  */
    { 
						if((yyvsp[0].type)->info==FUNCTION)
						{
							table_ptr t1 = table_stack.top();
							table_stack.pop();offset_stack.pop();
							char *nam = strdup(t1->name.c_str());
							
							table_entry_ptr e = same_lookup(table_stack.top(),nam, (yyvsp[0].type)->p1);
							
							if(e!=NULL && e->proc_decl)
							{
								char* error = (char *) malloc (100 * sizeof(char));
								sprintf(error, "%s%s%s","Multiple declarations for identifier \"", nam, "\"");
								yyerror3(error);
							}
							else e->proc_decl=1;

						} 
					}
#line 4038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1141 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = (yyvsp[-2].type);
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1150 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = (yyvsp[-1].type);
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1161 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);}
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4074 "y.tab.c" /* yacc.c:1646  */
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
#line 1222 "src/grammar.y" /* yacc.c:1906  */




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
