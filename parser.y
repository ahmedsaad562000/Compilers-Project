%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include "./SemanticAnalysis/SemanticAnalysis.cpp"
    extern FILE *yyin;
    extern int lineno; /* Line Number tacker from lexer */
    extern int yylex();
    int yywrap();
    void yyerror(char*);
    %}
        /* Union */
%union {
        int varType;
        struct Lexeme{
                int type;
                char *stringRep;
                int intVal;
                float floatVal;
                char* stringVal;
                bool boolVal;
                char charVal;
        }lexeme;

        char* stringValue;
};

%type<varType> type
%type<lexeme> value
%type<lexeme> constant
%type<lexeme> expr
%type<lexeme> bool_expr
%type<lexeme> arithmetic_expr
%type<lexeme> unary_expr
%type<lexeme> binary_expr
%type<lexeme> term
%type<lexeme> factor
%type<lexeme> function_call







%token INT
%token FLOAT
%token CHAR
%token BOOL
%token STRING

%type<varType> INT  
%type<varType> FLOAT
%type<varType> CHAR
%type<varType> BOOL
%type<varType> STRING



/* Values */
%token IDENTIFIER
%token  INT_VAL
%token  FLOAT_VAL
%token  CHAR_VAL
%token  STRING_VAL
%token  TRUE_VAL
%token  FALSE_VAL

%type<lexeme> INT_VAL
%type<lexeme> FLOAT_VAL
%type<lexeme> CHAR_VAL
%type<lexeme> STRING_VAL
%type<lexeme> TRUE_VAL
%type<lexeme> FALSE_VAL
%type<stringValue> IDENTIFIER




/* Identifier */








/* const */
%token CONST


/* stopping chars and brackets */
%token SEMICOLON COMMA LBRACE RBRACE LPAREN RPAREN 

/* loop control */
%token BREAK CONTINUE



/* while loop */
%token WHILE  

/* for loop */
%token FOR

/* switch case */
%token SWITCH CASE DEFAULT COLON 


/* if statement */
%token IF ELSE

/* repeat until */
%token REPEAT UNTIL

/* comparators */
%left EQUAL NE GE LE
%left GREATER LESS


/* mathematical operators */
%left PLUS MINUS
%left MULT DIV MOD 
%left EXP
%left AND OR
%nonassoc NOT 

/* assignment */
%left ASSIGN
%left DIV_EQ
%left PLUS_EQ
%left MINUS_EQ
%left MULT_EQ
%left INC
%left DEC

%nonassoc UMINUS




/* function */
%token VOID RETURN


/* print */
%token PRINT

/* start */

%start stmts


/* Grammer Rules */
%%

stmts:
        stmts stmt
        | stmt 
        ;
stmt:
        expr SEMICOLON
        | LBRACE{createNewTable();} stmts RBRACE{exitCurrentScope();} /* block */
        | const_dec_stmt        /* const dec */
        | var_dec_stmt        /* var dec */
        | assign_stmt        /* assign */
        | while_stmt       /* while */
        | if_stmt           /* if */
        | repeat_until_stmt       /* repeat until */
        | for_stmt       /* for loop */
        | switch_stmt       /* switch */
        | function         /* function */
        | RETURN ret_val SEMICOLON                   /* return */
        | BREAK SEMICOLON  /* break */
        | CONTINUE SEMICOLON  /* continue */
        | PRINT LPAREN value RPAREN SEMICOLON {printf("-----------PRINT Statement------------\n");}  /* print */
        ;

ret_val: value | ;

value: expr | STRING_VAL | CHAR_VAL;

/* expressions */
expr:   bool_expr
        | arithmetic_expr        ;

bool_expr: expr EQUAL arithmetic_expr           /* == */
    | expr NE arithmetic_expr                   /* != */
    | expr GREATER arithmetic_expr              /* > */
    | expr LESS arithmetic_expr                 /* < */
    | expr GE arithmetic_expr                   /* >= */
    | expr LE arithmetic_expr                   /* <= */
    | expr AND expr                             /* && */
    | expr OR expr                              /* || */
    | NOT expr
    |LPAREN bool_expr RPAREN                                  /* ! */         
    |TRUE_VAL                                   /* true */
    |FALSE_VAL                                  /* false */
    ;


arithmetic_expr:binary_expr
                | unary_expr
                ;

unary_expr: IDENTIFIER INC
        | IDENTIFIER DEC
    ;

binary_expr: term
    | binary_expr PLUS term      {printf("PLUS\n");}
    | binary_expr MINUS term     {printf("MINUS\n");}
    ;

term: negat
    | term MULT factor          {printf("MULT\n");}
    | term DIV factor           {printf("DIV\n");}
    | term MOD factor           {printf("MOD\n");}
    ;
negat: para
     | MINUS para %prec UMINUS           {printf("--------------negation------------------------\n");}

para: factor
        | LPAREN binary_expr RPAREN
        ;

