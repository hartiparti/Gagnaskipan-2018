#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

#include "listnode.h"

using namespace std;

class InvalidPositionException {};

template <class T>

class DoublyLinkedList {
    public:
        DoublyLinkedList()
        {
            head = new  ListNode<T>;
            tail = new ListNode<T>;
            head->next = tail;
            tail->prev = head;
            currNode = tail;
            currentPosition = 0;
            size = 0;
        }

        ~DoublyLinkedList()
        {
            currNode = head;
            while(currNode != tail)
            {
                currNode = currNode->next;
                delete head;
                head = currNode;
            }
                delete tail;

        }


        void clear()
        {
            for(int i = 0; i < size; i++)
            {
                head->next = tail;
                tail->prev = head;
            }
            size = 0;
            currentPosition = 0;
            currNode = tail;
        }


        void insert(const T& item)
        {
            ListNode<T> *node = new ListNode<T>(item, currNode->prev, currNode);
            currNode->prev->next = node;
            currNode->prev = node;
            currentPosition++;
            size++;
        }

        void append(const T& item)
        {
            ListNode<T> *node = new ListNode<T>(item, tail->prev, tail);

            if(currNode == tail)
            {
                insert(item);

            }
            else
            {

                node->prev->next = node;
                tail->prev = node;
                currentPosition++;
                size++;
            }

        }

        T remove()
        {
            if(currNode >= tail){

                throw InvalidPositionException();
            }
            ListNode<T> *tmp_node = currNode;

            T temp = currNode->data;
            currNode->prev->next = currNode->next;
            currNode->next->prev = currNode->prev;


            currNode = currNode->next;
            delete tmp_node;
            size--;

            return temp;
        }

        void move_to_start()
        {
                currNode = head->next;
                currentPosition = 0;
        }

        void move_to_end()
        {
                currNode = tail;
                currentPosition = size;
        }

        void prev()
        {

            if(currNode <= head->next)
            {
                return;
            }
            else
            {

                currNode = currNode->prev;
                currentPosition--;
            }
        }

        void next()
        {
            if(currNode >= tail)
            {
                return;
            }

            currNode = currNode -> next;
            currentPosition++;
        }

        int length() const
        {
            return size;
        }


        int curr_pos() const
        {
            return currentPosition;
        }


        void move_to_pos(int pos)
        {

            if(pos < 0 || pos > size)
            {
                throw InvalidPositionException();
            }
            else if(pos == currentPosition)
            {
                return;
            }

            else if (pos  < currentPosition)
            {
                    currNode = head -> next;
                    currentPosition = 0;
                    for(int i = 0; i < pos; i++)
                    {
                        currentPosition++;
                        currNode = currNode -> next;
                    }
            }
            else
            {
                    currNode = tail;
                    currentPosition = size;
                    for(int i = 0; i < pos; i++)
                    {
                        currNode = head->next;
                        currentPosition--;
                    }
            }

        }

        const T& get_value() const
        {
            if(currentPosition > size && currentPosition < 0)
            {
                throw InvalidPositionException();
            }

            return currNode->data;
        }


        friend ostream& operator <<(ostream& out, const DoublyLinkedList& lis)
        {
            for(ListNode<T> *node = lis.head->next; node!= lis.tail; node = node->next)
            {
                out << node->data << " ";
            }

            return out;
        }

    private:

        ListNode<T> *head;

        ListNode<T> *tail;

        ListNode<T> *currNode;

        int size;
        int currentPosition;
};


#endif // DOUBLY_LINKED_LIST_H
