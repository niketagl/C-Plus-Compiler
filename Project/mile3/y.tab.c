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
	extern table_ptr class_namespace;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;

#line 133 "y.tab.c" /* yacc.c:355  */

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
#line 38 "src/grammar.y" /* yacc.c:355  */

	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 292 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 309 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2758

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  341
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  569

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
       0,    66,    66,    70,    71,    72,    73,    87,    91,    99,
     108,   116,   120,   121,   122,   134,   151,   152,   180,   215,
     216,   224,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   236,   237,   238,   242,   243,   248,   248,   252,   253,
     262,   271,   319,   320,   324,   325,   326,   327,   328,   329,
     333,   334,   338,   339,   340,   341,   342,   342,   343,   343,
     344,   344,   348,   349,   350,   351,   351,   352,   352,   356,
     357,   358,   359,   359,   360,   360,   364,   365,   366,   367,
     368,   369,   369,   370,   370,   371,   371,   372,   372,   376,
     377,   378,   379,   379,   380,   380,   384,   385,   386,   386,
     390,   391,   392,   392,   396,   397,   398,   398,   402,   408,
     413,   413,   415,   424,   426,   425,   437,   437,   441,   442,
     456,   464,   484,   485,   486,   486,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   505,   506,   507,
     507,   511,   515,   516,   517,   541,   545,   549,   550,   551,
     552,   553,   554,   558,   559,   560,   560,   562,   565,   566,
     570,   571,   572,   573,   574,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   594,   598,
     617,   618,   632,   635,   636,   640,   641,   645,   649,   650,
     651,   652,   656,   657,   658,   658,   662,   663,   664,   668,
     669,   670,   674,   675,   676,   676,   680,   681,   685,   686,
     690,   691,   695,   709,   710,   724,   739,   783,   784,   828,
     828,   829,   829,   833,   834,   835,   836,   838,   841,   842,
     847,   848,   852,   853,   854,   854,   858,   859,   860,   862,
     865,   866,   867,   867,   871,   872,   876,   877,   878,   882,
     883,   884,   885,   886,   887,   888,   889,   890,   894,   895,
     896,   900,   901,   905,   906,   914,   915,   923,   931,   932,
     935,   938,   939,   950,   958,   962,   963,   964,   965,   969,
     970,   974,   979,   998,   999,  1003,  1016,  1035,  1061,  1068,
    1077,  1088,  1097,  1105,  1116,  1126,  1137,  1142,  1150,  1157,
    1167,  1176,  1183,  1184,  1189,  1194,  1195,  1199,  1200,  1204,
    1205,  1227,  1237,  1250,  1253,  1270,  1288,  1291,  1292,  1293,
    1297,  1298,  1299,  1300,  1303,  1304,  1305,  1306,  1307,  1311,
    1312,  1316,  1317,  1321,  1325,  1329,  1330,  1334,  1335,  1339,
    1340,  1341
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
  "class_specifier", "mk_tbl3", "class_head", "member_list",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "base_spec", "base_list", "base_specifier",
  "access_specifier", YY_NULLPTR
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

#define YYPACT_NINF -401

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-401)))

