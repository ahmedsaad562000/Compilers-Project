#include "SymbolTable.h"

void SymbolTable::setEntries(const unordered_map<string, SymbolTableEntry *> &newEntries) { this->entries = newEntries; }

unordered_map<string, SymbolTableEntry *> SymbolTable::getEntries() const { return this->entries; }

SymbolTable *SymbolTable::getParent() const { return this->parent; }

void SymbolTable::setParent(SymbolTable *newParent) { this->parent = newParent; }

vector<SymbolTable *> SymbolTable::getChildren() const { return this->children; }

void SymbolTable::setChildren(const vector<SymbolTable *> &newChildren) { this->children = newChildren; }

void SymbolTable::addChild(SymbolTable *child) { this->children.push_back(child); }

void SymbolTable::addEntry(const string &key, SymbolTableEntry *entry) { this->entries[key] = entry; }
