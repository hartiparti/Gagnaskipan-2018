#include "list.h"
#include "valueclass.h"

List::List()
{
    head = new Node();
    tail = new Node();
    head->next = tail;
    tail ->prev = head;
    current = tail;

    currentPos = 0;
    size = 0;
}

List::~List()
{
    current = head;
    while(current != tail)
    {
        current = current->next;
        delete head;
        head = current;
    }
    delete tail;

}


void List::insert(ValueClass value)
{
    Node *node = new Node(value, current->prev, current);
    current->prev->next = node;
    current->prev = node;

    currentPos++;
    size++;

}

ValueClass List::remove()
{
    if(current == tail )
    {
        throw OutOufBoundsE();

    }
    ValueClass temp = current->value;
    current->prev->next = current->next;
    current->next->prev = current->prev;

    Node *tmp_node = current;
    current = current->next;
    delete tmp_node;

    size--;

    return temp;

}

void List::moveToTail(int offset)
{
    if(currentPos + offset >= size)
    {
       current = tail;
       currentPos = size;                       /// Ef ég fer of langt, fer hann bara maxið
       throw OutOufBoundsE();
    }
    else if(offset < 0)
    {
        throw OutOufBoundsE();
    }
    else
    {
    for(int i = 0; i < offset; i++)
    {
        currentPos++;
        current = current->next;
    }
    }
}

void List::moveToHead(int offset)
{
     if(currentPos - offset < 0)
    {
       current = head->next;
       currentPos = 0;                    /// Ef ég fer of langt, fer hann bara maxið
       throw OutOufBoundsE();
    }
    else if(offset < 0)
    {
        throw OutOufBoundsE();
    }
    else
    {
    for(int i = 0; i < offset; i++)
    {
        currentPos--;
        current = current->prev;
    }
    }

}

void List::moveToPos(int pos)
{
    if(pos < 0 || pos > size)
    {
        throw OutOufBoundsE();
    }

    int distToHead = pos;
    int distToTail = size - pos;
    int disToCurrent = pos - currentPos;
    if(disToCurrent < 0) disToCurrent =- disToCurrent;
    current = head->next;
    currentPos = 0;
    moveToTail(pos);
    if()
    current = tail;
    currentPos = size;
    moveToHead(size - pos);

    else {
        if(pos > currentPos)
        {
        moveToTail(pos - currentPos);
        }
        else {
        moveToHead(currentPos - pos);
        }
    }
}

ostream& operator << (ostream& out, List& lis)
{
    for(Node *node = lis.head->next; node!= lis.tail; node = node->next)
    {
        out << node->value << " ";
    }
    return out;
}
