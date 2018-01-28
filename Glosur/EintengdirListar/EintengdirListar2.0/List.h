#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List
{
    public:

        List();
        virtual ~List();

        void headInsert(int value);
        void tailInsert(int value);
        friend ostream& operator << (ostream& out, List& lis);

    private:
        Node *head;
        Node *tail;
};

#endif // LIST_H
