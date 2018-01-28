#include "Node.h"

Node::Node()
{
    value = 0;
    next = NULL;
}

Node::Node(int value)
{
   this->value = value;
   next = NULL;
}

Node::Node(int value, Node *next)
{
   this->value = value;
   this->next = next;
}

Node::~Node()
{
    //dtor
}
