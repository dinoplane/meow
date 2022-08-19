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

#pragma GCC diagnostic ignored "-Wold-style-cast"

#include "util.h"
#include "astree.h"



#line 82 "yyparse.cpp"

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
    UNARY = 296
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

#define YYUNDEFTOK  2
#define YYMAXUTOK   296


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
       2,     2,     2,     2,     2,     2,     2,    46,     2,     2,
      50,    51,    44,    42,    52,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    53,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    63,    66,    67,    70,    71,
      75,    76,    79,    80,    84,    87,    88,    89,    92,    95,
      96,    99,   102,   103,   106,   107,   108,   109,   112,   115,
     116,   119,   120,   124,   129,   135,   141,   147,   154,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   179,   180,
     181,   184
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
  "TOK_PARAM", "TOK_TYPE_ID", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "'^'", "'['", "'('", "')'", "','", "'}'", "';'", "'{'",
  "$accept", "prog", "stat", "func", "parameters", "paramhead", "block",
  "blockhead", "typeid", "type", "decl", "declhead", "assign",
  "assignhead", "crement", "callstmt", "call", "callhead", "ifelse",
  "whilelp", "forlp", "untillp", "return", "expr", "constant", "variable", YY_NULLPTR
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
     295,    61,    43,    45,    42,    47,    37,   296,    94,    91,
      40,    41,    44,   125,    59,   123
};
# endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,   109,   -48,   -48,   -48,   -48,   -48,   -47,   -45,   -28,
     -10,   273,    -8,   -48,   -48,   -48,   -48,   -48,   131,   -21,
      19,   -48,    15,   -48,    22,   -48,   -48,    23,   -42,   -48,
     -48,   -48,   -48,   -48,   -15,   273,   273,    27,   273,   273,
     -48,   -48,   -48,   273,   273,   273,   -48,   134,   -48,   -48,
     259,   -48,   -48,    14,   273,     2,   -27,    -5,   -48,   -48,
     -48,   -48,   -48,   273,   273,   273,   -48,   -48,   273,   184,
     194,    24,   227,    31,    31,    31,   237,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   -48,
     -48,    51,    51,   -48,   -48,   -48,   -48,    27,    51,    51,
      51,    51,   140,   140,   273,   140,   -48,    -7,    -7,    -7,
      -7,    -7,    -7,     6,     6,    31,    31,    31,    31,   -48,
      72,   -48,   177,   -48,   140,    52,   -48,   -48,    30,   140,
     -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     1,     4,    25,    27,    26,     0,     0,     0,
       0,     0,    71,    21,    23,     2,     3,     8,     0,    30,
       0,     6,     0,     7,     0,    33,     9,     0,     0,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
      68,    69,    70,     0,     0,     0,    65,     0,    66,    67,
       0,    20,    22,    30,     0,     0,     0,     0,    24,    28,
      31,    38,    39,     0,     0,     0,    36,    37,     0,     0,
       0,     0,     0,    53,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      40,    42,    29,    17,    19,    15,    16,     0,    41,    34,
      35,    32,     0,     0,     0,     0,    49,    59,    60,    61,
      62,    63,    64,    57,    58,    54,    55,    56,    50,    18,
      44,    45,     0,    47,     0,     0,    43,    71,     0,     0,
      46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -17,   -48,   -48,   -48,    33,   -48,     1,   -48,
     -48,    46,   -48,   -38,   -48,   -48,     3,   -48,   -48,   -48,
     -48,   -48,   -48,   -20,   -48,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    15,    16,    56,    57,    17,    18,    53,    20,
      21,    22,    23,    24,    25,    26,    46,    28,    29,    30,
      31,    32,    33,    47,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    52,    19,    35,    27,    36,     4,     5,     6,    62,
      63,    64,    65,    66,    67,    69,    70,    34,    72,    73,
      54,    27,    37,    74,    75,    76,    68,    13,    14,    55,
      91,     4,     5,     6,    92,    83,    84,    85,    86,    87,
      38,    88,    50,    98,    99,   100,    96,    97,   101,    58,
      85,    86,    87,    93,    88,    54,    94,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    59,
      77,    78,    79,    80,    81,    82,    60,    61,   104,    88,
     124,   129,   127,    71,   122,   120,   121,   128,   123,    95,
       0,     0,     0,    83,    84,    85,    86,    87,   119,    88,
       0,    34,    34,     0,    34,    27,    27,   126,    27,     2,
       3,     0,   130,     4,     5,     6,     7,     0,     8,     9,
      10,    11,     0,    34,    34,     0,     0,    27,    34,     0,
       0,     0,    27,     0,     0,     4,     5,     6,     7,    12,
       8,     9,    10,    11,     4,     5,     6,     7,     0,     8,
       9,    10,    11,    77,    78,    79,    80,    81,    82,     0,
       0,    12,     0,    13,    14,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,     0,    88,     0,    51,    13,    14,     0,    89,     0,
       0,     0,     0,     0,    13,    14,    77,    78,    79,    80,
      81,    82,     0,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,    88,    83,    84,    85,    86,
      87,   125,    88,     0,     0,   102,    83,    84,    85,    86,
      87,     0,    88,     0,     0,   103,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,     0,    88,     0,     0,   105,    83,
      84,    85,    86,    87,    39,    88,     0,     0,   106,    12,
      40,     0,    41,    42,     0,     0,     0,     0,    39,     0,
       0,    43,    44,    12,    40,     0,    41,    42,     0,    45,
      90,     0,     0,     0,     0,    43,    44,     0,     0,     0,
       0,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
       1,    18,     1,    50,     1,    50,     4,     5,     6,    51,
      52,    26,    27,    28,    29,    35,    36,    18,    38,    39,
      41,    18,    50,    43,    44,    45,    41,    54,    55,    50,
      50,     4,     5,     6,    54,    42,    43,    44,    45,    46,
      50,    48,    50,    63,    64,    65,    51,    52,    68,    30,
      44,    45,    46,    51,    48,    41,    55,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    54,
      19,    20,    21,    22,    23,    24,    54,    54,    54,    48,
       8,    51,    30,    37,   104,   102,   103,   125,   105,    56,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    97,    48,
      -1,   102,   103,    -1,   105,   102,   103,   124,   105,     0,
       1,    -1,   129,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,   124,   125,    -1,    -1,   124,   129,    -1,
      -1,    -1,   129,    -1,    -1,     4,     5,     6,     7,    30,
       9,    10,    11,    12,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    19,    20,    21,    22,    23,    24,    -1,
      -1,    30,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    48,    -1,    53,    54,    55,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    54,    55,    19,    20,    21,    22,
      23,    24,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    42,
      43,    44,    45,    46,    -1,    48,    42,    43,    44,    45,
      46,    54,    48,    -1,    -1,    51,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,    51,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    51,    42,
      43,    44,    45,    46,    25,    48,    -1,    -1,    51,    30,
      31,    -1,    33,    34,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    42,    43,    30,    31,    -1,    33,    34,    -1,    50,
      51,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,     0,     1,     4,     5,     6,     7,     9,    10,
      11,    12,    30,    54,    55,    58,    59,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    81,    50,    50,    50,    50,    25,
      31,    33,    34,    42,    43,    50,    72,    79,    80,    81,
      50,    53,    58,    64,    41,    50,    60,    61,    30,    54,
      54,    54,    51,    52,    26,    27,    28,    29,    41,    79,
      79,    67,    79,    79,    79,    79,    79,    19,    20,    21,
      22,    23,    24,    42,    43,    44,    45,    46,    48,    54,
      51,    79,    79,    51,    64,    62,    51,    52,    79,    79,
      79,    79,    51,    51,    54,    51,    51,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    64,
      58,    58,    79,    58,     8,    54,    58,    30,    69,    51,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    65,    65,    65,    66,    67,
      67,    68,    69,    69,    70,    70,    70,    70,    71,    72,
      72,    73,    73,    74,    74,    75,    76,    77,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     2,
       2,     1,     2,     1,     2,     1,     1,     1,     2,     3,
       1,     2,     3,     1,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     7,     5,     5,     9,     5,     3,     3,
       3,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
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
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1223 "yyparse.cpp"
        break;

    case 4: /* TOK_INT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1229 "yyparse.cpp"
        break;

    case 5: /* TOK_STRING  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1235 "yyparse.cpp"
        break;

    case 6: /* TOK_FLOAT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1241 "yyparse.cpp"
        break;

    case 7: /* TOK_IF  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1247 "yyparse.cpp"
        break;

    case 8: /* TOK_ELSE  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1253 "yyparse.cpp"
        break;

    case 9: /* TOK_WHILE  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1259 "yyparse.cpp"
        break;

    case 10: /* TOK_FOR  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1265 "yyparse.cpp"
        break;

    case 11: /* TOK_UNTIL  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1271 "yyparse.cpp"
        break;

    case 12: /* TOK_RETURN  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1277 "yyparse.cpp"
        break;

    case 13: /* TOK_STRUCT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1283 "yyparse.cpp"
        break;

    case 14: /* TOK_NULLPTR  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1289 "yyparse.cpp"
        break;

    case 15: /* TOK_ARRAY  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1295 "yyparse.cpp"
        break;

    case 16: /* TOK_ARROW  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1301 "yyparse.cpp"
        break;

    case 17: /* TOK_ALLOC  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1307 "yyparse.cpp"
        break;

    case 18: /* TOK_PTR  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1313 "yyparse.cpp"
        break;

    case 19: /* TOK_EQ  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1319 "yyparse.cpp"
        break;

    case 20: /* TOK_NE  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1325 "yyparse.cpp"
        break;

    case 21: /* TOK_LT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1331 "yyparse.cpp"
        break;

    case 22: /* TOK_LE  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1337 "yyparse.cpp"
        break;

    case 23: /* TOK_GT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1343 "yyparse.cpp"
        break;

    case 24: /* TOK_GE  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1349 "yyparse.cpp"
        break;

    case 25: /* TOK_NOT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1355 "yyparse.cpp"
        break;

    case 26: /* TOK_ADDEQ  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1361 "yyparse.cpp"
        break;

    case 27: /* TOK_SUBEQ  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1367 "yyparse.cpp"
        break;

    case 28: /* TOK_INC  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1373 "yyparse.cpp"
        break;

    case 29: /* TOK_DEC  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1379 "yyparse.cpp"
        break;

    case 30: /* TOK_IDENT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1385 "yyparse.cpp"
        break;

    case 31: /* TOK_INTCON  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1391 "yyparse.cpp"
        break;

    case 32: /* TOK_CHARCON  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1397 "yyparse.cpp"
        break;

    case 33: /* TOK_STRINGCON  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1403 "yyparse.cpp"
        break;

    case 34: /* TOK_FLOATCON  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1409 "yyparse.cpp"
        break;

    case 35: /* TOK_ROOT  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1415 "yyparse.cpp"
        break;

    case 36: /* TOK_BLOCK  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1421 "yyparse.cpp"
        break;

    case 37: /* TOK_CALL  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1427 "yyparse.cpp"
        break;

    case 38: /* TOK_FUNCTION  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1433 "yyparse.cpp"
        break;

    case 39: /* TOK_PARAM  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1439 "yyparse.cpp"
        break;

    case 40: /* TOK_TYPE_ID  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1445 "yyparse.cpp"
        break;

    case 41: /* '='  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1451 "yyparse.cpp"
        break;

    case 42: /* '+'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1457 "yyparse.cpp"
        break;

    case 43: /* '-'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1463 "yyparse.cpp"
        break;

    case 44: /* '*'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1469 "yyparse.cpp"
        break;

    case 45: /* '/'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1475 "yyparse.cpp"
        break;

    case 46: /* '%'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1481 "yyparse.cpp"
        break;

    case 47: /* UNARY  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1487 "yyparse.cpp"
        break;

    case 48: /* '^'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1493 "yyparse.cpp"
        break;

    case 49: /* '['  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1499 "yyparse.cpp"
        break;

    case 50: /* '('  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1505 "yyparse.cpp"
        break;

    case 51: /* ')'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1511 "yyparse.cpp"
        break;

    case 52: /* ','  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1517 "yyparse.cpp"
        break;

    case 53: /* '}'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1523 "yyparse.cpp"
        break;

    case 54: /* ';'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1529 "yyparse.cpp"
        break;

    case 55: /* '{'  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1535 "yyparse.cpp"
        break;

    case 57: /* prog  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1541 "yyparse.cpp"
        break;

    case 58: /* stat  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1547 "yyparse.cpp"
        break;

    case 59: /* func  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1553 "yyparse.cpp"
        break;

    case 60: /* parameters  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1559 "yyparse.cpp"
        break;

    case 61: /* paramhead  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1565 "yyparse.cpp"
        break;

    case 62: /* block  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1571 "yyparse.cpp"
        break;

    case 63: /* blockhead  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1577 "yyparse.cpp"
        break;

    case 64: /* typeid  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1583 "yyparse.cpp"
        break;

    case 65: /* type  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1589 "yyparse.cpp"
        break;

    case 66: /* decl  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1595 "yyparse.cpp"
        break;

    case 67: /* declhead  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1601 "yyparse.cpp"
        break;

    case 68: /* assign  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1607 "yyparse.cpp"
        break;

    case 69: /* assignhead  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1613 "yyparse.cpp"
        break;

    case 70: /* crement  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1619 "yyparse.cpp"
        break;

    case 71: /* callstmt  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1625 "yyparse.cpp"
        break;

    case 72: /* call  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1631 "yyparse.cpp"
        break;

    case 73: /* callhead  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1637 "yyparse.cpp"
        break;

    case 74: /* ifelse  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1643 "yyparse.cpp"
        break;

    case 75: /* whilelp  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1649 "yyparse.cpp"
        break;

    case 76: /* forlp  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1655 "yyparse.cpp"
        break;

    case 77: /* untillp  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1661 "yyparse.cpp"
        break;

    case 78: /* return  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1667 "yyparse.cpp"
        break;

    case 79: /* expr  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1673 "yyparse.cpp"
        break;

    case 80: /* constant  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1679 "yyparse.cpp"
        break;

    case 81: /* variable  */