#define YYTABLE_NINF -324

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1518,    48,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,    28,    30,  -401,  -401,  -401,    65,  2704,  2704,    66,
    -401,    36,  -401,  2704,  2654,  -401,  -401,  -401,    18,    43,
      83,    61,   176,   290,   102,    84,   157,  -401,   133,  -401,
    1012,  -401,    87,  -401,  -401,  -401,   162,    97,  -401,   129,
    2625,  -401,  -401,  -401,  -401,  -401,    61,   151,   183,   -21,
    -401,   207,  -401,  -401,  -401,  -401,   870,   283,   224,  -401,
     170,   167,  -401,  -401,  1019,   486,  -401,    65,  -401,  1243,
    -401,  -401,  -401,  -401,  -401,   216,  -401,   323,  -401,  -401,
    2625,   852,  -401,    81,  2625,   649,   -18,  -401,  1762,   341,
    -401,   310,   331,   333,    84,  2542,  2294,   304,  -401,  -401,
    -401,  -401,  1793,  1814,  1814,  -401,   406,  1573,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   347,  -401,
    1845,  -401,   121,   222,   297,   109,   320,   334,   327,   330,
     396,    80,  -401,   342,  -401,  -401,  -401,  -401,    84,  1515,
    1019,   291,  -401,  -401,  -401,  1302,    38,  1762,   336,   415,
     337,   339,  1118,  -401,  -401,  -401,   152,  -401,  -401,   267,
    -401,   579,  -401,  -401,   343,  -401,  -401,   162,  -401,  2625,
    -401,  -401,  -401,   303,  1762,   160,  -401,   345,  -401,  -401,
    -401,    73,   346,  -401,   344,   713,   177,  -401,   349,  -401,
     341,  -401,  -401,  -401,  -401,  -401,  -401,   348,  -401,  -401,
    -401,   351,   357,  -401,   138,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   369,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  1625,
     313,  1573,  -401,  1897,  -401,  -401,  -401,  1412,   201,   178,
     371,   440,  -401,  -401,  1897,   441,  -401,  1845,  1845,  1845,
    1928,  1928,  1949,  1949,  1980,  1980,  1980,  1980,  2032,  2032,
    2063,  2084,  2115,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,   -14,  2167,  -401,  -401,   927,   356,  -401,   355,  -401,
    -401,  -401,   179,  2167,  -401,   378,   381,  -401,  -401,   382,
    -401,  -401,  -401,  1327,  -401,  -401,  -401,  1037,  -401,  -401,
      90,  -401,  1762,  -401,  1218,   192,   449,  -401,  -401,  -401,
      84,  -401,   777,  -401,   452,   194,  -401,  2679,  -401,   455,
     456,  1949,  1949,  1980,  1980,  2032,  2032,  2198,  2219,   389,
    2250,  1897,   458,  2063,  1845,  1928,  1928,  1845,  1845,  1980,
    1980,  2084,  2115,  1433,  -401,   214,  -401,   393,  -401,  2479,
    1656,   294,  -401,   312,  1845,  -401,   288,   398,  -401,  -401,
    -401,   205,   121,   121,   220,   222,   222,   783,   297,   297,
     297,   297,   653,   109,   109,  2548,   320,  2525,   334,  2373,
     327,  2198,  2219,  1897,  2167,   834,  -401,  -401,  2167,  -401,
    -401,   927,  -401,  -401,  -401,  1897,  1897,   400,   927,  1102,
    -401,  -401,    90,  -401,  -401,  -401,  -401,  -401,  -401,  2704,
     468,  2430,  -401,   186,  -401,  -401,  -401,  -401,  -401,   222,
     222,   297,   297,   109,   109,  2341,   330,  2323,   396,  -401,
     250,   332,  -401,   320,  -401,   121,   121,  -401,  -401,   297,
     297,   334,   327,  -401,  -401,  2167,  -401,   397,  -401,   402,
     404,  -401,   405,   312,  2604,  1679,  -401,  -401,  1710,   330,
     396,     8,  -401,  -401,  -401,  -401,   927,  -401,   268,   301,
    1897,   414,    47,  -401,  -401,  -401,  -401,  -401,   321,  -401,
    -401,  2167,  -401,  -401,  -401,  -401,  -401,  -401,   408,  -401,
     407,  -401,   319,  -401,  -401,  -401,  -401,   328,  -401,  1156,
    1156,  -401,  -401,  -401,  -401,  1762,   927,   927,  -401,   411,
    -401,   412,  -401,   421,  -401,   927,  1897,  1897,  -401,  1897,
    -401,  -401,   329,   413,   927,   413,   927,   409,   424,  -401,
     427,  -401,  -401,  -401,  -401,   927,   927,  -401,  -401
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   176,   160,   161,   162,   163,   164,   166,   167,
     168,   169,   172,   173,   170,   171,   208,   209,   165,   183,
     184,     0,     0,   178,   310,   145,     0,   147,   149,     0,
     174,     0,   175,   151,     0,   307,   309,   177,     0,     0,
     201,     0,     0,     0,   212,     0,   223,   142,     0,   153,
     158,   211,     0,   148,   150,     2,     0,   319,   317,   181,
       0,   152,     1,   308,   316,   144,     0,     0,   206,     0,
     202,     0,   221,   219,   155,   313,     0,     0,     0,   228,
       0,   224,   157,   143,     0,     0,   279,     0,   312,     0,
     210,   339,   340,   341,   337,   334,   335,     0,   318,   182,
     189,     0,   185,     0,   191,     0,     0,   204,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     2,     8,     9,
      10,    11,     0,     0,     0,     4,     0,     0,   215,    44,
      45,    46,    47,    48,    49,     6,    12,     3,    38,    50,
       0,    52,    62,    69,    76,    89,    96,   100,   104,   108,
     113,   118,   141,     0,   213,   225,   229,   226,     0,     0,
       0,    50,   122,   258,   159,     0,     2,     0,     0,     0,
       0,     0,     0,   283,   275,   137,     0,   269,   281,     0,
     263,     0,   265,   268,   158,   280,   311,     0,   338,     0,
     188,   180,   186,     0,     0,     0,   192,   196,   190,   327,
     315,     0,   332,   328,     0,     0,     0,   329,     0,   200,
       0,   207,   203,   146,   222,   220,   156,     0,   240,   218,
     239,     0,   230,   232,     0,    30,    32,    33,    72,    74,
      85,    87,    92,    94,   110,   116,    26,    22,    28,    98,
      56,    65,    67,    58,    60,    81,    83,   102,   106,     0,
       0,     0,    42,     0,    39,    40,     5,     0,     0,   244,
       0,     0,    20,    21,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   114,   120,   214,   154,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   126,   124,
     261,     0,     0,   139,   278,     0,     0,   274,     0,   303,
     304,   305,     0,     0,   284,     0,     0,   296,   296,     0,
     264,   266,   267,     0,   276,   282,   336,     0,   194,   197,
       0,   187,     0,   326,   332,     0,     0,   331,   314,   320,
       0,   325,     0,   205,   234,     0,   216,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    34,     0,     7,     0,
       0,   246,   245,   247,     0,    19,     0,    16,    53,    54,
      55,     0,    63,    64,     0,    70,    71,     0,    79,    80,
      77,    78,     0,    90,    91,     0,    97,     0,   101,     0,
     105,     0,     0,     0,     0,     0,   259,   123,     0,   271,
     274,     0,   302,   306,   138,     0,     0,     0,     0,     0,
     277,   179,     0,   193,   198,   324,   333,   330,   322,     0,
       0,     0,   236,     0,   237,   231,   233,   241,    31,    73,
      75,    86,    88,    93,    95,     0,   111,     0,   117,    25,
       0,     0,    29,    99,    57,    66,    68,    59,    61,    82,
      84,   103,   107,    36,    15,     0,    43,     0,   254,     0,
       0,   250,     0,   248,     0,     0,    51,    13,     0,   109,
     115,     0,   125,   260,   262,   140,     0,   273,     0,     0,
       0,     0,     2,   296,   296,   195,   235,   243,     0,    27,
      23,     0,    35,   234,   255,   249,   251,   256,     0,   252,
       0,    17,     0,   121,   272,   289,   288,     0,   298,     0,
       0,    37,   257,   253,    18,     0,     0,     0,   297,     0,
     299,   299,   119,   285,   287,     0,     0,     0,   297,     0,
     290,   291,     0,   300,     0,   300,     0,     0,     0,   293,
       0,   286,   292,   301,   301,     0,     0,   295,   294
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -401,     9,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -339,  -401,   -80,  -401,  -122,  -225,  -401,  -401,  -401,  -170,
    -401,  -401,  -163,  -401,  -401,  -116,  -401,  -401,  -401,  -401,
    -244,  -401,  -401,  -264,  -401,  -250,  -401,  -219,  -401,  -180,
    -401,  -401,  -401,  -401,  -401,   -73,  -401,  -401,   -64,  -401,
     338,  -120,  -401,   -96,     6,  -401,     0,  -401,  -401,  -401,
      62,  -401,   -41,  -401,  -401,  -401,  -401,   314,   -90,   -74,
    -401,  -401,  -314,  -401,   435,  -401,   -84,   -23,    22,   -51,
    -401,  -401,   -71,  -401,  -401,  -113,  -401,  -401,  -323,  -401,
    -401,  -401,   251,  -186,  -311,  -152,  -401,  -168,  -401,  -401,
      85,   -40,  -401,  -401,  -400,  -401,  -401,  -401,  -401,  -401,
    -304,   -44,  -401,   -35,   -48,   -56,  -401,  -401,   475,    55,
    -401,  -401,  -401,  -401,  -190,  -401,   309,   171,  -401,   457,
    -401,   325,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   135,   136,   137,   138,   361,   359,   360,   362,   350,
     375,   511,   139,   140,   141,   142,   364,   367,   368,   143,
     365,   366,   144,   351,   352,   145,   369,   370,   353,   354,
     146,   355,   356,   147,   363,   148,   371,   149,   372,   150,
     357,   411,   151,   412,   358,   162,   413,   535,   175,   414,
     299,   176,   418,   153,   177,    25,    87,    48,   114,   158,
      49,    27,    28,    29,    30,   189,    31,   101,   102,   103,
     195,   432,   196,    32,    69,   210,    70,    33,   202,    51,
     113,   112,    52,    80,    81,   479,   222,   439,   223,   345,
     224,   440,   260,   480,   383,   164,   301,   178,   179,   180,
     421,    88,    89,   181,   182,   321,   537,   536,   556,   322,
     427,   545,   539,   547,   558,   565,   183,    34,    35,   203,
     115,    37,   105,    38,   204,   205,   206,   207,   337,    58,
      95,    96,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    90,   221,   152,   161,   161,    24,   258,   300,   155,
     157,   192,   211,   325,   428,   339,   433,   408,   266,   100,
     163,   460,    97,    79,   446,   212,   190,    53,    54,   504,
     198,    40,   410,    61,    26,   152,   406,   104,    57,    59,
      24,    39,   252,   254,   255,   392,   393,   161,    50,   186,
      39,    39,   312,   259,   109,    36,    86,   109,   156,   100,
     100,   415,    67,   100,    68,    94,    43,    78,    44,    55,
     483,   306,   110,   382,    77,   209,    44,   104,   104,   416,
     161,   104,   193,   313,    44,    77,   100,    44,    77,    36,
      44,    77,   161,    44,   152,   185,   163,   523,   329,   284,
      42,   161,   395,   396,   104,   201,   188,   471,   249,   184,
      64,   398,   399,   400,   401,   220,   506,   249,   505,   463,
      41,   152,   472,   274,   275,   197,   343,   305,    60,   540,
     541,   258,   483,   258,    65,    45,   184,   419,   456,   320,
     465,   466,    46,    45,   386,   388,   389,   390,   100,   522,
      46,    45,   438,    97,    45,    56,    47,    45,    46,   444,
      45,    46,   403,   404,   333,    55,   104,    46,   285,   161,
     194,   161,    75,   161,    76,    66,   216,   259,   458,   194,
     184,   449,   450,    71,   161,   376,    56,    77,   381,    44,
     451,   452,   489,   276,   277,    77,    94,    44,   267,   529,
     530,    16,    17,   268,   269,   201,   469,   470,    82,   348,
     100,    16,    17,   349,   225,   226,   227,    91,    92,    93,
     287,    99,   161,   334,    83,   161,   107,   313,   104,   225,
     226,   227,   490,   161,  -227,   330,   434,   192,   417,   453,
     454,   461,   464,   314,    46,   467,   468,    46,   379,   424,
     380,   331,   340,   497,   313,    46,   441,  -246,   380,   152,
     501,  -246,   486,   494,   441,  -238,   380,   340,   341,  -238,
     423,    46,   378,   108,   443,   236,   313,   237,   111,   238,
     161,   161,   240,   435,   482,   474,   100,   243,   244,   475,
     236,   187,   237,   491,   238,   154,   376,   240,   241,   242,
     270,   271,   243,   244,   104,   498,   499,   152,   381,   272,
     273,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   509,   225,   226,   227,   475,    55,   315,   524,   316,
     317,   318,   319,   161,   161,   161,   278,   279,   161,   525,
      86,   161,   201,   313,    68,   161,   161,   220,   161,   161,
     492,   163,   197,    72,   495,    73,   261,   262,   263,    85,
      72,   487,    73,   313,   379,    74,   380,   442,   543,   544,
     443,   518,   526,    72,   249,    73,   313,   551,   328,   220,
     527,   298,   484,   236,   485,   237,   559,   238,   561,   520,
     534,    72,    90,    73,   475,   161,   513,   567,   568,   538,
     557,   213,   214,   313,   313,   510,   215,   313,   161,   256,
     280,   512,   152,   281,   283,   286,   161,   282,   308,   264,
     161,   265,   346,   344,   376,   307,   552,   553,   309,   555,
     310,   161,   347,    84,   332,   503,   336,   338,   342,   220,
     -24,   220,   384,   385,   387,   420,   422,   531,   425,   161,
     161,   426,   429,   436,   197,  -242,   161,   161,   447,   448,
     459,   462,   542,    78,   476,   161,   161,   161,   488,   161,
     500,   507,   513,   514,   161,   515,   161,   528,   516,   532,
     533,   546,   550,   548,   220,   161,   161,   165,   313,   166,
     118,   119,   120,   121,   122,   563,   123,   124,   564,   302,
     562,   106,   377,   327,   554,   496,   549,   560,   566,    63,
     335,   437,   326,     0,    98,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,   125,   126,    22,
      23,     0,     0,     0,   167,   168,  -270,     0,  -270,  -270,
    -270,  -270,   169,   170,   171,   172,   127,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,  -270,   174,
     323,     0,   166,   118,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
     125,   126,    22,    23,     0,     0,     0,   167,   168,  -270,
       0,  -270,  -270,  -270,  -270,   169,   170,   171,   172,   127,
      77,     0,    44,     0,     0,   129,   130,   131,   132,   133,
     134,     0,   225,   226,   227,   228,   229,   230,   231,     0,
     173,  -270,   324,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    23,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,    77,     0,    44,     0,     0,    45,
       0,     0,     0,   236,     0,   237,    46,   238,     0,     0,
     240,   241,   242,     0,     0,   243,   244,   245,   246,     0,
     199,     0,   200,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    23,    91,    92,
      93,     0,     0,     0,     0,     0,     0,     0,    77,     0,
      44,     0,     0,    45,     0,     0,     0,     0,     0,     0,
      46,     0,   225,   226,   227,   228,   229,     0,     0,     0,
       0,     0,     0,     0,   199,     0,  -321,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    23,    91,    92,    93,   159,     0,   117,   118,   119,
     120,   121,   122,     0,   123,   124,     0,    45,     0,     0,
       0,     0,     0,   236,    46,   237,     0,   238,     0,     0,
     240,   241,   242,     0,     0,   243,   244,     0,   199,     0,
    -323,   116,     0,   117,   118,   119,   120,   121,   122,     0,
     123,   124,     2,     0,     0,   125,   126,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,   127,     0,    23,     0,     0,     0,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
       0,   125,   126,     0,     0,     0,   160,   493,   257,     0,
     166,   118,   119,   120,   121,   122,     0,   123,   124,     0,
     127,     0,     0,   128,     0,   191,   129,   130,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,   125,   126,
      22,    23,     0,     0,     0,   167,   168,  -270,     0,  -270,
    -270,  -270,  -270,   169,   170,   171,   172,   127,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,     0,
       0,     0,     0,     0,     0,     1,     0,     0,   173,  -270,
     159,     0,   117,   118,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,    23,     2,     0,     0,
     125,   126,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,   127,
       0,    23,     0,     0,     0,   129,   130,   131,   132,   133,
     134,     0,    84,   257,    85,   502,   118,   119,   120,   121,
     122,   160,   123,   124,     0,     0,     0,     0,     0,   257,
       0,   117,   118,   119,   120,   121,   122,     0,   123,   124,
     431,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   125,   126,    22,    23,   257,     0,   117,
     118,   119,   120,   121,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,     0,     0,     0,     0,   127,     0,
       0,     0,     0,   173,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,   127,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   173,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
      85,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,    85,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,   238,   303,   239,   240,
     241,   242,     0,     0,   243,   244,   245,   246,   247,   248,
       0,     0,   298,     0,     0,   304,     0,   236,     0,   237,
       0,   238,   303,   239,   240,   241,   242,     0,     0,   243,
     244,   245,   246,   247,   248,     0,     0,   298,     0,     0,
     430,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,   238,   303,   239,   240,
     241,   242,     0,     0,   243,   244,   245,   246,   247,   248,
       0,     0,   298,   236,     0,   237,     0,   238,   473,   239,
     240,   241,   242,     0,     0,   243,   244,   245,   246,   247,
     248,     1,     0,   298,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,    23,     0,   257,     0,   117,   118,   119,   120,
     121,   122,     0,   123,   124,   236,     0,   237,     0,   238,
       0,   239,   240,   241,   242,     0,     0,   243,   244,   245,
     246,   247,   248,     2,     0,   298,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,   125,   126,   373,    23,   117,   118,
     119,   120,   121,   122,     0,   123,   124,     0,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,     0,     0,   116,     0,   117,
     118,   119,   120,   121,   122,     0,   123,   124,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,     0,     0,
     116,     0,   117,   118,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,   127,   374,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   125,   126,     0,
       0,   373,     0,   117,   118,   119,   120,   121,   122,     0,
     123,   124,     0,     0,     0,     0,   127,     0,     0,   481,
     125,   126,   129,   130,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,   519,     0,     0,   129,   130,   131,   132,   133,
     134,   125,   126,   116,     0,   117,   118,   119,   120,   121,
     122,     0,   123,   124,     0,     0,     0,     0,     0,     0,
     127,   521,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,     0,     0,   250,     0,   117,   118,   119,   120,
     121,   122,     0,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   250,     0,   117,   118,   119,
     120,   121,   122,     0,   123,   124,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   125,   126,   250,     0,   117,   118,
     119,   120,   121,   122,     0,   123,   124,     0,     0,     0,
       0,     0,     0,   251,     0,   125,   126,     0,     0,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   125,   126,   257,     0,
     117,   118,   119,   120,   121,   122,     0,   123,   124,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,     0,     0,   391,
       0,   117,   118,   119,   120,   121,   122,     0,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     394,     0,   117,   118,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   125,
     126,   397,     0,   117,   118,   119,   120,   121,   122,     0,
     123,   124,     0,     0,     0,     0,     0,     0,   127,     0,
     125,   126,     0,     0,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   125,   126,   402,     0,   117,   118,   119,   120,   121,
     122,     0,   123,   124,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,     0,     0,   405,     0,   117,   118,   119,   120,
     121,   122,     0,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   407,     0,   117,   118,   119,
     120,   121,   122,     0,   123,   124,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   125,   126,   409,     0,   117,   118,
     119,   120,   121,   122,     0,   123,   124,     0,     0,     0,
       0,     0,     0,   127,     0,   125,   126,     0,     0,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   125,   126,   159,     0,
     117,   118,   119,   120,   121,   122,     0,   123,   124,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,     0,     0,   455,
       0,   117,   118,   119,   120,   121,   122,     0,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     457,     0,   117,   118,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   125,
     126,   373,     0,   117,   118,   119,   120,   121,   122,     0,
     123,   124,     0,     0,     0,     0,     0,     0,   127,     0,
     125,   126,     0,     0,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   125,   126,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,     0,
       0,     0,     0,     0,   236,     0,   237,     0,   238,     0,
     239,   240,   241,   242,     0,     0,   243,   244,   245,   246,
     247,   248,   225,   226,   227,   228,   229,   230,   231,   232,
     233,     0,     0,   236,     0,   237,     0,   238,     0,   239,
     240,   241,   242,     0,     0,   243,   244,   245,   246,   247,
     248,   236,     0,   237,     0,   238,     0,   239,   240,   241,
     242,     0,     0,   243,   244,   245,   246,   247,   248,     0,
       0,   508,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,   237,     0,   238,     0,   239,
     240,   241,   242,     0,     0,   243,   244,   245,   246,   247,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     477,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,   478,   380,     0,     0,     0,     0,    46,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    23,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   217,     0,   218,     0,     0,     0,   379,
     478,   380,     0,     0,     0,     0,    46,   225,   226,   227,
     228,   229,   230,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,   236,    23,   237,     0,   238,
       0,   239,   240,   241,   242,   477,     0,   243,   244,   245,
     246,     0,     0,   219,     0,     0,     0,     0,   236,     0,
     237,     0,   238,     0,     0,   240,   241,   242,     0,     0,
     243,   244,   245,   246,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    62,     2,     0,     1,    23,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   517,     0,     0,     0,    23,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,    22,    23,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   445,
       0,     0,     0,    23,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    23
};

