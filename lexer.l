%{
#include <stdio.h> // Include stdio.h for printf
#include <stdlib.h>
#include "./SymbolTable/utils/enums.h"
#include "parser.tab.h" // Include the y.tab.h file for the token definitions

int lineno = 1;  /* Line Number */
 int yylex();
%}


/* Rules */
%%

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULT; }
"/"             { return DIV; }
"%"             { return MOD; }
"^"             { return EXP; }
"="             { return ASSIGN;}
"/="            { return DIV_EQ; }
"+="             { return PLUS_EQ; }
"-="             { return MINUS_EQ; }
"*="             { return MULT_EQ; }
"++"            { return INC; }
"--"            { return DEC; }

[0-9]+              { 
                         yylval.lexeme.intVal = atoi(yytext);
                         yylval.lexeme.type = INT_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return INT_VAL;
                    }

[0-9]+\.[0-9]+  {
                         yylval.lexeme.floatVal = atof(yytext);
                         yylval.lexeme.type = FLOAT_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return FLOAT_VAL;
                    }

['][a-zA-Z0-9][']   {
                         yylval.lexeme.charVal = yytext[0];
                         yylval.lexeme.type = CHAR_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return CHAR_VAL;
                    }


(["][^"\\]*(\\.[^"\\]*)*["])|(['][^'\\]*(\\.[^'\\]*)*['])   {
                         yylval.lexeme.stringVal = strdup(yytext);
                         yylval.lexeme.type = STRING_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return STRING_VAL;
                    }


"true"              { 
                         yylval.lexeme.boolVal = true;
                         yylval.lexeme.type = BOOL_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return TRUE_VAL; }
"false"             { 
                         yylval.lexeme.boolVal = false;
                         yylval.lexeme.type = BOOL_TYPE;
                         yylval.lexeme.stringRep = strdup(yytext);
                        return FALSE_VAL;
                    }



"int"           { yylval.varType = INT_TYPE;          
                  return INT;} 
"float"         { yylval.varType = FLOAT_TYPE;
                  return FLOAT;}
"char"          { yylval.varType = CHAR_TYPE;
                  return CHAR;}
"bool"          { yylval.varType = BOOL_TYPE;
                  return BOOL;}

"string"        { yylval.varType = STRING_TYPE;
                  return STRING;}

"const"         {  return CONST; }


"while"         { return WHILE; }
"break"         { return BREAK; }
"continue"      { return CONTINUE; }
"for"           { return FOR; }
"switch"        { return SWITCH; }
"case"          { return CASE; }
"default"       { return DEFAULT; }

"if"            { return IF; }
"else"          { return ELSE;}


"=="            { return EQUAL; }
"!="            { return NE; }
">="            { return GE; }
"<="            { return LE; }
"&&"            { return AND; }
"||"            { return OR; }
">"             { return GREATER; }
"<"             { return LESS; }
"!"             { return NOT; }






"{"             { return LBRACE; }
"}"             { return RBRACE; }
"("             { return LPAREN; }
")"             { return RPAREN; }
";"             { return SEMICOLON; }
","             { return COMMA; } 
":"             { return COLON; }







"repeat"        { return REPEAT; }
"until"         { return UNTIL; }


"void"          { return VOID;  }
"return"        { return RETURN; }

"print"         { return PRINT; }


[a-zA-Z][a-zA-Z0-9_]*  { 
    yylval.stringValue = strdup(yytext);
     return IDENTIFIER; } 


[ \t\r]               { ;}

"\n"                 { lineno++; }
[//].*                 { ; }
.               { return *yytext; }

%%
int yywrap(void) {
    return 1;
}