#line 15 "parser.y"
            { if ((*yyvaluep) != astree_root) delete (*yyvaluep); }
#line 1685 "yyparse.cpp"
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
#line 45 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[0]}); }
#line 1955 "yyparse.cpp"
    break;

  case 3:
#line 46 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[0]}); }
#line 1961 "yyparse.cpp"
    break;

  case 4:
#line 47 "parser.y"
                                             { yyval = yyvsp[-1]; }
#line 1967 "yyparse.cpp"
    break;

  case 5:
#line 48 "parser.y"
                                             { yyval = astree_root; }
#line 1973 "yyparse.cpp"
    break;

  case 6:
#line 51 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 1979 "yyparse.cpp"
    break;

  case 7:
#line 52 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 1985 "yyparse.cpp"
    break;

  case 8:
#line 53 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 1991 "yyparse.cpp"
    break;

  case 9:
#line 54 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 1997 "yyparse.cpp"
    break;

  case 10:
#line 55 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2003 "yyparse.cpp"
    break;

  case 11:
#line 56 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2009 "yyparse.cpp"
    break;

  case 12:
#line 57 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2015 "yyparse.cpp"
    break;

  case 13:
#line 58 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2021 "yyparse.cpp"
    break;

  case 14:
#line 59 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2027 "yyparse.cpp"
    break;

  case 15:
