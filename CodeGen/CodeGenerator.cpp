#include "CodeGenerator.h"
#include "quad.cpp"



void addQuad(string op, string result, string arg1, string arg2)
{
    Quad *quad = new Quad (op, arg1, arg2, result);
    fprintf(quadrupleFile, "%s\n", quad->toString().c_str());
}


void closeQuadruplesFile()
{

    fclose(quadrupleFile);

}