static const yytype_int16 yycheck[] =
{
       0,    52,   115,    76,    84,    85,     0,   127,   160,    80,
      81,   101,   108,   181,   318,   205,   330,   281,   140,    60,
      84,   360,    56,    46,   347,   109,   100,    27,    28,   429,
     104,     3,   282,    33,    34,   108,   280,    60,    29,     3,
      34,     3,   122,   123,   124,   270,   271,   127,    26,    89,
       3,     3,   172,   127,    75,     0,    50,    75,    81,   100,
     101,    75,     1,   104,     3,    56,     1,    45,     3,     3,
     381,   167,    93,   259,     1,    93,     3,   100,   101,    93,
     160,   104,     1,    75,     3,     1,   127,     3,     1,    34,
       3,     1,   172,     3,   167,    89,   160,    89,   194,    19,
      70,   181,   272,   273,   127,   105,    97,   371,    70,    87,
      92,   274,   275,   276,   277,   115,   439,    70,   432,   363,
      92,   194,   372,    14,    15,   103,   210,    89,    92,   529,
     530,   251,   443,   253,    91,    70,   114,   305,   357,   179,
     365,   366,    77,    70,   264,   267,   268,   269,   189,   488,
      77,    70,   342,   187,    70,    89,    91,    70,    77,   345,
      70,    77,   278,   279,    91,     3,   189,    77,    88,   249,
      89,   251,    70,   253,    72,    92,   114,   251,   358,    89,
     158,   351,   352,     7,   264,   249,    89,     1,   259,     3,
     353,   354,   411,    84,    85,     1,   187,     3,    77,   503,
     504,    44,    45,    82,    83,   205,   369,   370,    75,    71,
     251,    44,    45,    75,     9,    10,    11,    55,    56,    57,
     158,    92,   302,   201,    91,   305,    75,    75,   251,     9,
      10,    11,   412,   313,    77,    75,   332,   327,   302,   355,
     356,   361,   364,    91,    77,   367,   368,    77,    70,   313,
      72,    91,    75,   421,    75,    77,    70,    71,    72,   332,
     428,    75,   384,   415,    70,    71,    72,    75,    91,    75,
      91,    77,    71,    90,   345,    70,    75,    72,    71,    74,
     360,   361,    77,    91,   380,    71,   327,    82,    83,    75,
      70,    75,    72,   413,    74,    71,   360,    77,    78,    79,
      78,    79,    82,    83,   327,   425,   426,   380,   379,    12,
      13,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    71,     9,    10,    11,    75,     3,    60,   496,    62,
      63,    64,    65,   413,   414,   415,    16,    17,   418,    71,
     334,   421,   342,    75,     3,   425,   426,   347,   428,   429,
     414,   415,   330,    70,   418,    72,     9,    10,    11,    92,
      70,    73,    72,    75,    70,    75,    72,   345,   536,   537,
     441,   484,    71,    70,    70,    72,    75,   545,    75,   379,
     500,    90,    70,    70,    72,    72,   554,    74,   556,   485,
      71,    70,   443,    72,    75,   475,    75,   565,   566,    71,
      71,    91,    71,    75,    75,    73,    73,    75,   488,     3,
      76,   475,   485,    86,    18,    73,   496,    87,     3,    72,
     500,    74,    71,    75,   488,    89,   546,   547,    91,   549,
      91,   511,    75,    90,    89,   429,    90,    93,    89,   439,
      71,   441,    71,     3,     3,    89,    91,   511,    70,   529,
     530,    70,    70,     4,   432,     3,   536,   537,     3,     3,
      71,     3,   535,   441,    71,   545,   546,   547,    70,   549,
      70,     3,    75,    71,   554,    71,   556,    63,    73,    71,
      73,    70,    61,    71,   484,   565,   566,     1,    75,     3,
       4,     5,     6,     7,     8,    71,    10,    11,    71,   161,
      91,    66,   251,   189,   548,   420,   541,   555,   564,    34,
     201,   340,   187,    -1,    57,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       1,    -1,     3,    -1,    -1,    76,    77,    78,    79,    80,
      81,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,    70,
      -1,    -1,    -1,    70,    -1,    72,    77,    74,    -1,    -1,
      77,    78,    79,    -1,    -1,    82,    83,    84,    85,    -1,
      91,    -1,    93,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    93,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    70,    77,    72,    -1,    74,    -1,    -1,
      77,    78,    79,    -1,    -1,    82,    83,    -1,    91,    -1,
      93,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    30,    -1,    -1,    51,    52,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    70,    -1,    54,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    92,    93,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      70,    -1,    -1,    73,    -1,    93,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    91,    92,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    53,    54,    30,    -1,    -1,
      51,    52,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    70,
      -1,    54,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    -1,    90,     1,    92,     3,     4,     5,     6,     7,
       8,    92,    10,    11,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      93,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    51,
      52,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    91,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    91,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      92,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    92,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    -1,    -1,    93,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    82,
      83,    84,    85,    86,    87,    -1,    -1,    90,    -1,    -1,
      93,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    -1,    -1,    82,    83,    84,    85,    86,
      87,     3,    -1,    90,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    70,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    83,    84,
      85,    86,    87,    30,    -1,    90,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,     1,    54,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,    81,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    51,    52,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      51,    52,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    51,    52,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
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
      81,    51,    52,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    -1,    82,    83,    84,    85,
      86,    87,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    83,    84,    85,    86,
      87,    70,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    85,    86,    87,    -1,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    83,    84,    85,    86,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    54,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     1,    -1,     3,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    70,    54,    72,    -1,    74,
      -1,    76,    77,    78,    79,     1,    -1,    82,    83,    84,
      85,    -1,    -1,    71,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    -1,    77,    78,    79,    -1,    -1,
      82,    83,    84,    85,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,    30,    -1,     3,    54,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    71,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    54,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    53,    54,   148,   149,   150,   155,   156,   157,
     158,   160,   167,   171,   211,   212,   213,   215,   217,     3,
       3,    92,    70,     1,     3,    70,    77,    91,   151,   154,
     172,   173,   176,   150,   150,     3,    89,    95,   223,     3,
      92,   150,     0,   212,    92,    91,    92,     1,     3,   168,
     170,     7,    70,    72,    75,    70,    72,     1,   172,   171,
     177,   178,    75,    91,    90,    92,   148,   150,   195,   196,
     173,    55,    56,    57,    95,   224,   225,   226,   223,    92,
     156,   161,   162,   163,   171,   216,   168,    75,    90,    75,
      93,    71,   175,   174,   152,   214,     1,     3,     4,     5,
       6,     7,     8,    10,    11,    51,    52,    70,    73,    76,
      77,    78,    79,    80,    81,    95,    96,    97,    98,   106,
     107,   108,   109,   113,   116,   119,   124,   127,   129,   131,
     133,   136,   139,   147,    71,   176,   171,   176,   153,     1,
      92,   106,   139,   142,   189,     1,     3,    58,    59,    66,
      67,    68,    69,    91,    93,   142,   145,   148,   191,   192,
     193,   197,   198,   210,   172,   148,   195,    75,    95,   159,
     163,    93,   162,     1,    89,   164,   166,   172,   163,    91,
      93,   150,   172,   213,   218,   219,   220,   221,   226,    93,
     169,   147,   170,    91,    71,    73,   154,     1,     3,    71,
     150,   179,   180,   182,   184,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    70,    72,    74,    76,
      77,    78,    79,    82,    83,    84,    85,    86,    87,    70,
       1,    70,   106,    70,   106,   106,     3,     1,   145,   163,
     186,     9,    10,    11,    72,    74,   108,    77,    82,    83,
      78,    79,    12,    13,    14,    15,    84,    85,    16,    17,
      76,    86,    87,    18,    19,    88,    73,   154,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    90,   144,
     189,   190,   144,    75,    93,    89,   147,    89,     3,    91,
      91,    91,   145,    75,    91,    60,    62,    63,    64,    65,
     195,   199,   203,     1,    93,   191,   225,   161,    75,   147,
      75,    91,    89,    91,   172,   220,    90,   222,    93,   218,
      75,    91,    89,   170,    75,   183,    71,    75,    71,    75,
     103,   117,   118,   122,   123,   125,   126,   134,   138,   100,
     101,    99,   102,   128,   110,   114,   115,   111,   112,   120,
     121,   130,   132,     1,    71,   104,   142,   186,    71,    70,
      72,   176,   187,   188,    71,     3,   145,     3,   108,   108,
     108,     1,   109,   109,     1,   113,   113,     1,   116,   116,
     116,   116,     1,   119,   119,     1,   124,     1,   127,     1,
     129,   135,   137,   140,   143,    75,    93,   142,   146,   191,
      89,   194,    91,    91,   142,    70,    70,   204,   204,    70,
      93,    93,   165,   166,   147,    91,     4,   221,   218,   181,
     185,    70,   172,   176,   187,    50,   182,     3,     3,   113,
     113,   116,   116,   119,   119,     1,   131,     1,   133,    71,
     104,   145,     3,   124,   108,   109,   109,   108,   108,   116,
     116,   127,   129,    75,    71,    75,    71,     1,    71,   179,
     187,    73,   147,   188,    70,    72,   108,    73,    70,   131,
     133,   145,   142,    93,   189,   142,   194,   191,   145,   145,
      70,   191,     3,   148,   198,   166,   182,     3,     1,    71,
      73,   105,   142,    75,    71,    71,    73,    71,   179,    73,
     147,    71,   104,    89,   191,    71,    71,   145,    63,   204,
     204,   142,    71,    73,    71,   141,   201,   200,    71,   206,
     198,   198,   139,   191,   191,   205,    70,   207,    71,   207,
      61,   191,   145,   145,   205,   145,   202,    71,   208,   191,
     208,   191,    91,    71,    71,   209,   209,   191,   191
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    98,   100,    98,   101,    98,   102,    98,
     103,    98,    98,    98,   104,   104,   105,   104,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   109,   110,   109,   111,   109,
     112,   109,   113,   113,   113,   114,   113,   115,   113,   116,
     116,   116,   117,   116,   118,   116,   119,   119,   119,   119,
     119,   120,   119,   121,   119,   122,   119,   123,   119,   124,
     124,   124,   125,   124,   126,   124,   127,   127,   128,   127,
     129,   129,   130,   129,   131,   131,   132,   131,   133,   133,
     134,   133,   135,   136,   137,   136,   138,   136,   139,   139,
     140,   141,   142,   142,   143,   142,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     145,   147,   148,   148,   148,   148,   149,   150,   150,   150,
     150,   150,   150,   151,   151,   152,   151,   153,   154,   154,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   157,   158,
     158,   158,   159,   160,   160,   161,   161,   162,   163,   163,
     163,   163,   164,   164,   165,   164,   166,   166,   166,   167,
     167,   167,   168,   168,   169,   168,   170,   170,   171,   171,
     172,   172,   173,   173,   173,   173,   173,   173,   173,   174,
     173,   175,   173,   176,   176,   176,   176,   177,   178,   178,
     179,   179,   180,   180,   181,   180,   182,   182,   182,   183,
     184,   184,   185,   184,   186,   186,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   191,   191,   191,
     192,   193,   193,   193,   194,   195,   195,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   199,   200,   201,
     202,   203,   203,   203,   203,   203,   204,   205,   206,   207,
     208,   209,   210,   210,   210,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   215,   215,   216,   217,   217,   217,
     218,   218,   218,   218,   219,   219,   219,   219,   219,   220,
     220,   221,   221,   222,   223,   224,   224,   225,   225,   226,
     226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     5,     6,     3,
       2,     2,     0,     5,     0,     4,     0,     5,     0,     4,
       0,     4,     2,     2,     1,     3,     0,     4,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     0,     4,     0,     4,
       0,     4,     1,     3,     3,     0,     4,     0,     4,     1,
       3,     3,     0,     4,     0,     4,     1,     3,     3,     3,
       3,     0,     4,     0,     4,     0,     4,     0,     4,     1,
       3,     3,     0,     4,     0,     4,     1,     3,     0,     4,
       1,     3,     0,     4,     1,     3,     0,     4,     1,     4,
       0,     4,     0,     1,     0,     4,     0,     4,     1,     7,
       0,     0,     1,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       4,     1,     2,     3,     3,     1,     5,     1,     2,     1,
       2,     1,     2,     1,     4,     0,     4,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       4,     2,     0,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     0,     4,     1,     2,     3,     4,
       5,     2,     1,     3,     0,     4,     1,     3,     1,     1,
       2,     1,     1,     3,     4,     3,     5,     5,     4,     0,
       4,     0,     4,     1,     2,     3,     3,     0,     1,     2,
       1,     3,     1,     3,     0,     4,     3,     3,     2,     0,
       1,     3,     0,     4,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     3,     1,     2,     1,     2,     2,     1,     1,
       0,     3,     5,     4,     0,     2,     3,     4,     3,     1,
       2,     1,     2,     1,     2,     6,     9,     6,     0,     0,
       0,     7,     9,     8,    11,    11,     0,     0,     0,     0,
       0,     0,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     0,     5,     4,     0,     2,     3,     2,
       2,     1,     3,     2,     3,     2,     2,     1,     1,     1,
       3,     2,     1,     2,     2,     1,     3,     1,     2,     1,
       1,     1
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
#line 66 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (yyvsp[0].stringval); }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 73 "src/grammar.y" /* yacc.c:1646  */
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
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(INTEGER);
									(yyval.entry)->type->value = (yyvsp[0].intval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%d",(yyvsp[0].intval)); 
									(yyval.entry)->name = s;  
							}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(CHR); 
									(yyval.entry)->type->value = (int)(yyvsp[0].charval); 
									(yyval.entry)->type->constnt = 1; 
									string s1(1, (yyvsp[0].charval)); 
									string s = "'" + s1 + "'";
									(yyval.entry)->name = s; 
							}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "src/grammar.y" /* yacc.c:1646  */
    { 		(yyval.entry) = new table_entry; 
									(yyval.entry)->type = new_basic_type(FLT); 
									(yyval.entry)->type->value = (int)(yyvsp[0].floatval); 
									(yyval.entry)->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%f",(yyvsp[0].floatval)); 
									(yyval.entry)->name = s; 
							}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 120 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check2("[]",(yyval.entry),(yyvsp[-3].entry),(yyvsp[-1].entry))) yyerror3(s);  }
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 122 "src/grammar.y" /* yacc.c:1646  */
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
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 134 "src/grammar.y" /* yacc.c:1646  */
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
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 151 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4(".",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 152 "src/grammar.y" /* yacc.c:1646  */
    { 	
																if(char* s = type_check4(".",(yyval.entry),(yyvsp[-4].entry),(yyvsp[-2].stringval))) yyerror3(s);
																else
																{ 
																	if(lookup(class_namespace, (yyvsp[-4].entry)->type->type_name))
																	{
																		table_entry_ptr temp_class = lookup(class_namespace, (yyvsp[-4].entry)->type->type_name);
																		if(same_lookup(temp_class->t, (yyvsp[-2].stringval)))
																		{
																			table_entry_ptr temp = same_lookup(temp_class->t, (yyvsp[-2].stringval));
																			if(char* t = type_check2("()",(yyval.entry),temp,NULL)) yyerror3(t);
																			else
																			{
																				emit(V, "call",temp->name);
																				emit(V, "pop_ret_value", (yyval.entry)->name);
																			}
																		}
																		else
																		{
																			yyerror3("Function not defined within Class");
																		}
																	}
																	else
																	{
																		yyerror3("Class not defined");
																	}
																}
															}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 180 "src/grammar.y" /* yacc.c:1646  */
    { 
																				if(char* s = type_check4(".",(yyval.entry),(yyvsp[-5].entry),(yyvsp[-3].stringval))) yyerror3(s);
																				else
																				{
																					if(lookup(class_namespace, (yyvsp[-5].entry)->type->type_name))
																					{	
																						table_entry_ptr temp_class = lookup(class_namespace, (yyvsp[-5].entry)->type->type_name);
																						cout << temp_class->name << endl;
																						if(same_lookup(temp_class->t, (yyvsp[-3].stringval)))
																						{
																							table_entry_ptr temp = same_lookup(temp_class->t, (yyvsp[-3].stringval));
																							if(char* t = type_check2("()",(yyval.entry),temp,(yyvsp[-1].entry))) yyerror3(t);
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
																						else
																						{
																							yyerror3("Function not defined within Class");
																						}
																					}
																					else
																					{
																						yyerror3("Class not defined");
																					}
																				} 
																			}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check4("->",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].stringval))) yyerror3(s); }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("+=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 224 "src/grammar.y" /* yacc.c:1646  */
    {
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("-=",(yyval.entry),(yyvsp[-1].entry), temp)) yyerror3(s);
															}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 232 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 233 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 234 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 235 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 236 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 238 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 242 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry); arg_list.push_back((yyval.entry));}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 243 "src/grammar.y" /* yacc.c:1646  */
    {
																arg_list.push_back((yyvsp[0].entry));
																(yyval.entry) = new table_entry; 
																(yyval.entry)->type = new_cartesian_type((yyvsp[-2].entry)->type, (yyvsp[0].entry)->type); 
															}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 252 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "src/grammar.y" /* yacc.c:1646  */
    { 
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER); 
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("+=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 263 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER);
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("-=",(yyval.entry),(yyvsp[0].entry), temp)) yyerror3(s);
							}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 272 "src/grammar.y" /* yacc.c:1646  */
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
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 324 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&"); }
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*"); }
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 326 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+"); }
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 327 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-"); }
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 328 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "!"); }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 329 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "~"); }
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 333 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 338 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 339 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 340 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 341 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 342 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 343 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 344 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 348 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 349 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("+",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 350 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("-",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 351 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 352 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 356 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 357 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 358 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">>",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 359 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 360 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 364 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 365 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 366 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 367 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("<=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 368 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check(">=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 369 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 370 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 371 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 372 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 376 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 377 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("==",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 378 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("!=",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 379 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 380 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 384 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 385 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("&",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 386 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 390 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 391 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("^",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 392 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 396 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 397 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("|",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 398 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 403 "src/grammar.y" /* yacc.c:1646  */
    { 
									(yyval.entry) = (yyvsp[0].entry); 
									(yyval.entry)->isbool=0; 
								}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 409 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->falselist.insert((yyval.entry)->falselist.end(), (yyvsp[-3].entry)->falselist.begin(),(yyvsp[-3].entry)->falselist.end() );
	  						}
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 413 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 415 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[(-1) - (0)].entry);
								e1->falselist.push_back(code_line);
								emit(V, "if(", e1->name, "== 0) goto");
								backpatch(V,e1->truelist,code_line);
						}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 424 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);  }
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 426 "src/grammar.y" /* yacc.c:1646  */
    {
								table_entry_ptr e1 = (yyvsp[-1].entry);
								e1->truelist.push_back(code_line);
								emit(V, "if(", e1->name, "!= 0) goto");
								backpatch(V,e1->falselist,code_line);
							}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 433 "src/grammar.y" /* yacc.c:1646  */
    {
	  							(yyval.entry) = (yyvsp[0].entry);
	  							(yyval.entry)->truelist.insert((yyval.entry)->truelist.end(), (yyvsp[-3].entry)->truelist.begin(),(yyvsp[-3].entry)->truelist.end() );
	  						}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 437 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 441 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 443 "src/grammar.y" /* yacc.c:1646  */
    {
								 	char *name = (char*)malloc(10*sizeof(char));
									sprintf(name, "%s%d", "t-", count);
									(yyval.entry) = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
									count++;

									(yyval.entry)->truelist = merge_list((yyvsp[-3].entry)->truelist, (yyvsp[0].entry)->truelist);
									(yyval.entry)->falselist = merge_list((yyvsp[-3].entry)->falselist, (yyvsp[0].entry)->falselist);

									emit(V,name,"=",(yyvsp[0].entry)->name);

								 }
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 456 "src/grammar.y" /* yacc.c:1646  */
    {
									table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
									exp->falselist.push_back(code_line);
									emit(V, "if(", exp->name, "== 0) goto");	
									backpatch(V, exp->truelist, code_line);
								}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 464 "src/grammar.y" /* yacc.c:1646  */
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
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 484 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 485 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check((yyvsp[-1].stringval),(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 486 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("lvalue required as left operand of assignment");}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 492 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "*="); }
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 493 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "/="); }
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 494 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "%="); }
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 495 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "+="); }
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 496 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "-="); }
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 497 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), "<<="); }
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 498 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(4*sizeof(char)); sprintf((yyval.stringval), ">>="); }
#line 3121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 499 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "&="); }
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 500 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "^="); }
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 501 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (char*)malloc(3*sizeof(char)); sprintf((yyval.stringval), "|="); }
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 505 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry);}
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 507 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 515 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 516 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 517 "src/grammar.y" /* yacc.c:1646  */
    { 
									if(lookup(class_namespace, (yyvsp[-2].stringval)))
									{
										(yyval.type) = new_class_type(lookup(class_namespace, (yyvsp[-2].stringval))->type, (yyvsp[-2].stringval)) ;
									}
									else
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Undeclared structure \"", (yyvsp[-2].stringval), "\"");
										yyerror3(error);
										(yyval.type) = new_basic_type(ERROR);
									}
									if(same_lookup1(table_stack.top(),(yyvsp[-1].stringval)))
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Multiple declarations for identifier \"", (yyvsp[-1].stringval), "\"");
										yyerror3(error);
										(yyval.type) = new_basic_type(ERROR);
									}
									else
									{
										enter(table_stack.top(), (yyvsp[-1].stringval), (yyval.type), 0 );
									}
								}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 549 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 550 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 551 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 552 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 553 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 554 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 558 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 559 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-3].type);}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 560 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 562 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 565 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 571 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 3264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 572 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 574 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 578 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOD); }
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 579 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 580 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 581 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 582 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 583 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 584 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 585 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 586 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 587 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 599 "src/grammar.y" /* yacc.c:1646  */
    {
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup1(struct_namespace,(yyvsp[-4].stringval)))
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Multiple declarations for structure or union \"", (yyvsp[-4].stringval), "\"");
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
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 618 "src/grammar.y" /* yacc.c:1646  */
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
#line 3376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 632 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);}
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 640 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 641 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_cartesian_type((yyvsp[-1].type),(yyvsp[0].type)); }
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 645 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 649 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 650 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 651 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 652 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 656 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 657 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 658 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 662 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 676 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 3454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 685 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 686 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 690 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 691 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 695 "src/grammar.y" /* yacc.c:1646  */
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
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 710 "src/grammar.y" /* yacc.c:1646  */
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
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 724 "src/grammar.y" /* yacc.c:1646  */
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
#line 3535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 740 "src/grammar.y" /* yacc.c:1646  */
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
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 785 "src/grammar.y" /* yacc.c:1646  */
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
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 828 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 829 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 3642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 833 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 3648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 835 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 3654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 838 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 3660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 847 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 852 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 3672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 853 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 854 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 3684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 858 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 860 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 3696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 862 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); (yyval.type)->param=1;}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 867 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 905 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 906 "src/grammar.y" /* yacc.c:1646  */
    { 
											(yyval.entry) = (yyvsp[0].entry);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 914 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 915 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry); 
											backpatch(V,(yyval.entry)->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 923 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry); 
											backpatch(V,(yyval.entry)->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
#line 3758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 931 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 3764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 932 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = new table_entry;}
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 935 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0); }
#line 3776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 940 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											char *name = (char*)malloc(15*sizeof(char));

											sprintf(name, "%d",(yyvsp[-3].entry)->type->value);
											
											V[l-100]->label = name;
										}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 951 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = (yyvsp[0].entry);
											int l = (yyvsp[-1].intval);
											(yyvsp[0].entry)->labellist.push_back(l);
											V[l-100]->label = "default";
										}
