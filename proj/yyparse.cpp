/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

// Arrian Chi acchi
// $Id: parser.y,v 1.3 2021-12-08 12:23:51-08 - - $
// | forlp                      { $$ = $1->set_bits(attr::FOR); }
// For has weird behavior with scoping. Maybe if you can figure out how to make for into a while...(maybe a precompile?)
// Generate an equivalent while loop.
#pragma GCC diagnostic ignored "-Wold-style-cast"

#include "util.h"
#include "astree.h"
#include "attr.h"



#line 85 "yyparse.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_VOID = 258,
    TOK_INT = 259,
    TOK_STRING = 260,
    TOK_FLOAT = 261,
    TOK_IF = 262,
    TOK_ELSE = 263,
    TOK_WHILE = 264,
    TOK_FOR = 265,
    TOK_UNTIL = 266,
    TOK_RETURN = 267,
    TOK_STRUCT = 268,
    TOK_NULLPTR = 269,
    TOK_ARRAY = 270,
    TOK_ARROW = 271,
    TOK_ALLOC = 272,
    TOK_PTR = 273,
    TOK_EQ = 274,
    TOK_NE = 275,
    TOK_LT = 276,
    TOK_LE = 277,
    TOK_GT = 278,
    TOK_GE = 279,
    TOK_NOT = 280,
    TOK_ADDEQ = 281,
    TOK_SUBEQ = 282,
    TOK_INC = 283,
    TOK_DEC = 284,
    TOK_IDENT = 285,
    TOK_INTCON = 286,
    TOK_CHARCON = 287,
    TOK_STRINGCON = 288,
    TOK_FLOATCON = 289,
    TOK_ROOT = 290,
    TOK_BLOCK = 291,
    TOK_CALL = 292,
    TOK_FUNCTION = 293,
    TOK_PARAM = 294,
    TOK_TYPE_ID = 295,
    TOK_INT2FLOAT = 296,
    TOK_FLOAT2INT = 297,
    TOK_INT2STRING = 298,
    TOK_FLOAT2STRING = 299,
    TOK_MOMMY = 300,
    UNARY = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (YYSTYPE astree_root);

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      55,    56,    49,    47,    57,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    58,     2,     2,     2,     2,
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
      45,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    55,    56,    57,    58,
      59,    60,    62,    63,    67,    72,    73,    76,    77,    81,
      82,    85,    86,    90,    94,    95,    96,    99,   104,   105,
     108,   111,   112,   115,   116,   117,   118,   121,   124,   125,
     128,   129,   132,   135,   140,   144,   154,   161,   164,   165,
     166,   167,   168,   169,   173,   174,   175,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   193,
     194,   195,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_INT", "TOK_STRING",
  "TOK_FLOAT", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_FOR", "TOK_UNTIL",
  "TOK_RETURN", "TOK_STRUCT", "TOK_NULLPTR", "TOK_ARRAY", "TOK_ARROW",
  "TOK_ALLOC", "TOK_PTR", "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT",
  "TOK_GE", "TOK_NOT", "TOK_ADDEQ", "TOK_SUBEQ", "TOK_INC", "TOK_DEC",
  "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON",
  "TOK_FLOATCON", "TOK_ROOT", "TOK_BLOCK", "TOK_CALL", "TOK_FUNCTION",
  "TOK_PARAM", "TOK_TYPE_ID", "TOK_INT2FLOAT", "TOK_FLOAT2INT",
  "TOK_INT2STRING", "TOK_FLOAT2STRING", "TOK_MOMMY", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UNARY", "'^'", "'['", "'('", "')'", "','", "'}'",
  "';'", "'{'", "$accept", "prog", "stat", "func", "parameters",
  "paramhead", "block", "blockhead", "typeid", "type", "decl", "declhead",
  "assign", "assignhead", "crement", "callstmt", "call", "callhead",
  "condition", "ifelse", "whilelp", "untillp", "return", "expr", "unop",
  "binop", "constant", "variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,    37,   301,    94,    91,    40,    41,    44,   125,    59,
     123
};
# endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,    39,   -53,   -53,   -53,   -53,   -53,   -43,   -43,   -40,
     210,   -38,   -53,   -53,   -53,   -53,   -53,     2,   -36,    -8,
     -53,   -32,   -53,   -30,   -53,   -53,   -12,   -52,   -53,   -53,
     -53,   -53,    54,   210,    19,    19,   210,   210,   -53,   -53,
     -53,   210,   210,   210,   -53,   123,   -53,   -53,   -53,   -53,
      40,   -53,   -53,    13,   210,    52,   -22,   -15,   -53,   -53,
     -53,   -53,   -53,   210,   210,   210,   -53,   -53,   210,   143,
      55,   -53,   164,    11,    11,    11,   181,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   -53,
     -53,   202,   202,   -53,   -53,   -53,   -53,    48,   202,   202,
     202,   202,   -53,    19,    19,   -53,    71,    71,    71,    71,
      71,    71,    79,    79,    11,    11,    11,    11,   -53,   -53,
     -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     1,     4,    24,    26,    25,     0,     0,     0,
       0,    72,    20,    22,     2,     3,     8,     0,    29,     0,
       6,     0,     7,     0,    32,     9,     0,     0,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,    69,    70,
      71,     0,     0,     0,    50,     0,    49,    48,    51,    52,
       0,    19,    21,    29,     0,     0,     0,     0,    23,    27,
      30,    37,    38,     0,     0,     0,    35,    36,     0,     0,
      44,    45,     0,    56,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      39,    41,    28,    16,    18,    14,    15,     0,    40,    33,
      34,    31,    42,     0,     0,    53,    63,    64,    65,    66,
      67,    68,    61,    62,    58,    59,    60,    57,    17,    43,
      46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -14,   -53,   -53,   -53,    10,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    -1,   -53,    59,   -53,
     -53,   -53,   -53,    73,   -53,   -53,   -53,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    14,    15,    56,    57,    16,    17,    53,    19,
      20,    21,    22,    23,    24,    25,    44,    27,    34,    28,
      29,    30,    31,    45,    46,    47,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      26,    18,    32,    52,    62,    63,     4,     5,     6,     7,
      54,     8,    33,     9,    10,    36,    26,    50,    32,    55,
      70,    71,    58,     4,     5,     6,     7,    59,     8,    60,
       9,    10,    11,    26,    26,    32,    32,    12,    13,     2,
       3,    96,    97,     4,     5,     6,     7,    61,     8,    11,
       9,    10,     4,     5,     6,    94,     4,     5,     6,    54,
      51,    12,    13,   103,    88,    37,    95,    35,     0,    11,
      11,    38,     0,    39,    40,     0,     0,     0,    12,    13,
      64,    65,    66,    67,     0,     0,     0,    41,    42,   119,
     120,     0,     0,     0,     0,    43,    90,   118,    12,    13,
      68,     0,    26,    26,    32,    32,    69,     0,    93,    72,
      73,     0,     0,     0,    74,    75,    76,     0,    83,    84,
      85,    86,    87,    91,    88,     0,     0,    92,    85,    86,
      87,     0,    88,     0,     0,     0,    98,    99,   100,     0,
       0,   101,    77,    78,    79,    80,    81,    82,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    77,    78,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,     0,    88,     0,     0,     0,
       0,     0,    89,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    85,    86,    87,     0,    88,     0,     0,   102,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,     0,    88,     0,     0,
     104,    77,    78,    79,    80,    81,    82,     0,    83,    84,
      85,    86,    87,     0,    88,    37,     0,   105,     0,     0,
      11,    38,     0,    39,    40,     0,     0,     0,     0,    83,
      84,    85,    86,    87,     0,    88,     0,    41,    42,     0,
       0,     0,     0,     0,     0,    43
};

