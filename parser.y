%{
    #include <stdio.h>
    #include <stdlib.h>


    void yyerror(char* s);
    int yylex();
    %}


%union {
    int ival;
    char cval;

}