#line 3802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 958 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.intval) = code_line;}
#line 3808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 962 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = new table_entry;}
#line 3814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 963 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 964 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 965 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 3832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 969 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 970 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION){table_stack.pop();offset_stack.pop();} (yyval.entry) = (yyvsp[0].entry);}
#line 3844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 975 "src/grammar.y" /* yacc.c:1646  */
    {
										(yyval.entry) = (yyvsp[0].entry); 
									}
#line 3852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 979 "src/grammar.y" /* yacc.c:1646  */
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
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 999 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[-1].entry); }
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1004 "src/grammar.y" /* yacc.c:1646  */
    {
											(yyval.entry) = new table_entry; 

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end());

											(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->nextlist.begin(), (yyvsp[0].entry)->nextlist.end());

											(yyval.entry)->breaklist.insert((yyval.entry)->breaklist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end());

											(yyval.entry)->contlist.insert((yyval.entry)->contlist.end(), (yyvsp[0].entry)->contlist.begin(), (yyvsp[0].entry)->contlist.end());

										}
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1017 "src/grammar.y" /* yacc.c:1646  */
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
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1036 "src/grammar.y" /* yacc.c:1646  */
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
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1061 "src/grammar.y" /* yacc.c:1646  */
    {
			(yyval.entry) = new table_entry;
			(yyval.entry)->nextlist.push_back(code_line);
			emit(V, "goto");
		}
