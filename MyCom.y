%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "MyCom.h"

    
    /* prototypes */
    nodeType *opr(int oper, int nops, ...);
    nodeType *id(int i);
    nodeType *con(int value);
    void freeNode(nodeType *p);
    int ex(nodeType *p);
    // int sym[26];                    /* symbol table */
    
    
    int yylex();
    int yywrap();
    void yyerror(char*);
    %}

%union {
        varType type;
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

%token <lexeme> INT_VAL
%token <lexeme> FLOAT_VAL
%token <lexeme> CHAR_VAL
%token <lexeme> STRING_VAL
%token <lexeme> TRUE_VAL
%token <lexeme> FALSE_VAL

%token INT
%token FLOAT
%token CHAR
%token BOOL
%token STRING

%type<type> INT  
%type<type> FLOAT
%type<type> CHAR
%type<type> BOOL
%type<type> STRING

%type<type> type
%type<lexeme> value
%type<lexeme> constant
%type<lexeme> expr
%type<lexeme> bool_expr
%type<lexeme> arithmetic_expr
%type<lexeme> term
%type<lexeme> factor
%type<lexeme> function_call 


/* Identifier */
%token <stringValue> IDENTIFIER

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
%left AND OR
%left PLUS MINUS
%left MULT DIV MOD 
%nonassoc NOT 

/* assignment */
%left ASSIGN
%left DIV_EQ
%left PLUS_EQ
%left MINUS_EQ
%left MULT_EQ
%left INC
%left DEC




/* function */
%token VOID RETURN



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
        | LBRACE stmts RBRACE /* block */
        | const_dec_stmt        /* const */
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
        ;

ret_val: value | ;

value: expr | STRING_VAL | CHAR_VAL | INT_VAL | FLOAT_VAL | TRUE_VAL | FALSE_VAL;

/* expressions */
expr: LBRACE expr RBRACE
    | bool_expr
    | arithmetic_expr
    ;

bool_expr: expr EQUAL arithmetic_expr           /* == */
    | expr NE arithmetic_expr                   /* != */
    | expr GREATER arithmetic_expr              /* > */
    | expr LESS arithmetic_expr                 /* < */
    | expr GE arithmetic_expr                   /* >= */
    | expr LE arithmetic_expr                   /* <= */
    | expr AND expr                             /* && */
    | expr OR expr                              /* || */
    | NOT expr                                  /* ! */         
    |TRUE_VAL                                   /* true */
    |FALSE_VAL                                  /* false */
    ;

arithmetic_expr: term
    | arithmetic_expr PLUS term
    | arithmetic_expr MINUS term
    ;


term: factor
    | term MULT factor
    | term DIV factor
    | term MOD factor
    ;

factor: 
        INT_VAL
        | FLOAT_VAL
        | function_call
        | IDENTIFIER


/* function call */
function_call:
        IDENTIFIER LPAREN RPAREN  // no params
        | IDENTIFIER LPAREN call_params RPAREN  // with params
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



/* Assignment statements */
assign_stmt:
        IDENTIFIER ASSIGN value SEMICOLON
        | IDENTIFIER DIV_EQ value SEMICOLON
        | IDENTIFIER MULT_EQ value SEMICOLON
        | IDENTIFIER PLUS_EQ value SEMICOLON
        | IDENTIFIER MINUS_EQ value SEMICOLON
        | IDENTIFIER INC SEMICOLON
        | IDENTIFIER DEC SEMICOLON
        ;
/* while statement */        
while_stmt:
        WHILE LPAREN expr RPAREN LBRACE stmts RBRACE  
        ;

/* if statement */
if_stmt:
        IF LPAREN expr RPAREN LBRACE stmts RBRACE           /* if-then */
        | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE stmts RBRACE   /* if-then-else */
        ;
/* repeat until */
repeat_until_stmt:
        REPEAT LBRACE stmts RBRACE UNTIL expr
        ;
/* for loop */
for_stmt:
        FOR LPAREN assign_stmt SEMICOLON expr SEMICOLON expr RPAREN LBRACE stmts RBRACE
        ;
/* switch case */
switch_stmt:
        SWITCH expr LBRACE case_stmts RBRACE
        ;

case_stmts:
        case_stmts case_stmt
        | case_stmt
        ;
case_stmt:
        CASE value COLON stmts
        | DEFAULT COLON stmts
        ;



/* function return types */
type:  INT | FLOAT | CHAR | STRING | BOOL;
/* function */
function : function_prototype LBRACE stmts RBRACE
        ;
function_prototype:
        VOID IDENTIFIER LPAREN params RPAREN  /* void function with params */
        VOID IDENTIFIER LPAREN RPAREN           /* void function without params */
        type IDENTIFIER LPAREN params RPAREN    /* type function with params */
        type IDENTIFIER LPAREN RPAREN           /* type function without params */
        ;
params:
        param               /* single param */
        | param COMMA params    /* multiple params */
        ;
param:
        type IDENTIFIER     /* param without default value */
        type IDENTIFIER ASSIGN constant /* param with default value */
        ;
%%







void yyerror(char* s)
{
    fprintf(stderr, "%s\n", s);
    exit(1);
}




nodeType *con(conEnum type, void *value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;

    /* conInt, conFloat, conBool, conChar, conString */

    switch (type) {
        case conInt:
            p->con.ival = *(int*)value;
            break;
        case conFloat:
            p->con.fval = *(float*)value;
            break;
        case conBool:
            p->con.bval = *(bool*)value;
            break;
        case conChar:
            p->con.cval = *(char*)value;
            break;
        case conString:
            p->con.sval = *(char**)value;
            break;
        default:
            yyerror("unknown type");
            break;
    }
    return p;
}
nodeType *id(int i) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}
/* 
%token WHILE CONTINUE 
%token FOR 
%token SWITCH CASE DEFAULT BREAK

%token IF ELSE ELSEIF

%left EQUAL NE GE LE
%left AND OR
%left GREATER LESS
%left PLUS MINUS
%left MULT DIV MOD
%nonassoc UMINUS


%token REPEAT UNTIL
%token VOID RETURN */