#line 63 "parser.y"
                                             { yyval = ASTNode::mkopt(TOK_FUNCTION, {yyvsp[-2], yyvsp[-1], yyvsp[0]}); }
#line 2033 "yyparse.cpp"
    break;

  case 16:
#line 66 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2039 "yyparse.cpp"
    break;

  case 17:
#line 67 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]->set_symbol(TOK_PARAM); }
#line 2045 "yyparse.cpp"
    break;

  case 18:
#line 70 "parser.y"
                                             { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0]); }
#line 2051 "yyparse.cpp"
    break;

  case 19:
#line 71 "parser.y"
                                             { yyval = yyvsp[-1]->adopt_as(TOK_PARAM, yyvsp[0]); }
#line 2057 "yyparse.cpp"
    break;

  case 20:
#line 75 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2063 "yyparse.cpp"
    break;

  case 21:
#line 76 "parser.y"
                                             { yyval = yyvsp[0]->set_symbol(TOK_BLOCK); }
#line 2069 "yyparse.cpp"
    break;

  case 22:
#line 79 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2075 "yyparse.cpp"
    break;

  case 23:
#line 80 "parser.y"
                                             { yyval = yyvsp[0]->set_symbol(TOK_BLOCK); }
#line 2081 "yyparse.cpp"
    break;

  case 24:
