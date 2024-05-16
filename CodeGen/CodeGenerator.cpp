#include "CodeGenerator.h"



int CodeGenerator::labelCount = 0;

CodeGenerator::CodeGenerator()
{
    quads = new vector<Quad*>();
    scopes.push(quads);
}
void CodeGenerator::startScope()
{

    scopes.push(new vector<Quad*>());
}

void CodeGenerator::endScope(std::string type)
{
    vector<Quad*>* closedList = scopes.top();
    scopes.pop();

    vector<Quad*>* parentList = scopes.top(); 

    /*TYPES: if, else, FUNCTION NAME, for, while, repeat, switch, case, enum */
    if (type == "if")
    {
        addQuad("JF",parentList->back()->getDest(),"","L"+to_string(labelCount));
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());
        addQuad("L"+to_string(labelCount)+":","","","");

        labelCount++;
    }
    else if (type == "else")
    {
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());
    }
    else if (type == "for")
    {
        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*INCREASE COUNT OF LABELS*/
        labelCount++;
    }
    else if (type == "while")
    {
        string startLabel = "L"+to_string(labelCount);
        labelCount++;
        string endLabel = "L"+to_string(labelCount);
        labelCount++;

        auto it = parentList->rbegin();
        while((*it)->getDest() != "T0")
        {
            ++it;
        }
        ++it;
        parentList->insert(it.base(),new Quad(startLabel+":","","",""));
        addQuad("JF",parentList->back()->getDest(),"",endLabel);

        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        addQuad("JMP","","",startLabel);
        addQuad(endLabel+":","","","");
    }
    else if (type == "repeat")
    {
        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*INCREASE COUNT OF LABELS*/
        labelCount++;
    }
    else if (type == "switch")
    {
        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*INCREASE COUNT OF LABELS*/
        labelCount++;
    }
    else if (type == "case")
    {
        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(type,"__________","__________","__________");

        /*INCREASE COUNT OF LABELS*/
        labelCount++;
    }
    else if (type == "enum")
    {
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

    }
    else
    {
        addQuad(type+":","","","");
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());
        addQuad("RET","T"+to_string(temps.size()),"","");

        labelCount++;
    }

    clearTemps();
}

char *CodeGenerator::addAssignment(SymbolTableEntry* sym)
{
    assignments[sym] = "R"+to_string(assignments.size());

    std::string str_value = assignments[sym];
    char *cstr_value = new char[str_value.length() + 1];
    str_value.copy(cstr_value, str_value.length());
    cstr_value[str_value.length()] = '\0';
    return cstr_value;
}

char *CodeGenerator::getAssignment(SymbolTableEntry* sym)
{
    std::string str_value = assignments[sym];
    char *cstr_value = new char[str_value.length() + 1];
    str_value.copy(cstr_value, str_value.length());
    cstr_value[str_value.length()] = '\0';
    return cstr_value;
}

char *CodeGenerator::addTemp(std::string expr1, std::string op, std::string expr2)
{
    temps["T"+to_string(temps.size())] = expr1 + op + expr2;
    
    std::string str_value = "T"+to_string(temps.size()-1);
    char *cstr_value = new char[str_value.length() + 1];
    str_value.copy(cstr_value, str_value.length());
    cstr_value[str_value.length()] = '\0';
    return cstr_value;
}

char *CodeGenerator::getTemp(std::string temp)
{
    std::string str_value = temps[temp];
    char *cstr_value = new char[str_value.length() + 1];
    str_value.copy(cstr_value, str_value.length());
    cstr_value[str_value.length()] = '\0';
    return cstr_value;
}

void CodeGenerator::clearTemps()
{
    temps.clear();
}

void CodeGenerator::addQuad(std::string operation, std::string operand1, std::string operand2, std::string destination)
{
    scopes.top()->push_back(new Quad(operation,operand1,operand2,destination));
}

void CodeGenerator::printQuads()
{
    cout << left << setw(20) << "operation" << setw(20) << "operand1" << setw(20) << "operand2" << setw(20) << "destination" << endl;
    for (int i = 0; i < quads->size(); i++)
    {
        cout << left << setw(20) << (*quads)[i]->getOp() << setw(20) << (*quads)[i] -> getArg1() << setw(20) << (*quads)[i] -> getArg2() << setw(20) << (*quads)[i] -> getDest() << endl;
    }
}

void CodeGenerator::printQuadsToFile(std::string filename)
{
    // Open the file for writing
    ofstream outputFile(filename);

    // Check if the file was opened successfully
    if (!outputFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    outputFile << "START main" << endl << endl;

    // Write the quadruples to the file
    for (int i = 0; i < quads->size(); i++)
    {
        outputFile << left << setw(20) << (*quads)[i]->getOp() << setw(6) << (*quads)[i] -> getArg1() << setw(6) << (*quads)[i] -> getArg2() << setw(6) << (*quads)[i] -> getDest() << endl;
    }

    // Close the file
    outputFile.close();
}