#line 3958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1068 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0) goto");	
			backpatch(V, exp->truelist, code_line);
			exp->truelist.resize(0);
		}
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1077 "src/grammar.y" /* yacc.c:1646  */
    { 
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			table_entry_ptr s1 = (yyvsp[(-1) - (0)].entry);
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
			exp->falselist.resize(0);
		}
#line 3983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1088 "src/grammar.y" /* yacc.c:1646  */
    { 	
															(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
															(yyvsp[0].entry)->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
															backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
														}
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1097 "src/grammar.y" /* yacc.c:1646  */
    {
																	(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-2].entry)->falselist.begin(), (yyvsp[-2].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->breaklist.begin(), (yyvsp[-6].entry)->breaklist.end() );
																	(yyvsp[-2].entry)->truelist.push_back(code_line);
																	emit(V, "if(", (yyvsp[-2].entry)->name, "!= 0) goto");
																	backpatch(V, (yyvsp[-2].entry)->truelist, (yyvsp[-7].intval));
																}
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1105 "src/grammar.y" /* yacc.c:1646  */
    { 	

																						(yyval.entry) = new table_entry;   
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-3].entry)->falselist.begin(), (yyvsp[-3].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																						(yyvsp[0].entry)->nextlist.push_back(code_line);
																						emit(V, "goto");
																						backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-4].intval));
																						backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-4].intval));

																					}
