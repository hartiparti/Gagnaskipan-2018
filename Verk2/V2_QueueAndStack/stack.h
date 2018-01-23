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
        virtual ~Stack();

        void push(Measurement value);

        Measurement pop();
        int size();
        bool isEmpty();

        friend ostream& operator << (ostream& out, Stack& s );

    private:
        Node *head;
        Node *tail;

        int itemCount;

};

#endif // STACK_H
