#include "queue.h"

Queue::Queue()
{
    itemCount = 0;
    tail = NULL;
    head = NULL;
}

Queue::~Queue()
{
    Node * temp;
    while(head != NULL)
    {
        temp = head;
        head = head -> next;
        delete temp;
    }
    tail = NULL;
}

void Queue::add(Measurement value)
{
    Node *node = new Node(value, head);
    itemCount++;
    node -> next = NULL;
    if(tail== NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail -> next = node;
        tail = node;
    }
}

Measurement Queue::remove()
{
    itemCount--;
    if(isEmpty())
    {
        throw EmptyException();
    }
    else
    {
        Node * temp;
        temp = head;
        head = head -> next;
        delete temp;
        Measurement RetVal = temp->value;
        return RetVal;
    }
}

int Queue::size()
{
    return itemCount;
}

bool Queue::isEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        Node *node;
        node = head;
        node = node -> next;
        return false;
    }
}

ostream& operator << (ostream& out, Queue& q )
{
    for (Node* node = q.head; node!= NULL; node = node->next)
    {
        out << node->value << " ";
    }
    return out;
}
