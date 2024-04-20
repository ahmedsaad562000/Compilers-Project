%{
#include <stdio.h> // Include stdio.h for printf
#include <stdlib.h>
#include "y.tab.h" // Include the y.tab.h file for the token definitions
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

[0-9]+          { yylval.lexeme.intVal = atoi(yytext) ;yylval.type = INT;return INT_VAL;}
[-+]?[0-9]+.[0-9]+  {yylval.lexeme.floatVal = atof(yytext) ; yylval.type = FLOAT ;return FLOAT_VAL;}
'.'                 {yylval.lexeme.charVal = yytext[0]; yylval.type = CHAR ;return CHAR_VAL;}


"true"          { yylval.lexeme.boolVal = true ; yylval.type = BOOL ; return TRUE_VAL; }
"false"         { yylval.bval = false; yylval.type = BOOL ;return FALSE_VAL; }



"int"           {return INT;} 
"float"         { return FLOAT;}
"char"          { return CHAR;}
"bool"          { return BOOL;}
"const"         { return CONST; }


"while"         { return WHILE; }
"break"         { return BREAK; }
"continue"      { return CONTINUE; }
"for"           { return FOR; }
"switch"        { return SWITCH; }
"case"          { return CASE; }
"default"       { return DEFAULT; }

"if"            { return IF; }
"else"          { return ELSE;}
/* "elseif"        { return ELSEIF; } */

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



[a-zA-Z][a-zA-Z0-9_]*  { yylval.stringValue = strdup(yytext); return IDENTIFIER; } 


[ \t\n]               {  }


.               { yyerror("Unknown character"); }

%%
int yywrap(void) {
    return 1;
}