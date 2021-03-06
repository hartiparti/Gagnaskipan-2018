#ifndef INSERTSORTEDARRAY_H
#define INSERTSORTEDARRAY_H

#include <iostream>

using namespace std;

class IndexOutOfBoundsException{};
class EmptyException{};

#define INITIAL_CAPACITY 4

class CharacterArray
{
    public:
        CharacterArray();
        CharacterArray(char* str, int length);
        virtual ~CharacterArray();

        void append(char c);
        void insert(char c, int index);
        void setAt(char c, int index);

        char getAt(int index);

        char pop_back();
        char removeAt(int index);
        void clear();

        int length();

        bool isEmpty();

        char* substring(int startIndex, int length);

        friend ostream& operator <<(ostream& out, const CharacterArray& ca);

    protected:

    private:

         char *Array;
         int size_of_array;
         int current_capacity;
         int current_position;

         void resizeArray();



};

#endif // INSERTSORTEDARRAY_H
