#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List
{
    public:

        List();
        virtual ~List();
        friend ostream& operator << (ostream& out, List& lis);

    private:
        Node *head;
};

#endif // LIST_H
