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
        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();


        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        addQuad("L"+to_string(lc->label)+":","" , "" , "" ); ;
    }
    else if (type == "for")
    {

        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();

        


        std::string startLabel = "L"+to_string(lc->label);
        std::string endLabel = "L"+to_string(lc->label+1);
        addQuad(startLabel + ":","","","");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad("JMP","","",startLabel);
        addQuad(endLabel+":","","","");
    }
    else if (type == "while")
    {

        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();

        


        std::string startLabel = "L"+to_string(lc->label);
        std::string endLabel = "L"+to_string(lc->label+1);
        addQuad(startLabel + ":","","","");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad("JMP","","",startLabel);
        addQuad(endLabel+":","","","");
    }
    else if (type == "repeat")
    {

        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();

        


        std::string startLabel = "L"+to_string(lc->label);
        std::string endLabel = "L"+to_string(lc->label+1);
        addQuad(startLabel + ":","","","");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad("JMP","","",startLabel);
        addQuad(endLabel+":","","","");
    }
    else if (type == "switch")
    {

        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();
        switch_value.pop();

        std::string startLabel = "L"+to_string(lc->label);
        std::string endLabel = "L"+to_string(lc->label+1);
        addQuad(startLabel + ":","","","");

        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        /*ADD SCOPE TYPE SPECIFIC QUADS*/
        addQuad(endLabel+":","","","");
    }
    else if (type == "case")
    {


        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());


        
        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc = LoopLabelsStack.top();
        LoopLabelsStack.pop();

        std::string caseLabel = "L"+to_string(lc->label);

        addQuad(caseLabel+":","","","");

    }
    else if (type == "caseBreak")
    {


        /*ADD CLOSED SCOPE QUADS TO PARENT LIST*/
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());

        
        if (LoopLabelsStack.empty())
        {
            std::cout << "Loop label stack empty" << std::endl;
        }
        LC* lc1 = LoopLabelsStack.top();
        LoopLabelsStack.pop();
        LC* lc2 = LoopLabelsStack.top();


        std::string caseLabel = "L"+to_string(lc1->label);
        std::string breakLabel = "L"+to_string(lc2->label+1);
        addQuad("JMP","","",breakLabel);
        addQuad(caseLabel+":","","","");

    }
    else if (type == "")
    {
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());
    }
    else
    {
        addQuad(type+":","","","");
        parentList->insert(parentList->end(),closedList->begin(),closedList->end());
        function_names.pop();
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

    outputFile << left << setw(20) << "operation" << setw(20) << "operand1" << setw(20) << "operand2" << setw(20) << "destination" << endl;


    // Write the quadruples to the file
    for (int i = 0; i < quads->size(); i++)
    {
        outputFile << left << setw(20) << (*quads)[i]->getOp() << setw(20) << (*quads)[i] -> getArg1() << setw(20) << (*quads)[i] -> getArg2() << setw(20) << (*quads)[i] -> getDest() << endl;
    }

    // Close the file
    outputFile.close();
}


    char* CodeGenerator::addLC(std::string condition, int numberofLabels)
    {
        LoopLabelsStack.push(new LC(labelCount,condition));
        labelCount+=numberofLabels;
        std::string str_value = "L"+to_string(labelCount-1);
        char *cstr_value = new char[str_value.length() + 1];
        str_value.copy(cstr_value, str_value.length());
        cstr_value[str_value.length()] = '\0';
        return cstr_value;

    }

    void CodeGenerator::setSwitchValue(std::string value)
    {
        switch_value.push(value);
    }

    char* CodeGenerator::getSwitchValue()
    {
        std::string str_value = switch_value.top();
        char *cstr_value = new char[str_value.length() + 1];
        str_value.copy(cstr_value, str_value.length());
        cstr_value[str_value.length()] = '\0';
        return cstr_value;
    }

    void CodeGenerator::setFunctionName(std::string name)
    {
        function_names.push(name);
    }

    char* CodeGenerator::getFunctionName()
    {
        std::string str_value = function_names.top();
        char *cstr_value = new char[str_value.length() + 1];
        str_value.copy(cstr_value, str_value.length());
        cstr_value[str_value.length()] = '\0';
        return cstr_value;
    }