factor: 
        INT_VAL                 {printf("INT_VAL\n");}
        | FLOAT_VAL             {printf("FLOAT_VAL\n");}        
        | factor EXP factor     {printf("EXP\n");}
        | function_call         {printf("FUNCTION_CALL\n");}
        | IDENTIFIER            {printf("IDENTIFIER\n");}


/* function call */
function_call:
        IDENTIFIER LPAREN RPAREN   // no params
        | IDENTIFIER LPAREN call_params RPAREN // with params
        ;

call_params:
        call_params COMMA value
        | value
        ;


/* constant Declaration */
constant:
        INT_VAL 
        | FLOAT_VAL
        | STRING_VAL
        | CHAR_VAL
        | TRUE_VAL
        | FALSE_VAL
        ;

const_dec_stmt:
        CONST type IDENTIFIER ASSIGN constant SEMICOLON
        ;
var_dec_stmt:
        type IDENTIFIER SEMICOLON {
                
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                 LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>($1);
                lexeme->stringRep = getCurrentCount();
                addEntryToTable($2,lexeme,VAR,false);
              
         }
        | type IDENTIFIER ASSIGN value SEMICOLON
        ;


/* Assignment statements */
assign_stmt:IDENTIFIER ASSIGN value SEMICOLON
        {

        }
        | IDENTIFIER DIV_EQ value SEMICOLON
        | IDENTIFIER MULT_EQ value SEMICOLON
        | IDENTIFIER PLUS_EQ value SEMICOLON
        | IDENTIFIER MINUS_EQ value SEMICOLON
        ;
/* while statement */        
while_stmt:
        WHILE LPAREN expr RPAREN LBRACE stmts RBRACE  {printf("WHILE\n");}
        ;

/* if statement */
if_stmt:
        IF LPAREN expr RPAREN LBRACE stmts RBRACE     {printf("IF\n");}      /* if-then */
        | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE stmts RBRACE  {printf("IF ELSE\n");}   /* if-then-else */
        ;
/* repeat until */
repeat_until_stmt:
        REPEAT LBRACE stmts RBRACE UNTIL LPAREN expr RPAREN SEMICOLON   {printf("REPEAT UNTIL\n");}
        ;
/* for loop */
for_stmt:
        FOR LPAREN var_dec_stmt expr SEMICOLON expr RPAREN LBRACE stmts RBRACE    {printf("FOR\n");}
        | FOR LPAREN assign_stmt expr SEMICOLON expr RPAREN LBRACE stmts RBRACE   {printf("FOR ELSE\n");}
        ;
/* switch case */
switch_stmt:
        SWITCH LPAREN expr RPAREN LBRACE case_stmts RBRACE   {printf("SWITCH\n");}
        ;

case_stmts:
        case_stmts case_stmt
        | case_stmt
        ;
case_stmt:
        CASE value COLON stmts  {printf("CASE\n");}
        | DEFAULT COLON stmts    {printf("DEFAULT\n");}
        ;



/* function return types */
type:  INT | FLOAT | CHAR | STRING | BOOL;
/* function */
function : function_prototype LBRACE stmts RBRACE  {printf("FUNCTION\n");}    
        ;
function_prototype:
        VOID IDENTIFIER LPAREN params RPAREN  {printf("VOID FUNCTION WITH PARAMS\n");}  /* void function with params */
        |VOID IDENTIFIER LPAREN RPAREN         {printf("VOID FUNCTION WITHOUT PARAMS\n");}  /* void function without params */
        |type IDENTIFIER LPAREN params RPAREN  {printf("TYPE FUNCTION WITH PARAMS\n");}  /* type function with params */
        |type IDENTIFIER LPAREN RPAREN          {printf("TYPE FUNCTION WITHOUT PARAMS\n");} /* type function without params */
        ;
params:
        param                /* single param */
        | params COMMA param     {printf("Multiple PARAMS\n");}  /* multiple params */
        ;
param:
        type IDENTIFIER   {printf("Param without default\n");}    /* param without default value */
        |type IDENTIFIER ASSIGN constant    {printf("Param with default\n");} /* param with default value */
        ;
%%







void yyerror(char* s)
{
    fprintf(stderr, "\n ERROR AT LINE %d :\n %s \n", lineno, s);
    exit(1);
}


int main (void)
{
    Init();

    yyin = fopen("test.txt", "r+");
    if (yyin == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf("====== Test File =====\n\n");
        FILE* testFile; char ch;
        testFile = fopen("test.txt","r");
        while((ch=fgetc(testFile))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(testFile);
        printf("\n\n====== Parsing =====\n\n");
        int result = yyparse();

        printf("\n=================\n");
        
        if (result == 0) {
            printf("Parsing Successful\n");
        }
        else {
            printf("Parsing Failed\n");
        }
        printSymbolTables();
    }
    fclose(yyin);
   
    return 0;
}





