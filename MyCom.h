typedef enum { typeCon, typeId, typeOpr } nodeEnum;
typedef enum { conInt, conFloat, conBool, conChar, conString } varType;
/* constants */
typedef struct {
    varType type;                   /* type of constant: 0 for int, 1 for float, 2 for bool, 3 for char, 4 for string */
    union {
        int int_value;          /* value of constant (int) */
        float float_value;      /* value of constant (float) */
        int bool_value;         /* value of constant (bool) */
        char char_value;        /* value of constant (char) */
        char *string_value;     /* value of constant (string) */
    };
} conNodeType;

/* identifiers */
typedef struct {
    int i;                      /* subscript to sym array */
} idNodeType;

/* operators */
typedef struct {
    int oper;                   /* operator */
    int nops;                   /* number of operands */
    struct nodeTypeTag *op[1];  /* operands, extended at runtime */
} oprNodeType;

typedef struct nodeTypeTag {
    nodeEnum type;              /* type of node */

    union {
        conNodeType con;        /* constants */
        idNodeType id;          /* identifiers */
        oprNodeType opr;        /* operators */
    };
} nodeType;

extern int sym[26];