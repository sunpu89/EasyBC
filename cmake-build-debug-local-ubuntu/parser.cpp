/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"

	#include <stdio.h>
	#include <stdlib.h>
    #include "preprocessing/ASTNode.h"
	extern FILE *fp;
	extern FILE *yyin;
	extern int yylex();
	extern int yylineno;
	extern void yyerror(const char* s, ...);
	using namespace ASTNode;
        ASTNode::NBlock *programRoot; /* the root node of our program AST:: */

#line 84 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENTIFIER = 3,                /* TIDENTIFIER  */
  YYSYMBOL_TINTEGER = 4,                   /* TINTEGER  */
  YYSYMBOL_TPLUS = 5,                      /* TPLUS  */
  YYSYMBOL_TMINUS = 6,                     /* TMINUS  */
  YYSYMBOL_TDIVIDE = 7,                    /* TDIVIDE  */
  YYSYMBOL_TFFTIMES = 8,                   /* TFFTIMES  */
  YYSYMBOL_TMOD = 9,                       /* TMOD  */
  YYSYMBOL_TAND = 10,                      /* TAND  */
  YYSYMBOL_TOR = 11,                       /* TOR  */
  YYSYMBOL_TXOR = 12,                      /* TXOR  */
  YYSYMBOL_TYUINT = 13,                    /* TYUINT  */
  YYSYMBOL_TYUINT1 = 14,                   /* TYUINT1  */
  YYSYMBOL_TYUINT4 = 15,                   /* TYUINT4  */
  YYSYMBOL_TYUINT6 = 16,                   /* TYUINT6  */
  YYSYMBOL_TYUINT8 = 17,                   /* TYUINT8  */
  YYSYMBOL_TYUINT12 = 18,                  /* TYUINT12  */
  YYSYMBOL_TYUINT16 = 19,                  /* TYUINT16  */
  YYSYMBOL_TYUINT32 = 20,                  /* TYUINT32  */
  YYSYMBOL_TYUINT64 = 21,                  /* TYUINT64  */
  YYSYMBOL_TYUINT128 = 22,                 /* TYUINT128  */
  YYSYMBOL_TYUINT256 = 23,                 /* TYUINT256  */
  YYSYMBOL_TLPAREN = 24,                   /* TLPAREN  */
  YYSYMBOL_TRPAREN = 25,                   /* TRPAREN  */
  YYSYMBOL_TNOT = 26,                      /* TNOT  */
  YYSYMBOL_TLABRACKET = 27,                /* TLABRACKET  */
  YYSYMBOL_TRABRACKET = 28,                /* TRABRACKET  */
  YYSYMBOL_TVIEW = 29,                     /* TVIEW  */
  YYSYMBOL_TTOUINT = 30,                   /* TTOUINT  */
  YYSYMBOL_TRSHIFTL = 31,                  /* TRSHIFTL  */
  YYSYMBOL_TRSHIFTR = 32,                  /* TRSHIFTR  */
  YYSYMBOL_TSHIFTL = 33,                   /* TSHIFTL  */
  YYSYMBOL_TSHIFTR = 34,                   /* TSHIFTR  */
  YYSYMBOL_TLBRACKET = 35,                 /* TLBRACKET  */
  YYSYMBOL_TRBRACKET = 36,                 /* TRBRACKET  */
  YYSYMBOL_TCOMMA = 37,                    /* TCOMMA  */
  YYSYMBOL_TSEMICOLON = 38,                /* TSEMICOLON  */
  YYSYMBOL_TASSIGN = 39,                   /* TASSIGN  */
  YYSYMBOL_TFOR = 40,                      /* TFOR  */
  YYSYMBOL_TFROM = 41,                     /* TFROM  */
  YYSYMBOL_TTO = 42,                       /* TTO  */
  YYSYMBOL_TRETURN = 43,                   /* TRETURN  */
  YYSYMBOL_TLBRACE = 44,                   /* TLBRACE  */
  YYSYMBOL_TRBRACE = 45,                   /* TRBRACE  */
  YYSYMBOL_TRFN = 46,                      /* TRFN  */
  YYSYMBOL_TKEYSCHD = 47,                  /* TKEYSCHD  */
  YYSYMBOL_TSFN = 48,                      /* TSFN  */
  YYSYMBOL_TFN = 49,                       /* TFN  */
  YYSYMBOL_TSBOX = 50,                     /* TSBOX  */
  YYSYMBOL_TPBOX = 51,                     /* TPBOX  */
  YYSYMBOL_TPBOXM = 52,                    /* TPBOXM  */
  YYSYMBOL_TFFM = 53,                      /* TFFM  */
  YYSYMBOL_TCIPHER = 54,                   /* TCIPHER  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_stmts = 57,                     /* stmts  */
  YYSYMBOL_stmt = 58,                      /* stmt  */
  YYSYMBOL_block = 59,                     /* block  */
  YYSYMBOL_primary_typename = 60,          /* primary_typename  */
  YYSYMBOL_pbox_base = 61,                 /* pbox_base  */
  YYSYMBOL_pbox_type = 62,                 /* pbox_type  */
  YYSYMBOL_array_typename1 = 63,           /* array_typename1  */
  YYSYMBOL_array_typename2 = 64,           /* array_typename2  */
  YYSYMBOL_typename = 65,                  /* typename  */
  YYSYMBOL_var_decl = 66,                  /* var_decl  */
  YYSYMBOL_box_decl = 67,                  /* box_decl  */
  YYSYMBOL_func_decl = 68,                 /* func_decl  */
  YYSYMBOL_func_decl_args = 69,            /* func_decl_args  */
  YYSYMBOL_r_func_decl = 70,               /* r_func_decl  */
  YYSYMBOL_k_schd_decl = 71,               /* k_schd_decl  */
  YYSYMBOL_s_func_decl = 72,               /* s_func_decl  */
  YYSYMBOL_c_func_decl = 73,               /* c_func_decl  */
  YYSYMBOL_ident = 74,                     /* ident  */
  YYSYMBOL_numeric = 75,                   /* numeric  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_array_index = 77,               /* array_index  */
  YYSYMBOL_assign = 78,                    /* assign  */
  YYSYMBOL_view_array = 79,                /* view_array  */
  YYSYMBOL_touint = 80,                    /* touint  */
  YYSYMBOL_call_args = 81,                 /* call_args  */
  YYSYMBOL_num_list1 = 82,                 /* num_list1  */
  YYSYMBOL_num_list2 = 83,                 /* num_list2  */
  YYSYMBOL_for_stmt = 84                   /* for_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    81,    82,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,   100,   101,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   119,   123,
     133,   141,   150,   151,   155,   156,   157,   164,   167,   170,
     173,   179,   189,   190,   191,   195,   210,   221,   232,   245,
     249,   253,   254,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   281,   285,   292,   295,   298,   302,
     311,   312,   316,   317,   318,   322,   323,   324,   328,   329,
     330,   334
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENTIFIER",
  "TINTEGER", "TPLUS", "TMINUS", "TDIVIDE", "TFFTIMES", "TMOD", "TAND",
  "TOR", "TXOR", "TYUINT", "TYUINT1", "TYUINT4", "TYUINT6", "TYUINT8",
  "TYUINT12", "TYUINT16", "TYUINT32", "TYUINT64", "TYUINT128", "TYUINT256",
  "TLPAREN", "TRPAREN", "TNOT", "TLABRACKET", "TRABRACKET", "TVIEW",
  "TTOUINT", "TRSHIFTL", "TRSHIFTR", "TSHIFTL", "TSHIFTR", "TLBRACKET",
  "TRBRACKET", "TCOMMA", "TSEMICOLON", "TASSIGN", "TFOR", "TFROM", "TTO",
  "TRETURN", "TLBRACE", "TRBRACE", "TRFN", "TKEYSCHD", "TSFN", "TFN",
  "TSBOX", "TPBOX", "TPBOXM", "TFFM", "TCIPHER", "$accept", "program",
  "stmts", "stmt", "block", "primary_typename", "pbox_base", "pbox_type",
  "array_typename1", "array_typename2", "typename", "var_decl", "box_decl",
  "func_decl", "func_decl_args", "r_func_decl", "k_schd_decl",
  "s_func_decl", "c_func_decl", "ident", "numeric", "expr", "array_index",
  "assign", "view_array", "touint", "call_args", "num_list1", "num_list2",
  "for_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     305,  -183,  -183,    89,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,    89,    89,    -7,    -5,    22,    89,
     142,   142,   142,   142,   142,    34,   142,   142,    50,    56,
     305,  -183,    33,  -183,    67,    47,    62,  -183,  -183,  -183,
    -183,  -183,    24,  -183,   266,   -21,  -183,  -183,  -183,  -183,
     136,   355,    51,    67,    89,    67,   364,    67,    67,    67,
      67,    33,    67,  -183,    61,    67,    79,    67,    67,  -183,
    -183,  -183,    89,    -2,  -183,  -183,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,  -183,    89,    89,    89,  -183,    65,   -15,   559,
     -14,    75,  -183,    93,   106,   110,   116,   102,    89,   103,
      89,   104,   108,   399,   142,   122,   -12,   408,   417,   559,
     136,   136,   136,   136,   136,   136,   136,   136,    51,    51,
      51,    51,   559,   452,   559,    89,  -183,  -183,    89,   146,
     142,   142,   142,   142,   109,   461,   127,   470,   128,   129,
    -183,    67,  -183,    18,    89,   559,  -183,  -183,  -183,  -183,
     505,   559,   112,    67,    67,    67,    67,   146,  -183,   146,
     139,   133,   133,   141,   134,   142,     5,    89,   146,   144,
     157,   161,   150,  -183,    15,    20,    89,   146,    21,    52,
      58,  -183,  -183,  -183,   515,   164,   142,   134,   134,   142,
     146,  -183,  -183,   550,    54,   147,  -183,  -183,  -183,   240,
    -183,   134,    67,  -183,  -183,    67,  -183,  -183,  -183,   146,
    -183,  -183,   153,   167,    90,   142,   134,  -183,    67,  -183,
     168,   134,  -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    49,    50,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,    32,    33,     0,     0,     0,     5,     6,     7,
       8,     9,    53,    54,     0,    70,    51,    71,    72,    12,
      68,     0,    67,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,    15,
       1,     4,     0,    34,    13,    14,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    69,     0,    53,    83,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,    76,
      55,    56,    58,    57,    63,    64,    66,    65,    61,    62,
      59,    60,    78,     0,    77,     0,    81,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    43,     0,    82,    35,    52,    73,    74,    75,
       0,    84,     0,     0,     0,     0,     0,    85,    29,    85,
       0,    88,    88,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,    85,     0,     0,
       0,    41,    44,    36,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,     0,    39,    40,    17,     0,
      79,     0,     0,    46,    47,     0,    87,    31,    89,    85,
      16,    91,     0,     0,     0,     0,     0,    90,     0,    48,
       0,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,     4,   -26,  -182,   105,  -183,  -183,   171,   169,
     -20,  -106,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   -27,
    -133,   130,  -183,  -183,  -183,  -183,   -71,  -148,    25,  -183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    29,    30,    31,   191,    32,    64,    65,    33,    67,
      34,    35,    36,    37,   153,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   100,   184,   188,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    58,    59,    60,    71,   116,   162,    73,   152,    76,
     136,   137,    77,   156,    94,   213,   214,    53,    95,    54,
      78,   185,   114,   138,    79,   138,    97,    98,   101,   221,
     103,   104,   105,   106,   183,   107,   183,   115,   109,   204,
     111,   112,   138,   174,   229,   195,    55,    63,    76,   232,
     193,    77,   200,    69,   183,   175,    70,   200,   205,    78,
     201,     1,     2,    79,     3,   202,   206,   216,    72,   192,
       1,   224,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   176,    15,    74,   183,    16,    17,   205,
      93,   200,     1,     2,   151,     3,   108,   207,    18,   218,
      75,    19,   135,   208,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    14,   110,    15,   139,   140,    16,    17,
     163,   164,   165,   166,   173,     1,     2,   200,     3,    61,
     141,    66,    66,    50,   142,   227,   179,   180,   181,   182,
     143,   144,   146,   148,    51,    52,    14,   149,    15,    56,
       2,    16,    17,   167,   178,   151,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   154,    88,    89,    90,
      91,   169,   171,   172,   186,    93,   212,   187,   190,   215,
     115,   196,   197,    71,    99,   222,   198,   199,   223,   211,
     225,   219,   226,   231,   209,    62,    68,   189,     0,     0,
       0,   230,   113,     0,     0,   228,    99,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
     147,     0,     0,     1,     2,   155,     3,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   160,    15,     0,   161,    16,
      17,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      18,     0,     0,    19,    99,   220,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    88,    89,    90,
      91,     0,     0,     0,    92,    93,     0,   194,     1,     2,
       0,     3,     0,     0,     0,     0,   203,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    15,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      80,    81,    82,    83,    84,    85,    86,    87,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
      96,     0,     0,     0,     0,     0,    88,    89,    90,    91,
       0,     0,     0,     0,    93,    88,    89,    90,    91,     0,
       0,     0,   102,    93,    80,    81,    82,    83,    84,    85,
      86,    87,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,   150,   157,     0,    93,    88,
      89,    90,    91,     0,     0,     0,     0,    93,    88,    89,
      90,    91,     0,   158,     0,     0,    93,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    80,    81,    82,    83,
      84,    85,    86,    87,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     0,   159,     0,
       0,    93,    88,    89,    90,    91,     0,   168,     0,     0,
      93,    88,    89,    90,    91,     0,   170,     0,     0,    93,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
     210,     0,   177,     0,    93,     0,    88,    89,    90,    91,
       0,     0,     0,     0,    93,    80,    81,    82,    83,    84,
      85,    86,    87,     0,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,     0,   217,     0,     0,    93,
      88,    89,    90,    91,     0,     0,     0,     0,    93
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    30,    76,   139,    34,   114,    24,
      25,    25,    27,    25,    35,   197,   198,    24,    39,    24,
      35,   169,    24,    37,    39,    37,    53,    54,    55,   211,
      57,    58,    59,    60,   167,    62,   169,    39,    65,   187,
      67,    68,    37,    25,   226,   178,    24,    13,    24,   231,
      45,    27,    37,     3,   187,    37,     0,    37,    37,    35,
      45,     3,     4,    39,     6,    45,    45,   200,    35,   175,
       3,   219,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   154,    26,    38,   219,    29,    30,    37,
      39,    37,     3,     4,   114,     6,    35,    45,    40,    45,
      38,    43,    37,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    24,    35,    26,    41,    24,    29,    30,
     140,   141,   142,   143,   151,     3,     4,    37,     6,    24,
      24,    26,    27,     3,    24,    45,   163,   164,   165,   166,
      24,    39,    39,    39,    14,    15,    24,    39,    26,    19,
       4,    29,    30,    44,    42,   175,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    44,    31,    32,    33,
      34,    44,    44,    44,    35,    39,   196,    44,    44,   199,
      39,    37,    25,   209,    54,   212,    25,    37,   215,    25,
      37,    44,    25,    25,   190,    24,    27,   172,    -1,    -1,
      -1,   228,    72,    -1,    -1,   225,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,    -1,    -1,     3,     4,   115,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   135,    26,    -1,   138,    29,
      30,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      40,    -1,    -1,    43,   154,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    38,    39,    -1,   177,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,   186,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    39,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      31,    32,    33,    34,    -1,    36,    28,    -1,    39,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    39,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    39,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      39,    31,    32,    33,    34,    -1,    36,    -1,    -1,    39,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      25,    -1,    37,    -1,    39,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    -1,    -1,    39,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    26,    29,    30,    40,    43,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    56,
      57,    58,    60,    63,    65,    66,    67,    68,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    84,
      76,    76,    76,    24,    24,    24,    76,    65,    65,    65,
      65,    60,    63,    13,    61,    62,    60,    64,    64,     3,
       0,    58,    35,    74,    38,    38,    24,    27,    35,    39,
       5,     6,     7,     8,     9,    10,    11,    12,    31,    32,
      33,    34,    38,    39,    35,    39,    25,    74,    74,    76,
      81,    74,    38,    74,    74,    74,    74,    74,    35,    74,
      35,    74,    74,    76,    24,    39,    81,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    37,    25,    25,    37,    41,
      24,    24,    24,    24,    39,    76,    39,    76,    39,    39,
      36,    65,    66,    69,    44,    76,    25,    28,    36,    36,
      76,    76,    75,    65,    65,    65,    65,    44,    36,    44,
      36,    44,    44,    74,    25,    37,    81,    37,    42,    74,
      74,    74,    74,    75,    82,    82,    35,    44,    83,    83,
      44,    59,    66,    45,    76,    75,    37,    25,    25,    37,
      37,    45,    45,    76,    82,    37,    45,    45,    45,    57,
      25,    25,    65,    59,    59,    65,    75,    36,    45,    44,
      45,    59,    74,    74,    82,    37,    25,    45,    65,    59,
      74,    25,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    62,
      63,    64,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    68,    69,    69,    69,    70,    71,    72,    73,    74,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    78,    79,
      80,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     2,     2,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     7,     1,     1,     2,     4,     6,     7,     7,     7,
       7,     6,     0,     1,     3,    14,     8,     8,    11,     1,
       1,     1,     4,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     4,     4,     4,     3,     3,     3,     8,
       4,     4,     0,     1,     3,     0,     1,     3,     0,     3,
       5,     9
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmts  */
#line 77 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                {programRoot = (yyvsp[0].block);}
#line 1493 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 3: /* stmts: stmt  */
#line 81 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.block) = new NBlock(); (yyval.block)->getStmtList()->push_back(std::shared_ptr<NStatement>((yyvsp[0].stmt)));}
#line 1499 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 4: /* stmts: stmts stmt  */
#line 82 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                     { (yyvsp[-1].block)->getStmtList()->push_back(std::shared_ptr<NStatement>((yyvsp[0].stmt)));}
#line 1505 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 5: /* stmt: func_decl  */
#line 86 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                    {(yyval.stmt) = (yyvsp[0].fundecl);}
#line 1511 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 6: /* stmt: r_func_decl  */
#line 87 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.stmt) = (yyvsp[0].rfundecl);}
#line 1517 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 7: /* stmt: k_schd_decl  */
#line 88 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.stmt) = (yyvsp[0].kschddecl);}
#line 1523 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 8: /* stmt: s_func_decl  */
#line 89 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.stmt) = (yyvsp[0].sfundecl);}
#line 1529 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 9: /* stmt: c_func_decl  */
#line 90 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.stmt) = (yyvsp[0].cfundecl);}
#line 1535 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 10: /* stmt: expr TSEMICOLON  */
#line 91 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                          {(yyval.stmt) = new NExpressionStatement(std::shared_ptr<NExpression>((yyvsp[-1].expr)));}
#line 1541 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 11: /* stmt: TRETURN expr TSEMICOLON  */
#line 92 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                  {(yyval.stmt) = new NReturnStatement(std::shared_ptr<NExpression>((yyvsp[-1].expr)));}
#line 1547 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 12: /* stmt: for_stmt  */
#line 93 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                  {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1553 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 13: /* stmt: var_decl TSEMICOLON  */
#line 94 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {(yyval.stmt) = (yyvsp[-1].stmt);}
#line 1559 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 14: /* stmt: box_decl TSEMICOLON  */
#line 95 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {(yyval.stmt) = (yyvsp[-1].stmt);}
#line 1565 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 15: /* stmt: TCIPHER TIDENTIFIER  */
#line 96 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                          {(yyval.stmt) = new NCipherNameDeclaration(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1571 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 16: /* block: TLBRACE stmts TRBRACE  */
#line 100 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                {(yyval.block) = (yyvsp[-1].block);}
#line 1577 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 17: /* block: TLBRACE TRBRACE  */
#line 101 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                          {(yyval.block) = new NBlock();}
#line 1583 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 18: /* primary_typename: TYUINT1  */
#line 105 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
              {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1589 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 19: /* primary_typename: TYUINT4  */
#line 106 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
              {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1595 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 20: /* primary_typename: TYUINT6  */
#line 107 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
              {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1601 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 21: /* primary_typename: TYUINT8  */
#line 108 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
              {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1607 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 22: /* primary_typename: TYUINT12  */
#line 109 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1613 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 23: /* primary_typename: TYUINT16  */
#line 110 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1619 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 24: /* primary_typename: TYUINT32  */
#line 111 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1625 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 25: /* primary_typename: TYUINT64  */
#line 112 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1631 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 26: /* primary_typename: TYUINT128  */
#line 113 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1637 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 27: /* primary_typename: TYUINT256  */
#line 114 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1643 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 28: /* pbox_base: TYUINT  */
#line 119 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
             {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); (yyval.ident)->isType = true;  delete (yyvsp[0].string);}
#line 1649 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 29: /* pbox_type: pbox_base TLBRACKET expr TRBRACKET  */
#line 123 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                         {
       (yyvsp[-3].ident)->isArray = true;
       (yyvsp[-3].ident)->arraySize->push_back(std::shared_ptr<NExpression>((yyvsp[-1].expr)));
       (yyval.ident) = (yyvsp[-3].ident);
    }
#line 1659 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 30: /* array_typename1: primary_typename TLBRACKET expr TRBRACKET  */
#line 133 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                {
        (yyvsp[-3].ident)->isArray = true;
        (yyvsp[-3].ident)->arraySize->push_back(std::shared_ptr<NExpression>((yyvsp[-1].expr)));
        (yyval.ident) = (yyvsp[-3].ident);
    }
#line 1669 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 31: /* array_typename2: primary_typename TLBRACKET expr TRBRACKET TLBRACKET expr TRBRACKET  */
#line 141 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                         {
        (yyvsp[-6].ident)->isArray = true;
        (yyvsp[-6].ident)->arraySize->push_back(std::shared_ptr<NExpression>((yyvsp[-4].expr)));
        (yyvsp[-6].ident)->arraySize->push_back(std::shared_ptr<NExpression>((yyvsp[-1].expr)));
        (yyval.ident) = (yyvsp[-6].ident);
    }
