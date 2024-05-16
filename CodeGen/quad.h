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
    string dest;
public:
    Quad(string op, string arg1, string arg2, string dest);
    // string toString();   
    //Setters
    string getOp();
    string getArg1();
    string getArg2();
    string getDest();
    //Getters
    void setOp(string op);
    void setArg1(string arg1);
    void setArg2(string arg2);
    void setDest(string dest);

};

#endif