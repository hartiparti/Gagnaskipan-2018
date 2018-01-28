#ifndef LIST_H
#define LIST_H


#include <iostream>

#include "node.h"

using namespace std;

class OutOufBoundsE{};


class List
{
    public:

        List();
        virtual ~List();

        void insert(ValueClass value);
        ValueClass remove();

        void moveToTail(int offset = 1);
        void moveToHead(int offset = 1);
        void moveToPos(int pos);

        friend ostream& operator << (ostream& out, List& lis);

    private:
        Node *head;
        Node *tail;
        Node *current;

        int currentPos;
        int size;

};
#endif // LIST_H