#line 1680 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 34: /* var_decl: typename ident  */
#line 155 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                         {(yyval.stmt) = new NVariableDeclaration(std::shared_ptr<NIdentifier>((yyvsp[-1].ident)), std::shared_ptr<NIdentifier>((yyvsp[0].ident)), nullptr); }
#line 1686 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 35: /* var_decl: typename ident TASSIGN expr  */
#line 156 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                      { (yyval.stmt) = new NVariableDeclaration(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1692 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 36: /* var_decl: typename ident TASSIGN TLBRACE call_args TRBRACE  */
#line 157 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                           {
		 (yyval.stmt) = new NArrayInitialization(std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), std::shared_ptr<NIdentifier>((yyvsp[-4].ident)), nullptr), std::shared_ptr<NExpressionList>((yyvsp[-1].exprvec)));
	}
#line 1700 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 37: /* box_decl: TSBOX array_typename1 ident TASSIGN TLBRACE num_list1 TRBRACE  */
#line 164 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                    {
         (yyval.stmt) = new NSboxInitialization(std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), std::shared_ptr<NIdentifier>((yyvsp[-4].ident)), nullptr), std::shared_ptr<NIntegerList>((yyvsp[-1].intvec)));
    }
#line 1708 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 38: /* box_decl: TPBOX pbox_type ident TASSIGN TLBRACE num_list1 TRBRACE  */
#line 167 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                              {
         (yyval.stmt) = new NPboxInitialization(std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), std::shared_ptr<NIdentifier>((yyvsp[-4].ident)), nullptr), std::shared_ptr<NIntegerList>((yyvsp[-1].intvec)));
    }
