%{
    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include "./SemanticAnalysis/SemanticAnalysis.cpp"
    #include "./CodeGen/CodeGenerator.h"
    #include "./CodeGen/quad.h"
    CodeGenerator generator;
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
%type<lexeme> ret_val
%type<lexeme> constant
%type<lexeme> expr
%type<lexeme> bool_expr
%type<lexeme> arithmetic_expr
%type<lexeme> unary_expr
%type<lexeme> binary_expr
%type<lexeme> term
%type<lexeme> factor
%type<lexeme> para
%type<lexeme> function_call
%type<lexeme> negat








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
        | LBRACE{createNewTable(); generator.startScope();} stmts RBRACE{exitCurrentScope();generator.endScope("");} /* block */
        | const_dec_stmt        /* const dec */
        | var_dec_stmt        /* var dec */
        | assign_stmt        /* assign */
        | while_stmt       /* while */
        | if_stmt           /* if */
        | repeat_until_stmt       /* repeat until */
        | for_stmt       /* for loop */
        | switch_stmt       /* switch */
        | function         /* function */
        /*| RETURN ret_val SEMICOLON                   /* return */
        /*| BREAK SEMICOLON  /* break */
        /*| CONTINUE SEMICOLON  /* continue */
        /*| PRINT LPAREN value RPAREN SEMICOLON {printf("-----------PRINT Statement------------\n");}  /* print */
        ;

ret_val: value {$$ = $1;} | { $$.type = VOID_TYPE; } ;

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
                
                // Code Gen
                char* name1 = $1.stringRep;
                char* name2 = $3.stringRep;

                char* realname1 = generator.getTemp(name1);
                char* realname2 = generator.getTemp(name2);
                
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($1.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name1 = realname1;
                }

                if (strcmp(realname2 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($3.stringRep);
                        realname2 = generator.getAssignment(entry);
                        name2 = realname2;
                }
                
                char* name = generator.addTemp(realname1 , "==" , realname2);
                $$.stringRep = name;
                

                if (strcmp(name1 , "") == 0)
                {
                        name1 = $1.stringRep;
                }

                if (strcmp(name2 , "") == 0)
                {
                        name2 = $3.stringRep;
                }
                generator.addQuad("EQ_EQ", name1, name2, name);
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
                        
                // Code Gen
                char* name1 = $1.stringRep;
                char* name2 = $3.stringRep;

                char* realname1 = generator.getTemp(name1);
                char* realname2 = generator.getTemp(name2);
                
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($1.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name1 = realname1;
                }

                if (strcmp(realname2 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($3.stringRep);
                        realname2 = generator.getAssignment(entry);
                        name2 = realname2;
                }
                
                char* name = generator.addTemp(realname1 , "!=" , realname2);
                $$.stringRep = name;
                

                if (strcmp(name1 , "") == 0)
                {
                        name1 = $1.stringRep;
                }

                if (strcmp(name2 , "") == 0)
                {
                        name2 = $3.stringRep;
                }
                generator.addQuad("NOT_EQ", name1, name2, name);

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
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , ">" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("GREATER", name1, name2, name);

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
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "<" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("LESS", name1, name2, name);

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
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , ">=" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("GE", name1, name2, name);

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
                        
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "<=" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("LE", name1, name2, name);

                }
        }
    | expr AND expr                             /* && */
    {
                int type1 = $1.type;
                int type2 = $3.type;
                if(type1 != BOOL_TYPE || type2 != BOOL_TYPE)
                {
                        printSemanticError("AND Operation should be between boolean types",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        $$.boolVal = $1.boolVal && $3.boolVal;
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "&&" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("AND", name1, name2, name);
                }
    }
    | expr OR expr                              /* || */
       {
                int type1 = $1.type;
                int type2 = $3.type;
                if(type1 != BOOL_TYPE || type2 != BOOL_TYPE)
                {
                        printSemanticError("OR Operation should be between boolean types",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        $$.boolVal = $1.boolVal || $3.boolVal;
                        
                        
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "||" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("OR", name1, name2, name);
                }
        } 
    | NOT expr
       {                                       /* ! */ 
                int type = $2.type;
                if(type != BOOL_TYPE)
                {
                        printSemanticError("NOT Operation should be on boolean type",lineno);
                }else{
                        $$.type = BOOL_TYPE;
                        $$.stringRep = getCurrentCount();
                        $$.boolVal = !$2.boolVal;
                        
                        // Code Gen
                        char* name1 = $2.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($2.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("!" , realname1 , "");
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $2.stringRep;
                        }
                        generator.addQuad("NOT", name1, "", name);
                  
                }
        }
    |LPAREN bool_expr RPAREN                                          
     {
                $$ = $2;
     }
    |TRUE_VAL  {$$ = $1;}                                  /* true */
    |FALSE_VAL {$$ = $1;}                                 /* false */
    ;

    

arithmetic_expr:binary_expr
                | unary_expr
                ;

unary_expr: IDENTIFIER INC
        {
                SymbolTableEntry* entry = getIdEntry($1);
                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                 if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                VariableType type=entry->getLexemeEntry()->type;
                
                if(type != INT_TYPE && type != FLOAT_TYPE)
                {
                        printSemanticError("Unary Operation should be on integer or float type",lineno);
                }
                else
                {
                        if(type == INT_TYPE)
                        {
                                $$.type = INT_TYPE;
                                $$.intVal = entry->getLexemeEntry()->intVal + 1;
                                entry->getLexemeEntry()->intVal = $$.intVal;
                                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                        }else
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = entry->getLexemeEntry()->floatVal + 1;
                                entry->getLexemeEntry()->floatVal = $$.floatVal;
                                printf("%d \n" , (entry->getLexemeEntry()->intVal));
                        }
                        // Code Gen
                        SymbolTableEntry* entry = getIdEntry($1);
                        const char* realname1 = generator.getAssignment(entry);
                        generator.addQuad("INC", realname1, "", realname1); 
                        $$.stringRep = $1;
                    
                }
        }
        | IDENTIFIER DEC
        {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Variable not declared",lineno);
                        return 0;
                }
                 if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                VariableType type=entry->getLexemeEntry()->type;
                if(type != INT_TYPE && type != FLOAT_TYPE)
                {
                        printSemanticError("Unary Operation should be on integer or float type",lineno);
                }
                else
                {
                        
                        if(type == INT_TYPE)
                        {
                                $$.type = INT_TYPE;
                                $$.intVal = entry->getLexemeEntry()->intVal - 1;
                                entry->getLexemeEntry()->intVal = $$.intVal;
                        }else
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = entry->getLexemeEntry()->floatVal - 1;
                                entry->getLexemeEntry()->floatVal = $$.floatVal;
                        }
                        // Code Gen
                        SymbolTableEntry* entry = getIdEntry($1);
                        const char* realname1 = generator.getAssignment(entry);
                        generator.addQuad("DEC", realname1, "", realname1); 

                        $$.stringRep = $1;

                    
                }
        }
    ;

