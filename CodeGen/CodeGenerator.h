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

#include <stack>
#include <string>

struct LC {
    int label = 0;
    std::string condition = "";

    LC(int label, std::string condition) {
        this->label = label;
        this->condition = condition;
    }
};




class CodeGenerator
{
private:
    std::vector<Quad*>* quads;
    std::stack<std::vector<Quad*>*> scopes;
    std::stack<LC*> LoopLabelsStack;
    std::unordered_map<SymbolTableEntry*, std::string> assignments;
    std::unordered_map<std::string, std::string> temps;
    std::stack<std::string> switch_value;
    std::stack<std::string> function_names;

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

    char* addLC(std::string condition , int numberofLabels);

    void setSwitchValue(std::string value);
    char* getSwitchValue();

    void setFunctionName(std::string name);
    char* getFunctionName();
};





#endif