#line 4026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1117 "src/grammar.y" /* yacc.c:1646  */
    {
								(yyval.entry) = new table_entry; 
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
								(yyvsp[0].entry)->nextlist.push_back(code_line);
								emit(V, "goto");
								backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
								backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
					}
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1126 "src/grammar.y" /* yacc.c:1646  */
    {
																										(yyval.entry) = new table_entry;
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[-6].entry)->falselist.begin(), (yyvsp[-6].entry)->falselist.end() );
								(yyval.entry)->nextlist.insert((yyval.entry)->nextlist.end(), (yyvsp[0].entry)->breaklist.begin(), (yyvsp[0].entry)->breaklist.end() );
																										(yyvsp[0].entry)->nextlist.push_back(code_line);
																										emit(V, "goto");
																										backpatch(V, (yyvsp[0].entry)->nextlist, (yyvsp[-5].intval));
																										backpatch(V, (yyvsp[0].entry)->contlist, (yyvsp[-5].intval));
																									}
#line 4054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1137 "src/grammar.y" /* yacc.c:1646  */
    { 
			(yyval.intval) = code_line;
		}
#line 4062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1142 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-1) - (0)].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			backpatch(V, exp->truelist, code_line);	
		}
#line 4073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1150 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[(-1) - (0)].entry);
			backpatch(V, s->nextlist, code_line);
			backpatch(V, s->contlist, code_line);	
		}
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1157 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[0].entry);
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			exp->truelist.push_back(code_line);
			emit(V, "goto");
			(yyval.intval) = code_line;	
		}
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1167 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr s = (yyvsp[0].entry);
			int val = (yyvsp[(-3) - (0)].intval);
			s->nextlist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, s->nextlist, val);
		}
