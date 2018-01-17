#include "characterarray.h"

CharacterArray::CharacterArray()
{
    ///TODO: Implement
    current_capacity = INITIAL_CAPACITY;
    Array = new char[current_capacity];
    size_of_array = 0;

}

CharacterArray::CharacterArray(char* str, int length)
{
    ///TODO: Implement
    size_of_array = length;

    current_capacity = INITIAL_CAPACITY;
    Array = new char[current_capacity];

    resizeArray();  /// Stækka til að taka inn streng.

    for(int i = 0; i < length; i++)
    {
        Array[i] = str[i];
    }


}

CharacterArray::~CharacterArray()
{
    ///TODO: Implement
    delete[] Array;
}

void CharacterArray::resizeArray()          /// Mitt fall til thess ad staekka Array, bara upp í helming af tempArray;
{
    current_capacity *= 2;
    char *tempArray = new char[current_capacity];

    for(int i = 0; i < current_capacity / 2; i++)
    {
        tempArray[i] = Array[i];
    }

    delete[]Array;

    Array = tempArray;


}

void CharacterArray::append(char c)
{

    ///TODO: Implement
    if (size_of_array >= current_capacity)
    {
        resizeArray();
    }

    int index = size_of_array - 1;
    while(index >=0)
    {
        if(Array[index] > c)
        {
            Array[index + 1] = Array[index];
            index--;
        }
        else
        {
            index;
            break;
        }
    }

    Array[index+1] = c;
    size_of_array++;
}

void CharacterArray::insert(char c, int index)
{

    ///TODO: Implement
}

void CharacterArray::setAt(char c, int index)
{

    ///TODO: Implement


}

char CharacterArray::getAt(int index)
{

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::pop_back()
{

    //Example of throwing an exception
    if(isEmpty()) {
        throw EmptyException();
    }

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::removeAt(int index)
{

    ///TODO: Implement
    return '\0'; //change or remove this line
}

void CharacterArray::clear()
{

    ///TODO: Implement
}

int CharacterArray::length()
{

    ///TODO: Implement
    return size_of_array;
}

bool CharacterArray::isEmpty()
{
    bool checkEmpty = false;
    if (Array == 0)
    {
        checkEmpty = true;

    }
    if (checkEmpty)
    {
        return true;
    }
   else
   {
       return false;
   }


}

char* CharacterArray::substring(int startIndex, int length)
{

    ///TODO: Implement
    return NULL; //change or remove this line
}

ostream& operator <<(ostream& out, const CharacterArray& ca)
{

    ///TODO: Implement
    if (ca.size_of_array == 0)
    {
        out << " ";
    }
    for (int i = 0; i < ca.size_of_array; i++)
    {
        out << ca.Array[i] << " ";
    }
    return out;
}
