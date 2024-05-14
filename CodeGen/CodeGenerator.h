#ifndef CODEGEN_H
#define CODEGEN_H

#include <fstream>

#include "quad.h"


FILE *quadrupleFile = fopen("quadruple.txt", "w"); 
void addQuad(string op,string result, string arg1, string arg2);


void closeQuadruplesFile();


#endif