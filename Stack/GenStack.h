#include <iostream>
using namespace std;

class GenStack 
{
    public:
        GenStack(); //default constructor
        GenStack(int maxSize); //overloaded constructor
        ~GenStack(); //destructor
        //functions
        void push(char data);   //insert
        char pop(); //remove

        //helper functions
        bool isFull();
        bool isEmpty();
        char peek();
        int mSize;  //max size of myStack
        int top;//variable to keep track of indicies representing top of our stack
            
        char *myArray;

};