binary_expr: term
    | binary_expr PLUS term        
     {          
                int type1 = $1.type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Addition operation must be between 2 numbers",lineno);
                }
                else
                {
                        
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal + $3.floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.intVal + $3.floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal + $3.intVal;
                        }
                        else{
                                $$.type = INT_TYPE;
                                $$.intVal = $1.intVal + $3.intVal;
                        }

                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);
                        
                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "+" , realname2);
                        $$.stringRep = name;
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        generator.addQuad("ADD", name1, name2, name);
                        
                
                }
        } 
    | binary_expr MINUS term 
      {
                int type1 = $1.type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Minus operation must be between 2 numbers",lineno);
                }
                else
                {
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal - $3.floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.intVal - $3.floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal - $3.intVal;
                        }
                        else
                        {
                                $$.type = INT_TYPE;
                                $$.intVal = $1.intVal - $3.intVal;
                        }

                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "-" , realname2);
                        $$.stringRep = name; 

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }
                        
                        generator.addQuad("SUB", name1, name2, name);
                
                }
        } 
    ;

term: negat
    | term MULT factor          
     {
                int type1 = $1.type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Multiplication operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal * $3.floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.intVal * $3.floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal * $3.intVal;
                        }
                        else{

                                $$.type = INT_TYPE;
                                $$.intVal = $1.intVal * $3.intVal;
                        }

                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                        }
                        
                        char* name = generator.addTemp(realname1 , "*" , realname2);
                        $$.stringRep = name; 
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        }                        
                        generator.addQuad("MUL", name1, name2, name);
                }
        } 
    | term DIV factor           
       {
               
                int type1 = $1.type;
                int type2 = $3.type;
                
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Division operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {
                                if ($3.floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal / $3.floatVal;
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                if ($3.floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.intVal / $3.floatVal;
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                if ($3.intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                $$.type = FLOAT_TYPE;
                                $$.floatVal = $1.floatVal / $3.intVal;
                        }
                        else{
                                if ($3.intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                $$.type = INT_TYPE;
                                $$.intVal = $1.intVal / $3.intVal;
                        }
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "/" , realname2);
                        $$.stringRep = name; 
                        
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        } 



                        generator.addQuad("DIV", name1, name2, name);
                }
        } 
    | term MOD factor      
     {
               
                int type1 = $1.type;
                int type2 = $3.type;
                
                if((type1 != INT_TYPE ) && (type2 != INT_TYPE))
                {
                        printSemanticError("Mod operation must be between 2 Integers",lineno);
                }
                else{
                        $$.type = INT_TYPE;
                        $$.intVal = $1.intVal % $3.intVal;
                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "%" , realname2);
                        $$.stringRep = name; 
                        

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        } 



                        generator.addQuad("MOD", name1, name2, name); 
                }
        }      
    ;
