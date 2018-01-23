#ifndef STACK_H
#define STACK_H


#include "measurement.h"
#include "Node.h"
#include <iostream>

class EmptyException{};

class Stack
{
    public:
        Stack();
        ~Stack();

        void push(Measurement value);
        Measurement pop();

        int size();
        bool isEmpty();
        friend ostream& operator << (ostream& out, Stack& s );

    private:
        int itemCount;
        Node *head;
        Node *tail;
};

#endif // STACK_H
