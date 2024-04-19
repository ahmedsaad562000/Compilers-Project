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

[0-9]+          { yylval.ival = atoi(yytext);return INT_LIT;}
[-+]?[0-9]+.[0-9]+  {yylval.fval = atof(yytext);return FLOAT_LIT;}
/* true|false          {yylval.bval = atoi(yytext);return BOOLEAN} */
'.'                 {yylval.cval = yytext[0];return CHAR_LIT;}


"true"          { yylval.bval = true ; return BOOL_LIT; }
"false"         { yylval.bval = false; return BOOL_LIT; }



"int"           {return INT;  } 
"float"         { return FLOAT;}
"char"          { return CHAR;}
"bool"          { return BOOL;}
"const"         { return CONST; }


"while"         { return WHILE; }
"do"            { return DO; }
"break"         { return BREAK; }
"continue"      { return CONTINUE; }
"for"           { return FOR; }
"switch"        { return SWITCH; }
"case"          { return CASE; }
"default"       { return DEFAULT; }

"if"            { return IF; }
"else"          { return ELSE; }
"elseif"         { return ELSEIF;}

"=="            { return EQUAL; }
"!="            { return NE; }
">="            { return GE; }
"<="            { return LE; }
"&&"            { return AND; }
"||"            { return OR; }
">"             { return GREATER; }
"<"             { return LESS; }



/* 

IF ANY SYMBOL HAS LOGIC hANDLE IT SEPARATELY

"{"             { printf("LBRACE\n"); }
"}"             { printf("RBRACE\n"); }
"("             { printf("LPAREN\n"); }
")"             { printf("RPAREN\n"); }
";"             { printf("SEMICOLON\n"); }
","             { printf("COLON\n"); } 


*/


[{}(),;]          { return ytext[0];}



"repeat"        { return REPEAT; }
"until"         { return UNTIL; }


"void"          { return VOID;  }
"return"        { return RETURN; }



[a-zA-Z][a-zA-Z0-9_]*  { yylval.sval = yytext; return IDENTIFIER; } 


[ \t\n]               {  }


.               { yyerror("Unknown character"); }

%%
int yywrap(void) {
    return 1;
}