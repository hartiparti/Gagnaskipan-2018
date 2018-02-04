#ifndef NODE_H
#define NODE_H

#include <stdlib.h>
#include <iostream>
using namespace std;

class Node
{
    public:
        Node();
        Node(int value);
        Node(int value, Node *next);
        virtual ~Node();

        int value;
        Node *next;

    private:
};

#endif // NODE_H
