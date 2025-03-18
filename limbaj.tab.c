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
#line 1 "limbaj.y"

#include <iostream>
#include <vector>
#include <cstring>
#include "SymTable.h"
#include "AST.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* classes;
class SymTable* functions;
class SymTable* temp;
std::string current_function;
int errorCount = 0;
std::string current_struct_type;
char error_message[256];

#line 92 "limbaj.tab.c"

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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_LE = 9,                         /* LE  */
  YYSYMBOL_EQ = 10,                        /* EQ  */
  YYSYMBOL_GE = 11,                        /* GE  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_OR = 13,                        /* OR  */
  YYSYMBOL_PRINT = 14,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 15,                    /* TYPEOF  */
  YYSYMBOL_BGINF = 16,                     /* BGINF  */
  YYSYMBOL_BGINC = 17,                     /* BGINC  */
  YYSYMBOL_BGIND = 18,                     /* BGIND  */
  YYSYMBOL_ENDF = 19,                      /* ENDF  */
  YYSYMBOL_ENDC = 20,                      /* ENDC  */
  YYSYMBOL_ENDD = 21,                      /* ENDD  */
  YYSYMBOL_STRUCT = 22,                    /* STRUCT  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_REAL = 24,                      /* REAL  */
  YYSYMBOL_FAKE = 25,                      /* FAKE  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_ID = 27,                        /* ID  */
  YYSYMBOL_TYPE = 28,                      /* TYPE  */
  YYSYMBOL_STRING = 29,                    /* STRING  */
  YYSYMBOL_CHAR = 30,                      /* CHAR  */
  YYSYMBOL_NRFLOAT = 31,                   /* NRFLOAT  */
  YYSYMBOL_NR = 32,                        /* NR  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '@'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_progr = 49,                     /* progr  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_globals = 51,                   /* globals  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_declarations = 53,              /* declarations  */
  YYSYMBOL_classes = 54,                   /* classes  */
  YYSYMBOL_class_declarations = 55,        /* class_declarations  */
  YYSYMBOL_clas = 56,                      /* clas  */
  YYSYMBOL_57_3 = 57,                      /* $@3  */
  YYSYMBOL_optional_object_decl = 58,      /* optional_object_decl  */
  YYSYMBOL_class_members = 59,             /* class_members  */
  YYSYMBOL_functions = 60,                 /* functions  */
  YYSYMBOL_function_declarations = 61,     /* function_declarations  */
  YYSYMBOL_decl_class = 62,                /* decl_class  */
  YYSYMBOL_func_class = 63,                /* func_class  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_65_5 = 65,                      /* $@5  */
  YYSYMBOL_optional_function_body_class = 66, /* optional_function_body_class  */
  YYSYMBOL_67_6 = 67,                      /* $@6  */
  YYSYMBOL_list_class = 68,                /* list_class  */
  YYSYMBOL_list_param_class = 69,          /* list_param_class  */
  YYSYMBOL_param_class = 70,               /* param_class  */
  YYSYMBOL_func = 71,                      /* func  */
  YYSYMBOL_72_7 = 72,                      /* $@7  */
  YYSYMBOL_73_8 = 73,                      /* $@8  */
  YYSYMBOL_optional_function_body_func = 74, /* optional_function_body_func  */
  YYSYMBOL_75_9 = 75,                      /* $@9  */
  YYSYMBOL_list_func = 76,                 /* list_func  */
  YYSYMBOL_decl = 77,                      /* decl  */
  YYSYMBOL_list_id = 78,                   /* list_id  */
  YYSYMBOL_list_param = 79,                /* list_param  */
  YYSYMBOL_param = 80,                     /* param  */
  YYSYMBOL_main = 81,                      /* main  */
  YYSYMBOL_list = 82,                      /* list  */
  YYSYMBOL_control = 83,                   /* control  */
  YYSYMBOL_84_10 = 84,                     /* $@10  */
  YYSYMBOL_85_11 = 85,                     /* $@11  */
  YYSYMBOL_86_12 = 86,                     /* $@12  */
  YYSYMBOL_87_13 = 87,                     /* $@13  */
  YYSYMBOL_88_14 = 88,                     /* $@14  */
  YYSYMBOL_optional_else = 89,             /* optional_else  */
  YYSYMBOL_90_15 = 90,                     /* $@15  */
  YYSYMBOL_for_init = 91,                  /* for_init  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_e = 93,                         /* e  */
  YYSYMBOL_b = 94,                         /* b  */
  YYSYMBOL_reality_check = 95,             /* reality_check  */
  YYSYMBOL_boole = 96,                     /* boole  */
  YYSYMBOL_call_list = 97,                 /* call_list  */
  YYSYMBOL_anye = 98                       /* anye  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      43,    44,    35,    33,    42,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      46,     2,    47,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    37,    55,    55,    66,    67,    70,    73,
      74,    78,    77,    87,   100,   107,   108,   109,   110,   112,
     115,   116,   119,   127,   142,   159,   167,   175,   183,   195,
     204,   194,   216,   216,   217,   219,   220,   221,   222,   223,
     224,   227,   228,   231,   237,   249,   236,   260,   260,   261,
     263,   264,   265,   266,   267,   268,   271,   279,   294,   311,
     319,   327,   335,   345,   346,   348,   349,   352,   358,   362,
     363,   364,   365,   366,   367,   371,   377,   370,   383,   387,
     382,   393,   392,   402,   402,   410,   411,   414,   415,   418,
     496,   575,   583,   593,   605,   615,   625,   641,   657,   667,
     687,   708,   718,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   800,   813,   829,   840,   843,   846,   848,
     850,   852,   853,   854,   855,   858,   859,   861,   864,   867,
     870,   875,   876,   877,   878,   880,   888,   902,   903
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
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "IF", "WHILE", "FOR", "LE", "EQ", "GE", "AND", "OR", "PRINT",
  "TYPEOF", "BGINF", "BGINC", "BGIND", "ENDF", "ENDC", "ENDD", "STRUCT",
  "RETURN", "REAL", "FAKE", "ELSE", "ID", "TYPE", "STRING", "CHAR",
  "NRFLOAT", "NR", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'", "';'", "'['",
  "']'", "','", "'('", "')'", "'@'", "'<'", "'>'", "$accept", "progr",
  "$@1", "globals", "$@2", "declarations", "classes", "class_declarations",
  "clas", "$@3", "optional_object_decl", "class_members", "functions",
  "function_declarations", "decl_class", "func_class", "$@4", "$@5",
  "optional_function_body_class", "$@6", "list_class", "list_param_class",
  "param_class", "func", "$@7", "$@8", "optional_function_body_func",
  "$@9", "list_func", "decl", "list_id", "list_param", "param", "main",
  "list", "control", "$@10", "$@11", "$@12", "$@13", "$@14",
  "optional_else", "$@15", "for_init", "statement", "e", "b",
  "reality_check", "boole", "call_list", "anye", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-127)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,    -4,    42,    49,    51,   159,  -223,  -223,  -223,    72,
      60,  -223,  -223,     0,    86,  -223,  -223,    91,    94,    -5,
    -223,   113,    -2,  -223,   144,   106,   160,    -3,  -223,  -223,
     156,  -223,  -223,   341,  -223,   149,   179,   171,   106,   106,
     176,   346,  -223,   186,   195,  -223,   182,   193,   211,   216,
     226,   346,     6,  -223,   331,  -223,   191,   265,   102,   256,
    -223,  -223,   346,   277,   279,   140,  -223,  -223,  -223,  -223,
     346,    70,  -223,   280,   107,   257,    69,  -223,   269,   346,
     346,  -223,   346,   346,   271,   145,  -223,   346,   278,   346,
     274,  -223,  -223,  -223,   270,  -223,   287,   346,  -223,   282,
     195,  -223,   283,  -223,   271,   145,   -17,   293,   346,   302,
     120,     1,    96,   355,    96,    96,    96,    96,    96,  -223,
      96,    96,    96,   346,   346,  -223,     4,  -223,   195,   303,
     142,  -223,   271,    19,    22,   187,   126,    43,   232,    71,
     271,   145,   290,   154,    10,  -223,   346,   238,   136,   291,
    -223,   305,  -223,   295,   346,   301,   202,  -223,  -223,  -223,
      96,   198,  -223,  -223,   198,  -223,   198,   133,   133,  -223,
    -223,   198,   198,   198,  -223,   332,   306,  -223,  -223,  -223,
     269,  -223,   315,   316,  -223,   346,   311,  -223,  -223,  -223,
    -223,   352,  -223,   346,   346,    32,  -223,  -223,    15,   333,
     213,  -223,  -223,   271,   145,  -223,  -223,   217,   346,  -223,
     221,  -223,  -223,   138,  -223,   346,   271,   145,   220,   322,
     325,  -223,  -223,   305,  -223,    35,  -223,  -223,  -223,   341,
     341,   197,   271,   145,  -223,  -223,   346,  -223,   249,   324,
     341,   341,   341,     7,   321,    47,  -223,  -223,  -223,  -223,
     285,  -223,  -223,   327,   329,   334,   337,   342,   341,  -223,
    -223,  -223,   344,  -223,   362,  -223,   341,  -223,   353,   341,
     354,   356,   351,  -223,   180,  -223,   288,  -223,   357,   358,
     360,   359,  -223,   361,  -223,   363,   341,  -223,   313,  -223
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     9,     1,     4,     0,
       0,     8,    10,     0,     0,     2,    11,     0,     0,     0,
       6,     0,     0,    20,     0,     0,     0,     0,     5,     7,
       0,    19,    21,     0,     3,     0,     0,     0,    15,    16,
       0,     0,    56,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    71,     0,    70,     0,     0,     0,    14,
      18,    17,   135,   123,   124,   112,   108,   109,   111,   110,
       0,     0,   129,     0,     0,     0,     0,    60,     0,     0,
       0,    81,     0,     0,   138,   137,   102,     0,     0,   135,
       0,    68,    74,    73,     0,    69,     0,     0,    22,     0,
       0,    29,     0,    12,   131,   132,     0,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,    57,     0,    64,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,     0,    98,    72,   135,     0,     0,     0,
      26,     0,    13,     0,   136,     0,     0,   114,   107,   130,
       0,   119,   125,   126,   118,   121,   120,   103,   105,   104,
     106,   116,   117,   122,   128,   127,     0,    61,    63,    67,
       0,    45,     0,     0,    88,     0,     0,    93,    92,    95,
      94,     0,    91,     0,   135,     0,    24,    23,     0,     0,
       0,    41,    62,   134,   133,   115,   113,     0,   135,    66,
       0,    75,    78,     0,    87,     0,    99,   100,     0,     0,
       0,    27,    43,     0,    30,     0,    47,    49,    46,     0,
       0,     0,    96,    97,   101,    28,   135,    42,     0,     0,
       0,    76,    79,     0,     0,     0,    32,    34,    31,    59,
       0,    52,    51,     0,     0,     0,     0,     0,     0,    48,
      55,    54,     0,    50,    86,    80,     0,    25,     0,     0,
      52,    51,     0,    53,     0,    77,     0,    33,    55,    54,
       0,    50,    83,     0,    82,    53,     0,    85,     0,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   388,  -223,
    -223,   201,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   181,   380,  -223,  -223,  -223,  -223,   147,   -13,
     -90,  -223,   223,  -223,  -222,   -50,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   -53,   -22,  -223,   294,   -11,   -84,
    -223
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,     9,    13,    19,     3,     5,     6,    25,
     103,    37,    15,    22,    38,    39,   151,   238,   248,   258,
     268,   200,   201,    23,    78,   210,   228,   240,   250,    53,
      77,   130,   131,    34,    54,    55,   229,   254,   230,   255,
     135,   275,   286,   185,    56,   104,    72,    73,   105,   106,
      86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    94,    41,     1,    93,   143,    29,   241,   242,   176,
     150,    87,    87,   123,   124,   193,    28,    31,     4,    71,
     220,   153,    17,    18,   156,   154,    21,    17,    18,    84,
      74,   123,   124,    26,   123,   124,    42,    43,   178,    44,
      85,    92,     7,   177,   276,   159,    88,    88,   110,    89,
      89,    90,    90,   194,   221,   123,   124,   132,   132,   111,
     136,   138,   195,   182,   288,   140,   183,     8,   133,   134,
     219,   137,   139,   239,   154,   147,   141,   154,    10,   112,
     113,   114,   186,   123,   124,   257,   148,   188,    14,   154,
     161,   164,   166,   167,   168,   169,   170,    16,   171,   172,
     173,   132,   132,   115,   116,   117,   118,    97,   127,   119,
     218,   128,   174,   175,    21,   190,   120,   121,    26,   123,
     124,    27,   184,    65,   225,    66,    67,    68,    69,   112,
     113,   114,   203,    35,    36,   112,   113,   114,   207,   160,
      30,    98,    99,   204,   100,   101,   125,    33,   123,   124,
     123,   124,   245,   115,   116,   117,   118,   123,   124,   115,
     116,   117,   118,   132,   158,    40,   120,   121,   117,   118,
     187,   216,   120,   121,   213,   197,    57,   231,   244,    11,
     107,     4,   217,   108,   180,   109,   181,   253,    94,    94,
     252,    93,    93,   232,    49,    50,   154,   262,   192,    45,
     261,    49,    50,    51,   233,   272,    58,   243,   271,    59,
      51,    49,    50,    62,    52,    18,   280,   282,    75,   279,
      51,   283,    76,    94,   243,    79,    93,   251,    92,    92,
      95,   115,   116,   117,   118,    94,    80,   260,    93,    60,
      61,   112,   113,   114,   154,   270,   206,   112,   113,   114,
     115,   116,   117,   118,    81,   223,   278,   224,   226,    82,
     227,   158,   154,    92,   234,   115,   116,   117,   118,    83,
      96,   115,   116,   117,   118,    92,   189,   196,   120,   121,
     112,   113,   114,   102,   120,   121,   246,  -125,   247,  -126,
     122,    46,    47,    48,    46,    47,    48,   129,   126,    49,
      50,   144,    49,    50,   115,   116,   117,   118,    51,   145,
     142,    51,    52,    18,   149,    52,    18,   120,   121,    46,
      47,    48,   152,   259,   146,   155,   284,    49,    50,   157,
     179,   191,   198,   199,   202,    91,    51,    46,    47,    48,
      52,    18,   205,   208,   123,    49,    50,    46,    47,    48,
     214,   289,   211,   212,    51,    49,    50,   215,    52,    18,
     222,   235,   236,   249,    51,   256,   263,   264,    52,    18,
      63,    64,   265,    65,   266,    66,    67,    68,    69,   162,
     163,   267,    65,   273,    66,    67,    68,    69,   274,    70,
     281,   277,   -37,    12,   -36,   -40,   -39,   -35,   160,   285,
     287,   -38,    32,   209,   237,   269,     0,   165
};

static const yytype_int16 yycheck[] =
{
      13,    54,     5,    17,    54,    89,    19,   229,   230,     5,
     100,     5,     5,    12,    13,     5,    21,    19,    22,    41,
       5,    38,    27,    28,   108,    42,    28,    27,    28,    51,
      41,    12,    13,    27,    12,    13,    39,    40,   128,    42,
      51,    54,     0,    39,   266,    44,    40,    40,    70,    43,
      43,    45,    45,    43,    39,    12,    13,    79,    80,    70,
      82,    83,   146,    44,   286,    87,    44,    18,    79,    80,
      38,    82,    83,    38,    42,    97,    87,    42,    27,     9,
      10,    11,   135,    12,    13,    38,    97,    44,    16,    42,
     112,   113,   114,   115,   116,   117,   118,    37,   120,   121,
     122,   123,   124,    33,    34,    35,    36,     5,    39,    39,
     194,    42,   123,   124,    28,    44,    46,    47,    27,    12,
      13,    27,   135,    27,   208,    29,    30,    31,    32,     9,
      10,    11,   154,    27,    28,     9,    10,    11,   160,    43,
      27,    39,    40,   154,    42,    43,    39,     3,    12,    13,
      12,    13,   236,    33,    34,    35,    36,    12,    13,    33,
      34,    35,    36,   185,    44,     5,    46,    47,    35,    36,
      44,   193,    46,    47,   185,    39,    27,    39,   231,    20,
      40,    22,   193,    43,    42,    45,    44,   240,   241,   242,
     240,   241,   242,   215,    14,    15,    42,   250,    44,    43,
     250,    14,    15,    23,   215,   258,    27,    27,   258,    38,
      23,    14,    15,    37,    27,    28,   269,    37,    32,   269,
      23,   274,    27,   276,    27,    43,   276,   240,   241,   242,
      39,    33,    34,    35,    36,   288,    43,   250,   288,    38,
      39,     9,    10,    11,    42,   258,    44,     9,    10,    11,
      33,    34,    35,    36,    43,    42,   269,    44,    37,    43,
      39,    44,    42,   276,    44,    33,    34,    35,    36,    43,
       5,    33,    34,    35,    36,   288,    44,    39,    46,    47,
       9,    10,    11,    27,    46,    47,    37,    10,    39,    10,
      10,     6,     7,     8,     6,     7,     8,    28,    41,    14,
      15,    27,    14,    15,    33,    34,    35,    36,    23,    39,
      32,    23,    27,    28,    32,    27,    28,    46,    47,     6,
       7,     8,    39,    38,    37,    32,    38,    14,    15,    27,
      27,    41,    41,    28,    39,     4,    23,     6,     7,     8,
      27,    28,    41,    37,    12,    14,    15,     6,     7,     8,
      39,    38,    37,    37,    23,    14,    15,     5,    27,    28,
      27,    39,    37,    39,    23,    44,    39,    38,    27,    28,
      24,    25,    38,    27,    37,    29,    30,    31,    32,    24,
      25,    39,    27,    39,    29,    30,    31,    32,    26,    43,
      39,    38,    38,     5,    38,    38,    38,    38,    43,    39,
      39,    38,    22,   180,   223,   258,    -1,   113
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    49,    54,    22,    55,    56,     0,    18,    51,
      27,    20,    56,    52,    16,    60,    37,    27,    28,    53,
      77,    28,    61,    71,    50,    57,    27,    27,    21,    77,
      27,    19,    71,     3,    81,    27,    28,    59,    62,    63,
       5,     5,    39,    40,    42,    43,     6,     7,     8,    14,
      15,    23,    27,    77,    82,    83,    92,    27,    27,    38,
      59,    59,    37,    24,    25,    27,    29,    30,    31,    32,
      43,    93,    94,    95,    96,    32,    27,    78,    72,    43,
      43,    43,    43,    43,    93,    96,    98,     5,    40,    43,
      45,     4,    77,    83,    92,    39,     5,     5,    39,    40,
      42,    43,    27,    58,    93,    96,    97,    40,    43,    45,
      93,    96,     9,    10,    11,    33,    34,    35,    36,    39,
      46,    47,    10,    12,    13,    39,    41,    39,    42,    28,
      79,    80,    93,    96,    96,    88,    93,    96,    93,    96,
      93,    96,    32,    97,    27,    39,    37,    93,    96,    32,
      78,    64,    39,    38,    42,    32,    97,    27,    44,    44,
      43,    93,    24,    25,    93,    95,    93,    93,    93,    93,
      93,    93,    93,    93,    96,    96,     5,    39,    78,    27,
      42,    44,    44,    44,    77,    91,    92,    44,    44,    44,
      44,    41,    44,     5,    43,    97,    39,    39,    41,    28,
      69,    70,    39,    93,    96,    41,    44,    93,    37,    80,
      73,    37,    37,    96,    39,     5,    93,    96,    97,    38,
       5,    39,    27,    42,    44,    97,    37,    39,    74,    84,
      86,    39,    93,    96,    44,    39,    37,    70,    65,    38,
      75,    82,    82,    27,    92,    97,    37,    39,    66,    39,
      76,    77,    83,    92,    85,    87,    44,    38,    67,    38,
      77,    83,    92,    39,    38,    38,    37,    39,    68,    76,
      77,    83,    92,    39,    26,    89,    82,    38,    77,    83,
      92,    39,    37,    92,    38,    39,    90,    39,    82,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    52,    51,    53,    53,    54,    55,
      55,    57,    56,    58,    58,    59,    59,    59,    59,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    64,
      65,    63,    67,    66,    66,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    72,    73,    71,    75,    74,    74,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    81,    82,
      82,    82,    82,    82,    82,    84,    85,    83,    86,    87,
      83,    88,    83,    90,    89,    89,    89,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     0,     4,     1,     2,     3,     1,
       2,     0,     7,     2,     0,     1,     1,     2,     2,     3,
       1,     2,     3,     5,     5,    10,     4,     6,     7,     0,
       0,     8,     0,     4,     1,     2,     1,     1,     3,     2,
       2,     1,     3,     2,     0,     0,     8,     0,     4,     1,
       2,     1,     1,     3,     2,     2,     3,     5,     5,    10,
       4,     6,     7,     3,     2,     1,     3,     2,     3,     2,
       1,     1,     3,     2,     2,     0,     0,    10,     0,     0,
       9,     0,    11,     0,     5,     3,     0,     2,     1,     3,
       3,     4,     4,     4,     4,     4,     6,     6,     3,     5,
       5,     6,     2,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     3,     3,     1,
       3,     1,     1,     3,     3,     0,     2,     1,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
#  undef YYSTACK_RELOCATE
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
  case 2: /* $@1: %empty  */
