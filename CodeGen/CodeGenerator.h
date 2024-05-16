#ifndef CODEGEN_H
#define CODEGEN_H
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>
#include <fstream>
#include <iomanip>

#include "quad.h"
#include "../SymbolTable/SymbolTableEntry.h"

class CodeGenerator
{
private:
    std::vector<Quad*>* quads;
    std::stack<std::vector<Quad*>*> scopes;
    std::unordered_map<SymbolTableEntry*, std::string> assignments;
    std::unordered_map<std::string, std::string> temps;

public:
    static int labelCount;
    CodeGenerator();
    void startScope();
    void endScope(std::string type);
    char *addAssignment(SymbolTableEntry* sym);
    char *getAssignment(SymbolTableEntry* sym);
    char *addTemp(std::string expr1, std::string op, std::string expr2);
    char *getTemp(std::string name);
    
    void clearTemps();
    void addQuad(std::string operation, std::string operand1, std::string operand2, std::string destination);
    void printQuads();
    void printQuadsToFile(std::string filename);
};





#endif