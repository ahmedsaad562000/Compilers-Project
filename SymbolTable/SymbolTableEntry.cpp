
#include "SymbolTableEntry.h"

SymbolTableEntry::SymbolTableEntry()
{
    this->isUsed = false;
    this->isInitialized = false;
    this->pointerToEnum = nullptr;
}

bool SymbolTableEntry::getIsUsed() const { return this->isUsed; }

const Kind *SymbolTableEntry::getKind() const { return &this->kind; }

void SymbolTableEntry::setIsUsed(bool isUsed) { this->isUsed = isUsed; }

void SymbolTableEntry::setKind(Kind kind) { this->kind = kind; }

void SymbolTableEntry::setEnumValues(vector<char *> &values) { this->enumValues = values; }

vector<char *> SymbolTableEntry::getEnumValues() const { return this->enumValues; }

void SymbolTableEntry::setFunctionInputsType(vector<VariableType> &types) { this->functionInputsType = types; }

vector<VariableType> SymbolTableEntry::getFunctionInputsType() const { return this->functionInputsType; }

void SymbolTableEntry::setFunctionOutputType(VariableType type) { this->functionOutputType = type; }

VariableType SymbolTableEntry::getFunctionOutputType() const { return this->functionOutputType; }

void SymbolTableEntry::setPointerToEnum(SymbolTableEntry *ptr_enum) { this->pointerToEnum = ptr_enum; }

SymbolTableEntry *SymbolTableEntry::getPointerToEnum() const { return this->pointerToEnum; }

void SymbolTableEntry::setLexemeEntry(LexemeEntry *entry) { this->lexeme = entry; }

LexemeEntry *SymbolTableEntry::getLexemeEntry() const { return this->lexeme; }

bool SymbolTableEntry::getIsInitialized() const { return this->isInitialized; }

void SymbolTableEntry::setIsInitialized(bool isInitialized) { this->isInitialized = isInitialized; }