#line 38 "limbaj.y"
          {                          
          current = new SymTable("main", current); 
          //cout << "Am intrat în scope-ul lui main \n";
          }
#line 1395 "limbaj.tab.c"
    break;

  case 3: /* progr: classes globals functions $@1 main  */
#line 42 "limbaj.y"
                {
               //current->printVars();
               //cout << "Am iesit din scope-ul main-ului \n";
               current = current->getParent();
               //current->printVars();
               //current = current->getParent();
               //cout << "Am iesit din global\n";
               if (errorCount == 0) cout<< "The program is correct!" << endl;
               else { cout<< "The program is incorrect!" << endl;}}
#line 1409 "limbaj.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 55 "limbaj.y"
                { 
                    //cout << "Am intrat în scope-ul variabilelor globale \n";
                }
#line 1417 "limbaj.tab.c"
    break;

  case 5: /* globals: BGIND $@2 declarations ENDD  */
#line 59 "limbaj.y"
               {
               //current->printVars();             
               //cout << "Am iesit din scope-ul variabilelor global \n";
          }
#line 1426 "limbaj.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 78 "limbaj.y"
                    {
                         current_struct_type = (yyvsp[-1].string);
                         classes->addClass((yyvsp[-1].string),(yyvsp[-1].string));
                         //classes = new SymTable($2, classes); 
                         //cout << "Am intrat în scope-ul clasei \"" << $2 << "\"\n";
                    }
