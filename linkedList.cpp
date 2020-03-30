//header file

class ListNode{
    public:
        int data;
        ListNode *next;

        ListNode();//default constructor
        ListNode(int d);//overloaded

        ~ListNode();//destructor
};

//ListNode implementation file (.cpp)

ListNode::ListNode(int d){
    data = d;
    next = NULL;//don't know where in the list this will go -- can be inserted anywhere in the list
                //do nulptr if doesn't work

}

ListNode::~ListNode(){
    //Do research here

}

//header file for SingleLinkedList -- entirely different file
class NaiveList{
    private:
        ListNode *front;
        unsigned int size;
        

    public:
        NaiveList();
        ~NaiveList();

        void insertFront(int data);
        int removeFront();
        int search(int val);//can return value or postion or node depending on what you want
        int removeAtPos(int pos);

        unsigned int getSize();
        bool isEmpty();
        void printList();//prints entire value of the list

};

//implementation file -- NaiveList.cpp

NaiveList::NaiveList()
{
    //empty list
    size = 0;
    front == NULL;
}

NaiveList::~NaiveList()
{
    //make this yo'self
}

unsigned int NaiveList::getSize()
{
    return size;
}

bool NaiveList::isEmpty()
{
    return (size == 0);
}

void NaiveList::printList()
{
    ListNode *curr = front;

    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }

    //don't need to delete because didn't use keyword 'new'
}

void NaiveList::insertFront(int d)
{
    ListNode *node = new ListNode(d);
    node->next = front;
    front = node;
    size++;
}

int NaiveList::removeFront()
{
    int temp = front->data;
    ListNode *ft = front;

    front = front->next;
    ft->next = NULL;//can't get rid of if referencing something else

    delete ft;
    size--;

    return temp;
}

int NaiveList::search(int val)
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

int NaiveList::removeAtPos(int pos)
{
    //error checking needed
    int idx = 0;
    ListNode *curr = front;
    ListNode *prev = front;
    
    //now let's loop until position
    while(idx != pos)
    {
        prev = curr;
        curr = curr->next;
        idx++;
    }

    //we found the position of the node to be deleted

    prev->next = curr->next;
    curr->next = NULL;  //would have issues if try to delete it when it still points to something, so this is required 
    int temp = curr->data;
    delete curr;
    size--;

    return temp;
}

//final function needs search function