#line 1716 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 39: /* box_decl: TPBOXM array_typename2 ident TASSIGN TLBRACE num_list2 TRBRACE  */
#line 170 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                     {
         (yyval.stmt) = new NPboxmInitialization(std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), std::shared_ptr<NIdentifier>((yyvsp[-4].ident)), nullptr), std::shared_ptr<NIntegerListList>((yyvsp[-1].intvecvec)));
    }
#line 1724 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 40: /* box_decl: TFFM array_typename2 ident TASSIGN TLBRACE num_list2 TRBRACE  */
#line 173 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                   {
         (yyval.stmt) = new NFfmInitialization(std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), std::shared_ptr<NIdentifier>((yyvsp[-4].ident)), nullptr), std::shared_ptr<NIntegerListList>((yyvsp[-1].intvecvec)));
    }
#line 1732 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 41: /* func_decl: typename ident TLPAREN func_decl_args TRPAREN block  */
#line 179 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                              {
		(yyval.fundecl) = new NFunctionDeclaration(
			std::shared_ptr<NIdentifier>((yyvsp[-5].ident)),
			std::shared_ptr<NIdentifier>((yyvsp[-4].ident)),
			std::shared_ptr<NVariableList>((yyvsp[-2].varlist)),
			std::shared_ptr<NBlock>((yyvsp[0].block)));
	}