#line 1437 "limbaj.tab.c"
    break;

  case 13: /* optional_object_decl: ID ';'  */
#line 87 "limbaj.y"
                             {   
                                   //current->printVars();
                                   //cout << "Am iesit din scope-ul clasei " << current_struct_type << "\n";
                                   //current=current->getParent();
                               if(!current->existsId((yyvsp[-1].string))) {
                                    
                                    current->addClass(current_struct_type.c_str(),(yyvsp[-1].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                              }
#line 1454 "limbaj.tab.c"
    break;

  case 14: /* optional_object_decl: %empty  */
#line 100 "limbaj.y"
                         {  
                                   //current->printVars();
                                   //cout << "Am iesit din scope-ul clasei " << current_struct_type << " \n";
                         //current=current->getParent();
                         }
#line 1464 "limbaj.tab.c"
    break;

  case 22: /* decl_class: TYPE ID ';'  */
#line 119 "limbaj.y"
                             { 
                              if(!classes->existsIdRecursive((yyvsp[-1].string))) {
                                    classes->addClassParam((yyvsp[-2].string),(yyvsp[-1].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined\n");
                              }
                          }
#line 1477 "limbaj.tab.c"
    break;

  case 23: /* decl_class: TYPE ID ASSIGN boole ';'  */
#line 127 "limbaj.y"
                                          { 
                              if(!classes->existsIdRecursive((yyvsp[-3].string))) {
                                (yyvsp[-1].node)->evaluate();
                                if(strcmp((yyvsp[-4].string),(yyvsp[-1].node)->type.c_str())==0){
                                    classes->addClassParam((yyvsp[-4].string),(yyvsp[-3].string),current_struct_type,(yyvsp[-1].node)->evaluate());
                                }
                                else{
                                    errorCount++;
                                    yyerror("Can only assign real or fake to bool value");
                                }
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined\n");
                              }
                          }
#line 1497 "limbaj.tab.c"
    break;

  case 24: /* decl_class: TYPE ID ASSIGN e ';'  */
#line 142 "limbaj.y"
                                      { 
                              if(!classes->existsIdRecursive((yyvsp[-3].string))) {
                                    (yyvsp[-1].node)->evaluate();
                                    if(strcmp((yyvsp[-4].string),(yyvsp[-1].node)->type.c_str())==0){
                                    classes->addClassParam((yyvsp[-4].string),(yyvsp[-3].string),current_struct_type,(yyvsp[-1].node)->evaluate());
                                    }
                                    else{
                                        errorCount++;
                                        yyerror("Can't define variable with a different type of value!");
                                    }
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                            delete((yyvsp[-1].node));
                          }
#line 1518 "limbaj.tab.c"
    break;

  case 25: /* decl_class: TYPE ID '[' NR ']' ASSIGN '{' call_list '}' ';'  */
#line 159 "limbaj.y"
                                                               { 
                              if(!classes->existsIdRecursive((yyvsp[-8].string))) {
                                    classes->addClassParam((yyvsp[-9].string),(yyvsp[-8].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1531 "limbaj.tab.c"
    break;

  case 26: /* decl_class: TYPE ID ',' list_id  */
#line 167 "limbaj.y"
                                     { 
                              if(!classes->existsIdRecursive((yyvsp[-2].string))) {
                                    classes->addClassParam((yyvsp[-3].string),(yyvsp[-2].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1544 "limbaj.tab.c"
    break;

  case 27: /* decl_class: TYPE ID '[' NR ']' ';'  */
#line 175 "limbaj.y"
                                       { 
                              if(!classes->existsIdRecursive((yyvsp[-4].string))) {
                                    classes->addClassParam((yyvsp[-5].string),(yyvsp[-4].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1557 "limbaj.tab.c"
    break;

  case 28: /* decl_class: ID ID ASSIGN '{' call_list '}' ';'  */
#line 183 "limbaj.y"
                                                    { 
                              if(!classes->existsIdRecursive((yyvsp[-5].string))) {
                                    classes->addClassParam((yyvsp[-6].string),(yyvsp[-5].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1570 "limbaj.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 195 "limbaj.y"
                         {        
                            current_function = (yyvsp[-1].string);
                              if(!classes->existsIdRecursive((yyvsp[-1].string))) {
                                   classes->addClassParam((yyvsp[-2].string),(yyvsp[-1].string),current_struct_type);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1584 "limbaj.tab.c"
    break;

  case 30: /* $@5: %empty  */
#line 204 "limbaj.y"
                                              {
                                   classes = new SymTable((yyvsp[-4].string), classes);
                                    //cout << "Am intrat in scope-ul funcției \"" << $2 << "\"\n";
                         }
#line 1593 "limbaj.tab.c"
    break;

  case 31: /* func_class: TYPE ID '(' $@4 list_param_class ')' $@5 optional_function_body_class  */
#line 209 "limbaj.y"
                         {   
                              //classes->printVars();             
                              //cout << "Am iesit din scope-ul funcției \"" << $2 << "\"\n";
                              classes = classes->getParent(); 
                              }
#line 1603 "limbaj.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 216 "limbaj.y"
                                    {temp = current; current = classes; }
#line 1609 "limbaj.tab.c"
    break;

  case 33: /* optional_function_body_class: '{' $@6 list_class '}'  */
#line 216 "limbaj.y"
                                                                                         {current = temp;}
#line 1615 "limbaj.tab.c"
    break;

  case 43: /* param_class: TYPE ID  */
#line 231 "limbaj.y"
                       { 
                    classes->addParamsToClassFunc((yyvsp[-1].string),(yyvsp[0].string),current_struct_type,current_function,"0");
                       
                }
#line 1624 "limbaj.tab.c"
    break;

  case 44: /* $@7: %empty  */
#line 237 "limbaj.y"
                         {        
                            current_function = (yyvsp[-1].string);
                            //cout<<current_function;
                              if(!functions->existsIdRecursive((yyvsp[-1].string))) {
                                   functions->addFunc((yyvsp[-2].string),(yyvsp[-1].string));
                                    //cout << "Am intrat in scope-ul funcției \"" << $2 << "\"\n";
                                    
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1641 "limbaj.tab.c"
    break;

  case 45: /* $@8: %empty  */
#line 249 "limbaj.y"
                                        {
                                   functions = new SymTable((yyvsp[-4].string), functions);
                         }
#line 1649 "limbaj.tab.c"
    break;

  case 46: /* func: TYPE ID '(' $@7 list_param ')' $@8 optional_function_body_func  */
#line 253 "limbaj.y"
                         {   
                              //functions->printVars();             
                              //cout << "Am iesit din scope-ul funcției \"" << $2 << "\"\n";
                              functions = functions->getParent(); 
                              }
#line 1659 "limbaj.tab.c"
    break;

  case 47: /* $@9: %empty  */
#line 260 "limbaj.y"
                                   { temp = current; current = functions;}
#line 1665 "limbaj.tab.c"
    break;

  case 48: /* optional_function_body_func: '{' $@9 list_func '}'  */
#line 260 "limbaj.y"
                                                                                         {current = temp;}
#line 1671 "limbaj.tab.c"
    break;

  case 56: /* decl: TYPE ID ';'  */
#line 271 "limbaj.y"
                             { 
                              if(!current->existsId((yyvsp[-1].string))) {
                                    current->addVar((yyvsp[-2].string),(yyvsp[-1].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined\n");
                              }
                          }
#line 1684 "limbaj.tab.c"
    break;

  case 57: /* decl: TYPE ID ASSIGN boole ';'  */
#line 279 "limbaj.y"
                                          { 
                              if(!current->existsId((yyvsp[-3].string))) {
                                (yyvsp[-1].node)->evaluate();
                                if(strcmp((yyvsp[-4].string),(yyvsp[-1].node)->type.c_str())==0){
                                    current->addVar((yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-1].node)->evaluate());
                                }
                                else{
                                    errorCount++;
                                    yyerror("Can only assign real or fake to bool value");
                                }
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined\n");
                              }
                          }
#line 1704 "limbaj.tab.c"
    break;

  case 58: /* decl: TYPE ID ASSIGN e ';'  */
#line 294 "limbaj.y"
                                      { 
                              if(!current->existsId((yyvsp[-3].string))) {
                                    (yyvsp[-1].node)->evaluate();
                                    if(strcmp((yyvsp[-4].string),(yyvsp[-1].node)->type.c_str())==0){
                                        current->addVar((yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-1].node)->evaluate());
                                    }
                                    else{
                                        errorCount++;
                                        yyerror("Can't define variable with a different type of value!");
                                    }
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                            delete((yyvsp[-1].node));
                          }
#line 1725 "limbaj.tab.c"
    break;

  case 59: /* decl: TYPE ID '[' NR ']' ASSIGN '{' call_list '}' ';'  */
#line 311 "limbaj.y"
                                                               { 
                              if(!current->existsId((yyvsp[-8].string))) {
                                    current->addVar((yyvsp[-9].string),(yyvsp[-8].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1738 "limbaj.tab.c"
    break;

  case 60: /* decl: TYPE ID ',' list_id  */
#line 319 "limbaj.y"
                                     { 
                              if(!current->existsId((yyvsp[-2].string))) {
                                    current->addVar((yyvsp[-3].string),(yyvsp[-2].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1751 "limbaj.tab.c"
    break;

  case 61: /* decl: TYPE ID '[' NR ']' ';'  */
#line 327 "limbaj.y"
                                       { 
                              if(!current->existsId((yyvsp[-4].string))) {
                                    current->addVar((yyvsp[-5].string),(yyvsp[-4].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1764 "limbaj.tab.c"
    break;

  case 62: /* decl: ID ID ASSIGN '{' call_list '}' ';'  */
#line 335 "limbaj.y"
                                                    { 
                              if(!current->existsId((yyvsp[-5].string))) {
                                    current->addVar((yyvsp[-6].string),(yyvsp[-5].string),(std::string)"0");
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1777 "limbaj.tab.c"
    break;

  case 67: /* param: TYPE ID  */
#line 352 "limbaj.y"
                { 
                    functions->addFuncParam((yyvsp[-1].string),(yyvsp[0].string),current_function);
                }
#line 1785 "limbaj.tab.c"
    break;

  case 75: /* $@10: %empty  */
#line 371 "limbaj.y"
                                   {current = new SymTable("if block", current); 
                                   //cout << "Am intrat în scope-ul unui if block \n";
                                   }
#line 1793 "limbaj.tab.c"
    break;

  case 76: /* $@11: %empty  */
#line 377 "limbaj.y"
                                   {//current->printVars();             
                                   //cout << "Am iesit din scope-ul if block-ului\n";
                                   current = current->getParent();}
#line 1801 "limbaj.tab.c"
    break;

  case 78: /* $@12: %empty  */
#line 383 "limbaj.y"
                                        {current = new SymTable("while block", current); 
                                        //cout << "Am intrat în scope-ul unui while block \n";
                                        }
#line 1809 "limbaj.tab.c"
    break;

  case 79: /* $@13: %empty  */
#line 387 "limbaj.y"
                                        {//current->printVars();             
                                        //cout << "Am iesit din scope-ul while block-ului\n";
                                        current = current->getParent();}
#line 1817 "limbaj.tab.c"
    break;

  case 81: /* $@14: %empty  */
#line 393 "limbaj.y"
                         {current = new SymTable("for block", current); 
                         //cout << "Am intrat în scope-ul unui for block \n";
                         }
#line 1825 "limbaj.tab.c"
    break;

  case 82: /* control: FOR '(' $@14 for_init boole ';' statement ')' '{' list '}'  */
#line 397 "limbaj.y"
                          {//current->printVars();   
                         //cout << "Am iesit din scope-ul for block-ului\n";
                          current = current->getParent();}
#line 1833 "limbaj.tab.c"
    break;

  case 83: /* $@15: %empty  */
#line 402 "limbaj.y"
                         {
                    current = new SymTable("else block", current); 
                   //cout << "Am intrat în scope-ul unui else block \n";
            }
#line 1842 "limbaj.tab.c"
    break;

  case 84: /* optional_else: ELSE '{' $@15 list '}'  */
#line 406 "limbaj.y"
                    {
               //cout << "Am iesit din scope-ul else block-ului\n";
                current = current->getParent();
            }
#line 1851 "limbaj.tab.c"
    break;

  case 89: /* statement: ID ASSIGN e  */
#line 418 "limbaj.y"
                        {
        (yyvsp[0].node)->evaluate();
        if(current->getRoot() == "global"){
            if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Variable used before definition");
            }
          else {
            if((yyvsp[0].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid");
            }
            else{
                if(current->getType((yyvsp[-2].string)) == (yyvsp[0].node)->type ){
                    current->changeValue((yyvsp[-2].string), (yyvsp[0].node)->evaluate());
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!",(yyvsp[0].node)->type.c_str(),current->getType((yyvsp[-2].string)).c_str());
                    yyerror(error_message);
                }
            }
          }
        }
        else if(current->getRoot() == "functions"){
            if(temp->existsIdRecursive((yyvsp[-2].string))){
                if(temp->getType((yyvsp[-2].string)) == (yyvsp[0].node)->type){
                    temp->changeValue((yyvsp[-2].string),(yyvsp[0].node)->evaluate());
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!",(yyvsp[0].node)->type.c_str(),current->getType((yyvsp[-2].string)).c_str());
                    yyerror(error_message);
                }            }
            if(!current->existsIdFunction((yyvsp[-2].string),current_function)){
              errorCount++;
              yyerror("Variable used before definition");
            }
            else{
                if(current->getTypeFunction((yyvsp[-2].string),current_function) == (yyvsp[0].node)->type){
                   current->changeValueFunction((yyvsp[-2].string),(yyvsp[0].node)->evaluate(),current_function);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeFunction((yyvsp[-2].string),current_function).c_str());
                    yyerror(error_message);
                }
            }
        }
        else if(current->getRoot() == "classes"){
            if(current->existsIdInClass((yyvsp[-2].string), current_struct_type)){
                if(current->getTypeInClass((yyvsp[-2].string),current_struct_type) == (yyvsp[0].node)->type){
                    current->changeValueInClass((yyvsp[-2].string),(yyvsp[0].node)->evaluate(),current_struct_type);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeInClass((yyvsp[-2].string),current_struct_type).c_str());
                    yyerror(error_message);
                }
            }
            else if(current->existsIdInClassFunc((yyvsp[-2].string), current_struct_type,current_function)){
                if(current->getTypeInClassFunc((yyvsp[-2].string),current_struct_type,current_function) == (yyvsp[0].node)->type){
                    //current->changeValueInClassFunc($1,$3->evaluate(),current_struct_type,current_function);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeInClassFunc((yyvsp[-2].string),current_struct_type,current_function).c_str());
                    yyerror(error_message);
                }
            }
            else{
                errorCount++;
                yyerror("Variable used before definition");
            }
        }
    
            delete((yyvsp[0].node));
}
#line 1934 "limbaj.tab.c"
    break;

  case 90: /* statement: ID ASSIGN boole  */
#line 496 "limbaj.y"
                           {
        (yyvsp[0].node)->evaluate();
        if(current->getRoot() == "global"){
            if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Variable used before definition");
            }
          else {
            if((yyvsp[0].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid");
            }
            else{
                if(current->getType((yyvsp[-2].string)) == (yyvsp[0].node)->type ){
                    current->changeValue((yyvsp[-2].string), (yyvsp[0].node)->evaluate());
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!",(yyvsp[0].node)->type.c_str(),current->getType((yyvsp[-2].string)).c_str());
                    yyerror(error_message);
                }
            }
          }
        }
        else if(current->getRoot() == "functions"){
            if(temp->existsIdRecursive((yyvsp[-2].string))){
                if(temp->getType((yyvsp[-2].string)) == (yyvsp[0].node)->type){
                    temp->changeValue((yyvsp[-2].string),(yyvsp[0].node)->evaluate());
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!",(yyvsp[0].node)->type.c_str(),current->getType((yyvsp[-2].string)).c_str());
                    yyerror(error_message);
                }            }
            if(!current->existsIdFunction((yyvsp[-2].string),current_function)){
              errorCount++;
              yyerror("Variable used before definition");
            }
            else{
                if(current->getTypeFunction((yyvsp[-2].string),current_function) == (yyvsp[0].node)->type){
                   current->changeValueFunction((yyvsp[-2].string),(yyvsp[0].node)->evaluate(),current_function);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeFunction((yyvsp[-2].string),current_function).c_str());
                    yyerror(error_message);
                }
            }
        }
        else if(current->getRoot() == "classes"){
            if(current->existsIdInClass((yyvsp[-2].string), current_struct_type)){
                if(current->getTypeInClass((yyvsp[-2].string),current_struct_type) == (yyvsp[0].node)->type){
                    current->changeValueInClass((yyvsp[-2].string),(yyvsp[0].node)->evaluate(),current_struct_type);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeInClass((yyvsp[-2].string),current_struct_type).c_str());
                    yyerror(error_message);
                }
            }
            else if(current->existsIdInClassFunc((yyvsp[-2].string), current_struct_type,current_function)){
                if(current->getTypeInClassFunc((yyvsp[-2].string),current_struct_type,current_function) == (yyvsp[0].node)->type){
                    //current->changeValueInClassFunc($1,$3->evaluate(),current_struct_type,current_function);
                }
                else{
                    errorCount++;
                    snprintf(error_message,256,"Attempting to assign value of type %s to variable of type %s!", (yyvsp[0].node)->type.c_str(), current->getTypeInClassFunc((yyvsp[-2].string),current_struct_type,current_function).c_str());
                    yyerror(error_message);
                }
            }
            else{
                errorCount++;
                yyerror("Variable used before definition");
            }
        }
    
            delete((yyvsp[0].node));
}
#line 2017 "limbaj.tab.c"
    break;

  case 91: /* statement: ID '(' call_list ')'  */
#line 575 "limbaj.y"
                                 {
            if(!classes->existsIdInClass((yyvsp[-3].string),current_struct_type) && !functions->existsIdRecursive((yyvsp[-3].string))){

              errorCount++;
              yyerror("Function used before definition");
            }

      }
#line 2030 "limbaj.tab.c"
    break;

  case 92: /* statement: PRINT '(' boole ')'  */
#line 583 "limbaj.y"
                                {
            if((yyvsp[-1].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
                printf("Value of expression is %s\n", (yyvsp[-1].node)->evaluate().c_str());
                delete((yyvsp[-1].node));
            }
          }
#line 2045 "limbaj.tab.c"
    break;

  case 93: /* statement: PRINT '(' e ')'  */
#line 593 "limbaj.y"
                            {
            if((yyvsp[-1].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
                printf("Value of expression is %s\n", (yyvsp[-1].node)->evaluate().c_str());
                delete((yyvsp[-1].node));
            }
            
            
          }
#line 2062 "limbaj.tab.c"
    break;

  case 94: /* statement: TYPEOF '(' boole ')'  */
#line 605 "limbaj.y"
                                 {
            if((yyvsp[-1].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
                std::cout << "Value of expression is " << (yyvsp[-1].node)->evaluate() << " and type is " << (yyvsp[-1].node)->type << std::endl;
                delete((yyvsp[-1].node));
            }
          }
#line 2077 "limbaj.tab.c"
    break;

  case 95: /* statement: TYPEOF '(' e ')'  */
#line 615 "limbaj.y"
                            {
            if((yyvsp[-1].node)->evaluate() == "invalid") {
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
                std::cout << "Value of expression is " << (yyvsp[-1].node)->evaluate() << " and type is " << (yyvsp[-1].node)->type << std::endl;
                delete((yyvsp[-1].node));
            }
          }
#line 2092 "limbaj.tab.c"
    break;

  case 96: /* statement: ID '[' NR ']' ASSIGN e  */
#line 625 "limbaj.y"
                                   {
          if (!current->existsIdRecursive((yyvsp[-5].string))) {
              errorCount++;
              yyerror("Array used before definition");
          }
                  else {
            if((yyvsp[0].node)->evaluate() == "invalid"){
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
            current->changeValue((yyvsp[-5].string), (yyvsp[0].node)->evaluate());
            delete((yyvsp[0].node));
            }
          }
      }
#line 2113 "limbaj.tab.c"
    break;

  case 97: /* statement: ID '[' NR ']' ASSIGN boole  */
#line 641 "limbaj.y"
                                        {
          if (!current->existsIdRecursive((yyvsp[-5].string))) {
              errorCount++;
              yyerror("Array used before definition");
          }
                  else {
            if((yyvsp[0].node)->evaluate() == "invalid"){
                errorCount++;
                yyerror("Expression is invalid.");
            }
            else{
            current->changeValue((yyvsp[-5].string), (yyvsp[0].node)->evaluate());
            delete((yyvsp[0].node));
            }
          }
      }
#line 2134 "limbaj.tab.c"
    break;

  case 98: /* statement: ID '@' ID  */
#line 657 "limbaj.y"
                      {
          if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Object used before definition");
          }
          if (!current->existsIdRecursive((yyvsp[0].string))) {
              errorCount++;
              yyerror("Member used before definition");
          }
      }
#line 2149 "limbaj.tab.c"
    break;

  case 99: /* statement: ID '@' ID ASSIGN e  */
#line 667 "limbaj.y"
                               {
          if (!current->existsIdRecursive((yyvsp[-4].string))) {
              errorCount++;
              yyerror("Object used before definition");
          }
          else if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Member used before definition");
          }
          else {
                if((yyvsp[0].node)->evaluate() == "invalid"){
                    errorCount++;
                    yyerror("Expression is invalid");
                }
                else{
                    current->changeValue((yyvsp[-4].string), (yyvsp[0].node)->evaluate());
                    delete((yyvsp[0].node));
                }
          }
      }
#line 2174 "limbaj.tab.c"
    break;

  case 100: /* statement: ID '@' ID ASSIGN boole  */
#line 687 "limbaj.y"
                                   {
          if (!current->existsIdRecursive((yyvsp[-4].string))) {
              errorCount++;
              yyerror("Object used before definition");
              current->changeValue((yyvsp[-4].string), (yyvsp[0].node)->evaluate());
          }
          else if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Member used before definition");
          }
          else {
                if((yyvsp[0].node)->evaluate() == "invalid"){
                    errorCount++;
                    yyerror("Expression is invalid");
                }
                else{
                    current->changeValue((yyvsp[-4].string), (yyvsp[0].node)->evaluate());
                    delete((yyvsp[0].node));
                }
          }
      }
#line 2200 "limbaj.tab.c"
    break;

  case 101: /* statement: ID '@' ID '(' call_list ')'  */
#line 708 "limbaj.y"
                                        {
          if (!current->existsIdRecursive((yyvsp[-5].string))) {
              errorCount++;
              yyerror("Object used before definition");
          }
          if (!current->existsIdRecursive((yyvsp[-3].string))) {
              errorCount++;
              yyerror("Method used before definition");
          }
      }
#line 2215 "limbaj.tab.c"
    break;

  case 103: /* e: e '+' e  */
#line 721 "limbaj.y"
               {/*$$=$1+$3; */(yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "+"; }
#line 2221 "limbaj.tab.c"
    break;

  case 104: /* e: e '*' e  */
#line 722 "limbaj.y"
               {/*$$=$1*$3;*/(yyval.node) = new ASTNode((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->value = "*"; }
#line 2227 "limbaj.tab.c"
    break;

  case 105: /* e: e '-' e  */
#line 723 "limbaj.y"
               {/*$$ = $1-$3;*/ (yyval.node) = new ASTNode((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) -> value = "-"; }
#line 2233 "limbaj.tab.c"
    break;

  case 106: /* e: e '/' e  */
#line 724 "limbaj.y"
               {/*$$ = $1/$3;*/ (yyval.node) = new ASTNode((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) -> value = '/'; }
#line 2239 "limbaj.tab.c"
    break;

  case 107: /* e: '(' e ')'  */
#line 725 "limbaj.y"
               {/*$$= $2;*/ (yyval.node) = (yyvsp[-1].node);    }
#line 2245 "limbaj.tab.c"
    break;

  case 108: /* e: STRING  */
#line 726 "limbaj.y"
               { (yyval.node) = new ASTNode((yyvsp[0].string), "string");}
#line 2251 "limbaj.tab.c"
    break;

  case 109: /* e: CHAR  */
#line 727 "limbaj.y"
               { (yyval.node) = new ASTNode((yyvsp[0].string), "char");}
#line 2257 "limbaj.tab.c"
    break;

  case 110: /* e: NR  */
#line 728 "limbaj.y"
               {/*$$=$1;*/  (yyval.node) = new ASTNode((yyvsp[0].Int),"int"); }
#line 2263 "limbaj.tab.c"
    break;

  case 111: /* e: NRFLOAT  */
#line 729 "limbaj.y"
               {/*$$=$1;*/  (yyval.node) = new ASTNode((yyvsp[0].string),"float"); }
#line 2269 "limbaj.tab.c"
    break;

  case 112: /* e: ID  */
#line 730 "limbaj.y"
               { 
    if(current->getRoot() == "global"){
        if (!current->existsIdRecursive((yyvsp[0].string))) {
              errorCount++;
              snprintf(error_message,256,"Variable used before definition:%s", (yyvsp[0].string));
              (yyval.node) = new ASTNode("invalid","null");
              yyerror(error_message);
        }
        else if(current->getValueAsString((yyvsp[0].string)) == "invalid"){
            errorCount++;
            snprintf(error_message,256,"Use of variable %s with invalid value!", (yyvsp[0].string));
              (yyval.node) = new ASTNode("invalid","null");
                yyerror(error_message);
        }
        else{
            (yyval.node) = new ASTNode(current->getValueAsString((yyvsp[0].string)), current->getType((yyvsp[0].string)));
        }
    }
    else if(current->getRoot() == "functions"){
        if(temp->existsIdRecursive((yyvsp[0].string))){
            if(temp->getValueAsString((yyvsp[0].string)) == "invalid"){
                errorCount++;
                snprintf(error_message,256,"Use of variable %s with invalid value!", (yyvsp[0].string));
                (yyval.node) = new ASTNode("invalid","null");
                yyerror(error_message);
            }
            else{
                (yyval.node) = new ASTNode(temp->getValueAsString((yyvsp[0].string)), temp->getType((yyvsp[0].string)));
            }
        }
        else if(!current->existsIdFunction((yyvsp[0].string),current_function)){
              errorCount++;
              snprintf(error_message,256,"Variable used before definitions:%s", (yyvsp[0].string));
              (yyval.node) = new ASTNode("invalid","null");
              yyerror(error_message);
        }
        else if(current->getValueFunction((yyvsp[0].string),current_function) == "invalid"){
            errorCount++;
            snprintf(error_message,256,"Use of variable %s with invalid value!", (yyvsp[0].string));
            (yyval.node) = new ASTNode("invalid","null");
            yyerror(error_message);
        }
        else{
            (yyval.node) = new ASTNode(current->getValueFunction((yyvsp[0].string), current_function), current->getTypeFunction((yyvsp[0].string),current_function));
        }
    }
    else if(current->getRoot() == "classes"){
            if(current->getValueInClass((yyvsp[0].string),current_struct_type) == "invalid") {
                errorCount++;
                snprintf(error_message,256,"Use of variable %s with invalid value!", (yyvsp[0].string));
                (yyval.node) = new ASTNode("invalid", "null");
                yyerror(error_message);
            }
            else{
                if(current->existsIdInClass((yyvsp[0].string),current_struct_type)){
                    (yyval.node) = new ASTNode(current->getValueInClass((yyvsp[0].string), current_struct_type), current->getTypeInClass((yyvsp[0].string),current_struct_type));
                }
                else if (current->existsIdInClassFunc((yyvsp[0].string), current_struct_type, current_function)){
                    (yyval.node) = new ASTNode("0", "int");
                }
                else {
                    errorCount++;
                snprintf(error_message,256,"Use of uninitialized variable %s", (yyvsp[0].string));
                (yyval.node) = new ASTNode("invalid","null");
                yyerror(error_message);
                }
            }
    }
}
#line 2343 "limbaj.tab.c"
    break;

  case 113: /* e: ID '(' call_list ')'  */
#line 800 "limbaj.y"
                         {
        if(strcmp((yyvsp[-3].string),current_function.c_str()) == 0){
            (yyval.node) = new ASTNode(1, functions->getType((yyvsp[-3].string)));
        }
        else if (!functions->existsIdRecursive((yyvsp[-3].string)) && !classes->existsIdInClass((yyvsp[-3].string),current_struct_type)) {
              errorCount++;
              yyerror("Variable used before definition");
            (yyval.node) = new ASTNode("invalid","null");
          }
          else {
            (yyval.node) = new ASTNode(1, functions->getType((yyvsp[-3].string)));
            }
  }
#line 2361 "limbaj.tab.c"
    break;

  case 114: /* e: ID '@' ID  */
#line 813 "limbaj.y"
               {
            if (!current->existsIdRecursive((yyvsp[-2].string))) {
              errorCount++;
              yyerror("Variable used before definition");
              (yyval.node) = new ASTNode("invalid","null");            }
            else {
                //cout<<"!!!!!!!!!!!!1"<<$3<< ' '<<current->getType($1)<<endl;
                if(classes->existsIdInClass((yyvsp[0].string),current->getType((yyvsp[-2].string)))){
                    (yyval.node) = new ASTNode(1, classes->getTypeInClass((yyvsp[0].string),current->getType((yyvsp[-2].string))));
                }
                else{
                    errorCount++;
                    yyerror("Variable not in class");
              (yyval.node) = new ASTNode("invalid","null");                }
            }
            }
#line 2382 "limbaj.tab.c"
    break;

  case 115: /* e: ID '[' NR ']'  */
#line 829 "limbaj.y"
                    {
        if (!current->existsIdRecursive((yyvsp[-3].string))) {
              errorCount++;
              yyerror("Variable used before definition");
          }
         (yyval.node) = new ASTNode(1, current->getType((yyvsp[-3].string)));
         }
#line 2394 "limbaj.tab.c"
    break;

  case 116: /* b: e '<' e  */
#line 840 "limbaj.y"
            { 
        (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "<"; 
  }
#line 2402 "limbaj.tab.c"
    break;

  case 117: /* b: e '>' e  */
#line 843 "limbaj.y"
            { 
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = ">";   
    }
#line 2410 "limbaj.tab.c"
    break;

  case 118: /* b: e EQ e  */
#line 846 "limbaj.y"
            { 
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "==";   }
#line 2417 "limbaj.tab.c"
    break;

  case 119: /* b: e LE e  */
#line 848 "limbaj.y"
            { 
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "<=";   }
#line 2424 "limbaj.tab.c"
    break;

  case 120: /* b: e GE e  */
#line 850 "limbaj.y"
            { 
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = ">=";   }
#line 2431 "limbaj.tab.c"
    break;

  case 121: /* b: e EQ reality_check  */
#line 852 "limbaj.y"
                       { (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "==";}
#line 2437 "limbaj.tab.c"
    break;

  case 122: /* b: reality_check EQ e  */
#line 853 "limbaj.y"
                       { (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "==";}
#line 2443 "limbaj.tab.c"
    break;

  case 123: /* b: REAL  */
#line 854 "limbaj.y"
            {    (yyval.node) = new ASTNode("real","bool");  }
#line 2449 "limbaj.tab.c"
    break;

  case 124: /* b: FAKE  */
#line 855 "limbaj.y"
            {  (yyval.node) = new ASTNode("fake","bool");   }
#line 2455 "limbaj.tab.c"
    break;

  case 125: /* reality_check: REAL  */
#line 858 "limbaj.y"
                         {    (yyval.node) = new ASTNode("real","bool");  }
#line 2461 "limbaj.tab.c"
    break;

  case 126: /* reality_check: FAKE  */
#line 859 "limbaj.y"
                      {  (yyval.node) = new ASTNode("fake","bool");   }
#line 2467 "limbaj.tab.c"
    break;

  case 127: /* boole: boole OR boole  */
#line 861 "limbaj.y"
                       { 
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "||";
        }
#line 2475 "limbaj.tab.c"
    break;

  case 128: /* boole: boole AND boole  */
#line 864 "limbaj.y"
                        {
    (yyval.node) = new ASTNode((yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->value = "&&";
        }
#line 2483 "limbaj.tab.c"
    break;

  case 129: /* boole: b  */
#line 867 "limbaj.y"
          {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2491 "limbaj.tab.c"
    break;

  case 130: /* boole: '(' boole ')'  */
#line 870 "limbaj.y"
                      {
            (yyval.node) = (yyvsp[-1].node);
        }
#line 2499 "limbaj.tab.c"
    break;

  case 135: /* call_list: %empty  */
#line 880 "limbaj.y"
          { if(current->getRoot() == "global"){
            //cout<<current->ids[current_function].params.parameters.size()<<endl;
            if(current->ids[current_function].params.parameters.size() != 0){
                errorCount++;
                yyerror("Invalid function call");
            }
            }
          }
#line 2512 "limbaj.tab.c"
    break;

  case 136: /* call_list: call_list ','  */
#line 888 "limbaj.y"
                            {
            if(current->getRoot() == "global"){
                if(functions->ids[current_function].params.parameters.size() != 0){
                    errorCount++;
                    yyerror("Invalid function call");
                }   
            }
            else if(current->getRoot() == "functions" || current->getRoot() == "classes"){
                errorCount++;
                yyerror("Cannot declare function without a variable at the end");
            }
            }
#line 2529 "limbaj.tab.c"
    break;


#line 2533 "limbaj.tab.c"

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 905 "limbaj.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     ofstream fout("SymTables.txt",std::ios::trunc);
     yyin=fopen(argv[1],"r");
     current = new SymTable("global",nullptr);
     classes = new SymTable("classes",nullptr);
     functions = new SymTable("functions", nullptr);
     //cout << "Am intrat in scope-ul global\n";
     yyparse();
     current->printVars();
     classes->printVars();
     functions->printVars();
     delete current;
     delete classes;
     delete functions;
}