static const yytype_int8 yycheck[] =
{
       1,     1,     1,    17,    56,    57,     4,     5,     6,     7,
      46,     9,    55,    11,    12,    55,    17,    55,    17,    55,
      34,    35,    30,     4,     5,     6,     7,    59,     9,    59,
      11,    12,    30,    34,    35,    34,    35,    59,    60,     0,
       1,    56,    57,     4,     5,     6,     7,    59,     9,    30,
      11,    12,     4,     5,     6,    55,     4,     5,     6,    46,
      58,    59,    60,     8,    53,    25,    56,     8,    -1,    30,
      30,    31,    -1,    33,    34,    -1,    -1,    -1,    59,    60,
      26,    27,    28,    29,    -1,    -1,    -1,    47,    48,   103,
     104,    -1,    -1,    -1,    -1,    55,    56,    97,    59,    60,
      46,    -1,   103,   104,   103,   104,    33,    -1,    56,    36,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    47,    48,
      49,    50,    51,    50,    53,    -1,    -1,    54,    49,    50,
      51,    -1,    53,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    19,    20,    21,    22,    23,    24,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    19,    20,    21,    22,    23,    24,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    19,    20,    21,    22,    23,    24,    -1,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    56,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    53,    -1,    -1,
      56,    19,    20,    21,    22,    23,    24,    -1,    47,    48,
      49,    50,    51,    -1,    53,    25,    -1,    56,    -1,    -1,
      30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    53,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    62,     0,     1,     4,     5,     6,     7,     9,    11,
      12,    30,    59,    60,    63,    64,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    80,    81,
      82,    83,    88,    55,    79,    79,    55,    25,    31,    33,
      34,    47,    48,    55,    77,    84,    85,    86,    87,    88,
      55,    58,    63,    69,    46,    55,    65,    66,    30,    59,
      59,    59,    56,    57,    26,    27,    28,    29,    46,    84,
      63,    63,    84,    84,    84,    84,    84,    19,    20,    21,
      22,    23,    24,    47,    48,    49,    50,    51,    53,    59,
      56,    84,    84,    56,    69,    67,    56,    57,    84,    84,
      84,    84,    56,     8,    56,    56,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    69,    63,
      63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    70,    70,    70,    71,    72,    72,
      73,    74,    74,    75,    75,    75,    75,    76,    77,    77,
      78,    78,    79,    80,    80,    81,    82,    83,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     3,     2,     2,
       1,     2,     1,     2,     1,     1,     1,     2,     3,     1,
       2,     3,     1,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     5,     3,     3,     5,     3,     1,     1,
       1,     1,     1,     3,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (astree_root, YY_("syntax error: cannot back up")); \
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
                  Type, Value, astree_root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYSTYPE astree_root)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (astree_root);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYSTYPE astree_root)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, astree_root);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, YYSTYPE astree_root)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , astree_root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, astree_root); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYSTYPE astree_root)
{
  YYUSE (yyvaluep);
  YYUSE (astree_root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* TOK_VOID  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1220 "yyparse.cpp"
        break;

    case 4: /* TOK_INT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1226 "yyparse.cpp"
        break;

    case 5: /* TOK_STRING  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1232 "yyparse.cpp"
        break;

    case 6: /* TOK_FLOAT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1238 "yyparse.cpp"
        break;

    case 7: /* TOK_IF  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1244 "yyparse.cpp"
        break;

    case 8: /* TOK_ELSE  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1250 "yyparse.cpp"
        break;

    case 9: /* TOK_WHILE  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1256 "yyparse.cpp"
        break;

    case 10: /* TOK_FOR  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1262 "yyparse.cpp"
        break;

    case 11: /* TOK_UNTIL  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1268 "yyparse.cpp"
        break;

    case 12: /* TOK_RETURN  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1274 "yyparse.cpp"
        break;

    case 13: /* TOK_STRUCT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1280 "yyparse.cpp"
        break;

    case 14: /* TOK_NULLPTR  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1286 "yyparse.cpp"
        break;

    case 15: /* TOK_ARRAY  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1292 "yyparse.cpp"
        break;

    case 16: /* TOK_ARROW  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1298 "yyparse.cpp"
        break;

    case 17: /* TOK_ALLOC  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1304 "yyparse.cpp"
        break;

    case 18: /* TOK_PTR  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1310 "yyparse.cpp"
        break;

    case 19: /* TOK_EQ  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1316 "yyparse.cpp"
        break;

    case 20: /* TOK_NE  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1322 "yyparse.cpp"
        break;

    case 21: /* TOK_LT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1328 "yyparse.cpp"
        break;

    case 22: /* TOK_LE  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1334 "yyparse.cpp"
        break;

    case 23: /* TOK_GT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1340 "yyparse.cpp"
        break;

    case 24: /* TOK_GE  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1346 "yyparse.cpp"
        break;

    case 25: /* TOK_NOT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1352 "yyparse.cpp"
        break;

    case 26: /* TOK_ADDEQ  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1358 "yyparse.cpp"
        break;

    case 27: /* TOK_SUBEQ  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1364 "yyparse.cpp"
        break;

    case 28: /* TOK_INC  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1370 "yyparse.cpp"
        break;

    case 29: /* TOK_DEC  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1376 "yyparse.cpp"
        break;

    case 30: /* TOK_IDENT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1382 "yyparse.cpp"
        break;

    case 31: /* TOK_INTCON  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1388 "yyparse.cpp"
        break;

    case 32: /* TOK_CHARCON  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1394 "yyparse.cpp"
        break;

    case 33: /* TOK_STRINGCON  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1400 "yyparse.cpp"
        break;

    case 34: /* TOK_FLOATCON  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1406 "yyparse.cpp"
        break;

    case 35: /* TOK_ROOT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1412 "yyparse.cpp"
        break;

    case 36: /* TOK_BLOCK  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1418 "yyparse.cpp"
        break;

    case 37: /* TOK_CALL  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1424 "yyparse.cpp"
        break;

    case 38: /* TOK_FUNCTION  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1430 "yyparse.cpp"
        break;

    case 39: /* TOK_PARAM  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1436 "yyparse.cpp"
        break;

    case 40: /* TOK_TYPE_ID  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1442 "yyparse.cpp"
        break;

    case 41: /* TOK_INT2FLOAT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1448 "yyparse.cpp"
        break;

    case 42: /* TOK_FLOAT2INT  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1454 "yyparse.cpp"
        break;

    case 43: /* TOK_INT2STRING  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1460 "yyparse.cpp"
        break;

    case 44: /* TOK_FLOAT2STRING  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1466 "yyparse.cpp"
        break;

    case 45: /* TOK_MOMMY  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1472 "yyparse.cpp"
        break;

    case 46: /* '='  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1478 "yyparse.cpp"
        break;

    case 47: /* '+'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1484 "yyparse.cpp"
        break;

    case 48: /* '-'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1490 "yyparse.cpp"
        break;

    case 49: /* '*'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1496 "yyparse.cpp"
        break;

    case 50: /* '/'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1502 "yyparse.cpp"
        break;

    case 51: /* '%'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1508 "yyparse.cpp"
        break;

    case 52: /* UNARY  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1514 "yyparse.cpp"
        break;

    case 53: /* '^'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1520 "yyparse.cpp"
        break;

    case 54: /* '['  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1526 "yyparse.cpp"
        break;

    case 55: /* '('  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1532 "yyparse.cpp"
        break;

    case 56: /* ')'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1538 "yyparse.cpp"
        break;

    case 57: /* ','  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1544 "yyparse.cpp"
        break;

    case 58: /* '}'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1550 "yyparse.cpp"
        break;

    case 59: /* ';'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1556 "yyparse.cpp"
        break;

    case 60: /* '{'  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1562 "yyparse.cpp"
        break;

    case 62: /* prog  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1568 "yyparse.cpp"
        break;

    case 63: /* stat  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1574 "yyparse.cpp"
        break;

    case 64: /* func  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1580 "yyparse.cpp"
        break;

    case 65: /* parameters  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1586 "yyparse.cpp"
        break;

    case 66: /* paramhead  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1592 "yyparse.cpp"
        break;

    case 67: /* block  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1598 "yyparse.cpp"
        break;

    case 68: /* blockhead  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1604 "yyparse.cpp"
        break;

    case 69: /* typeid  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1610 "yyparse.cpp"
        break;

    case 70: /* type  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1616 "yyparse.cpp"
        break;

    case 71: /* decl  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1622 "yyparse.cpp"
        break;

    case 72: /* declhead  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1628 "yyparse.cpp"
        break;

    case 73: /* assign  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1634 "yyparse.cpp"
        break;

    case 74: /* assignhead  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1640 "yyparse.cpp"
        break;

    case 75: /* crement  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1646 "yyparse.cpp"
        break;

    case 76: /* callstmt  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1652 "yyparse.cpp"
        break;

    case 77: /* call  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1658 "yyparse.cpp"
        break;

    case 78: /* callhead  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1664 "yyparse.cpp"
        break;

    case 79: /* condition  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1670 "yyparse.cpp"
        break;

    case 80: /* ifelse  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1676 "yyparse.cpp"
        break;

    case 81: /* whilelp  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1682 "yyparse.cpp"
        break;

    case 82: /* untillp  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1688 "yyparse.cpp"
        break;

    case 83: /* return  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1694 "yyparse.cpp"
        break;

    case 84: /* expr  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1700 "yyparse.cpp"
        break;

    case 85: /* unop  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1706 "yyparse.cpp"
        break;

    case 86: /* binop  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1712 "yyparse.cpp"
        break;

    case 87: /* constant  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1718 "yyparse.cpp"
        break;

    case 88: /* variable  */
#line 18 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1724 "yyparse.cpp"
        break;

      default:
        break;
    }
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
yyparse (YYSTYPE astree_root)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 49 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[0]}); }
#line 1994 "yyparse.cpp"
    break;

  case 3:
