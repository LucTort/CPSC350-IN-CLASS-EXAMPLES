#include "GenStack.cpp"
//#include "GenStack.h"

using namespace std;


int main(int argc, char **argv)
{

    GenStack *myStack = new GenStack(10);

    myStack->push('F');

    cout << myStack->pop() << endl;

    //myStack.

    delete myStack;

    return 0;
}