#line 4108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1176 "src/grammar.y" /* yacc.c:1646  */
    {
			table_entry_ptr exp = (yyvsp[(-4) - (0)].entry);
			backpatch(V, exp->truelist, code_line);	
		}
#line 4117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1184 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->contlist.push_back(code_line);
									emit(V, "goto");
								}
#line 4127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1189 "src/grammar.y" /* yacc.c:1646  */
    {
									(yyval.entry) = new table_entry; 
									(yyval.entry)->breaklist.push_back(code_line);
									emit(V, "goto");
								}
#line 4137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1194 "src/grammar.y" /* yacc.c:1646  */
    {	(yyval.entry) = new table_entry; emit(V,"return"); }
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1195 "src/grammar.y" /* yacc.c:1646  */
    {	(yyval.entry) = (yyvsp[-1].entry); emit(V,"return", (yyvsp[-1].entry)->name);}
#line 4149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1205 "src/grammar.y" /* yacc.c:1646  */
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
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1228 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = (yyvsp[-2].type);
																(yyval.type) = (yyvsp[-2].type);
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
#line 4187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1238 "src/grammar.y" /* yacc.c:1646  */
    {
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = (yyvsp[-1].type);
																(yyval.type) = (yyvsp[-1].type);
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1250 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);}
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1253 "src/grammar.y" /* yacc.c:1646  */
    {
													table_ptr c1 = table_stack.top();
													table_stack.pop(); offset_stack.pop();
													if(same_lookup1(class_namespace,(yyvsp[-4].stringval)))
													{
														char* error = (char *) malloc (100 * sizeof(char));
														sprintf(error, "%s%s%s","Multiple declarations for class \"", (yyvsp[-4].stringval), "\"");
														yyerror3(error);
														(yyval.type) = new_basic_type(ERROR); 
													}
													else
													{
														(yyval.type) = new_class_type((yyvsp[-1].type), (yyvsp[-4].stringval)) ;
														enter_proc(class_namespace, (yyvsp[-4].stringval), (yyval.type), c1);
														c1->scope = table_stack.top()->name;
													}
												}