#line 50 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[0]}); }
#line 2000 "yyparse.cpp"
    break;

  case 4:
#line 51 "parser.y"
                                             { yyval = yyvsp[-1]; }
#line 2006 "yyparse.cpp"
    break;

  case 5:
#line 52 "parser.y"
                                             { yyval = astree_root; }
#line 2012 "yyparse.cpp"
    break;

  case 6:
#line 55 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::TYPE_ID); }
#line 2018 "yyparse.cpp"
    break;

  case 7:
#line 56 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::ASSIGN); }
#line 2024 "yyparse.cpp"
    break;

  case 8:
#line 57 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2030 "yyparse.cpp"
    break;

  case 9:
#line 58 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::VADDR); }
#line 2036 "yyparse.cpp"
    break;

  case 10:
#line 59 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::IFELSE); }
#line 2042 "yyparse.cpp"
    break;

  case 11:
#line 60 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::WHILE); }
#line 2048 "yyparse.cpp"
    break;

  case 12:
#line 62 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::UNTIL); }
#line 2054 "yyparse.cpp"
    break;

  case 13:
#line 63 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::RETURN); }
#line 2060 "yyparse.cpp"
    break;

  case 14:
#line 67 "parser.y"
                                             {  yyvsp[-2]->set_bits(attr::FUNCTION);
                                                yyvsp[-2]->children[1]->set_bits(yyvsp[-2]);
                                                yyval = ASTNode::mkopt(TOK_FUNCTION, {yyvsp[-2], yyvsp[-1], yyvsp[0]})->set_bits(yyvsp[-2])->set_bits(attr::FUNCTION); }