#line 1744 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 42: /* func_decl_args: %empty  */
#line 189 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
          {(yyval.varlist) = new NVariableList(); }
#line 1750 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 43: /* func_decl_args: var_decl  */
#line 190 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                   {(yyval.varlist) = new NVariableList(); (yyvsp[0].var_decl)->isParameter = true; (yyval.varlist)->push_back(std::shared_ptr<NVariableDeclaration>((yyvsp[0].var_decl)));}
#line 1756 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 44: /* func_decl_args: func_decl_args TCOMMA var_decl  */
#line 191 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                         {(yyvsp[0].var_decl)->isParameter = true; (yyvsp[-2].varlist)->push_back(std::shared_ptr<NVariableDeclaration>((yyvsp[0].var_decl)));}
#line 1762 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 45: /* r_func_decl: TRFN typename ident TLPAREN typename ident TCOMMA typename ident TCOMMA typename ident TRPAREN block  */
#line 195 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                                                           {
        (yyvsp[-8].ident)->isParameter = true;
        (yyvsp[-5].ident)->isParameter = true;
        (yyvsp[-2].ident)->isParameter = true;
        (yyval.rfundecl) = new NRoundFunctionDeclaration(
            std::shared_ptr<NIdentifier>((yyvsp[-12].ident)),
            std::shared_ptr<NIdentifier>((yyvsp[-11].ident)),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-9].ident)), std::shared_ptr<NIdentifier>((yyvsp[-8].ident)), nullptr),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-6].ident)), std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), nullptr),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), nullptr),
            std::shared_ptr<NBlock>((yyvsp[0].block)));
    }
