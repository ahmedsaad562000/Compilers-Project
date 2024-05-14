#ifndef QUAD_H
#define QUAD_H

using namespace std;
#include <string>
#include <stdio.h>
class Quad
{
private:
    string op;
    string arg1;
    string arg2;
    string result;
public:
    Quad(string op, string arg1, string arg2, string result);
    string toString();   
};

#endif