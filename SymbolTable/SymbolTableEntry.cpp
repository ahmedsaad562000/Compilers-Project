
#include "SymbolTableEntry.h"

SymbolTableEntry::SymbolTableEntry()
{
    this->isUsed = false;
    this->isInitialized = false;
}

bool SymbolTableEntry::getIsUsed() const { return this->isUsed; }

const Kind *SymbolTableEntry::getKind() const { return &this->kind; }

void SymbolTableEntry::setIsUsed(bool isUsed) { this->isUsed = isUsed; }

void SymbolTableEntry::setKind(Kind kind) { this->kind = kind; }

void SymbolTableEntry::setFunctionInputsType(vector<VariableType> &types) { this->functionInputsType = types; }

vector<VariableType> SymbolTableEntry::getFunctionInputsType() const { return this->functionInputsType; }

void SymbolTableEntry::setFunctionOutputType(VariableType type) { this->functionOutputType = type; }

VariableType SymbolTableEntry::getFunctionOutputType() const { return this->functionOutputType; }

void SymbolTableEntry::setLexemeEntry(LexemeEntry *entry) { this->lexeme = entry; }

LexemeEntry *SymbolTableEntry::getLexemeEntry() const { return this->lexeme; }

bool SymbolTableEntry::getIsInitialized() const { return this->isInitialized; }

void SymbolTableEntry::setIsInitialized(bool isInitialized) { this->isInitialized = isInitialized; }

void SymbolTableEntry::addFunctionInputsType(VariableType type){
    this->functionInputsType.push_back(type);
}