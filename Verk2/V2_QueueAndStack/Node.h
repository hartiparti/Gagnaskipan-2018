#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "measurement.h"
#include <stdlib.h>

class Node
{
    public:
        Node() : value("",0.0), next(NULL){};
        Node(Measurement param) : value(param), next(NULL) {};
        Node(Measurement param, Node *next) : value(param), next(next){};

        virtual ~Node(){};
        Measurement value;
        Node *next;


    protected:

    private:

};

#endif // NODE_H
