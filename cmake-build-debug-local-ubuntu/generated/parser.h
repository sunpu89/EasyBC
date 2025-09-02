/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_SUNPU_CPP_EASYBC_CMAKE_BUILD_DEBUG_LOCAL_UBUNTU_GENERATED_PARSER_H_INCLUDED
# define YY_YY_HOME_SUNPU_CPP_EASYBC_CMAKE_BUILD_DEBUG_LOCAL_UBUNTU_GENERATED_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TIDENTIFIER = 258,             /* TIDENTIFIER  */
    TINTEGER = 259,                /* TINTEGER  */
    TPLUS = 260,                   /* TPLUS  */
    TMINUS = 261,                  /* TMINUS  */
    TDIVIDE = 262,                 /* TDIVIDE  */
    TFFTIMES = 263,                /* TFFTIMES  */
    TMOD = 264,                    /* TMOD  */
    TAND = 265,                    /* TAND  */
    TOR = 266,                     /* TOR  */
    TXOR = 267,                    /* TXOR  */
    TYUINT = 268,                  /* TYUINT  */
    TYUINT1 = 269,                 /* TYUINT1  */
    TYUINT4 = 270,                 /* TYUINT4  */
    TYUINT6 = 271,                 /* TYUINT6  */
    TYUINT8 = 272,                 /* TYUINT8  */
    TYUINT12 = 273,                /* TYUINT12  */
    TYUINT16 = 274,                /* TYUINT16  */
    TYUINT32 = 275,                /* TYUINT32  */
    TYUINT64 = 276,                /* TYUINT64  */
    TYUINT128 = 277,               /* TYUINT128  */
    TYUINT256 = 278,               /* TYUINT256  */
    TLPAREN = 279,                 /* TLPAREN  */
    TRPAREN = 280,                 /* TRPAREN  */
    TNOT = 281,                    /* TNOT  */
    TLABRACKET = 282,              /* TLABRACKET  */
    TRABRACKET = 283,              /* TRABRACKET  */
    TVIEW = 284,                   /* TVIEW  */
    TTOUINT = 285,                 /* TTOUINT  */
    TRSHIFTL = 286,                /* TRSHIFTL  */
    TRSHIFTR = 287,                /* TRSHIFTR  */
    TSHIFTL = 288,                 /* TSHIFTL  */
    TSHIFTR = 289,                 /* TSHIFTR  */
    TLBRACKET = 290,               /* TLBRACKET  */
    TRBRACKET = 291,               /* TRBRACKET  */
    TCOMMA = 292,                  /* TCOMMA  */
    TSEMICOLON = 293,              /* TSEMICOLON  */
    TASSIGN = 294,                 /* TASSIGN  */
    TFOR = 295,                    /* TFOR  */
    TFROM = 296,                   /* TFROM  */
    TTO = 297,                     /* TTO  */
    TRETURN = 298,                 /* TRETURN  */
    TLBRACE = 299,                 /* TLBRACE  */
    TRBRACE = 300,                 /* TRBRACE  */
    TRFN = 301,                    /* TRFN  */
    TKEYSCHD = 302,                /* TKEYSCHD  */
    TSFN = 303,                    /* TSFN  */
    TFN = 304,                     /* TFN  */
    TSBOX = 305,                   /* TSBOX  */
    TPBOX = 306,                   /* TPBOX  */
    TPBOXM = 307,                  /* TPBOXM  */
    TFFM = 308,                    /* TFFM  */
    TCIPHER = 309                  /* TCIPHER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "/home/sunpu/CPP/EasyBC/src/frontend/language/parser.y"

	ASTNode::NStatement* stmt;
	ASTNode::NBlock* block;
	std::string* string;
    ASTNode::NIdentifier* ident;
	ASTNode::NArrayIndex* index;
	ASTNode::NExpression* expr;
	ASTNode::NInteger* integer;
	ASTNode::NVariableList* varlist;
	ASTNode::NVariableDeclaration* var_decl;
	ASTNode::NStatementList* stmtList;
	std::vector<std::shared_ptr<ASTNode::NExpression>>* exprvec;
	std::vector<std::shared_ptr<ASTNode::NInteger>>* intvec;
	std::vector<std::shared_ptr<std::vector<std::shared_ptr<ASTNode::NInteger>>>>* intvecvec;
	ASTNode::NFunctionDeclaration* fundecl;
	ASTNode::NRoundFunctionDeclaration* rfundecl;
    ASTNode::NKeyScheduleDeclaration* kschddecl;
	ASTNode::NSboxFunctionDeclaration* sfundecl;
    ASTNode::NCipherFunctionDeclaration* cfundecl;
    //ASTNode::NCipherNameDeclaration* ciphername;

#line 140 "/home/sunpu/CPP/EasyBC/cmake-build-debug-local-ubuntu/generated/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_HOME_SUNPU_CPP_EASYBC_CMAKE_BUILD_DEBUG_LOCAL_UBUNTU_GENERATED_PARSER_H_INCLUDED  */
