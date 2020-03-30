#include "GenStack.h"

//default constructor
GenStack::GenStack()
{
    myArray = new char[128];
    mSize = 128;
    top = -1;

}

//overloaded constructor
GenStack::GenStack(int maxSize)
{
    myArray = new char[maxSize];
    mSize = maxSize;
    top = -1;

}

GenStack::~GenStack()
{
   // delete myArray[];//maybe
    //
}

void GenStack::push(char data)
{
    //check if full before inserting

    myArray[++top] = data;
}

char GenStack::pop()
{
    //check if empty before removing

    return myArray[top--];  //post decrement -- decreases its value after it returns the value
}

char GenStack::peek()
{
    //check if empty before removing

    return myArray[top];  //post decrement -- decreases its value after it returns the value
}

bool GenStack::isFull()
{

    return (top == mSize - 1);
}

bool GenStack::isEmpty()
{
    return (top == -1);
}