#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#ifdef _LIBC
#include "namespace.h"
#endif
#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "arith.y"
/*-
 * Copyright (c) 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Kenneth Almquist.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#if 0
#ifndef lint
static char sccsid[] = "@(#)arith.y	8.3 (Berkeley) 5/4/95";
#endif
#endif /* not lint */
/*
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/bin/sh/arith.y,v 1.19 2004/05/24 10:11:31 stefanf Exp $");
*/

#include <limits.h>
#include <stdio.h>


#include "shell.h"
#include "expand.h"
#include "var.h"
#line 52 "arith.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	arith_t l_value;
	char* s_value;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 86 "arith.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();


#define ARITH_NUM 257
#define ARITH_LPAREN 258
#define ARITH_RPAREN 259
#define ARITH_VAR 260
#define ARITH_ASSIGN 261
#define ARITH_ADDASSIGN 262
#define ARITH_SUBASSIGN 263
#define ARITH_MULASSIGN 264
#define ARITH_DIVASSIGN 265
#define ARITH_REMASSIGN 266
#define ARITH_RSHASSIGN 267
#define ARITH_LSHASSIGN 268
#define ARITH_BANDASSIGN 269
#define ARITH_BXORASSIGN 270
#define ARITH_BORASSIGN 271
#define ARITH_OR 272
#define ARITH_AND 273
#define ARITH_BOR 274
#define ARITH_BXOR 275
#define ARITH_BAND 276
#define ARITH_EQ 277
#define ARITH_NE 278
#define ARITH_LT 279
#define ARITH_GT 280
#define ARITH_GE 281
#define ARITH_LE 282
#define ARITH_LSHIFT 283
#define ARITH_RSHIFT 284
#define ARITH_ADD 285
#define ARITH_SUB 286
#define ARITH_MUL 287
#define ARITH_DIV 288
#define ARITH_REM 289
#define ARITH_UNARYMINUS 290
#define ARITH_UNARYPLUS 291
#define ARITH_NOT 292
#define ARITH_BNOT 293
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,
};
static const short yylen[] = {                            2,
    1,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    2,    2,    2,    2,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,
};
static const short yydefred[] = {                         0,
   25,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   24,   23,   21,   22,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    2,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   18,   19,   20,
};
static const short yydgoto[] = {                          8,
    9,
};
static const short yysindex[] = {                      -177,
    0, -177,   31, -177, -177, -177, -177,    0, -258, -155,
 -177, -177, -177, -177, -177, -177, -177, -177, -177, -177,
 -177,    0,    0,    0,    0, -177, -177, -177, -177, -177,
 -177, -177, -177, -177, -177, -177, -177, -177, -177, -177,
 -177, -177, -177,    0, -258, -258, -258, -258, -258, -258,
 -258, -258, -258, -258, -258, -121,  -87, -186,  -58,  260,
   41,   41, -142, -142, -142, -142, -150, -150, -254, -254,
    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    1,    0,    0,    0,    0,    0,    5,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    2,    3,    4,    6,    7,    8,
    9,   10,   11,   12,   13,  264,  249,  246,  242,  237,
  210,  217,  140,  151,  175,  186,   88,  114,   32,   60,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
   35,
};
#define YYTABLESIZE 549
static const short yytable[] = {                          0,
   26,   27,   28,   29,    1,   30,   31,   32,   33,   34,
   35,   36,   37,   26,   27,   28,   29,   30,   31,   32,
   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,
   43,   16,   41,   42,   43,    0,   10,    0,   22,   23,
   24,   25,    0,    0,    0,   45,   46,   47,   48,   49,
   50,   51,   52,   53,   54,   55,    0,    0,    0,   17,
   56,   57,   58,   59,   60,   61,   62,   63,   64,   65,
   66,   67,   68,   69,   70,   71,   72,   73,    0,    1,
    2,    0,    3,    0,    0,    0,    0,   14,   29,   30,
   31,   32,   33,   34,   35,   36,   37,   38,   39,   40,
   41,   42,   43,   44,    0,    0,    0,    4,    5,    0,
    0,    0,    0,   15,    6,    7,   26,   27,   28,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   38,   39,
   40,   41,   42,   43,   39,   40,   41,   42,   43,   11,
   37,   38,   39,   40,   41,   42,   43,    0,    0,    0,
    9,   27,   28,   29,   30,   31,   32,   33,   34,   35,
   36,   37,   38,   39,   40,   41,   42,   43,    0,    0,
    0,    0,    0,    0,   10,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   12,   28,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   43,    0,    0,    0,    0,    0,    0,    0,    8,
    0,    0,    0,    0,    0,    0,   13,   30,   31,   32,
   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,
   43,    0,    0,    0,    0,    0,    7,    0,    0,    0,
    0,    6,    0,    0,    0,    5,    0,    0,    4,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   26,
   27,   28,   29,    3,   30,   31,   32,   33,   34,   35,
   36,   37,   26,   26,   26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,
   16,   11,   12,   13,   14,   15,   16,   17,   18,   19,
   20,   21,    0,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   17,   33,
   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,
    0,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   14,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   14,
   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
   14,   14,   15,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   11,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    9,
    0,   11,   11,   11,   11,   11,   11,   11,   11,   11,
   11,   11,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,    9,   10,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   12,    0,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   12,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   12,    8,    0,
    0,    0,    0,    0,    0,   13,    0,    0,    0,    0,
    0,    8,    8,    8,    8,    8,    8,    8,   13,   13,
   13,   13,   13,   13,   13,    7,    0,    0,    0,    0,
    6,    0,    0,    0,    5,    0,    0,    4,    7,    7,
    7,    7,    7,    6,    6,    6,    6,    5,    5,    5,
    4,    4,    3,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    3,   31,   32,   33,   34,
   35,   36,   37,   38,   39,   40,   41,   42,   43,
};
static const short yycheck[] = {                         -1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  272,  273,  274,  275,  276,  277,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  289,    0,  287,  288,  289,   -1,    2,   -1,    4,    5,
    6,    7,   -1,   -1,   -1,   11,   12,   13,   14,   15,
   16,   17,   18,   19,   20,   21,   -1,   -1,   -1,    0,
   26,   27,   28,   29,   30,   31,   32,   33,   34,   35,
   36,   37,   38,   39,   40,   41,   42,   43,   -1,  257,
  258,   -1,  260,   -1,   -1,   -1,   -1,    0,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  259,   -1,   -1,   -1,  285,  286,   -1,
   -1,   -1,   -1,    0,  292,  293,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  285,
  286,  287,  288,  289,  285,  286,  287,  288,  289,    0,
  283,  284,  285,  286,  287,  288,  289,   -1,   -1,   -1,
    0,  273,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,  285,  286,  287,  288,  289,   -1,   -1,
   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,    0,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  289,   -1,   -1,   -1,   -1,   -1,   -1,   -1,    0,
   -1,   -1,   -1,   -1,   -1,   -1,    0,  276,  277,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  289,   -1,   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,
   -1,    0,   -1,   -1,   -1,    0,   -1,   -1,    0,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,
  259,  259,  259,    0,  259,  259,  259,  259,  259,  259,
  259,  259,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  289,
  259,  261,  262,  263,  264,  265,  266,  267,  268,  269,
  270,  271,   -1,  272,  273,  274,  275,  276,  277,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  259,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  289,
   -1,  272,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  259,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,
  273,  274,  275,  276,  277,  278,  279,  280,  281,  282,
  283,  284,  259,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  272,  273,  274,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  284,  259,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,
   -1,  272,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  259,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  259,   -1,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  272,  273,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  259,   -1,
   -1,   -1,   -1,   -1,   -1,  259,   -1,   -1,   -1,   -1,
   -1,  272,  273,  274,  275,  276,  277,  278,  272,  273,
  274,  275,  276,  277,  278,  259,   -1,   -1,   -1,   -1,
  259,   -1,   -1,   -1,  259,   -1,   -1,  259,  272,  273,
  274,  275,  276,  272,  273,  274,  275,  272,  273,  274,
  272,  273,  259,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  272,  277,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  287,  288,  289,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 293
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ARITH_NUM","ARITH_LPAREN",
"ARITH_RPAREN","ARITH_VAR","ARITH_ASSIGN","ARITH_ADDASSIGN","ARITH_SUBASSIGN",
"ARITH_MULASSIGN","ARITH_DIVASSIGN","ARITH_REMASSIGN","ARITH_RSHASSIGN",
"ARITH_LSHASSIGN","ARITH_BANDASSIGN","ARITH_BXORASSIGN","ARITH_BORASSIGN",
"ARITH_OR","ARITH_AND","ARITH_BOR","ARITH_BXOR","ARITH_BAND","ARITH_EQ",
"ARITH_NE","ARITH_LT","ARITH_GT","ARITH_GE","ARITH_LE","ARITH_LSHIFT",
"ARITH_RSHIFT","ARITH_ADD","ARITH_SUB","ARITH_MUL","ARITH_DIV","ARITH_REM",
"ARITH_UNARYMINUS","ARITH_UNARYPLUS","ARITH_NOT","ARITH_BNOT",
};
static const char *yyrule[] = {
"$accept : exp",
"exp : expr",
"expr : ARITH_LPAREN expr ARITH_RPAREN",
"expr : expr ARITH_OR expr",
"expr : expr ARITH_AND expr",
"expr : expr ARITH_BOR expr",
"expr : expr ARITH_BXOR expr",
"expr : expr ARITH_BAND expr",
"expr : expr ARITH_EQ expr",
"expr : expr ARITH_GT expr",
"expr : expr ARITH_GE expr",
"expr : expr ARITH_LT expr",
"expr : expr ARITH_LE expr",
"expr : expr ARITH_NE expr",
"expr : expr ARITH_LSHIFT expr",
"expr : expr ARITH_RSHIFT expr",
"expr : expr ARITH_ADD expr",
"expr : expr ARITH_SUB expr",
"expr : expr ARITH_MUL expr",
"expr : expr ARITH_DIV expr",
"expr : expr ARITH_REM expr",
"expr : ARITH_NOT expr",
"expr : ARITH_BNOT expr",
"expr : ARITH_SUB expr",
"expr : ARITH_ADD expr",
"expr : ARITH_NUM",
"expr : ARITH_VAR",
"expr : ARITH_VAR ARITH_ASSIGN expr",
"expr : ARITH_VAR ARITH_ADDASSIGN expr",
"expr : ARITH_VAR ARITH_SUBASSIGN expr",
"expr : ARITH_VAR ARITH_MULASSIGN expr",
"expr : ARITH_VAR ARITH_DIVASSIGN expr",
"expr : ARITH_VAR ARITH_REMASSIGN expr",
"expr : ARITH_VAR ARITH_RSHASSIGN expr",
"expr : ARITH_VAR ARITH_LSHASSIGN expr",
"expr : ARITH_VAR ARITH_BANDASSIGN expr",
"expr : ARITH_VAR ARITH_BXORASSIGN expr",
"expr : ARITH_VAR ARITH_BORASSIGN expr",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 260 "arith.y"
#include "error.h"
#include "output.h"
#include "memalloc.h"

#define lstrlen(var) (3 + (2 + CHAR_BIT * sizeof((var))) / 3)

char *arith_buf, *arith_startbuf;

int yylex(void);
int yyparse(void);

int
arith_assign(char *name, arith_t value)
{
	char *str;
	int ret;

	str = (char *)ckmalloc(lstrlen(value));
	sprintf(str, ARITH_FORMAT_STR, value);
	ret = setvarsafe(name, str, 0);
	free(str);
	return ret;
}

int
arith(char *s)
{
	long result;

	arith_buf = arith_startbuf = s;

	INTOFF;
	result = yyparse();
	arith_lex_reset();	/* Reprime lex. */
	INTON;

	return result;
}

void
yyerror(char *s)
{

	yyerrok;
	yyclearin;
	arith_lex_reset();	/* Reprime lex. */
	error("arithmetic expression: %s: \"%s\"", s, arith_startbuf);
}

/*
 *  The exp(1) builtin.
 */
int
expcmd(int argc, char **argv)
{
	char *p;
	char *concat;
	char **ap;
	long i;

	if (argc > 1) {
		p = argv[1];
		if (argc > 2) {
			/*
			 * Concatenate arguments.
			 */
			STARTSTACKSTR(concat);
			ap = argv + 2;
			for (;;) {
				while (*p)
					STPUTC(*p++, concat);
				if ((p = *ap++) == NULL)
					break;
				STPUTC(' ', concat);
			}
			STPUTC('\0', concat);
			p = grabstackstr(concat);
		}
	} else
		p = "";

	i = arith(p);

	out1fmt("%ld\n", i);
	return !i;
}

/*************************/
#ifdef TEST_ARITH
#include <stdio.h>
main(int argc, char *argv[])
{
	printf("%d\n", exp(argv[1]));
}

error(char *s)
{
	fprintf(stderr, "exp: %s\n", s);
	exit(1);
}
#endif
#line 518 "arith.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 80 "arith.y"
	{ return (yystack.l_mark[0].l_value); }
break;
case 2:
#line 85 "arith.y"
	{ yyval.l_value = yystack.l_mark[-1].l_value; }
break;
case 3:
#line 87 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value ? yystack.l_mark[-2].l_value : yystack.l_mark[0].l_value ? yystack.l_mark[0].l_value : 0; }
break;
case 4:
#line 89 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value ? ( yystack.l_mark[0].l_value ? yystack.l_mark[0].l_value : 0 ) : 0; }
break;
case 5:
#line 91 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value | yystack.l_mark[0].l_value; }
break;
case 6:
#line 93 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value ^ yystack.l_mark[0].l_value; }
break;
case 7:
#line 95 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value & yystack.l_mark[0].l_value; }
break;
case 8:
#line 97 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value == yystack.l_mark[0].l_value; }
break;
case 9:
#line 99 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value > yystack.l_mark[0].l_value; }
break;
case 10:
#line 101 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value >= yystack.l_mark[0].l_value; }
break;
case 11:
#line 103 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value < yystack.l_mark[0].l_value; }
break;
case 12:
#line 105 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value <= yystack.l_mark[0].l_value; }
break;
case 13:
#line 107 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value != yystack.l_mark[0].l_value; }
break;
case 14:
#line 109 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value << yystack.l_mark[0].l_value; }
break;
case 15:
#line 111 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value >> yystack.l_mark[0].l_value; }
break;
case 16:
#line 113 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value + yystack.l_mark[0].l_value; }
break;
case 17:
#line 115 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value - yystack.l_mark[0].l_value; }
break;
case 18:
#line 117 "arith.y"
	{ yyval.l_value = yystack.l_mark[-2].l_value * yystack.l_mark[0].l_value; }
break;
case 19:
#line 119 "arith.y"
	{
		if (yystack.l_mark[0].l_value == 0)
			yyerror("division by zero");
		yyval.l_value = yystack.l_mark[-2].l_value / yystack.l_mark[0].l_value;
		}
break;
case 20:
#line 125 "arith.y"
	{
		if (yystack.l_mark[0].l_value == 0)
			yyerror("division by zero");
		yyval.l_value = yystack.l_mark[-2].l_value % yystack.l_mark[0].l_value;
		}
break;
case 21:
#line 131 "arith.y"
	{ yyval.l_value = !(yystack.l_mark[0].l_value); }
break;
case 22:
#line 133 "arith.y"
	{ yyval.l_value = ~(yystack.l_mark[0].l_value); }
break;
case 23:
#line 135 "arith.y"
	{ yyval.l_value = -(yystack.l_mark[0].l_value); }
break;
case 24:
#line 137 "arith.y"
	{ yyval.l_value = yystack.l_mark[0].l_value; }
break;
case 26:
#line 140 "arith.y"
	{
		char *p;
		arith_t arith_val;
		char *str_val;

		if (lookupvar(yystack.l_mark[0].s_value) == NULL)
			setvarsafe(yystack.l_mark[0].s_value, "0", 0);
		str_val = lookupvar(yystack.l_mark[0].s_value);
		arith_val = strtoarith_t(str_val, &p, 0);
		/*
		 * Conversion is successful only in case
		 * we've converted _all_ characters.
		 */
		if (*p != '\0')
			yyerror("variable conversion error");
		yyval.l_value = arith_val;
		}
break;
case 27:
#line 158 "arith.y"
	{
		if (arith_assign(yystack.l_mark[-2].s_value, yystack.l_mark[0].l_value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = yystack.l_mark[0].l_value;
		}
break;
case 28:
#line 164 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) + yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 29:
#line 173 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) - yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 30:
#line 182 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) * yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 31:
#line 191 "arith.y"
	{
		arith_t value;

		if (yystack.l_mark[0].l_value == 0)
			yyerror("division by zero");

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) / yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 32:
#line 203 "arith.y"
	{
		arith_t value;

		if (yystack.l_mark[0].l_value == 0)
			yyerror("division by zero");

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) % yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 33:
#line 215 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) >> yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 34:
#line 224 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) << yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 35:
#line 233 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) & yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 36:
#line 242 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) ^ yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
case 37:
#line 251 "arith.y"
	{
		arith_t value;

		value = atoarith_t(lookupvar(yystack.l_mark[-2].s_value)) | yystack.l_mark[0].l_value;
		if (arith_assign(yystack.l_mark[-2].s_value, value) != 0)
			yyerror("variable assignment error");
		yyval.l_value = value;
		}
break;
#line 972 "arith.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
