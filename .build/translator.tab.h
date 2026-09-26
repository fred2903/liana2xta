/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CREATE = 258,
     AUTOMATON = 259,
     CLOCKS = 260,
     ACTIONS = 261,
     INTEGERS = 262,
     LOCATIONS = 263,
     TRANSITIONS = 264,
     SYMM = 265,
     INI = 266,
     URG = 267,
     COM = 268,
     INV = 269,
     LBRACE = 270,
     RBRACE = 271,
     LSQUARE = 272,
     RSQUARE = 273,
     LPAR = 274,
     RPAR = 275,
     COMMA = 276,
     SEMI = 277,
     DCOLON = 278,
     COLON = 279,
     ASSIGN = 280,
     PLUS = 281,
     MINUS = 282,
     MUL = 283,
     DIV = 284,
     OR = 285,
     AND = 286,
     BOOL = 287,
     INT = 288,
     LITERAL = 289,
     EXCLAM = 290,
     DOUBLE_EXCLAM = 291,
     INTERROG = 292,
     DOUBLE_INTERROG = 293,
     LE = 294,
     GE = 295,
     EQ = 296,
     LT = 297,
     GT = 298
   };
#endif
/* Tokens.  */
#define CREATE 258
#define AUTOMATON 259
#define CLOCKS 260
#define ACTIONS 261
#define INTEGERS 262
#define LOCATIONS 263
#define TRANSITIONS 264
#define SYMM 265
#define INI 266
#define URG 267
#define COM 268
#define INV 269
#define LBRACE 270
#define RBRACE 271
#define LSQUARE 272
#define RSQUARE 273
#define LPAR 274
#define RPAR 275
#define COMMA 276
#define SEMI 277
#define DCOLON 278
#define COLON 279
#define ASSIGN 280
#define PLUS 281
#define MINUS 282
#define MUL 283
#define DIV 284
#define OR 285
#define AND 286
#define BOOL 287
#define INT 288
#define LITERAL 289
#define EXCLAM 290
#define DOUBLE_EXCLAM 291
#define INTERROG 292
#define DOUBLE_INTERROG 293
#define LE 294
#define GE 295
#define EQ 296
#define LT 297
#define GT 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/translator/translator.y"
{
    bool bval;
    char* sval;
}
/* Line 1529 of yacc.c.  */
#line 140 "/Users/federicoferro/Desktop/Istruzione/Computer Science and Engineering/Pubblicazione/liana2xta/.build/translator.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