#line 2068 "yyparse.cpp"
    break;

  case 15:
#line 72 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2074 "yyparse.cpp"
    break;

  case 16:
#line 73 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]->set_symbol(TOK_PARAM)->set_bits(attr::PARAM); }
#line 2080 "yyparse.cpp"
    break;

  case 17:
#line 76 "parser.y"
                                             { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0]); }
#line 2086 "yyparse.cpp"
    break;

  case 18:
#line 77 "parser.y"
                                             { yyval = yyvsp[-1]->adopt_as(TOK_PARAM, yyvsp[0])->set_bits(attr::PARAM); }
#line 2092 "yyparse.cpp"
    break;

  case 19:
#line 81 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]->set_bits(attr::BLOCK); }
#line 2098 "yyparse.cpp"
    break;

  case 20:
#line 82 "parser.y"
                                             { yyval = yyvsp[0]->set_symbol(TOK_BLOCK)->set_bits(attr::BLOCK); }
#line 2104 "yyparse.cpp"
    break;

  case 21:
#line 85 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2110 "yyparse.cpp"
    break;

  case 22:
#line 86 "parser.y"
                                             { yyval = yyvsp[0]->set_symbol(TOK_BLOCK); }
#line 2116 "yyparse.cpp"
    break;

  case 23:
