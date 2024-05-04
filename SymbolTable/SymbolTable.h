#ifndef COMPILERSPROJECT_SYMBOLTABLE_H
#define COMPILERSPROJECT_SYMBOLTABLE_H

#include <unordered_map>
#include <vector>
#include "./SymbolTableEntry.h"
using namespace std;

class SymbolTable
{
private:
    unordered_map<string, SymbolTableEntry *> entries;
    SymbolTable *parent;
    vector<SymbolTable *> children;

public:
    unordered_map<string, SymbolTableEntry *> getEntries() const;
    void setEntries(const unordered_map<string, SymbolTableEntry *> &newEntries);
    SymbolTable *getParent() const;
    void setParent(SymbolTable *newParent);
    vector<SymbolTable *> getChildren() const;
    void setChildren(const vector<SymbolTable *> &newChildren);
    void addChild(SymbolTable *child);
    void addEntry(const string &key, SymbolTableEntry *entry);
};
#endif // COMPILERSPROJECT_SYMBOLTAB