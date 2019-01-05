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

#line 2 "parser.y"
/* $NetBSD: parser.y,v 1.2 2009/10/26 21:11:28 christos Exp $ */
/* $OpenBSD: parser.y,v 1.6 2008/08/21 21:00:14 espie Exp $ */
/*
 * Copyright (c) 2004 Marc Espie <espie@cvs.openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#if HAVE_NBTOOL_CONFIG_H
#include "nbtool_config.h"
#endif
__RCSID("$NetBSD: parser.y,v 1.2 2009/10/26 21:11:28 christos Exp $");
#include <stdint.h>
#define YYSTYPE	int32_t
extern int32_t end_result;
extern int yylex(void);
extern int yyerror(const char *);
#line 51 "parser.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

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


#define NUMBER 257
#define ERROR 258
#define LOR 259
#define LAND 260
#define EQ 261
#define NE 262
#define LE 263
#define GE 264
#define LSHIFT 265
#define RSHIFT 266
#define UMINUS 267
#define UPLUS 268
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,
};
static const short yylen[] = {                            2,
    1,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    2,    2,    2,    2,    1,
};
static const short yydefred[] = {                         0,
   25,    0,    0,    0,    0,    0,    0,    0,   22,   21,
   23,   24,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   20,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    5,    6,
};
static const short yydgoto[] = {                          7,
    8,
};
static const short yysindex[] = {                       -13,
    0,  -13,  -13,  -13,  -13,  -13,    0,  190,    0,    0,
    0,    0,  114,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
  -13,    0,  321,  347,  159,  397,  354,  -24,  -24,  -35,
  -35,  -35,  -35,  136,  136,  -31,  -31,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    3,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   65,   56,   51,   48,   74,   60,   66,   34,
   40,   76,   83,   17,   26,    1,    9,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  458,
};
#define YYTABLESIZE 663
static const short yytable[] = {                          0,
    2,   31,    1,    0,    0,   31,   29,   27,    3,   28,
   29,   30,   31,    0,    0,   30,    7,   29,   27,    4,
   28,    0,   30,    0,    0,    8,    6,    0,    0,    2,
    0,    3,    0,    9,    0,   21,    0,   23,    2,   11,
    0,    2,    0,    2,    0,    2,    3,   16,    0,    3,
   17,    3,    0,    3,    7,   18,    0,    7,    0,   13,
    2,    0,    2,    8,   19,   14,    8,    0,    3,    0,
    3,    9,    0,   15,    9,   10,    7,   11,    7,    0,
   11,    0,   12,    0,    0,    8,    0,    8,   16,    0,
    0,   17,    0,    9,    2,    9,   18,   13,    0,   11,
   13,   11,    3,   14,    0,   19,   14,    0,    0,    0,
    7,   15,    5,   10,   15,    0,   10,    0,    0,    8,
   12,    0,    0,   12,    2,    0,    0,    9,    0,    0,
    0,    0,    3,   11,    0,   10,    0,   10,    0,    0,
    7,   16,   12,    0,   12,    0,    0,    0,    0,    8,
   31,   18,    0,   13,   32,   29,   27,    9,   28,   14,
   30,    0,    0,   11,    0,    0,    0,   15,    0,   10,
    0,   16,   31,   21,   17,   23,   12,   29,   27,    0,
   28,    0,   30,   13,    0,    0,    0,    0,    0,   14,
    0,    0,    0,    0,    0,   31,   18,   15,    0,   10,
   29,   27,    0,   28,    0,   30,   12,   17,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   21,    0,
   23,    0,    0,    0,    0,    0,   31,   18,    0,   25,
   26,   29,   27,    0,   28,    0,   30,   16,   22,   24,
   25,   26,    0,    1,    0,    0,    0,    0,    0,   21,
    0,   23,   17,    0,    0,    0,    0,    0,    0,    2,
    2,    2,    2,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    3,    3,    3,    7,    7,    7,    7,    7,
    7,    7,    7,   17,    8,    8,    8,    8,    8,    8,
    8,    8,    9,    9,    9,    9,    9,    9,   11,   11,
   11,   11,   11,   11,    0,    0,   16,   16,    0,   17,
   17,    0,    0,   16,   18,   18,    0,    0,   13,   13,
   13,   13,    0,   19,   14,   14,   14,   14,    0,    0,
    0,    0,   15,   15,   10,   10,   10,   10,   10,   10,
    0,   12,   12,   12,   12,   12,   12,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   31,   18,    0,
    0,    0,   29,   27,    0,   28,    0,   30,    0,    0,
    0,    0,   14,   15,   19,   20,   22,   24,   25,   26,
   21,    0,   23,   31,   18,    0,    0,    0,   29,   27,
   31,   28,    0,   30,    0,   29,   27,    0,   28,    0,
   30,    0,    0,    0,    0,    0,   21,    0,   23,    0,
    0,    0,    0,   21,   17,   23,    0,    0,    0,   19,
   20,   22,   24,   25,   26,    0,    0,    0,    0,    0,
    0,    0,    0,   31,   18,    0,    0,    0,   29,   27,
   17,   28,    0,   30,   16,    0,    0,    0,   14,   15,
   19,   20,   22,   24,   25,   26,   21,    0,   23,    9,
   10,   11,   12,   13,    0,    0,    0,    0,    0,    0,
   16,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   43,   44,   45,   46,   47,   48,   49,   50,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   15,   19,   20,   22,   24,   25,   26,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   19,   20,   22,
   24,   25,   26,    0,   19,   20,   22,   24,   25,   26,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   19,   20,   22,
   24,   25,   26,
};
static const short yycheck[] = {                         -1,
    0,   37,    0,   -1,   -1,   37,   42,   43,    0,   45,
   42,   47,   37,   -1,   -1,   47,    0,   42,   43,   33,
   45,   -1,   47,   -1,   -1,    0,   40,   -1,   -1,   43,
   -1,   45,   -1,    0,   -1,   60,   -1,   62,   38,    0,
   -1,   41,   -1,   43,   -1,   45,   38,    0,   -1,   41,
    0,   43,   -1,   45,   38,    0,   -1,   41,   -1,    0,
   60,   -1,   62,   38,    0,    0,   41,   -1,   60,   -1,
   62,   38,   -1,    0,   41,    0,   60,   38,   62,   -1,
   41,   -1,    0,   -1,   -1,   60,   -1,   62,   41,   -1,
   -1,   41,   -1,   60,   94,   62,   41,   38,   -1,   60,
   41,   62,   94,   38,   -1,   41,   41,   -1,   -1,   -1,
   94,   38,  126,   38,   41,   -1,   41,   -1,   -1,   94,
   38,   -1,   -1,   41,  124,   -1,   -1,   94,   -1,   -1,
   -1,   -1,  124,   94,   -1,   60,   -1,   62,   -1,   -1,
  124,   94,   60,   -1,   62,   -1,   -1,   -1,   -1,  124,
   37,   38,   -1,   94,   41,   42,   43,  124,   45,   94,
   47,   -1,   -1,  124,   -1,   -1,   -1,   94,   -1,   94,
   -1,  124,   37,   60,  124,   62,   94,   42,   43,   -1,
   45,   -1,   47,  124,   -1,   -1,   -1,   -1,   -1,  124,
   -1,   -1,   -1,   -1,   -1,   37,   38,  124,   -1,  124,
   42,   43,   -1,   45,   -1,   47,  124,   94,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   60,   -1,
   62,   -1,   -1,   -1,   -1,   -1,   37,   38,   -1,  265,
  266,   42,   43,   -1,   45,   -1,   47,  124,  263,  264,
  265,  266,   -1,  257,   -1,   -1,   -1,   -1,   -1,   60,
   -1,   62,   94,   -1,   -1,   -1,   -1,   -1,   -1,  259,
  260,  261,  262,  263,  264,  265,  266,  259,  260,  261,
  262,  263,  264,  265,  266,  259,  260,  261,  262,  263,
  264,  265,  266,   94,  259,  260,  261,  262,  263,  264,
  265,  266,  259,  260,  261,  262,  263,  264,  259,  260,
  261,  262,  263,  264,   -1,   -1,  259,  260,   -1,  259,
  260,   -1,   -1,  124,  259,  260,   -1,   -1,  259,  260,
  261,  262,   -1,  259,  259,  260,  261,  262,   -1,   -1,
   -1,   -1,  259,  260,  259,  260,  261,  262,  263,  264,
   -1,  259,  260,  261,  262,  263,  264,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   37,   38,   -1,
   -1,   -1,   42,   43,   -1,   45,   -1,   47,   -1,   -1,
   -1,   -1,  259,  260,  261,  262,  263,  264,  265,  266,
   60,   -1,   62,   37,   38,   -1,   -1,   -1,   42,   43,
   37,   45,   -1,   47,   -1,   42,   43,   -1,   45,   -1,
   47,   -1,   -1,   -1,   -1,   -1,   60,   -1,   62,   -1,
   -1,   -1,   -1,   60,   94,   62,   -1,   -1,   -1,  261,
  262,  263,  264,  265,  266,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   37,   38,   -1,   -1,   -1,   42,   43,
   94,   45,   -1,   47,  124,   -1,   -1,   -1,  259,  260,
  261,  262,  263,  264,  265,  266,   60,   -1,   62,    2,
    3,    4,    5,    6,   -1,   -1,   -1,   -1,   -1,   -1,
  124,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   27,   28,   29,   30,   31,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  261,  262,  263,
  264,  265,  266,   -1,  261,  262,  263,  264,  265,  266,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  261,  262,  263,
  264,  265,  266,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 268
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'","'&'",0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,0,"'<'",0,"'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'|'",0,
"'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"NUMBER","ERROR","LOR","LAND","EQ","NE","LE","GE",
"LSHIFT","RSHIFT","UMINUS","UPLUS",
};
static const char *yyrule[] = {
"$accept : top",
"top : expr",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : expr '%' expr",
"expr : expr LSHIFT expr",
"expr : expr RSHIFT expr",
"expr : expr '<' expr",
"expr : expr '>' expr",
"expr : expr LE expr",
"expr : expr GE expr",
"expr : expr EQ expr",
"expr : expr NE expr",
"expr : expr '&' expr",
"expr : expr '^' expr",
"expr : expr '|' expr",
"expr : expr LAND expr",
"expr : expr LOR expr",
"expr : '(' expr ')'",
"expr : '-' expr",
"expr : '+' expr",
"expr : '!' expr",
"expr : '~' expr",
"expr : NUMBER",

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
#line 85 "parser.y"

#line 358 "parser.c"

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
#line 45 "parser.y"
	{ end_result = yystack.l_mark[0]; }
break;
case 2:
#line 47 "parser.y"
	{ yyval = yystack.l_mark[-2] + yystack.l_mark[0]; }
break;
case 3:
#line 48 "parser.y"
	{ yyval = yystack.l_mark[-2] - yystack.l_mark[0]; }
break;
case 4:
#line 49 "parser.y"
	{ yyval = yystack.l_mark[-2] * yystack.l_mark[0]; }
break;
case 5:
#line 50 "parser.y"
	{
		if (yystack.l_mark[0] == 0) {
			yyerror("division by zero");
			exit(1);
		}
		yyval = yystack.l_mark[-2] / yystack.l_mark[0];
	}
break;
case 6:
#line 57 "parser.y"
	{ 
		if (yystack.l_mark[0] == 0) {
			yyerror("modulo zero");
			exit(1);
		}
		yyval = yystack.l_mark[-2] % yystack.l_mark[0];
	}
break;
case 7:
#line 64 "parser.y"
	{ yyval = yystack.l_mark[-2] << yystack.l_mark[0]; }
break;
case 8:
#line 65 "parser.y"
	{ yyval = yystack.l_mark[-2] >> yystack.l_mark[0]; }
break;
case 9:
#line 66 "parser.y"
	{ yyval = yystack.l_mark[-2] < yystack.l_mark[0]; }
break;
case 10:
#line 67 "parser.y"
	{ yyval = yystack.l_mark[-2] > yystack.l_mark[0]; }
break;
case 11:
#line 68 "parser.y"
	{ yyval = yystack.l_mark[-2] <= yystack.l_mark[0]; }
break;
case 12:
#line 69 "parser.y"
	{ yyval = yystack.l_mark[-2] >= yystack.l_mark[0]; }
break;
case 13:
#line 70 "parser.y"
	{ yyval = yystack.l_mark[-2] == yystack.l_mark[0]; }
break;
case 14:
#line 71 "parser.y"
	{ yyval = yystack.l_mark[-2] != yystack.l_mark[0]; }
break;
case 15:
#line 72 "parser.y"
	{ yyval = yystack.l_mark[-2] & yystack.l_mark[0]; }
break;
case 16:
#line 73 "parser.y"
	{ yyval = yystack.l_mark[-2] ^ yystack.l_mark[0]; }
break;
case 17:
#line 74 "parser.y"
	{ yyval = yystack.l_mark[-2] | yystack.l_mark[0]; }
break;
case 18:
#line 75 "parser.y"
	{ yyval = yystack.l_mark[-2] && yystack.l_mark[0]; }
break;
case 19:
#line 76 "parser.y"
	{ yyval = yystack.l_mark[-2] || yystack.l_mark[0]; }
break;
case 20:
#line 77 "parser.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 21:
#line 78 "parser.y"
	{ yyval = -yystack.l_mark[0]; }
break;
case 22:
#line 79 "parser.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 23:
#line 80 "parser.y"
	{ yyval = !yystack.l_mark[0]; }
break;
case 24:
#line 81 "parser.y"
	{ yyval = ~yystack.l_mark[0]; }
break;
#line 672 "parser.c"
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
