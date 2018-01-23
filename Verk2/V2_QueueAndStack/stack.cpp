#include "stack.h"


Stack::Stack()
{
    itemCount = 0;
    head = NULL;
    tail = NULL;
}

Stack::~Stack()
{
    Node *temp;
    while(head!= NULL)
    {
        temp = head;
        head = head->next;
        delete temp;

    }
}

void Stack::push(Measurement value)
{
    Node *node = new Node(value, head);
    if (head == NULL)
    {
        tail = head;
    }

    node -> value;
    node -> next = head;
    head = node;
    itemCount++;
}

Measurement Stack::pop()
{
    Node *temp;
    if(isEmpty()) {
        throw EmptyException();
    }
    else
    {
        temp = head;
        head = head -> next;
        Measurement RetVal = temp->value;
        itemCount--;
        delete temp;
        return RetVal;
    }

}
int Stack::size()
{
    return itemCount;
}

bool Stack::isEmpty()
{
    Node *node;
    node = head->next;
    if(node == NULL)
    {
        delete node;
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator << (ostream& out, Stack &s)
{
    Node* node = s.head;
    for (node; node!= NULL; node = node->next)
    {
        out << node->value << " ";
        return out;
    }
}
