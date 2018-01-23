#ifndef QUEUE_H
#define QUEUE_H

#include "measurement.h"
#include "Node.h"
#include <iostream>
#include "stack.h"

class Queue
{
    public:
        Queue();
        ~Queue();

       void add(Measurement value);
       Measurement remove();

       int size();
       bool isEmpty();

       friend ostream& operator << (ostream& out, Queue& q );

    private:
        Node *tail;
        Node *head;
        int itemCount;
};

#endif // QUEUE_H
