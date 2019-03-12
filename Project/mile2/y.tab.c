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
	extern int code_line;
	extern vector < code_ptr > V;

#line 124 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "src/grammar.y" /* yacc.c:355  */

	int intval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;

#line 263 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 280 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2049

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  283
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  478

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    76,    80,    81,    82,    82,
      86,    87,    88,    89,    90,    91,    95,    96,    97,    98,
      99,   100,   104,   105,   109,   110,   111,   112,   113,   113,
     114,   114,   115,   115,   119,   120,   121,   122,   122,   123,
     123,   127,   128,   129,   130,   130,   131,   131,   135,   136,
     137,   138,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   147,   148,   149,   150,   150,   151,   151,   155,   156,
     157,   157,   161,   162,   163,   163,   167,   168,   169,   169,
     173,   174,   175,   175,   179,   180,   181,   181,   185,   186,
     190,   191,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   210,   211,   212,   212,   216,   220,   221,
     226,   227,   228,   229,   230,   231,   235,   236,   237,   237,
     239,   242,   243,   247,   248,   249,   250,   251,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     270,   271,   272,   276,   277,   281,   282,   286,   290,   291,
     292,   293,   297,   298,   299,   299,   303,   304,   305,   309,
     310,   311,   315,   316,   317,   317,   321,   322,   326,   327,
     331,   332,   336,   338,   339,   340,   342,   351,   352,   360,
     360,   361,   361,   365,   366,   367,   368,   370,   373,   374,
     379,   380,   384,   385,   386,   386,   390,   391,   392,   396,
     397,   398,   398,   402,   403,   407,   408,   409,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   425,   426,   427,
     431,   432,   436,   437,   438,   439,   440,   441,   442,   446,
     447,   448,   452,   453,   454,   455,   459,   460,   464,   465,
     469,   470,   474,   475,   476,   480,   481,   482,   483,   484,
     488,   489,   490,   491,   492,   496,   497,   501,   502,   506,
     508,   509,   510,   514
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "$@1", "$@2", "$@3", "$@4",
  "$@5", "argument_expression_list", "$@6", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@7",
  "$@8", "$@9", "additive_expression", "$@10", "$@11", "shift_expression",
  "$@12", "$@13", "relational_expression", "$@14", "$@15", "$@16", "$@17",
  "equality_expression", "$@18", "$@19", "and_expression", "$@20",
  "exclusive_or_expression", "$@21", "inclusive_or_expression", "$@22",
  "logical_and_expression", "$@23", "logical_or_expression", "$@24",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "$@25", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "$@26",
  "init_declarator_listM", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "$@27",
  "struct_declarator", "enum_specifier", "enumerator_list", "$@28",
  "enumerator", "type_qualifier", "declarator", "direct_declarator",
  "$@29", "$@30", "pointer", "pointerM", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "$@31", "parameter_declaration",
  "identifier_list", "$@32", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
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
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -226

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1710,     0,    11,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,    22,    90,   105,  -284,    78,  2002,  2002,  -284,
      23,  -284,  2002,  1946,    -3,    26,  1616,  -284,  -284,  -284,
    -284,  -284,     9,   134,    83,  -284,   100,   129,   247,  -284,
      -7,  -284,  1890,  -284,  -284,    95,  1921,  -284,   393,  -284,
      78,  -284,  1946,   710,    -3,  -284,  -284,   136,   147,  1794,
     134,   185,   179,    -8,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   293,  -284,  1946,  1921,  1921,  1764,  -284,   116,
    1921,   732,   135,  -284,  -284,   483,  1122,  1122,  1134,   184,
     226,   231,   244,   537,   251,   331,   268,   274,   625,   834,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   230,
    1740,  1146,  -284,   206,   164,   233,    58,   326,   291,   282,
     288,   351,    36,  -284,  -284,    29,  -284,  -284,  -284,  -284,
     465,  -284,  -284,  -284,  -284,   298,  -284,  -284,   918,  -284,
    -284,  -284,  -284,   304,  -284,  -284,   303,  -284,  -284,   186,
     322,   324,  -284,   174,    65,  -284,  1134,   385,  -284,    90,
      90,   293,  -284,  -284,  -284,  1870,  -284,  -284,  -284,   248,
    1134,    93,  -284,   311,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,   330,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   537,   691,   834,  -284,  1158,  -284,  -284,   313,   537,
    1158,  1158,  1158,   875,   346,   609,   325,  -284,  -284,  -284,
     103,   191,   157,   342,   405,  -284,  -284,   783,  1158,   406,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  1134,  -284,  1146,  1146,  1146,  1230,  1230,  1242,  1242,
    1254,  1254,  1254,  1254,  1266,  1266,  1278,  1350,  1362,  1374,
    1386,  1158,  1134,  -284,   752,  -284,  -284,  -284,   408,  1663,
    1026,  -284,    41,  -284,   127,  -284,  1966,  -284,   410,  -284,
     385,  -284,  -284,  -284,  -284,  -284,    99,  -284,  -284,  -284,
     149,  -284,  1134,   412,  1242,  1242,  1254,  1254,  1266,  1266,
    1374,  1386,   354,  1398,  1158,   414,  1134,  1278,  1146,  1230,
    1230,  1146,  1146,  1254,  1254,  1350,  1362,  -284,   356,   537,
    -284,   210,   238,   259,   358,   656,   656,  -284,  -284,  -284,
    1563,   163,  -284,  1146,  -284,   900,  -284,   264,  -284,   209,
    -284,  -284,  -284,  -284,  -284,   254,   206,   206,  1606,   164,
     164,  1707,   233,   233,   233,   233,  1567,    58,    58,  1497,
     326,  1481,   291,  1464,   282,  1008,   288,   990,   351,   120,
    -284,  -284,  2002,   417,   257,  -284,   379,   383,  -284,   391,
     127,  1841,  1038,  -284,  -284,  -284,  -284,   198,  -284,   149,
    -284,  -284,  -284,   164,   164,   233,   233,    58,    58,   288,
     351,  -284,   286,   265,  -284,  -284,   326,  -284,   206,   206,
    -284,  -284,   233,   233,   291,   282,  -284,  -284,   537,   537,
     537,  1158,  1158,  1110,   390,  -284,  -284,  -284,  1134,  -284,
    1134,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   395,  -284,
     394,  -284,  -284,  -284,  -284,  -284,   407,  -284,  -284,   287,
     289,   537,   315,  1134,  -284,  -284,  -284,  -284,   537,   396,
     537,  -284,   537,  -284,  -284,  -284,  -284,  -284
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   192,   159,   143,   144,   145,   146,   147,   149,
     150,   151,   152,   155,   156,   153,   154,   188,   189,   148,
     163,   164,     0,     0,   203,   278,     0,   130,   132,   157,
       0,   158,   134,     0,   191,     0,     0,   275,   277,   201,
     199,   283,   181,     0,     0,   208,     0,   204,     0,   128,
       0,   136,   141,   131,   133,   162,     0,   135,     0,   256,
       0,   282,     0,     0,   190,     1,   276,     0,     0,     0,
       0,     0,   186,     0,   182,   193,   205,   209,   206,   138,
     140,   129,     0,   280,     0,     0,   169,     0,   165,     0,
     171,     0,     2,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    37,    38,    39,    40,    41,   260,   252,     6,    30,
      42,     0,    44,    54,    61,    68,    81,    88,    92,    96,
     100,   104,   108,   110,   123,     0,   248,   258,   242,   243,
       0,   244,   245,   246,   247,   141,   257,   281,     0,     2,
     195,    42,   127,     0,   202,   200,     0,   219,   198,     0,
       0,   210,   212,     0,     0,   184,     0,     0,   179,     0,
       0,     0,   237,   142,   279,     0,   168,   161,   166,     0,
       0,     0,   172,   176,   170,    22,    24,    25,    64,    66,
      77,    79,    84,    86,   102,   106,    18,    14,    20,   125,
      90,    48,    57,    59,    50,    52,    73,    75,    94,    98,
     255,     0,     0,     0,    34,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   271,   272,   273,
       0,     0,   223,     0,     0,    12,    13,     0,     0,     0,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     112,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,   253,   259,   194,   214,     0,
       0,   216,     0,   217,   226,   196,     0,   197,     0,   180,
       0,   187,   183,   139,   137,   240,     0,   160,   174,   177,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
     251,     0,     0,     0,     0,     0,     0,   270,   274,     5,
       0,   225,   224,     0,    11,     0,     8,     0,    26,     0,
      10,   111,    45,    46,    47,     0,    55,    56,     0,    62,
      63,     0,    71,    72,    69,    70,     0,    82,    83,     0,
      89,     0,    93,     0,    97,     0,   101,     0,   105,     0,
     124,   254,     0,     0,     0,   233,     0,     0,   229,     0,
     227,     0,     0,   211,   213,   220,   185,     0,   238,     0,
     173,   178,    23,    65,    67,    78,    80,    85,    87,   103,
     107,    17,     0,     0,    21,   126,    91,    49,    58,    60,
      51,    53,    74,    76,    95,    99,    35,   250,     0,     0,
       0,     0,     0,     0,     0,    43,    28,     9,     0,     7,
       0,   215,   222,   214,   234,   228,   230,   235,     0,   231,
       0,   239,   241,   175,    19,    15,   262,   264,   265,     0,
       0,     0,     0,     0,    27,   109,   236,   232,     0,     0,
       0,   267,     0,    29,   263,   266,   269,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   154,  -284,
     -58,  -284,  -113,   -35,  -284,  -284,  -284,   -77,  -284,  -284,
     361,  -284,  -284,    24,  -284,  -284,  -284,  -284,  -219,  -284,
    -284,  -213,  -284,  -194,  -284,  -186,  -284,  -214,  -284,  -284,
    -284,   -57,   -81,  -284,   -95,  -284,   -86,    16,     4,  -284,
    -284,  -284,   173,  -284,   -21,  -284,  -284,   387,   -65,   -75,
    -284,  -284,  -283,  -284,   409,  -284,  -146,    -1,     7,   -32,
    -284,  -284,   -37,  -284,  -284,   -67,  -284,  -284,  -268,  -284,
    -284,   267,  -131,  -220,  -166,  -284,   -83,  -284,    15,   429,
    -284,  -206,  -284,  -284,  -284,  -284,   446,  -284,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   118,   119,   314,   312,   313,   315,   303,   347,   463,
     151,   121,   122,   123,   318,   321,   322,   124,   319,   320,
     125,   304,   305,   126,   323,   324,   306,   307,   127,   308,
     309,   128,   317,   129,   325,   130,   326,   131,   310,   132,
     311,   133,   134,   251,   135,   316,   153,   136,    60,    50,
     169,   170,    51,    27,    28,    29,    30,    87,    88,    89,
     181,   399,   182,    31,    73,   290,    74,    32,   145,    34,
      68,    67,    35,    46,    47,   386,   161,   382,   162,   163,
     383,   233,   387,   284,   173,   296,   137,   138,   139,    62,
     140,   141,   142,   143,   144,    36,    37,    38,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   172,   160,    64,    26,   295,   152,    33,   252,    76,
      78,   176,   218,   230,   231,   184,    25,   400,   394,   336,
     224,   292,   178,    45,   120,    42,    55,     1,   283,     2,
      44,    53,    54,    52,   232,    86,    57,   214,   216,   217,
      26,   152,     1,    33,     2,   120,    77,   370,    61,    59,
     120,   120,    25,   270,   372,    90,   378,   276,   167,    80,
      63,    39,   390,    40,    86,    86,    86,    83,    59,    86,
     260,   261,    41,   159,   374,    81,   168,   147,   146,    48,
     291,     2,   120,   376,    90,    90,    90,    23,    86,    90,
     172,     1,    70,     2,   299,   272,   183,   410,   416,   174,
     146,   342,   279,  -225,   280,    43,    56,  -225,    90,   152,
     178,   273,   424,   120,   441,   271,   453,   179,   231,     2,
     231,   390,   282,   152,   409,   331,   332,   333,   327,   432,
     433,   167,   425,   262,   263,    71,   330,    72,   232,    23,
     352,   353,   354,   349,   396,    75,    24,    17,    18,   289,
       1,    23,     2,   120,    86,   120,   348,   120,    24,   300,
      49,   120,   120,   120,   120,   397,   281,   120,    24,   272,
     351,    17,    18,  -207,    90,   301,   379,    23,    85,   120,
     120,   359,   360,   398,    24,   338,   272,     1,   391,     2,
     392,   380,    86,   120,   389,   341,   180,    24,   154,   148,
     440,   149,    93,    94,    95,   417,    96,    97,   420,   421,
      23,   155,    90,   120,   120,   211,   401,    24,   340,   413,
     280,   356,   357,   152,   340,    24,   280,   403,   404,   180,
     435,   452,   348,   256,   257,   415,   287,   234,   235,   236,
     288,   335,   282,   258,   259,   152,   427,   279,  -218,   280,
      64,   165,  -218,   339,    24,   120,   120,   272,   120,   109,
     166,   185,   186,   187,   219,   110,   111,   112,   113,   114,
     115,   120,   428,   439,   253,   272,   272,   120,   120,   254,
     255,   171,   451,   159,   418,   419,    44,   220,   367,   368,
     159,   237,   221,   238,   148,   239,   149,    93,    94,    95,
     429,    96,    97,   341,   272,   222,   450,   183,    39,    39,
      40,    40,   225,    79,   298,   196,   172,   197,    39,   198,
      40,   430,   201,   443,   448,   272,   437,   204,   205,   455,
     438,   272,   407,   408,   226,   152,   459,   460,   462,   120,
     264,   265,   293,   294,   159,   456,   457,   458,   454,   469,
     227,   470,   438,   272,   109,   272,   228,   464,   266,   267,
     110,   111,   112,   113,   114,   115,   268,   269,   277,   278,
     120,   120,   120,   120,   120,   120,   171,   472,   471,    82,
     120,   272,   473,   465,   285,   474,   159,   476,    72,   477,
     286,   302,   -16,   329,    91,   159,    92,    93,    94,    95,
     334,    96,    97,   120,   343,   120,   183,   337,   344,   350,
     120,  -221,   120,   395,   120,   402,   411,   414,   426,   431,
     442,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   444,    98,    99,   100,   445,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   446,   443,   466,   467,   468,
     110,   111,   112,   113,   114,   115,   274,   412,    92,    93,
      94,    95,   175,    96,    97,   116,    58,   117,   475,   164,
     328,    84,    66,     0,   212,     0,   149,    93,    94,    95,
       0,    96,    97,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    98,    99,   100,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,   223,     0,
      92,    93,    94,    95,   213,    96,    97,   116,    58,   275,
     110,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    98,    99,   100,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,   110,   111,   112,   113,   114,   115,
     223,     0,   149,    93,    94,    95,     0,    96,    97,   116,
      58,   362,   363,   364,   365,     0,   223,     0,   149,    93,
      94,    95,     0,    96,    97,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   223,     0,   149,
      93,    94,    95,     0,    96,    97,     0,   405,   406,     0,
     109,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,     0,     0,   422,   423,   109,     0,     0,     0,
       0,   116,   110,   111,   112,   113,   114,   115,   185,   186,
     187,     0,     0,     0,     0,     0,     0,   229,     0,     0,
       0,   148,     0,   149,    93,    94,    95,   109,    96,    97,
       0,     0,     0,   110,   111,   112,   113,   114,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,   196,     0,   197,     0,   198,     0,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,   109,     0,     0,   150,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   345,     0,   149,    93,    94,    95,
       0,    96,    97,   196,     0,   197,     0,   198,   199,   200,
     201,   202,   203,     0,     0,   204,   205,   206,   207,   208,
     209,     0,     0,   196,     0,   197,   210,   198,   199,   200,
     201,   202,   203,     0,     0,   204,   205,   206,   207,   208,
     209,     0,     0,     0,     0,   223,   381,   149,    93,    94,
      95,     0,    96,    97,   109,   346,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,   109,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     0,     0,
       0,     0,     0,     0,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,     0,
     198,   199,   200,   201,   202,   203,     0,     0,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,   196,     0,   197,     0,   198,   436,   200,   201,   202,
     203,     0,     0,   204,   205,   206,   207,   208,   209,   196,
       0,   197,     0,   198,     0,   200,   201,   202,   203,     0,
       0,   204,   205,   206,   207,   208,   209,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     0,     0,     0,   148,     0,   149,
      93,    94,    95,     0,    96,    97,     0,     0,     0,   148,
       0,   149,    93,    94,    95,     0,    96,    97,     0,     0,
       0,   196,     0,   197,     0,   198,     0,   200,   201,   202,
     203,     0,     0,   204,   205,   206,   207,   208,   209,   196,
       0,   197,     0,   198,     0,   200,   201,   202,   203,     0,
       0,   204,   205,   206,   207,   208,   209,   109,     0,     0,
     388,     0,     0,   110,   111,   112,   113,   114,   115,   109,
       0,     0,   449,     0,     0,   110,   111,   112,   113,   114,
     115,   223,     0,   149,    93,    94,    95,     0,    96,    97,
       0,     0,     0,   212,     0,   149,    93,    94,    95,     0,
      96,    97,     0,     0,     0,   148,     0,   149,    93,    94,
      95,     0,    96,    97,     0,     0,     0,   212,     0,   149,
      93,    94,    95,     0,    96,    97,     0,     0,     0,   223,
       0,   149,    93,    94,    95,     0,    96,    97,     0,     0,
       0,   109,   461,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,   215,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   109,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,   109,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,   109,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,   355,     0,   149,    93,    94,    95,     0,    96,    97,
       0,     0,     0,   358,     0,   149,    93,    94,    95,     0,
      96,    97,     0,     0,     0,   361,     0,   149,    93,    94,
      95,     0,    96,    97,     0,     0,     0,   366,     0,   149,
      93,    94,    95,     0,    96,    97,     0,     0,     0,   369,
       0,   149,    93,    94,    95,     0,    96,    97,     0,     0,
       0,   109,     0,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,   109,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   109,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,   109,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,   109,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,   371,     0,   149,    93,    94,    95,     0,    96,    97,
       0,     0,     0,   373,     0,   149,    93,    94,    95,     0,
      96,    97,     0,     0,     0,   375,     0,   149,    93,    94,
      95,     0,    96,    97,     0,     0,     0,   377,     0,   149,
      93,    94,    95,     0,    96,    97,     0,     0,     0,   345,
       0,   149,    93,    94,    95,     0,    96,    97,     0,     0,
       0,   109,     0,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,   109,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   109,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,   109,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,   109,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,     0,   197,     0,   198,
       0,   200,   201,   202,   203,     0,     0,   204,   205,   206,
     207,   208,   196,     0,   197,     0,   198,     0,   200,   201,
     202,   203,     0,     0,   204,   205,   206,   207,   196,     0,
     197,     0,   198,     0,   434,   201,   202,   203,     0,     0,
     204,   205,   206,   207,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,   185,   186,   187,    65,     1,     0,     2,
       0,     0,     0,     0,   340,   385,   280,     0,   196,     0,
     197,    24,   198,     0,     0,   201,   202,   203,     0,     0,
     204,   205,   206,   207,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   384,     0,     2,   196,     0,   197,
       0,   198,     0,     0,   201,   202,   203,    23,     0,   204,
     205,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     1,     0,     2,   185,   186,   187,   188,   189,     0,
       0,     0,     0,     0,   279,   385,   280,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   196,     0,
     197,    23,   198,     0,     0,   201,   202,   203,    24,     0,
     204,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   156,     0,   157,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   434,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,   447,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,   297,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,    82,     0,    58,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   393,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      58,    82,    69,    35,     0,   171,    63,     0,   121,    46,
      47,    86,    98,   108,   109,    90,     0,   300,   286,   225,
     103,   167,    87,    24,    82,     3,     3,     1,   159,     3,
      23,    27,    28,    26,   109,    56,    32,    95,    96,    97,
      36,    98,     1,    36,     3,   103,    47,   266,    33,    33,
     108,   109,    36,    17,   267,    56,   270,   140,    66,    66,
      63,    61,   282,    63,    85,    86,    87,    52,    52,    90,
      12,    13,    61,    69,   268,    82,    84,    62,    62,     1,
     166,     3,   140,   269,    85,    86,    87,    61,   109,    90,
     171,     1,    83,     3,   180,    66,    89,   311,   317,    84,
      84,   232,    61,    62,    63,    83,    83,    66,   109,   166,
     175,    82,   325,   171,   382,    79,   399,     1,   213,     3,
     215,   341,   159,   180,   310,   220,   221,   222,   211,   335,
     336,    66,   326,    75,    76,     1,   219,     3,   213,    61,
     253,   254,   255,   238,   290,    62,    68,    42,    43,    84,
       1,    61,     3,   211,   175,   213,   237,   215,    68,    66,
      82,   219,   220,   221,   222,    66,   159,   225,    68,    66,
     251,    42,    43,    68,   175,    82,   271,    61,    83,   237,
     238,   258,   259,    84,    68,    82,    66,     1,    61,     3,
      63,   272,   213,   251,   280,   232,    80,    68,    62,     1,
      80,     3,     4,     5,     6,   318,     8,     9,   321,   322,
      61,    64,   213,   271,   272,    80,   302,    68,    61,   314,
      63,   256,   257,   280,    61,    68,    63,   304,   305,    80,
     343,   397,   313,    69,    70,   316,    62,     7,     8,     9,
      66,   225,   279,    10,    11,   302,   329,    61,    62,    63,
     282,    66,    66,    62,    68,   313,   314,    66,   316,    61,
      81,     7,     8,     9,    80,    67,    68,    69,    70,    71,
      72,   329,    62,    64,    68,    66,    66,   335,   336,    73,
      74,    83,    84,   279,   319,   320,   279,    61,   264,   265,
     286,    61,    61,    63,     1,    65,     3,     4,     5,     6,
      62,     8,     9,   340,    66,    61,   392,   300,    61,    61,
      63,    63,    61,    66,    66,    61,   397,    63,    61,    65,
      63,    62,    68,    66,   391,    66,    62,    73,    74,    64,
      66,    66,   308,   309,     3,   392,   431,   432,   433,   397,
      14,    15,   169,   170,   340,   428,   429,   430,    62,    62,
      82,    62,    66,    66,    61,    66,    82,   438,    67,    77,
      67,    68,    69,    70,    71,    72,    78,    16,    64,    66,
     428,   429,   430,   431,   432,   433,    83,    62,   461,    81,
     438,    66,   463,   440,    62,   468,   382,   470,     3,   472,
      66,    80,    62,    80,     1,   391,     3,     4,     5,     6,
      54,     8,     9,   461,    62,   463,   399,    82,     3,     3,
     468,     3,   470,     3,   472,     3,    62,     3,    62,    61,
       3,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    62,    49,    50,    51,    62,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    64,    66,    62,    64,    52,
      67,    68,    69,    70,    71,    72,     1,   313,     3,     4,
       5,     6,    85,     8,     9,    82,    83,    84,    82,    70,
     213,    52,    36,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     1,    -1,
       3,     4,     5,     6,    61,     8,     9,    82,    83,    84,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    82,
      83,   260,   261,   262,   263,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,   306,   307,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,   323,   324,    61,    -1,    -1,    -1,
      -1,    82,    67,    68,    69,    70,    71,    72,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    61,     8,     9,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    61,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    61,    -1,    63,    -1,    65,    66,    67,
      68,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    61,    -1,    63,    84,    65,    66,    67,
      68,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,     1,    84,     3,     4,     5,
       6,    -1,     8,     9,    61,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    61,    -1,    63,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    61,
      -1,    63,    -1,    65,    -1,    67,    68,    69,    70,    -1,
      -1,    73,    74,    75,    76,    77,    78,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    -1,    67,    68,    69,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    61,
      -1,    63,    -1,    65,    -1,    67,    68,    69,    70,    -1,
      -1,    73,    74,    75,    76,    77,    78,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    61,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    68,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    61,    -1,    63,    -1,    65,    -1,    67,    68,
      69,    70,    -1,    -1,    73,    74,    75,    76,    61,    -1,
      63,    -1,    65,    -1,     1,    68,    69,    70,    -1,    -1,
      73,    74,    75,    76,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,     7,     8,     9,     0,     1,    -1,     3,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    61,    -1,
      63,    68,    65,    -1,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    75,    76,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     1,    -1,     3,    61,    -1,    63,
      -1,    65,    -1,    -1,    68,    69,    70,    61,    -1,    73,
      74,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     1,    -1,     3,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    61,    -1,
      63,    61,    65,    -1,    -1,    68,    69,    70,    68,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,     1,    -1,     3,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    62,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    84,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    81,    -1,    83,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    61,    68,   132,   133,   138,   139,   140,
     141,   148,   152,   153,   154,   157,   180,   181,   182,    61,
      63,    61,     3,    83,   153,   152,   158,   159,     1,    82,
     134,   137,   153,   133,   133,     3,    83,   133,    83,   132,
     133,   173,   174,    63,   154,     0,   181,   156,   155,   183,
      83,     1,     3,   149,   151,    62,   157,   152,   157,    66,
      66,    82,    81,   173,   174,    83,   139,   142,   143,   144,
     152,     1,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    68,    69,    70,    71,    72,    82,    84,    86,    87,
      95,    96,    97,    98,   102,   105,   108,   113,   116,   118,
     120,   122,   124,   126,   127,   129,   132,   171,   172,   173,
     175,   176,   177,   178,   179,   153,   132,   173,     1,     3,
      64,    95,   126,   131,    62,    64,     1,     3,    62,   133,
     160,   161,   163,   164,   149,    66,    81,    66,    84,   135,
     136,    83,   127,   169,   173,   142,   144,    84,   143,     1,
      80,   145,   147,   153,   144,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    61,    63,    65,    66,
      67,    68,    69,    70,    73,    74,    75,    76,    77,    78,
      84,    80,     1,    61,    95,    61,    95,    95,   131,    80,
      61,    61,    61,     1,   171,    61,     3,    82,    82,    82,
     129,   129,   144,   166,     7,     8,     9,    61,    63,    65,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      81,   128,    97,    68,    73,    74,    69,    70,    10,    11,
      12,    13,    75,    76,    14,    15,    67,    77,    78,    16,
      17,    79,    66,    82,     1,    84,   171,    64,    66,    61,
      63,   153,   157,   167,   168,    62,    66,    62,    66,    84,
     150,   131,   151,   137,   137,   169,   170,    84,    66,   131,
      66,    82,    80,    92,   106,   107,   111,   112,   114,   115,
     123,   125,    89,    90,    88,    91,   130,   117,    99,   103,
     104,   100,   101,   109,   110,   119,   121,   171,   166,    80,
     171,   129,   129,   129,    54,   132,   176,    82,    82,    62,
      61,   157,   167,    62,     3,     1,    62,    93,   127,   129,
       3,   127,    97,    97,    97,     1,    98,    98,     1,   102,
     102,     1,   105,   105,   105,   105,     1,   108,   108,     1,
     113,     1,   116,     1,   118,     1,   120,     1,   122,   129,
     127,    84,   162,   165,     1,    62,   160,   167,    64,   131,
     168,    61,    63,    48,   163,     3,   151,    66,    84,   146,
     147,   131,     3,   102,   102,   105,   105,   108,   108,   120,
     122,    62,    93,   129,     3,   127,   113,    97,    98,    98,
      97,    97,   105,   105,   116,   118,    62,   171,    62,    62,
      62,    61,   176,   176,     1,    97,    66,    62,    66,    64,
      80,   163,     3,    66,    62,    62,    64,    62,   160,    64,
     131,    84,   169,   147,    62,    64,   171,   171,   171,   129,
     129,    62,   129,    94,   127,   126,    62,    64,    52,    62,
      62,   171,    62,   127,   171,    82,   171,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    87,    89,    87,    90,    87,
      91,    87,    92,    87,    87,    87,    93,    93,    94,    93,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    99,    98,
     100,    98,   101,    98,   102,   102,   102,   103,   102,   104,
     102,   105,   105,   105,   106,   105,   107,   105,   108,   108,
     108,   108,   108,   109,   108,   110,   108,   111,   108,   112,
     108,   113,   113,   113,   114,   113,   115,   113,   116,   116,
     117,   116,   118,   118,   119,   118,   120,   120,   121,   120,
     122,   122,   123,   122,   124,   124,   125,   124,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   129,   129,   130,   129,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   134,   134,   135,   134,
     136,   137,   137,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   143,   144,   144,
     144,   144,   145,   145,   146,   145,   147,   147,   147,   148,
     148,   148,   149,   149,   150,   149,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   155,
     154,   156,   154,   157,   157,   157,   157,   158,   159,   159,
     160,   160,   161,   161,   162,   161,   163,   163,   163,   164,
     164,   165,   164,   166,   166,   167,   167,   167,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   171,   171,   171,   172,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   177,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   179,   180,   180,   181,   181,   182,
     182,   182,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     0,     5,     0,     4,     0,     5,
       0,     4,     0,     4,     2,     2,     1,     3,     0,     4,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     0,     4,
       0,     4,     0,     4,     1,     3,     3,     0,     4,     0,
       4,     1,     3,     3,     0,     4,     0,     4,     1,     3,
       3,     3,     3,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     3,     3,     0,     4,     0,     4,     1,     3,
       0,     4,     1,     3,     0,     4,     1,     3,     0,     4,
       1,     3,     0,     4,     1,     3,     0,     4,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     4,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     4,     0,     4,
       0,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     0,     4,     1,     2,     3,     4,
       5,     2,     1,     3,     0,     4,     1,     3,     1,     1,
       2,     1,     1,     3,     4,     3,     5,     5,     4,     0,
       4,     0,     4,     1,     2,     3,     3,     0,     1,     2,
       1,     3,     1,     3,     0,     4,     2,     2,     1,     1,
       3,     0,     4,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     4,     3,     1,     2,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2,     0
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
#line 55 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = lookup(table_stack.top(), (yyvsp[0].stringval)); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[-1].entry); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "src/grammar.y" /* yacc.c:1646  */
    { if ( (yyvsp[-1].entry)->type->info != INTEGER ) yyerror3("expecting integer expression");  }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 75 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 76 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 82 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 86 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 104 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 109 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 110 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("*",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 111 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("/",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 112 "src/grammar.y" /* yacc.c:1646  */
    { if(char* s = type_check("%",(yyval.entry),(yyvsp[-2].entry),(yyvsp[0].entry))) yyerror3(s); }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 113 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 114 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 115 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 119 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 122 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 127 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 130 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 131 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 135 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 140 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 141 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 142 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 143 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 147 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 150 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 151 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 155 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 157 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 161 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 163 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 167 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 169 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 173 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 175 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 179 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 181 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting logical expression");}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 185 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 190 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.entry) = (yyvsp[0].entry); }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 192 "src/grammar.y" /* yacc.c:1646  */
    {emit(V,(yyvsp[-2].entry)->name,"=",(yyvsp[0].entry)->name);}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 212 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting expression");}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 220 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type);}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 221 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-2].type);}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 226 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 227 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 228 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 229 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 230 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type);}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 231 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = merge_type((yyvsp[-1].type) , (yyvsp[0].type));}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 239 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-2) - (0)].type);}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(EXTRN); }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 249 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(STAT); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 251 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(REGIS); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 255 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(NOTYPE); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 256 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CHR); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 257 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SHORTER); }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 258 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(INTEGER); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 259 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(LONGER); }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 260 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(FLT); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 261 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(DBL); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 262 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(SIGN); }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 263 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(UNSIGN); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 299 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting struct declarator");}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 317 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting enumerator");}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 326 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(CONSTNT); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 327 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.type) = new_basic_type(VOLAT); }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 331 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 332 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type); }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 336 "src/grammar.y" /* yacc.c:1646  */
    { enter(table_stack.top(), (yyvsp[0].stringval), (yyvsp[-1].type), 0 );
					(yyval.type) = (yyvsp[-1].type); }
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 343 "src/grammar.y" /* yacc.c:1646  */
    { 
								(yyval.type) = new_function_type((yyvsp[-1].type),(yyvsp[-5].type)); 
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								enter_proc(table_stack.top(), (yyvsp[-4].stringval), (yyval.type), t1);
								table_stack.push(t1);
							}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 353 "src/grammar.y" /* yacc.c:1646  */
    { 
								(yyval.type) = new_function_type(NULL,(yyvsp[-4].type)); 
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								enter_proc(table_stack.top(), (yyvsp[-3].stringval), (yyval.type), t1);
								table_stack.push(t1);
							}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 360 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 361 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting declarator");}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 365 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[-1].type));}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 367 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_pointer_type((yyvsp[0].type));}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 370 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[(-1) - (0)].type);}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 379 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 384 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 385 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = new_cartesian_type((yyvsp[-2].type),(yyvsp[0].type)); }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 386 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting parameter");}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 390 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 392 "src/grammar.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 398 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting identifier name");}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 442 "src/grammar.y" /* yacc.c:1646  */
    { if((yyvsp[0].type)->info==FUNCTION)table_stack.pop(); }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 454 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 455 "src/grammar.y" /* yacc.c:1646  */
    {yyerror2("expecting semicolon ;");}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 502 "src/grammar.y" /* yacc.c:1646  */
    {if((yyvsp[0].type)->info==FUNCTION)table_stack.pop();}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 507 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 508 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 509 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 510 "src/grammar.y" /* yacc.c:1646  */
    {table_stack.pop();}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 514 "src/grammar.y" /* yacc.c:1646  */
    { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2663 "y.tab.c" /* yacc.c:1646  */
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
#line 517 "src/grammar.y" /* yacc.c:1906  */




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
	printf("Semantic Error in line no : %d \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);
}

void warning(const char *s)
{
	fflush(stdout);
	printf("Line No : %d [ WARNING ! ] \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);

}
