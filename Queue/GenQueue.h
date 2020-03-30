#include <iostream>

class GenQueue
{

    public:
        GenQUeue(); //default constructor
        GenQueue(int maxSize);  //overloaded constructor
        ~GenQueue();

        //core functions
        void insert(chard); //enqueue
        char remove();  //dequeue

        //aux functions
        char peek();
        bool isFull();
        bool isEmpty();
        int getSize();

        //vars
        int front;  //aka head
        int rear;   //aka tail
        int mSize;
        int numElements;

        char *myQueue;  //array

};  //header functions for classes always end with ';'