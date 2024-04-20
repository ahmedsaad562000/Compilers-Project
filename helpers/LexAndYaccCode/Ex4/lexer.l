%{
#include<stdio.h>
#include "Classes.hpp"
#include "parser.h"
// int yylineno = 1;
// void yyerror (char *s);
extern void printSyntaxError(string s, int lineNum);
int yylex();
%}

%%
        /* EOF */
"<<EOF>>"                       return EOF;

        /* Constant */
"const"                         return CONST;

        /* Mathematical Expressions */
"+"                             return PLUS;
"-"                             return MINUS;
"*"                             return MULT;
"/"                             return DIV;
"+="                            return PLUS_EQ;
"-="                            return MINUS_EQ;
"*="                            return MULT_EQ;
"/="                            return DIV_EQ;
"++"                            return INC;
"--"                            return DEC;
 
        /*Break and Continue*/
"break"                         return BREAK;
"continue"                      return CONTINUE;
   
        /* Comparison Op */
"<"				return LT;
">"				return GT;
">="                            return GE;
"<="                            return LE;
"=="                            return EQ_EQ;
"!="                            return NE;

        /* Logical Expressions */
"&&"                            return AND;
"||"                            return OR;
"!"                             return NOT;

        /* Assignment Operator */
"="				return EQUAL;

        /* Types */
"int"                           {
                                    yylval.varType = INT_TYPE;
                                    return INT;  
                                }
"float"                         {
                                    yylval.varType = FLOAT_TYPE;
                                    return FLOAT;  
                                }
"char"                          {
                                    yylval.varType = CHAR_TYPE;
                                    return CHAR;  
                                }
"bool"                          {
                                    yylval.varType = BOOL_TYPE;
                                    return BOOL;  
                                }
"string"                        {
                                    yylval.varType = STRING_TYPE;
                                    return STRING;  
                                }


        /* if then else statement */
"if"                            return IF;
"else if"                       return ELSEIF;
"else"                          return ELSE;

        /* While & do-while statement */
"while"                         return WHILE;
"do"                            return DO;
"for"                           return FOR;
"switch"                        return SWITCH;
"case"                          return CASE;
"default"                       return DEFAULT;

        /* Functions */
"void"                          return VOID; 
"return"                        return RETURN;  
","                             return COMMA;
":"                             return COLON;

        /* Enums */
"enum"                          return ENUM;

        /* Brackets */
"("                             return OPENBRACKET;
")"                             return CLOSEDBRACKET;
"{"                             return OPENCURL;
"}"                             return CLOSEDCURL;

        /* Stop Characters */
"\n"                            {yylineno += 1;}
[\t\r ]+                        {;}
";"                             return SEMICOLON;

        /* Identifier and Values */

        /* TRUE VALUE*/
"true"                          {
                                    yylval.lexeme.boolVal = true;
                                    yylval.lexeme.type = BOOL_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);
                                    return TRUE_VAL;
                                }
        /* FALSE VALUE*/
"false"                          {
                                    yylval.lexeme.boolVal = false;
                                    yylval.lexeme.type = BOOL_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);

                                    return FALSE_VAL;
                                }

        /* INT VALUE*/
[0-9]+                          { 
                                    yylval.lexeme.intVal = atoi(yytext); 
                                    yylval.lexeme.type = INT_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);

                                    return INT_VAL;                               
                                }
        /* FLOAT VALUE*/
[0-9]+[\.][0-9]+                {
                                    yylval.lexeme.floatVal = atof(yytext);
                                    yylval.lexeme.type = FLOAT_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);

                                    return FLOAT_VAL;                                 
                                } 

        /* STRING VALUE   */
["][a-zA-Z0-9]*["]              {   
                                    yylval.lexeme.stringVal = strdup(yytext);
                                    yylval.lexeme.type = STRING_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);

                                    return STRING_VAL;
                                }
        /* CHAR VALUE*/
['][a-zA-Z0-9][']              {   
                                    yylval.lexeme.charVal = yytext[1];
                                    yylval.lexeme.type = CHAR_TYPE;
                                    yylval.lexeme.stringRep = strdup(yytext);

                                    return CHAR_VAL;
                                }
        /* IDENTIFIER VALUE*/
[a-zA-Z][_a-zA-Z0-9]*           {   
                                    yylval.stringValue = strdup(yytext);                                       
                                    return IDENTIFIER;
                                }

%%


int yywrap(void)
{
   return 1;
}

/* This is called by our parser whenever there is a syntactical error. In other words something that does not suit the grammar. */
void yyerror (string s) {
    printSyntaxError(s,yylineno);
    exit(0);
} 