#line 1779 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 46: /* k_schd_decl: TKEYSCHD typename ident TLPAREN typename ident TRPAREN block  */
#line 210 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                   {
        (yyvsp[-2].ident)->isParameter = true;
        (yyval.kschddecl) = new NKeyScheduleDeclaration(
            std::shared_ptr<NIdentifier>((yyvsp[-6].ident)),
            std::shared_ptr<NIdentifier>((yyvsp[-5].ident)),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), nullptr),
            std::shared_ptr<NBlock>((yyvsp[0].block)));
    }
#line 1792 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 47: /* s_func_decl: TSFN typename ident TLPAREN typename ident TRPAREN block  */
#line 221 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                               {
        (yyvsp[-2].ident)->isParameter = true;
        (yyval.sfundecl) = new NSboxFunctionDeclaration(
            std::shared_ptr<NIdentifier>((yyvsp[-6].ident)),
            std::shared_ptr<NIdentifier>((yyvsp[-5].ident)),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), nullptr),
            std::shared_ptr<NBlock>((yyvsp[0].block)));
    }
#line 1805 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 48: /* c_func_decl: TFN typename ident TLPAREN typename ident TCOMMA typename ident TRPAREN block  */
#line 232 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                                    {
        (yyvsp[-5].ident)->isParameter = true;
        (yyvsp[-2].ident)->isParameter = true;
        (yyval.cfundecl) = new NCipherFunctionDeclaration(
            std::shared_ptr<NIdentifier>((yyvsp[-9].ident)),
            std::shared_ptr<NIdentifier>((yyvsp[-8].ident)),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-6].ident)), std::shared_ptr<NIdentifier>((yyvsp[-5].ident)), nullptr),
            std::make_shared<NVariableDeclaration>(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), nullptr),
            std::shared_ptr<NBlock>((yyvsp[0].block)));
    }