/// handle integers and floats only
float ex(nodeType *p) {
    if (!p) return 0;
    switch(p->type) {
    case typeCon:       
        switch(p->con.type) {
        case conInt:    return (float)p->con.ival;
        case conFloat:  return p->con.fval;
        /* case conBool:   return p->con.bval;
        case conChar:   return p->con.cval;
        case conString: return p->con.sval; */
        }
    case typeId:        return sym[p->id.i];
    case typeOpr:
        switch(p->opr.oper) {
        case WHILE:     while(ex(p->opr.op[0]) != 0.0f ) ex(p->opr.op[1]); return 0;
        /* case CONTINUE:  continue;return 0; */
        case IF:        if (ex(p->opr.op[0]))
                            ex(p->opr.op[1]);
                        else if (p->opr.nops > 2)
                            ex(p->opr.op[2]);
                        return 0;
        case PRINT:     printf("%d\n", ex(p->opr.op[0])); return 0;
        case ';':       ex(p->opr.op[0]); return ex(p->opr.op[1]);
        case '=':       return sym[p->opr.op[0]->id.i] = ex(p->opr.op[1]);
        case UMINUS:    return -ex(p->opr.op[0]);
        case '+':       return ex(p->opr.op[0]) + ex(p->opr.op[1]);
        case '-':       return ex(p->opr.op[0]) - ex(p->opr.op[1]);
        case '*':       return ex(p->opr.op[0]) * ex(p->opr.op[1]);
        case '/':       return ex(p->opr.op[0]) / ex(p->opr.op[1]);
        case '<':       return ex(p->opr.op[0]) < ex(p->opr.op[1]);
        case '>':       return ex(p->opr.op[0]) > ex(p->opr.op[1]);
        case GE:        return ex(p->opr.op[0]) >= ex(p->opr.op[1]);
        case LE:        return ex(p->opr.op[0]) <= ex(p->opr.op[1]);
        case NE:        return ex(p->opr.op[0]) != ex(p->opr.op[1]);
        case EQ:        return ex(p->opr.op[0]) == ex(p->opr.op[1]);
        }
    }
    return 0;
}























void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}









