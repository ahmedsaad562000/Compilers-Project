#ifndef COMPILERSPROJECT_ENUMS_H
#define COMPILERSPROJECT_ENUMS_H
typedef enum
{
    INT_TYPE,
    FLOAT_TYPE,
    CHAR_TYPE,
    STRING_TYPE,
    VOID_TYPE,
    BOOL_TYPE,
    ENUM_TYPE
} VariableType;
typedef enum
{
    CONSTANT,
    VAR,
    FUNC,
    ENUM,
    PARAMETER
} Kind;
#endif // COMPILERSPROJECT_ENUMS_H
