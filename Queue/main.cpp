#include "GenQueue.cpp"

using namespace std;

int main(int argc, char **argv)
{

    GenQueue *myQueue = new GenQueue(10);

    myQueue->insert('F');

    cout << myQueue->remove() << endl;

    //myStack.

    delete myQueue;

    return 0;
}
