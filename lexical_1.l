%{
#include <stdio.h> // Include stdio.h for printf
%}


/* Rules */
%%

"+"             { printf("PLUS\n"); }
"-"             { printf("MINUS\n"); }
"*"             { printf("MULT\n"); }
"/"             { printf("DIV\n"); }
"%"             { printf("modulo\n"); }
"^"             { printf("power\n"); }
"="             { printf("ASSIGN\n"); }

[0-9]+          { printf("INTEGER\n"); }
[-+]?[0-9]+.[0-9]+  {printf("Float\n");}
true|false          {printf("boolean\n");}
'.'                 {printf("char \n");}

"int"           {printf("int\n");  } 
"float"         { printf("float\n");}
"char"          { printf("char\n");}
"bool"          {printf("boolean\n");}
"const"         { printf("CONST\n"); }


"while"         { printf("WHILE\n"); }
"do"            { printf("do\n"); }
"break"         { printf("break\n"); }
"continue"      { printf("continue\n"); }
"for"           { printf("FOR\n"); }
"switch"        { printf("SWITCH\n"); }
"case"          { printf("CASE\n"); }
"default"       { printf("DEFAULT\n"); }

"if"            { printf("if\n"); }
"else"          { printf("ELSE\n"); }
"elseif"         { printf("ELSEIF\n");}

"=="            { printf("EQUAL\n"); }
"!="            { printf("NOTEQUAL\n"); }
">"             { printf("GREATER\n"); }
"<"             { printf("LESS\n"); }
">="            { printf("GREATEREQ\n"); }
"<="            { printf("LESSEQ\n"); }
"&&"            { printf("AND\n"); }
"||"            { printf("OR\n"); }



"{"             { printf("LBRACE\n"); }
"}"             { printf("RBRACE\n"); }
"("             { printf("LPAREN\n"); }
")"             { printf("RPAREN\n"); }


"repeat"        { printf("REPEAT\n"); }
"until"         { printf("UNTIL\n"); }


"void"          { printf("void\n");  }
"return"        { printf("RETURN\n"); }


";"             { printf("SEMICOLON\n"); }
","             { printf("COLON\n"); }


[a-zA-Z][a-zA-Z0-9_]*  { printf("Identifier\n"); } 


[ \t\n]               {  }


.               { printf("error \n"); }

%%
int yywrap(void) {
    return 1;
}