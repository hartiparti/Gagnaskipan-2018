#ifndef NODE_H
#define NODE_H

#include "valueclass.h"

class Node
{
    public:
        Node() : value(0, 0.0),prev(NULL), next(NULL){}
        //Node(ValueClass param_value) : value(param_value), prev(NULL), next(NULL) {}

        Node(ValueClass param_value, Node *p = NULL, Node *n = NULL) : value(param_value), prev(p), next(n) {}
        ~Node() {};

        ValueClass value;
        Node *next;
        Node *prev;

};

#endif // NODE_H