negat: para
     | MINUS para %prec UMINUS    {

                
                if ($2.type == FLOAT_TYPE)
                {
                        $$.stringRep = getCurrentCount();
                        $$.type = $2.type;
                        $$.floatVal = -$2.floatVal;
                        // Code Gen
                        char* name1 = $2.stringRep;

                        char* realname1 = generator.getTemp(name1);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($2.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("0" , "-" , realname1);
                        $$.stringRep = name; 


                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $2.stringRep;
                        }
                        
                        generator.addQuad("NEG", name1, "", name); 
                }
                else if ($2.type == INT_TYPE)
                {
                        $$.stringRep = getCurrentCount();
                        $$.type = $2.type;
                        $$.intVal = -$2.intVal;
                        // Code Gen
                        char* name1 = $2.stringRep;

                        char* realname1 = generator.getTemp(name1);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($2.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }
                        
                        char* name = generator.addTemp("0" , "-" , realname1);
                        $$.stringRep = name;

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $2.stringRep;
                        }

                        
                        generator.addQuad("NEG", name1, "", name); 
                }
                else
                {
                        printSemanticError("Negation Operation should be on integer or float type",lineno);
                }  
      }

para: factor
        | LPAREN binary_expr RPAREN   {$$ = $2;}
        | para EXP para {
                
                int type1 = $1.type;
                int type2 = $3.type;
                
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Power operation must be between 2 numbers",lineno);
                }else{
                        if(type1 == FLOAT_TYPE && type2 == FLOAT_TYPE)
                        {

                                $$.type = FLOAT_TYPE;
                                $$.floatVal = pow($1.floatVal, $3.floatVal);
                        }
                        else if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {

                                $$.type = FLOAT_TYPE;
                                $$.floatVal = pow($1.intVal, $3.floatVal);
                        }
                        else if(type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {

                                $$.type = FLOAT_TYPE;
                                $$.floatVal = pow($1.floatVal, $3.intVal);
                        }
                        else{

                                $$.type = INT_TYPE;
                                $$.intVal = pow($1.intVal, $3.intVal);
                        }

                        // Code Gen
                        char* name1 = $1.stringRep;
                        char* name2 = $3.stringRep;

                        char* realname1 = generator.getTemp(name1);
                        char* realname2 = generator.getTemp(name2);

                        if (strcmp(realname1 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($1.stringRep);
                                realname1 = generator.getAssignment(entry);
                                name1 = realname1;
                        }

                        if (strcmp(realname2 ,"") == 0)
                        {
                                SymbolTableEntry* entry = getIdEntry($3.stringRep);
                                realname2 = generator.getAssignment(entry);
                                name2 = realname2;
                        }
                        
                        char* name = generator.addTemp(realname1 , "^" , realname2);
                        $$.stringRep = name; 


                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $1.stringRep;
                        }

                        if (strcmp(name2 , "") == 0)
                        {
                                name2 = $3.stringRep;
                        } 
                        
                        generator.addQuad("EXP", name1, name2, name);
                }

        }
        ;

factor: 
        INT_VAL                 {$$ = $1;}
        | FLOAT_VAL             {$$ = $1;}       
        | function_call         {
                
                generator.addQuad("CALL","","",$1.stringRep);
                
                $$ = $1;

        
        }
        | IDENTIFIER            {
                SymbolTableEntry* entry = getIdEntry($1);
             
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
        } ;