#line 1820 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 49: /* ident: TIDENTIFIER  */
#line 245 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.ident) = new NIdentifier(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1826 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 50: /* numeric: TINTEGER  */
#line 249 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                   {(yyval.integer) = new NInteger(atol((yyvsp[0].string)->c_str()));}
#line 1832 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 51: /* expr: assign  */
#line 253 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                 { (yyval.expr) = (yyvsp[0].expr);}
#line 1838 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 52: /* expr: ident TLPAREN call_args TRPAREN  */
#line 254 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                          {
		(yyval.expr) = new NFunctionCall(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NExpressionList>((yyvsp[-1].exprvec)), yylineno);
	}
#line 1846 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 53: /* expr: ident  */
#line 257 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                {(yyval.ident) = (yyvsp[0].ident);}
#line 1852 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 54: /* expr: numeric  */
#line 258 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                  {(yyval.expr) = (yyvsp[0].integer);}
#line 1858 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 55: /* expr: expr TPLUS expr  */
#line 259 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                          {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::ADD, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1864 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 56: /* expr: expr TMINUS expr  */
#line 260 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                           {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::MINUS, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1870 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 57: /* expr: expr TFFTIMES expr  */
#line 261 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::FFTIMES, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1876 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 58: /* expr: expr TDIVIDE expr  */
#line 262 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                            {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::DIVIDE, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1882 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 59: /* expr: expr TSHIFTL expr  */
#line 263 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                            {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::LSH, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1888 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 60: /* expr: expr TSHIFTR expr  */
#line 264 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                            {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::RSH, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1894 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 61: /* expr: expr TRSHIFTL expr  */
#line 265 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::RLSH, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1900 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 62: /* expr: expr TRSHIFTR expr  */
#line 266 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::RRSH, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1906 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 63: /* expr: expr TMOD expr  */
#line 267 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                         {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::MOD, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1912 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 64: /* expr: expr TAND expr  */
#line 268 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                         {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::AND, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1918 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 65: /* expr: expr TXOR expr  */
#line 269 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                         {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::XOR, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1924 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 66: /* expr: expr TOR expr  */
#line 270 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                        {(yyval.expr) = new NBinaryOperator(std::shared_ptr<NExpression>((yyvsp[-2].expr)), Operator::OR, std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 1930 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 67: /* expr: TNOT expr  */
#line 271 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                    {(yyval.expr) = new NUnaryOperator(std::shared_ptr<NExpression>((yyvsp[0].expr)), Operator::NOT); }
#line 1936 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 68: /* expr: TMINUS expr  */
#line 272 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      {(yyval.expr) = new NUnaryOperator(std::shared_ptr<NExpression>((yyvsp[0].expr)), Operator::MINUS); }
#line 1942 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 69: /* expr: TLPAREN expr TRPAREN  */
#line 273 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                               {(yyval.expr) = (yyvsp[-1].expr);}
#line 1948 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 70: /* expr: array_index  */
#line 274 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                      { (yyval.expr) = (yyvsp[0].index); }
#line 1954 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 71: /* expr: view_array  */
#line 275 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 1960 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 72: /* expr: touint  */
#line 276 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
             { (yyval.expr) = (yyvsp[0].expr); }