#line 90 "parser.y"
                                             { yyvsp[0]->set_bits(yyvsp[-1]);
                                               yyval = ASTNode::mkopt(TOK_TYPE_ID, {yyvsp[-1], yyvsp[0]})->set_bits(yyvsp[-1]);  }
#line 2123 "yyparse.cpp"
    break;

  case 24:
#line 94 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::INT); }
#line 2129 "yyparse.cpp"
    break;

  case 25:
#line 95 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::FLOAT); }
#line 2135 "yyparse.cpp"
    break;

  case 26:
#line 96 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::STRING); }
#line 2141 "yyparse.cpp"
    break;

  case 27:
#line 99 "parser.y"
                                          { delete yyvsp[0]; 
                                            yyvsp[-1]->children[1]->set_bits(attr::VARIABLE);
                                            yyval = yyvsp[-1]; }
#line 2149 "yyparse.cpp"
    break;

  case 28:
#line 104 "parser.y"
                                          { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0])->set_bits(attr::ASSIGN); }
#line 2155 "yyparse.cpp"
    break;

  case 29:
#line 105 "parser.y"
                                          { yyval = yyvsp[0]; }
#line 2161 "yyparse.cpp"
    break;

  case 30:
#line 108 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2167 "yyparse.cpp"
    break;

  case 31:
