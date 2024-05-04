#ifndef COMPILERSPROJECT_STRUCTS_H
#define COMPILERSPROJECT_STRUCTS_H
#include "./enums.h"
typedef struct
{
    int intVal;
    float floatVal;
    char *stringVal;
    char charVal;
    bool boolVal;
    char* stringRep;
    VariableType type;
} LexemeEntry;
#endif // COMPILERSPROJECT_STRUCTS_H