#line 1966 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 73: /* expr: ident TLABRACKET expr TRABRACKET  */
#line 277 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                       {(yyval.expr) = new NBoxOperation(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)), std::shared_ptr<NExpression>((yyvsp[-1].expr))); }
#line 1972 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 74: /* array_index: ident TLBRACKET expr TRBRACKET  */
#line 281 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                         {
		(yyval.index) = new NArrayIndex(std::shared_ptr<NIdentifier>((yyvsp[-3].ident)));
		(yyval.index)->dimons->push_back(std::shared_ptr<NExpression>((yyvsp[-1].expr)));
	}
#line 1981 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 75: /* array_index: array_index TLBRACKET expr TRBRACKET  */
#line 285 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                               {
		(yyvsp[-3].index)->dimons->push_back(std::shared_ptr<NExpression>((yyvsp[-1].expr)));
		(yyval.index) = (yyvsp[-3].index);
	}
#line 1990 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 76: /* assign: ident TASSIGN expr  */
#line 292 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                             {
		(yyval.expr) = new NAssignment(std::shared_ptr<NIdentifier>((yyvsp[-2].ident)), std::shared_ptr<NExpression>((yyvsp[0].expr)));
	}
#line 1998 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 77: /* assign: array_index TASSIGN expr  */
#line 295 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                   {
		(yyval.expr) = new NArrayAssignment(std::shared_ptr<NArrayIndex>((yyvsp[-2].index)), std::shared_ptr<NExpression>((yyvsp[0].expr)));
	}