#line 111 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2173 "yyparse.cpp"
    break;

  case 32:
#line 112 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2179 "yyparse.cpp"
    break;

  case 33:
#line 115 "parser.y"
                                                { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2185 "yyparse.cpp"
    break;

  case 34:
#line 116 "parser.y"
                                                { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2191 "yyparse.cpp"
    break;

  case 35:
#line 117 "parser.y"
                                                { yyval = yyvsp[0]->adopt(yyvsp[-1]); }
#line 2197 "yyparse.cpp"
    break;

  case 36:
#line 118 "parser.y"
                                                { yyval = yyvsp[0]->adopt(yyvsp[-1]); }
#line 2203 "yyparse.cpp"
    break;

  case 37:
#line 121 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2209 "yyparse.cpp"
    break;

  case 38:
#line 124 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2215 "yyparse.cpp"
    break;

  case 39:
#line 125 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]->adopt_as(TOK_CALL, yyvsp[-2]); }
#line 2221 "yyparse.cpp"
    break;

  case 40:
#line 128 "parser.y"
                                             { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0]); }
#line 2227 "yyparse.cpp"
    break;

  case 41:
#line 129 "parser.y"
                                             { yyval =yyvsp[-1]->adopt_as(TOK_CALL, {yyvsp[-2], yyvsp[0]}); }
#line 2233 "yyparse.cpp"
    break;

  case 42:
