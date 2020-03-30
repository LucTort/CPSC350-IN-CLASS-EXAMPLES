//header file

class ListNode{
    public:
        int data;
        ListNode *next;
        ListNode *prev;

        ListNode();//default constructor
        ListNode(int d);//overloaded

        ~ListNode();//destructor
};

//ListNode implementation file (.cpp)

ListNode::ListNode(int d){
    data = d;
    next = NULL;//don't know where in the list this will go -- can be inserted anywhere in the list
                //do nulptr if doesn't work
    prev = NULL;

}

ListNode::~ListNode(){
    //Do research here

}

//header file for DoubleLinkedList -- entirely different file
class DoublyLinkedList{
    private:
        ListNode *front;
        ListNode *back;
        unsigned int size;
        

    public:
        DoublyLinkedList();
        ~NaiveList();

        void insertFront(int data);
        int removeFront();
        int removeBack();
        int search(int val);//can return value or postion or node depending on what you want
        int removeAtPos(int pos);


        unsigned int getSize();
        bool isEmpty();
        void printList();//prints entire value of the list

};

//implementation file -- NaiveList.cpp

DoublyLinkedList::DoublyLinkedList()
{
    //empty list
    size = 0;
    front == NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
    //make this yo'self
}

unsigned int DoublyLinkedList::getSize()
{
    return size;
}

bool DoublyLinkedList::isEmpty()
{
    return (size == 0);
}

void DoublyLinkedList::printList()
{
    ListNode *curr = front;

    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }

    //don't need to delete because didn't use keyword 'new'
}

void DoublyLinkedList::insertFront(int d)
{
    ListNode *node = new ListNode(d);
    //check if empty
    if(isEmpty())
    {
        back = node;
    }else
    {
        //not empty
        front->prev = node;
        node->next = front;
    }
    front = node;
    
    size++;
}

void DoublyLinkedList::insertBack(int d)
{
    ListNode *node = new ListNode(d);
    //check if empty
    if(isEmpty())
    {
        front = node;
    }else
    {
        //not empty
        back->next = node;
        node->prev = back;
    }
    back = node;
    
    size++;
}

int DoublyLinkedList::removeFront()
{

}

int DoublyLinkedList::search(int val)
{
    int position = -1;//use -1 so that when we return it, it shows that there is not that value

    ListNode *curr = front;

    while (curr != NULL)
    {
        //iterate and find the value
        position++;

        if(curr->data == val)
        {
            break;//exits the loop
        }else
        {
            curr = curr->next;
        }
    }

    if (curr == NULL)
    {
        position = -1;//we did not find the value
    }

    return position;
}

int DoublyLinkedList::removeAtPos(int pos)
{

}

int DoublyLinkedList::removeFront()
{
    //error check to see if list is empty
    ListNode *node = front;

    if(front->next == NULL)
    {
        //we have one node in the List
        back = NULL
    }
    else{
        //there is more than one node in the list
        front->next->prev
    }
    front = front->next;
    node->next = NULL;
    int tmp = tmp->data;

    delete temp;
    size--;

    return tmp;
}

//need to find the value in the list before we can delete
//this function does not take in a position as a parameter
int DoublyLinkedLIst::remove(int value)
{
    ListNode *curr = front;

    while(curr->data != value)
    {
        //keep iterationg until we find our value
        curr = curr->next;

        if(curr == NULL)
            return NULL; //might need to return -1
    }
    //we found the value
    if(curr == front)
    {
        //check if node to be delete is the front
        front = curr->next;
    }
    else
    {
        //node to be deleted is not the front or back
        curr->prev->next = curr->next;

    }
    
    if(curr == back)
    {
        back = curr->prev;
    }
    else
    {
        //node to be deleted is not the front or th eback, it's in between
        curr->next->prev = curr->prev;
    }

    curr->next = NULL;
    curr->prev = NULL;
    int temp = curr->data;
    delete curr;
    size--;
    return temp;
    

}

//final function needs search function