#line 2006 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 79: /* view_array: TVIEW TLPAREN ident TCOMMA expr TCOMMA expr TRPAREN  */
#line 302 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                          {
        (yyval.expr) = new NViewArray(
            std::shared_ptr<NIdentifier>((yyvsp[-5].ident)),
            std::shared_ptr<NExpression>((yyvsp[-3].expr)),
            std::shared_ptr<NExpression>((yyvsp[-1].expr)));
    }
#line 2017 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 80: /* touint: TTOUINT TLPAREN call_args TRPAREN  */
#line 311 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                        {(yyval.expr) = new NToUint(std::shared_ptr<NExpressionList>((yyvsp[-1].exprvec)));}
#line 2023 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 81: /* touint: TTOUINT TLPAREN ident TRPAREN  */
#line 312 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                    {(yyval.expr) = new NToUint(std::shared_ptr<NIdentifier>((yyvsp[-1].ident)));}
#line 2029 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 82: /* call_args: %empty  */
#line 316 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
          {(yyval.exprvec) = new NExpressionList();}
#line 2035 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 83: /* call_args: expr  */
#line 317 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
               {(yyval.exprvec) = new NExpressionList(); (yyval.exprvec)->push_back(std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 2041 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 84: /* call_args: call_args TCOMMA expr  */
#line 318 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                {(yyvsp[-2].exprvec)->push_back(std::shared_ptr<NExpression>((yyvsp[0].expr)));}
#line 2047 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 85: /* num_list1: %empty  */
#line 322 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
      {(yyval.intvec) = new NIntegerList;}
#line 2053 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 86: /* num_list1: numeric  */
#line 323 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
              {(yyval.intvec) = new NIntegerList(); (yyval.intvec)->push_back(std::shared_ptr<NInteger>((yyvsp[0].integer)));}
#line 2059 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 87: /* num_list1: num_list1 TCOMMA numeric  */
#line 324 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                               {(yyvsp[-2].intvec)->push_back(std::shared_ptr<NInteger>((yyvsp[0].integer)));}
#line 2065 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 88: /* num_list2: %empty  */
#line 328 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
      {(yyval.intvecvec) = new NIntegerListList;}
#line 2071 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 89: /* num_list2: TLBRACE num_list1 TRBRACE  */
#line 329 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                    {(yyval.intvecvec) = new NIntegerListList(); (yyval.intvecvec)->push_back(std::shared_ptr<NIntegerList>((yyvsp[-1].intvec)));}
#line 2077 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 90: /* num_list2: num_list2 TCOMMA TLBRACE num_list1 TRBRACE  */
#line 330 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                     {(yyvsp[-4].intvecvec)->push_back(std::shared_ptr<NIntegerList>((yyvsp[-1].intvec)));}
#line 2083 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;

  case 91: /* for_stmt: TFOR TLPAREN ident TFROM numeric TTO numeric TRPAREN block  */
#line 334 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"
                                                                     {
		(yyval.stmt) = new NForStatement(std::shared_ptr<NIdentifier>((yyvsp[-6].ident)), std::shared_ptr<NInteger>((yyvsp[-4].integer)), std::shared_ptr<NInteger>((yyvsp[-2].integer)), std::shared_ptr<NBlock>((yyvsp[0].block)) );
	}
#line 2091 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"
    break;


#line 2095 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 338 "/home/sunpu/CPP/EasyBC/lib/language/parser.y"

