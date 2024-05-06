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
                bool isIdentifier;
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
    {
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }
                else
                {
                $$.type = BOOL_TYPE;
                $$.stringRep = getCurrentCount();
                LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                $$.boolVal = checkEQ_EQ(lex1,lex2);     
    
                }
    
    }
    | expr NE arithmetic_expr  {               /* != */
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                        $$.boolVal = checkNE(lex1,lex2);
                }
        }                   
    | expr GREATER arithmetic_expr              /* > */
        {
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                        $$.boolVal = checkGT(lex1,lex2);
                }
        }
    | expr LESS arithmetic_expr                 /* < */
          {
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                        $$.boolVal = checkLT(lex1,lex2);
                }
        }
    | expr GE arithmetic_expr                   /* >= */
      {
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                        $$.boolVal = checkGE(lex1,lex2);
                }
        }
    | expr LE arithmetic_expr                   /* <= */
      {
                int type1 = $1.type;
                int type2 = $3.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in boolean expression",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        LexemeEntry* lex1 = convertLexemeToEntry($1.type, $1.stringRep, $1.intVal, $1.floatVal, $1.stringVal, $1.boolVal, $1.charVal);
                        LexemeEntry* lex2 = convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal);
                        $$.boolVal = checkLE(lex1,lex2);
                }
        }
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
        | IDENTIFIER            {
                SymbolTableEntry* entry = getIdEntry($1);
                if(idExistsInAnEnum(rootSymbolTable,$1))
                        return 0;
                        
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                entry->setIsUsed(true);
                $$.type = (int)entry->getLexemeEntry()->type;
                $$.stringRep = $1;
                $$.intVal = entry->getLexemeEntry()->intVal;
                $$.floatVal = entry->getLexemeEntry()->floatVal;
                $$.stringVal = entry->getLexemeEntry()->stringVal;
                $$.boolVal = entry->getLexemeEntry()->boolVal;
                $$.charVal = entry->getLexemeEntry()->charVal;
        }


/* function call */
function_call:
        IDENTIFIER LPAREN RPAREN   // no params
        | IDENTIFIER LPAREN {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Function not declared",lineno);
                        return 0;
                }
                if(*entry->getKind() != FUNC)
                {
                        printSemanticError("Cannot call a non function type",lineno);
                        return 0;
                }
                entry->setIsUsed(true);
                convertFunctionParamsToStack(entry);
        } call_params RPAREN {
                if(functionParameters.size() != 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                SymbolTableEntry* entry = getIdEntry($1);
                $$.type = (int)entry->getFunctionOutputType();
                $$.stringRep = $1;
                $$.intVal = entry->getLexemeEntry()->intVal;
                $$.floatVal = entry->getLexemeEntry()->floatVal;
                $$.stringVal = entry->getLexemeEntry()->stringVal;
                $$.boolVal = entry->getLexemeEntry()->boolVal;
                $$.charVal = entry->getLexemeEntry()->charVal;
        } // with params
        ;

call_params:
        call_params COMMA value {
                if(functionParameters.size() == 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                int type1 = (int)functionParameters.top();
                int type2 = $3.type;

                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in function call",lineno);
                }else{
                        functionParameters.pop();
                }
        }
        | value {
                if(functionParameters.size() == 0)
                {
                        printSemanticError("Function call parameters do not match function definition",lineno);
                        return 0;
                }
                int type1 = (int)functionParameters.top();
                int type2 = $1.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in function call",lineno);
                }else{
                        functionParameters.pop();
                }
        }
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
        {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($3);
                if(entry){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                int type1 = $2;
                int type2 = $5.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in variable declaration",lineno);
                }else{
                        LexemeEntry* lexeme = new LexemeEntry;
                        lexeme->type = static_cast<VariableType>(type1);
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)$5.floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)$5.intVal;
                        }else{
                                lexeme->intVal = $5.intVal;
                                lexeme->floatVal = $5.floatVal;
                                lexeme->stringVal = $5.stringVal;
                                lexeme->boolVal = $5.boolVal;
                                lexeme->charVal = $5.charVal;
                        }
                        addEntryToTable($3,lexeme,CONSTANT,true);
                }    
        }
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
        | type IDENTIFIER ASSIGN value SEMICOLON {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry){
                    printSemanticError("Variable already declared",lineno);
                    return 0;
                }
                int type1 = $1;
                int type2 = $4.type;
                 if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in variable declaration",lineno);
                }
                
                else
                {
                        LexemeEntry* lexeme = new LexemeEntry;
                        lexeme->type = static_cast<VariableType>(type1);
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)$4.floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)$4.intVal;
                        }else{
                                lexeme->intVal = $4.intVal;
                                lexeme->floatVal = $4.floatVal;
                                lexeme->stringVal = $4.stringVal;
                                lexeme->boolVal = $4.boolVal;
                                lexeme->charVal = $4.charVal;
                        }
                        addEntryToTable($2,lexeme,VAR,true);
                }
        }
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
        WHILE LPAREN expr { checkIfLexemIsBool($3.type != BOOL_TYPE,lineno);} RPAREN LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();}
        ;

