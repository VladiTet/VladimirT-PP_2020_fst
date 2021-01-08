#include <iostream>
#include "Header.h"
using namespace std;

void printUserName(const char* name) 
{
    cout<<"Function: " << "void printUserName(const char* name)"<< endl;
    cout << "Answer: " << name << endl;
}

char getChar(char a)
{
    cout << "Function: " << "char getChar(char a)" << endl;
    cout << "Answer: ";
    return a; 
}

int total(int num1, int num2) 
{
    cout << "Function: " << "int total(int num1, int num2)" << endl;
    cout << "Answer: ";
    return num1 + num2;
}
float divide(float n1, float n2) 
{
    cout << "Function: " << "float divide(float n1, float n2)" << endl;
    cout << "Answer: ";
    return n1 / n2;
}

