%{
#include <stdio.h> // Include stdio.h for printf
#include <stdlib.h>
#include "parser.tab.h" // Include the y.tab.h file for the token definitions

int lineno = 1;  /* Line Number */
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
                        // yylval.lexeme.intVal = atoi(yytext);
                        // yylval.lexeme.type = varType::INT_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return INT_VAL;
                    }

[0-9]+\.[0-9]+  {
                        // yylval.lexeme.floatVal = atof(yytext);
                        // yylval.lexeme.type = varType::FLOAT_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return FLOAT_VAL;
                    }

['][a-zA-Z0-9][']   {
                        // yylval.lexeme.charVal = yytext[0];
                        // yylval.lexeme.type = varType::CHAR_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return CHAR_VAL;
                    }


(["][^"\\]*(\\.[^"\\]*)*["])|(['][^'\\]*(\\.[^'\\]*)*['])   {
                        // yylval.lexeme.stringVal = strdup(yytext);
                        // yylval.lexeme.type = varType::STRING_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return STRING_VAL;
                    }


"true"              { 
                        // yylval.lexeme.boolVal = true;
                        // yylval.lexeme.type = varType::BOOL_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return TRUE_VAL; }
"false"             { 
                        // yylval.lexeme.boolVal = false;
                        // yylval.lexeme.type = varType::BOOL_TYPE;
                        // yylval.lexeme.stringRep = strdup(yytext);
                        return FALSE_VAL;
                    }



"int"           {return INT;} 
"float"         { return FLOAT;}
"char"          { return CHAR;}
"bool"          { return BOOL;}
"string"        { return STRING;}
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



[a-zA-Z][a-zA-Z0-9_]*  { 
    //yylval.stringValue = strdup(yytext);
     return IDENTIFIER; } 


[ \t\r]               { ;}

"\n"                 { lineno++; }
[//].*                 { ; }
.               { return *yytext; }

%%
int yywrap(void) {
    return 1;
}