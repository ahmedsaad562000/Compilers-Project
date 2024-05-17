
#ifndef COMPILERSPROJECT_SYMBOLTABLEENTRY_H
#define COMPILERSPROJECT_SYMBOLTABLEENTRY_H

#include "./utils/enums.h"
#include "./utils/structs.h"
#include <vector>
using namespace std;
class SymbolTableEntry
{
private:
    LexemeEntry *lexeme;
    Kind kind;
    bool isUsed;
    bool isInitialized;
    VariableType functionOutputType;
    vector<VariableType> functionInputsType;

public:
    SymbolTableEntry();
    void setKind(Kind kind);
    const Kind *getKind() const;
    void setIsUsed(bool isUsed);
    bool getIsUsed() const;
    void setIsInitialized(bool isInitialized);
    bool getIsInitialized() const;
    void setFunctionOutputType(VariableType type);
    VariableType getFunctionOutputType() const;
    void setFunctionInputsType(vector<VariableType> &types);
    void addFunctionInputsType(VariableType type);
    vector<VariableType> getFunctionInputsType() const;
    void setLexemeEntry(LexemeEntry *entry);
    LexemeEntry *getLexemeEntry() const;
};
#endif //COMPILERSPROJECT_SYMBOLTABLEENTRY_H
