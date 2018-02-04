#include "List.h"

List::List()
{
    head = new Node(3, new Node(5, new Node(4)));
}

List::~List()
{
    //dtor
}
ostream& operator << (ostream& out, List& lis)
{

    Node *node = lis.head;
    while(node != NULL)
    {
        cout << node ->  value << " ";
        node = node->next;
    }
    return out;
}