/*===============================              TODO            ===============================*/
/* function call */
function_call:
        IDENTIFIER LPAREN {
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
        } RPAREN 
        {
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
                printf("%s \n" , "Function called successfully");
        }   // no params
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
                        printSemanticError("Type mismatch in const declaration",lineno);
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
                        entry = addEntryToTable($3,lexeme,CONSTANT,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);

                        generator.addQuad("ALLOC",$3,"",name);
                        
                        char* name1 = $5.stringRep;

                        generator.addQuad("ASSIGN",name1,"",name);

                        generator.clearTemps();
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
                entry = addEntryToTable($2,lexeme,VAR,false);

                // Code Gen
                const char* name = generator.addAssignment(entry);
                generator.addQuad("ALLOC",$2,"",name);

              
         }
        | type IDENTIFIER ASSIGN value SEMICOLON {
                SymbolTableEntry* entry = checkIfIdExistsInCurrentScope($2);
                if(entry){
                    printSemanticError("Variable already declared",lineno);
                    return 0;
                }
                int type1 = $1;
                int type2 = $4.type;
                printf("Type1: %d Type2: %d\n",type1,type2);
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
                        entry = addEntryToTable($2,lexeme,VAR,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);
                        generator.addQuad("ALLOC",$2,"",name);
                        
                        char* name1 = $4.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $4.stringRep;
                        }
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                }
        }
        ;


/* Assignment statements */
assign_stmt:IDENTIFIER ASSIGN value SEMICOLON
       {  
                
                SymbolTableEntry* entry = getIdEntry($1);
                
                
                if(entry == NULL)
                {       
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                
                
                
                if(*entry->getKind() != VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                int type1 = (int) entry->getLexemeEntry()->type;
                int type2 = $3.type;
                printf("Type1 = %d Type2 = %d\n",type1,type2);
                if(!isTypeMatching(type1,type2))
                {


                        printSemanticError("Type mismatch in assignment statement",lineno);
                }
                else
                {
 
                        entry->setIsInitialized(true);
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = (int)$3.floatVal;
                                 
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = (float)$3.intVal;
                        }else{
                                entry->setLexemeEntry(convertLexemeToEntry($3.type, $3.stringRep, $3.intVal, $3.floatVal, $3.stringVal, $3.boolVal, $3.charVal));
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = $3.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }

                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $3.stringRep;
                        }
                        generator.addQuad("ASSIGN",name1,"",name);
                        generator.clearTemps();
                        
                }
        } 
        | IDENTIFIER DIV_EQ value SEMICOLON
        {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Division operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {       
                                if ((int)$3.floatVal == 0) printSemanticError("Division by zero", lineno), 0;

                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal / (int)$3.floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {       
                                if ((float)$3.intVal == 0.0) printSemanticError("Division by zero", lineno), 0;
                                
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal / (float)$3.intVal ;
                        
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {       if ($3.intVal == 0) printSemanticError("Division by zero", lineno), 0;
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal / $3.intVal ;
                        }else{
                                if ($3.floatVal == 0.0) printSemanticError("Division by zero", lineno), 0;

                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal / $3.floatVal ;
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = $3.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $3.stringRep;
                        }
                        generator.addQuad("DIV",name,name1,name);
                        generator.clearTemps();
                }
        } 
        | IDENTIFIER MULT_EQ value SEMICOLON
        {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Multiplication operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal * (int)$3.floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal * (float)$3.intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal * $3.intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal * $3.floatVal ;
                        }
                        
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = $3.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $3.stringRep;
                        }
                        generator.addQuad("MUL",name,name1,name);
                        generator.clearTemps();
                }
        } 
        | IDENTIFIER PLUS_EQ value SEMICOLON
        {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Addition operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal + (int)$3.floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal + (float)$3.intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal + $3.intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal + $3.floatVal ;
                        }

                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = $3.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $3.stringRep;
                        }
                        generator.addQuad("ADD",name,name1,name);
                        generator.clearTemps();
                }
        } 
        
        | IDENTIFIER MINUS_EQ value SEMICOLON
        {
                SymbolTableEntry* entry = getIdEntry($1);
                if(entry == NULL){
                        printSemanticError("Undeclared Variable",lineno);
                        return 0;
                }
                if(*entry->getKind()!= VAR)
                {
                        printSemanticError("Cannot assign value to a non variable type",lineno);
                        return 0;
                }
                if(entry->getIsInitialized() == false)
                {
                        printSemanticError("Variable not initialized",lineno);
                        return 0;
                }
                int type1 = (int)entry->getLexemeEntry()->type;
                int type2 = $3.type;
                if((type1 != INT_TYPE && type1 != FLOAT_TYPE) || (type2 != INT_TYPE && type2 != FLOAT_TYPE))
                {
                        printSemanticError("Minus operation must be between 2 numbers",lineno);
                }else{
                        
                        if(type1 == INT_TYPE && type2 == FLOAT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal - (int)$3.floatVal ;
                        }else if (type1 == FLOAT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal - (float)$3.intVal ;
                        }else if (type1 == INT_TYPE && type2 == INT_TYPE)
                        {
                                entry->getLexemeEntry()->intVal = entry->getLexemeEntry()->intVal - $3.intVal ;
                        }else{
                                entry->getLexemeEntry()->floatVal = entry->getLexemeEntry()->floatVal - $3.floatVal ;
                        }
                        // Code Gen
                        const char* name = generator.getAssignment(entry);
                        
                        char* name1 = $3.stringRep;

                        // if value is  an identifier

                        SymbolTableEntry* entry1 = getIdEntry(name1);
                        if (entry1 != NULL)
                        {
                                // is an identifier
                                name1 = generator.getAssignment(entry1);
                        }
                        if (strcmp(name1 , "") == 0)
                        {
                                name1 = $3.stringRep;
                        }

                        generator.addQuad("SUB",name,name1,name);
                        generator.clearTemps();
                }
        } 
        ;
