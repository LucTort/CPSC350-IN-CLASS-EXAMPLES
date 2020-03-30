#include "GenQueue.h"

    GenQueue::GenQueue(){
        //default constructor -- to-do


    }

    //overloaded constructor
    GenQueue::GenQueue(int maxSize){
        myQueue = new char[maxSize];
        mSize = maxSize;
        front = 0;
        rear = -1;
        numElements = 0;

    }

    GenQueue::~GenQueue(){
        //needs to be filled in
    }

        void GenQueue::insert(char d){
            //add error checking
            myQueue[++rear] = d;
            ++numElements;
        }

        char GenQueue::remove()
        {
            //error checking
            char c = '\0';  //null character -- remember this
            c = myQueue[front];
            ++front;
            --numElements;
            return c;
        }

        bool GenQueue::isFull()
        {
            return (numElements == size);   
        }

        bool GenQueue::isEmpty()
        {
            return (numElements == 0);   
        }

        bool GenQueue::getSize()
        {
            return numElements;
        }

