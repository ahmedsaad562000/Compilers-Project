#include <iostream>
#include <fstream>
#include "../SymbolTable/SymbolTable.h"
#include "../SymbolTable/SymbolTableEntry.h"
#include "../CodeGen/CodeGenerator.h"
#include <stack>
#include <iomanip>
#include <string.h>
using namespace std;
//------------------------ Global Variables ------------------------//
SymbolTable *currentSymbolTable;
SymbolTable *rootSymbolTable;
SymbolTableEntry *currentFunction = NULL;
stack<VariableType> functionParameters;
FILE *semanticFile = fopen("output/semantic-error.txt", "w");
FILE *syntaxFile = fopen("output/syntax-error.txt", "w");
ofstream symbolTablesFile("output/symbol-tables.txt");
int currentCount = 0;
//----------------------------------------------------------------//

//------------------------ Fucntion Defenitions ------------------------//

void Init()
{
    currentSymbolTable = new SymbolTable();
    unordered_map<string, SymbolTableEntry *> map;
    vector<SymbolTable *> children;
    currentSymbolTable->setChildren(children);
    currentSymbolTable->setEntries(map);
    rootSymbolTable = currentSymbolTable;
}

void createNewTable(string type = "")
{
    SymbolTable *newSymbolTable = new SymbolTable();
    unordered_map<string, SymbolTableEntry *> map;
    vector<SymbolTable *> children;
    newSymbolTable->setChildren(children);
    newSymbolTable->setEntries(map);
    newSymbolTable->setParent(currentSymbolTable);
    currentSymbolTable->addChild(newSymbolTable);
    currentSymbolTable = newSymbolTable;
}

SymbolTableEntry* addEntryToTable(char *identifier, LexemeEntry *lexeme, Kind kind, bool isInit, VariableType functionOutput = VOID_TYPE)
{
    SymbolTableEntry *entry = new SymbolTableEntry();
    vector<VariableType> types;
    vector<char*> values;
    entry->setLexemeEntry(lexeme);
    entry->setKind(kind);
    entry->setIsInitialized(isInit);
    entry->setFunctionOutputType(functionOutput);
    entry->setFunctionInputsType(types);
    string id(identifier);
    if (kind == FUNC)
        currentFunction = entry;
    currentSymbolTable->addEntry(id, entry);

    return entry;
}

SymbolTableEntry *getIdEntry(char *identifier)
{
    string id(identifier);
    unordered_map<string, SymbolTableEntry *> map;
    SymbolTable *temp = currentSymbolTable;
    while (currentSymbolTable != NULL)
    {
        map = currentSymbolTable->getEntries();
        auto entry = map.find(id);
        if (entry == map.end())
        {
            currentSymbolTable = currentSymbolTable->getParent();
            continue;
        }
        else
        {
            currentSymbolTable = temp;
            return entry->second;
        }
    }
    currentSymbolTable = temp;
    return NULL;
}

void exitCurrentScope()
{
    currentSymbolTable = currentSymbolTable->getParent();
}

bool isTypeMatching(int type1, int type2)
{
    if (type1 == type2 || (type1 == INT_TYPE && type2 == FLOAT_TYPE) || (type1 == FLOAT_TYPE && type2 == INT_TYPE))
        return true;
    return false;
}

VariableType checkIdType(char *identifier)
{
    SymbolTableEntry *entry = getIdEntry(identifier);
    if (entry == NULL)
        return VOID_TYPE;
    return entry->getLexemeEntry()->type;
}

void convertFunctionParamsToStack(SymbolTableEntry *currentFunc)
{
    functionParameters = stack<VariableType>();
    for (int i = currentFunc->getFunctionInputsType().size() - 1; i >= 0; i--)
        functionParameters.push(currentFunc->getFunctionInputsType()[i]);
}

