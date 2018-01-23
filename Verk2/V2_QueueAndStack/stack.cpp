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
    temp = head;
    while(temp != NULL)
    {
        Node *next = temp -> next;
        delete temp;
        temp = next;
    }
}

void Stack::push(Measurement value)
{
    Node *node = new Node(value, head);
    if(head == NULL)
    {
        node -> next = NULL;
    }
    else
    {
        node -> next = head;
    }
    head = node;
    itemCount++;
}

Measurement Stack::pop()
{
    itemCount--;
    if(isEmpty()) {
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
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator << (ostream& out, Stack &s)
{
    for (Node* node = s.head; node!= NULL; node = node->next)
    {
        out << node->value << " ";
    }
    return out;
}
