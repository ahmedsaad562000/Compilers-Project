#include "quad.h"

Quad::Quad(string op, string arg1, string arg2, string result)
{
    this->op = op;
    this->arg1 = arg1;
    this->arg2 = arg2;
    this->result = result;
}

string Quad::toString()
{
    if (op == "=")
    {
        // result := arg1
        return result + " := " + arg1;
    }
    else if (arg2 == "")
    {
        return result + " := " + op + " " + arg1;
        
    }
    return result + " := " + arg1 + " " + op + " " + arg2;

    

    
}