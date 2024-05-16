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

// Setters
string Quad::getOp()
{
    return op;
}
string Quad::getArg1()
{
    return arg1;
}
string Quad::getArg2()
{
    return arg2;
}
string Quad::getResult()
{
    return result;
}

// Getters
void Quad::setOp(string op)
{
    this->op = op;
}
void Quad::setArg1(string arg1)
{
    this->arg1 = arg1;
}
void Quad::setArg2(string arg2)
{
    this->arg2 = arg2;
}
void Quad::setResult(string result)
{
    this->result = result;
}