#line 84 "parser.y"
                                             { yyval = ASTNode::mkopt(TOK_TYPE_ID, {yyvsp[-1], yyvsp[0]});  }
#line 2087 "yyparse.cpp"
    break;

  case 25:
#line 87 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2093 "yyparse.cpp"
    break;

  case 26:
#line 88 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2099 "yyparse.cpp"
    break;

  case 27:
#line 89 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2105 "yyparse.cpp"
    break;

  case 28:
#line 92 "parser.y"
                                          { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2111 "yyparse.cpp"
    break;

  case 29:
#line 95 "parser.y"
                                          { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0]); }
#line 2117 "yyparse.cpp"
    break;

  case 30:
#line 96 "parser.y"
                                          { yyval = yyvsp[0]; }
#line 2123 "yyparse.cpp"
    break;

  case 31:
#line 99 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2129 "yyparse.cpp"
    break;

  case 32:
#line 102 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2135 "yyparse.cpp"
    break;

  case 33:
#line 103 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2141 "yyparse.cpp"
    break;

  case 34:
#line 106 "parser.y"
                                                { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2147 "yyparse.cpp"
    break;

  case 35:
#line 107 "parser.y"
                                                { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2153 "yyparse.cpp"
    break;

  case 36:
#line 108 "parser.y"
                                                { yyval = yyvsp[0]->adopt(yyvsp[-1]); }
#line 2159 "yyparse.cpp"
    break;

  case 37:
#line 109 "parser.y"
                                                { yyval = yyvsp[0]->adopt(yyvsp[-1]); }
#line 2165 "yyparse.cpp"
    break;

  case 38:
#line 112 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2171 "yyparse.cpp"
    break;

  case 39:
#line 115 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2177 "yyparse.cpp"
    break;

  case 40:
#line 116 "parser.y"
                                             { delete yyvsp[0]; yyval = yyvsp[-1]->adopt_as(TOK_CALL, yyvsp[-2]); }
#line 2183 "yyparse.cpp"
    break;

  case 41:
#line 119 "parser.y"
                                             { delete yyvsp[-1]; yyval = yyvsp[-2]->adopt(yyvsp[0]); }
#line 2189 "yyparse.cpp"
    break;

  case 42:
#line 120 "parser.y"
                                             { yyval =yyvsp[-1]->adopt_as(TOK_CALL, {yyvsp[-2], yyvsp[0]}); }
#line 2195 "yyparse.cpp"
    break;

  case 43:
#line 125 "parser.y"
                                    { ASTNode::erase({yyvsp[-5], yyvsp[-3], yyvsp[-1]}); 
                                      yyval = yyvsp[-6]->adopt({yyvsp[-4], yyvsp[-2], yyvsp[0]});
                                    }
#line 2203 "yyparse.cpp"
    break;

  case 44:
#line 130 "parser.y"
                                    { delete yyvsp[-3]; delete yyvsp[-1]; 
                                      yyval = yyvsp[-4]->adopt({yyvsp[-2], yyvsp[0]});
                                    }
#line 2211 "yyparse.cpp"
    break;

  case 45:
#line 136 "parser.y"
                                    { delete yyvsp[-3]; delete yyvsp[-1];
                                      yyval = yyvsp[-4]->adopt({yyvsp[-2], yyvsp[0]});
                                    }
#line 2219 "yyparse.cpp"
    break;

  case 46:
#line 142 "parser.y"
                                    { ASTNode::erase({yyvsp[-7], yyvsp[-5], yyvsp[-3], yyvsp[-1]});
                                      yyval = yyvsp[-8]->adopt({yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]});
                                    }
#line 2227 "yyparse.cpp"
    break;

  case 47:
#line 148 "parser.y"
                                    { delete yyvsp[-3]; delete yyvsp[-1];
                                      yyval = yyvsp[-4]->adopt({yyvsp[-2], yyvsp[0]});
                                    }
#line 2235 "yyparse.cpp"
    break;

  case 48:
#line 154 "parser.y"
                                    { delete yyvsp[0]; yyval = yyvsp[-2]-> adopt(yyvsp[-1]); }
#line 2241 "yyparse.cpp"
    break;

  case 49:
#line 157 "parser.y"
                                             {delete yyvsp[-2]; delete yyvsp[0]; yyval = yyvsp[-1]; }
#line 2247 "yyparse.cpp"
    break;

  case 50:
#line 158 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2253 "yyparse.cpp"
    break;

  case 51:
#line 159 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2259 "yyparse.cpp"
    break;

  case 52:
#line 160 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2265 "yyparse.cpp"
    break;

  case 53:
#line 161 "parser.y"
                                             { yyval = yyvsp[-1]->adopt(yyvsp[0]); }
#line 2271 "yyparse.cpp"
    break;

  case 54:
#line 162 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2277 "yyparse.cpp"
    break;

  case 55:
#line 163 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2283 "yyparse.cpp"
    break;

  case 56:
#line 164 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2289 "yyparse.cpp"
    break;

  case 57:
#line 165 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2295 "yyparse.cpp"
    break;

  case 58:
#line 166 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2301 "yyparse.cpp"
    break;

  case 59:
#line 167 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2307 "yyparse.cpp"
    break;

  case 60:
#line 168 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2313 "yyparse.cpp"
    break;

  case 61:
#line 169 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2319 "yyparse.cpp"
    break;

  case 62:
#line 170 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2325 "yyparse.cpp"
    break;

  case 63:
#line 171 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2331 "yyparse.cpp"
    break;

  case 64:
#line 172 "parser.y"
                                             { yyval = yyvsp[-1]->adopt({yyvsp[-2], yyvsp[0]}); }
#line 2337 "yyparse.cpp"
    break;

  case 65:
#line 173 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2343 "yyparse.cpp"
    break;

  case 66:
#line 174 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2349 "yyparse.cpp"
    break;

  case 67:
#line 175 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2355 "yyparse.cpp"
    break;

  case 68:
#line 179 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2361 "yyparse.cpp"
    break;

  case 69:
#line 180 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2367 "yyparse.cpp"
    break;

  case 70:
#line 181 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2373 "yyparse.cpp"
    break;

  case 71:
#line 184 "parser.y"
                                             { yyval = yyvsp[0]; }
#line 2379 "yyparse.cpp"
    break;


#line 2383 "yyparse.cpp"

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
#line 186 "parser.y"


const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}