/* while statement */        
while_stmt:
        WHILE LPAREN{generator.startScope();} bool_expr { 
                
                checkIfLexemIsBool($4.type != BOOL_TYPE,lineno);
                char* name = $4.stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($4.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $4.stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);
                
        
        } RPAREN LBRACE {createNewTable();} stmts RBRACE {exitCurrentScope();generator.endScope("while");}
        ;

/* if statement */
if_stmt:
        IF LPAREN expr {checkIfLexemIsBool($3.type != BOOL_TYPE,lineno);} RPAREN LBRACE {createNewTable();generator.startScope();} stmts RBRACE if_body 
        ;

        if_body : {
                
        
        char* endLabel = generator.addLC("" , 1);

        generator.addQuad("JMP","","",endLabel);

        

        
        
        }  ELSE {        
        exitCurrentScope();
        
        generator.endScope("if");

        } LBRACE {createNewTable();generator.startScope();} stmts RBRACE {exitCurrentScope();generator.endScope("else");}   /* if-then-else */
        | {exitCurrentScope();generator.endScope("if");}  /* if-then */
        ;
/* repeat until */
repeat_until_stmt:
        REPEAT LBRACE {createNewTable();generator.startScope();} stmts RBRACE {exitCurrentScope();} UNTIL LPAREN bool_expr { 
                checkIfLexemIsBool($9.type != BOOL_TYPE,lineno);
                char* name = $9.stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($9.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $9.stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JT",name,"",endLabel);
                
                
                
                
                
                
                
                
                } RPAREN SEMICOLON  {printf("REPEAT UNTIL\n");generator.endScope("repeat");}
        ;
/* for loop */
for_stmt:
        FOR {createNewTable();} for_expression_stmt
        ;
for_expression_stmt:
        LPAREN var_dec_stmt {generator.startScope();} bool_expr {
                checkIfLexemIsBool($4.type != BOOL_TYPE,lineno); 
                char* name = $4.stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($4.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $4.stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);
                
                
                 } SEMICOLON expr RPAREN LBRACE stmts RBRACE {exitCurrentScope();generator.endScope("for");}
        | LPAREN assign_stmt {generator.startScope();} bool_expr {
                
                checkIfLexemIsBool($4.type != BOOL_TYPE,lineno); 
                char* name = $4.stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($4.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $4.stringRep;
                }
                char* endLabel =  generator.addLC(name , 2);
                generator.addQuad("JF",name,"",endLabel);

                } SEMICOLON expr RPAREN LBRACE stmts RBRACE {exitCurrentScope();generator.endScope("for");}
        ;
/* switch case */
switch_stmt:
        SWITCH LPAREN expr {
                char* name = $3.stringRep;
                char* realname1 = generator.getTemp(name);

                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($3.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $3.stringRep;
                }
                
                generator.setSwitchValue(name);

                // getting the label
                generator.addLC("" , 2);

                } RPAREN LBRACE {createNewTable();generator.startScope();} case_stmts RBRACE {exitCurrentScope();generator.endScope("switch"); }
        ;

case_stmts:
        case_stmts case_stmt
        | case_stmt
        ;
case_stmt:
        CASE constant COLON {
                
                createNewTable();
                generator.startScope();
                // Code Gen
                char* switchValue = generator.getSwitchValue();
                char* constName = $2.stringRep;
                char* Temp = generator.addTemp(switchValue , "==" , constName);

                generator.addQuad("EQ_EQ", switchValue, constName, Temp);
                
                
                // getting the label
                char* label = generator.addLC(Temp , 1);
                generator.addQuad("JF",Temp,"",label);
        
        
        } case_in_scope_stmts case_end
        | DEFAULT COLON {createNewTable();generator.startScope();} case_in_scope_stmts default_case_end
        ;
case_in_scope_stmts: stmts
        |
        ;
case_end:BREAK SEMICOLON {generator.endScope("caseBreak");exitCurrentScope();}
        | {generator.endScope("case");exitCurrentScope();}
        ;
default_case_end:BREAK SEMICOLON {generator.endScope("");exitCurrentScope();}
        | {generator.endScope("");exitCurrentScope();}
        ;


/* function return types */
type:  INT | FLOAT | CHAR | STRING | BOOL;
/* function */
function : function_prototype  LBRACE stmts ret_stmt RBRACE  {
        
        char* funcName = generator.getFunctionName();
        
        generator.endScope(funcName);
        exitCurrentScope(); 
        currentFunction = nullptr;
        
        }    
        ;
ret_stmt : RETURN ret_val SEMICOLON {
        if ($2.type == VOID_TYPE){
                generator.addQuad("RET", "", "", "");
        }
        else{
                char* name = $2.stringRep;
                char* realname1 = generator.getTemp(name);
                if (strcmp(realname1 ,"") == 0)
                {
                        SymbolTableEntry* entry = getIdEntry($2.stringRep);
                        realname1 = generator.getAssignment(entry);
                        name = realname1;
                }
                if (strcmp(name ,"") == 0)
                {
                        name = $2.stringRep;
                }
                generator.addQuad("ASSIGN", name, "", generator.getFunctionName());
                generator.addQuad("RET", generator.getFunctionName(), "", "");
        }
}
        |    {generator.addQuad("RET", "", "", "");}                /* return */
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
                addEntryToTable($2,lexeme,FUNC,false, VOID_TYPE);
                createNewTable($2);
                generator.startScope();
                generator.setFunctionName($2);
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
                addEntryToTable($2,lexeme,FUNC,false, VOID_TYPE);
                createNewTable($2);
                generator.startScope();
                generator.setFunctionName($2);
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
                addEntryToTable($2,lexeme,FUNC,false, functionOutput);
                createNewTable($2);
                generator.startScope();
                generator.setFunctionName($2);
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
                addEntryToTable($2,lexeme,FUNC,false, functionOutput);
                createNewTable($2);
                generator.startScope();
                generator.setFunctionName($2);
                

        } RPAREN {printf("Typed function without parameters \n");} /* type function without params */
        ;
params:
        param                 /* single param */
        | params COMMA param    /* multiple params */
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
                entry = addEntryToTable($2,lexeme,PARAMETER,true);

                // Code Gen
                const char* name = generator.addAssignment(entry);
                generator.addQuad("ALLOC",$2,"",name);
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
                        entry = addEntryToTable($2,lexeme,PARAMETER,true);
                        
                        // Code Gen
                        const char* name = generator.addAssignment(entry);

                        generator.addQuad("ALLOC",$2,"",name);
                        
                        char* name1 = $4.stringRep;

                        generator.addQuad("ASSIGN",name1,"",name);

                }
        } /* param with default value */
        ;
%%







void yyerror(char* s)
{
printSyntaxError( s, lineno );
    exit(0);
}


int main (void)
{
    Init();

    yyin = fopen("test.txt", "r+");
    if (yyin == NULL)
    {
        printf(" Test File Not Found\n");
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
        generator.printQuadsToFile("output/quadruples.txt");
    }
    fclose(yyin);
   
    return 0;
}





