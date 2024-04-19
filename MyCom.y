%{
    #include <stdio.h>
    #include <stdlib.h>

    int yylex();
    int yywrap();
    void yyerror(char*);
    %}

%union {
    int ival;
    char cval;
    float fval;
    bool bval;
    char* sval;
}

%token <ival> INT_LIT
%token <fval> FLOAT_LIT
%token <bval> BOOL_LIT
%token <cval> CHAR_LIT


%token WHILE DO CONTINUE 
%token FOR 
%token SWITCH CASE DEFAULT BREAK

%token IF ELSE ELSEIF

%left EQUAL NE GE LE
%left AND OR
%left GREATER LESS
%left PLUS MINUS
%left MULT DIV MOD
/* %right UMINUS */


%token REPEAT UNTIL
%token VOID RETURN






/* Grammer Rules */
%%




%%







void yyerror(char* s)
{
    fprintf(stderr, "%s\n", s);
    exit(1);
}