void traverseSymbolTable(SymbolTable *table, int level, ofstream &outputFile)
{
    outputFile << setw(level * 4) << ""
               << "Identifier"
               << std::setw(12) << "Level"
               << std::setw(12) << "Kind"
               << std::setw(12) << "Type"
               << std::setw(18) << "Value" << std::endl;
    outputFile << std::setw(level * 4) << ""
               << "----------"
               << std::setw(12) << "-----"
               << std::setw(12) << "----"
               << std::setw(12) << "----"
               << std::setw(18) << "----" << std::endl;

    for (const auto &entry : table->getEntries())
    {
        SymbolTableEntry *symbolEntry = entry.second;
        LexemeEntry *lexeme = symbolEntry->getLexemeEntry();

        outputFile << std::setw(level * 4) << "" << entry.first
                   << std::setw(18) << level;
        switch (*symbolEntry->getKind())
        {
        case CONSTANT:
            outputFile << std::setw(14) << "CONSTANT";
            break;
        case VAR:
            outputFile << std::setw(14) << "VAR";
            break;
        case FUNC:
            outputFile << std::setw(14) << "FUNC";
            break;
        case PARAMETER:
            outputFile << std::setw(14) << "PARAM";
            break;
        }
        switch (lexeme->type)
        {
        case INT_TYPE:
            outputFile << std::setw(16) << "INT_TYPE";
            if (*symbolEntry->getKind() == VAR || *symbolEntry->getKind() == CONSTANT)
                outputFile << std::setw(15) << lexeme->intVal;
            break;
        case FLOAT_TYPE:
            outputFile << std::setw(16) << "FLOAT_TYPE";
            if (*symbolEntry->getKind() == VAR || *symbolEntry->getKind() == CONSTANT)
                outputFile << std::setw(15) << lexeme->floatVal;
            break;
        case STRING_TYPE:
            outputFile << std::setw(16) << "STRING_TYPE";
            if (*symbolEntry->getKind() == VAR || *symbolEntry->getKind() == CONSTANT)
                outputFile << std::setw(15) << lexeme->stringVal;
            break;
        case BOOL_TYPE:
            outputFile << std::setw(16) << "BOOL_TYPE";
            if (*symbolEntry->getKind() == VAR || *symbolEntry->getKind() == CONSTANT)
                outputFile << std::setw(15) << lexeme->boolVal;
            break;
        case CHAR_TYPE:
            outputFile << std::setw(16) << "CHAR_TYPE";
            if (*symbolEntry->getKind() == VAR || *symbolEntry->getKind() == CONSTANT)
                outputFile << std::setw(15) << lexeme->charVal;
            break;
        case VOID_TYPE:
            outputFile << std::setw(16) << "VOID_TYPE";
            break;
        }
        outputFile << std::endl;
        if (entry.second->getIsUsed() == false)
            fprintf(semanticFile, "Warning: %s is declared but not used\n", entry.first.c_str());
    }

    outputFile << std::endl;

    for (SymbolTable *child : table->getChildren())
    {
        traverseSymbolTable(child, level + 1, outputFile);
    }
}
void printSymbolTables()
{
    traverseSymbolTable(rootSymbolTable, 0, symbolTablesFile);
    symbolTablesFile.close();
    fclose(semanticFile);
    fclose(syntaxFile);

    // closeQuadruplesFile();
}

void printSemanticError(string error, int lineNo)
{
    fprintf(semanticFile, "%s At Line Number %d\n", error.c_str(), lineNo);
    printf("There are semantic errors\n");
    printSymbolTables();
    exit(0);
}

SymbolTableEntry *checkIfIdExistsInCurrentScope(char *identifier)
{
    string id(identifier);
    unordered_map<string, SymbolTableEntry *> map = currentSymbolTable->getEntries();
    auto entry = map.find(id);
    if (entry == map.end())
    {
        return NULL;
    }
    else
    {
        return entry->second;
    }
}
void printSemanticWarning(string warning, int lineNo)
{
    fprintf(semanticFile, "%s At Line No %d\n", warning.c_str(), lineNo);
}

void printSyntaxError(string error, int lineNo)
{
    fprintf(syntaxFile, "%s At Line Number %d\n", error.c_str(), lineNo);
    printf("There are syntax errors\n");
    printSymbolTables();
    exit(0);
}
char *getCurrentCount()
{
    char *strCount = (char *)malloc(sizeof(char) * 10);                               // allocate space for the count string
    snprintf(strCount, 10, "%d", currentCount);                                       // convert the count to a string
    char *temp = (char *)malloc(sizeof(char) * (strlen("t") + strlen(strCount) + 1)); // allocate space for the concatenated string
    strcpy(temp, "t");                                                                // copy the "t" character to the stringRep
    strcat(temp, strCount);
    currentCount++;
    return temp;
}

LexemeEntry *convertLexemeToEntry(int type, char *stringRep, int intVal, float floatVal, char *stringVal, bool boolVal, char charVal)
{
    LexemeEntry *lexeme = new LexemeEntry();
    lexeme->type = static_cast<VariableType>(type);
    lexeme->stringRep = stringRep;
    lexeme->floatVal = floatVal;
    lexeme->boolVal = boolVal;
    lexeme->charVal = charVal;
    lexeme->intVal = intVal;
    lexeme->stringVal = stringVal;
    return lexeme;
}

void checkIfLexemIsBool(bool isBool, int lineNo)
{
    if (isBool)
        printSemanticError("Expected a boolean value", lineNo);
}

bool checkEQ_EQ(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal == lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal == lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal == lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal == lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal == lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal == lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) == 0;

    else
        return false;
}

bool checkNE(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal != lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal != lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal != lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal != lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal != lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal != lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) != 0;

    else
        return false;
}

bool checkGE(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal >= lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal >= lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal >= lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal >= lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal >= lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal >= lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) >= 0;

    else
        return false;
}

bool checkLE(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal <= lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal <= lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal <= lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal <= lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal <= lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal <= lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) <= 0;

    else
        return false;
}

bool checkGT(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal > lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal > lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal > lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal > lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal > lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal > lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) > 0;

    else
        return false;
}

bool checkLT(LexemeEntry *lex1, LexemeEntry *lex2)
{
    if (lex1->type == INT_TYPE && lex2->type == FLOAT_TYPE)
        return lex1->intVal < lex2->floatVal;

    else if (lex1->type == FLOAT_TYPE && lex2->type == INT_TYPE)
        return lex1->floatVal < lex2->intVal;

    else if (lex1->type == INT_TYPE)
        return lex1->intVal < lex2->intVal;

    else if (lex1->type == FLOAT_TYPE)
        return lex1->floatVal < lex2->floatVal;

    else if (lex1->type == BOOL_TYPE)
        return lex1->boolVal < lex2->boolVal;

    else if (lex1->type == CHAR_TYPE)
        return lex1->charVal < lex2->charVal;

    else if (lex1->type == STRING_TYPE)
        return strcmp(lex1->stringVal, lex2->stringVal) < 0;

    else
        return false;
}
