#include "quad.h"

Quad::Quad(string op, string arg1, string arg2, string dest)
{
    this->op = op;
    this->arg1 = arg1;
    this->arg2 = arg2;
    this->dest = dest;
}

// string Quad::toString()
// {
//     if (op == "=")
//     {
//         // dest := arg1
//         return dest + " := " + arg1;
//     }
//     else if (arg2 == "")
//     {
//         return dest + " := " + op + " " + arg1;
//     }
//     return dest + " := " + arg1 + " " + op + " " + arg2;
// }

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
string Quad::getDest()
{
    return dest;
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
void Quad::setDest(string dest)
{
    this->dest = dest;
}