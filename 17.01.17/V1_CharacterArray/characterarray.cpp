#include "characterarray.h"

CharacterArray::CharacterArray()
{
    current_capacity = INITIAL_CAPACITY;
    Array = new char[current_capacity];
    Array[0] = '\0';
    size_of_array = 0;

}

CharacterArray::CharacterArray(char* str, int length)
{
    size_of_array = length;

    current_capacity = INITIAL_CAPACITY;
    Array = new char[current_capacity];

    resizeArray();
    for(int i = 0; i < length; i++)
    {
        Array[i] = str[i];
    }


}

CharacterArray::~CharacterArray()
{
    delete[] Array;
}

void CharacterArray::resizeArray()
{

    current_capacity *= 2;
    char *tempArray = new char[current_capacity];

    for(int i = 0; i < current_capacity; i++)
    {
        tempArray[i] = Array[i];
    }

    delete[]Array;

    Array = tempArray;


}

void CharacterArray::append(char c)
{
    if (size_of_array >= current_capacity)
    {
        resizeArray();
    }

    Array[size_of_array++] = c;

}

void CharacterArray::insert(char c, int index)
{
    char inserted_character = c;
    if (index >= size_of_array)
        {
            throw IndexOutOfBoundsException();
        }
    else
        {
            char first;
            size_of_array++;
            cout << size_of_array;
            if (size_of_array == current_capacity)
            {
                resizeArray();
                for (int i = 0; i < size_of_array; i++)
                {

                    first = Array[i];
                    Array[i] = inserted_character;
                    inserted_character = first;
                }

            }
            else
            {

                append(inserted_character);

            }


        }
}

void CharacterArray::setAt(char c, int index)
{

    if (index >= size_of_array || index < 0)
    {
        throw IndexOutOfBoundsException();
    }
    else
    {
        Array[index] =  c;
    }

}

char CharacterArray::getAt(int index)
{
    int value = 0;

    if(index > size_of_array && index < 0)
    {
        throw IndexOutOfBoundsException();
    }
    else
    {

        value = Array[index];

    }

    return value;
}

char CharacterArray::pop_back()
{
    if(isEmpty())
    {
        throw EmptyException();
    }
    else
    {
        char temp = Array[size_of_array - 1];
        size_of_array--;
        return temp;
    }
}

char CharacterArray::removeAt(int index)
{
    char temp = index;

    if(index > size_of_array && index < 0)
    {
        throw IndexOutOfBoundsException();
    }
    else
    {
        for (int i = index; i < size_of_array; i++)

        Array[i] = Array[i + 1];
        Array[size_of_array] = 0;
        size_of_array--;
    }

    return temp;
}

void CharacterArray::clear()
{
    for(int i = 0; i < size_of_array; i++)
    {
        Array[i] = '\0';
        size_of_array = 0;
    }
}

int CharacterArray::length()
{
    return size_of_array;
}

bool CharacterArray::isEmpty()
{
    bool checkEmpty = false;
    if (size_of_array == 0)
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
    return NULL; //change or remove this line
}

ostream& operator <<(ostream& out, const CharacterArray& ca)
{
    if (ca.size_of_array == 0)
    {
        out << " ";
    }
    else
    {
        for (int i = 0; i < ca.size_of_array; i++)
        {
            out << ca.Array[i];
        }
    }
    return out;
}