/* if statement */
if_stmt:
        IF LPAREN expr {
                checkIfLexemIsBool($3.type != BOOL_TYPE,lineno);
        } RPAREN LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();}    /* if-then */
        | IF LPAREN expr {
                checkIfLexemIsBool($3.type != BOOL_TYPE,lineno);
        } RPAREN LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();} ELSE LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();} /* if-then-else */
        ;
/* repeat until */
repeat_until_stmt:
        REPEAT LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();} UNTIL LPAREN expr { checkIfLexemIsBool($9.type != BOOL_TYPE,lineno);} RPAREN SEMICOLON  {printf("REPEAT UNTIL\n");}
        ;
/* for loop */
for_stmt:
        FOR {createNewTable();} LPAREN var_dec_stmt expr {checkIfLexemIsBool($5.type != BOOL_TYPE,lineno); } SEMICOLON expr RPAREN LBRACE stmts RBRACE {exitCurrentScope();}
        | FOR {createNewTable();} LPAREN assign_stmt expr {checkIfLexemIsBool($5.type != BOOL_TYPE,lineno);} SEMICOLON expr RPAREN LBRACE stmts RBRACE {exitCurrentScope();}
        ;
/* switch case */
switch_stmt:
        SWITCH LPAREN expr RPAREN LBRACE {createNewTable();} case_stmts RBRACE {exitCurrentScope();}
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
function : function_prototype LBRACE stmts RBRACE  {exitCurrentScope(); currentFunction = nullptr;}    
        ;
function_prototype:
        VOID IDENTIFIER LPAREN{
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable($2,lexeme,FUNC,false,NULL, VOID_TYPE);
                createNewTable();
        }
         params RPAREN  {printf("Void function with parameters \n");}  /* void function with params */
        |VOID IDENTIFIER LPAREN {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = VOID_TYPE;
                lexeme->stringRep = getCurrentCount();
                addEntryToTable($2,lexeme,FUNC,false,NULL, VOID_TYPE);
                createNewTable();    
        } RPAREN {printf("Void function without parameters \n");}  /* void function without params */
        |type IDENTIFIER LPAREN {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>($1);
                lexeme->stringRep = getCurrentCount();
                VariableType functionOutput = static_cast<VariableType>($1);
                addEntryToTable($2,lexeme,FUNC,false,NULL, functionOutput);
                createNewTable();
        } params RPAREN  {printf("Typed function with parameters \n");}  /* type function with params */
        |type IDENTIFIER LPAREN {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Function already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                lexeme->type = static_cast<VariableType>($1);
                lexeme->stringRep = getCurrentCount();
                VariableType functionOutput = static_cast<VariableType>($1);
                addEntryToTable($2,lexeme,FUNC,false,NULL, functionOutput);
                createNewTable();
        } RPAREN {printf("Typed function without parameters \n")} /* type function without params */
        ;
params:
        param                /* single param */
        | params COMMA param     {printf("Multiple PARAMS\n");}  /* multiple params */
        ;
param:
        type IDENTIFIER {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                LexemeEntry* lexeme = new LexemeEntry;
                VariableType t = static_cast<VariableType>($1);
                lexeme->type = t;
                currentFunction->addFunctionInputsType(t);
                lexeme->stringRep = getCurrentCount();
                addEntryToTable($2,lexeme,PARAMETER,true);
        }   /* param without default value */
        |type IDENTIFIER ASSIGN constant {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry != NULL){
                        printSemanticError("Variable already declared",lineno);
                        return 0;
                }
                int type1 = $1;
                int type2 = $4.type;
                if(!isTypeMatching(type1,type2))
                {
                        printSemanticError("Type mismatch in variable declaration",lineno);
                }
                else{
                        LexemeEntry* lexeme = new LexemeEntry;
                        VariableType t = static_cast<VariableType>(type1);
                        lexeme->type = t;
                        currentFunction->addFunctionInputsType(t);
                        lexeme->type = t;
                        lexeme->stringRep = getCurrentCount();
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                lexeme->intVal = (int)$4.floatVal;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                lexeme->floatVal = (float)$4.intVal;
                        }else{
                                lexeme->intVal = $4.intVal;
                                lexeme->floatVal = $4.floatVal;
                                lexeme->stringVal = $4.stringVal;
                                lexeme->boolVal = $4.boolVal;
                                lexeme->charVal = $4.charVal;
                        }
                        addEntryToTable($2,lexeme,PARAMETER,true);
                }
        } /* param with default value */
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





