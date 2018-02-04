#include "List.h"

List::List()
{
    head =  NULL;       //new Node(3, new Node(5, new Node(4)));
    tail = NULL;
}

List::~List()
{
    //dtor
}

void List::insert(ValueClass value)
{
    Node *node = new Node(value, current->prev, current);
    current->prev->next = node;
    current->prev = node;

}

ValueClass List::remove()
{
    if(current == tail )
    {
        throw OutOufBoundsExc();

    }
    ValueClass temp = current->value;
    current->prev->next = current->next;
    current->next->prev = current->prev;

    Node *tmp_node = current->next;
    delete current;

    current = tmp_node;

}


ostream& operator << (ostream& out, List& lis)
{
    for(Node *node, lis.head; node!= NULL; node = node->next)
    {
        out << node->value << " ";
    }
    return out;
}