#line 132 "parser.y"
                             { ASTNode::erase({yyvsp[-2], yyvsp[0]}); yyval = yyvsp[-1]; }
#line 2239 "yyparse.cpp"
    break;

  case 43:
#line 136 "parser.y"
                                    { delete yyvsp[-1];
                                      yyval = yyvsp[-4]->adopt({yyvsp[-3], yyvsp[-2], yyvsp[0]});
                                    }
#line 2247 "yyparse.cpp"
    break;

  case 44:
#line 141 "parser.y"
                                    { yyval = yyvsp[-2]->adopt({yyvsp[-1], yyvsp[0]});}
#line 2253 "yyparse.cpp"
    break;

  case 45:
#line 145 "parser.y"
                                    { yyval = yyvsp[-2]->adopt({yyvsp[-1], yyvsp[0]});}
#line 2259 "yyparse.cpp"
    break;

  case 46:
#line 155 "parser.y"
                                    { delete yyvsp[-3]; delete yyvsp[-1];
                                      yyval = yyvsp[-4]->adopt({yyvsp[-2], yyvsp[0]});
                                    }
#line 2267 "yyparse.cpp"
    break;

  case 47:
#line 161 "parser.y"
                                    { delete yyvsp[0]; yyval = yyvsp[-2]-> adopt(yyvsp[-1]); }
#line 2273 "yyparse.cpp"
    break;

  case 48:
#line 164 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::BINOP); }
#line 2279 "yyparse.cpp"
    break;

  case 49:
#line 165 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::UNOP); }
#line 2285 "yyparse.cpp"
    break;

  case 50:
#line 166 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::VADDR); }
#line 2291 "yyparse.cpp"
    break;

  case 51:
#line 167 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::CONST); }
#line 2297 "yyparse.cpp"
    break;

  case 52:
#line 168 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::VARIABLE); }
#line 2303 "yyparse.cpp"
    break;

  case 53:
#line 169 "parser.y"
                                             {delete yyvsp[-2]; delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2309 "yyparse.cpp"
    break;

  case 54:
#line 173 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2315 "yyparse.cpp"
    break;

  case 55:
#line 174 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2321 "yyparse.cpp"
    break;

  case 56:
#line 175 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2327 "yyparse.cpp"
    break;

  case 57:
#line 178 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2333 "yyparse.cpp"
    break;

  case 58:
#line 179 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2339 "yyparse.cpp"
    break;

  case 59:
#line 180 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2345 "yyparse.cpp"
    break;

  case 60:
#line 181 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2351 "yyparse.cpp"
    break;

  case 61:
#line 182 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2357 "yyparse.cpp"
    break;

  case 62:
#line 183 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2363 "yyparse.cpp"
    break;

  case 63:
#line 184 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2369 "yyparse.cpp"
    break;

  case 64:
#line 185 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2375 "yyparse.cpp"
    break;

  case 65:
#line 186 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2381 "yyparse.cpp"
    break;

  case 66:
#line 187 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2387 "yyparse.cpp"
    break;

  case 67:
#line 188 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2393 "yyparse.cpp"
    break;

  case 68:
#line 189 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2399 "yyparse.cpp"
    break;

  case 69:
#line 193 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::INT); }
#line 2405 "yyparse.cpp"
    break;

  case 70:
#line 194 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::STRING); }
#line 2411 "yyparse.cpp"
    break;

  case 71:
#line 195 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::FLOAT); }
#line 2417 "yyparse.cpp"
    break;

  case 72:
#line 198 "parser.y"
                                             { yyval = yyvsp[0]->set_bits(attr::VARIABLE); }
#line 2423 "yyparse.cpp"
    break;


#line 2427 "yyparse.cpp"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (astree_root, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (astree_root, yymsgp);
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
                      yytoken, &yylval, astree_root);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  yystos[yystate], yyvsp, astree_root);
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
  yyerror (astree_root, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, astree_root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, astree_root);
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
#line 200 "parser.y"


const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}