#line 4229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1270 "src/grammar.y" /* yacc.c:1646  */
    {
													table_ptr c1 = table_stack.top();
													table_stack.pop(); offset_stack.pop();
													if(same_lookup1(class_namespace,(yyvsp[-3].stringval)))
													{
														char* error = (char *) malloc (100 * sizeof(char));
														sprintf(error, "%s%s%s","Multiple declarations for class \"", (yyvsp[-3].stringval), "\"");
														yyerror3(error);
														(yyval.type) = new_basic_type(ERROR); 
													}
													else
													{
														(yyval.type) = new_class_type(NULL, (yyvsp[-3].stringval)) ;
														enter_proc(class_namespace, (yyvsp[-3].stringval), (yyval.type), c1);
														c1->scope = table_stack.top()->name;
													}
												}
#line 4251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1288 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr c1 = mktable(); table_stack.push(c1); offset_stack.push(0);}
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1292 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (yyvsp[-1].stringval); }
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1293 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.stringval) = (yyvsp[0].stringval); }
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1297 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_cartesian_type((yyvsp[-1].type),(yyvsp[0].type));}
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1298 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1299 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1303 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1304 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 4299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1307 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1311 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1312 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1316 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 4323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1317 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4333 "y.tab.c" /* yacc.c:1646  */
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
#line 1344 "src/grammar.y" /* yacc.c:1906  */




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
