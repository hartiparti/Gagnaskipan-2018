#ifndef QUEUE_H
#define QUEUE_H

#include "measurement.h"
#include "Node.h"
#include <iostream>


class Queue
{
    public:
        Queue();
        ~Queue();

    private:
        Node *tail;
        int itemCount;
};

#endif // QUEUE_H
