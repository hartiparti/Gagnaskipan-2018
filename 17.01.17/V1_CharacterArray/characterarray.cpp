#include "characterarray.h"

CharacterArray::CharacterArray()
{
    ///TODO: Implement
    current_capacity = INITIAL_CAPACITY;
    Array = new char[current_capacity];
    Array[0] = '/0';
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

    ///TODO: Implement                                      /// Á að appenda char c við Array,
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
    char inserted_character = c;                                    /// Á að inserta char c við Array, þarf að kasta exceptions.
    ///TODO: Implement
    if(index == 0)
    {
         Array[index+1] = inserted_character;
         size_of_array++;

    }

    else
    {
        for(int i = size_of_array; i > index; i--)
        {
            Array[i] = Array[i-1];
        }
        Array[index] = inserted_character;

    }

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
    for (int i = index; i < size_of_array; i++)
    {
        Array[index] = Array[index + 1];
        Array[size_of_array - 1] = 0;
    }
    return index; //change or remove this line

}

void CharacterArray::clear()
{
    ///TODO: Implement
    for(int i = 0; i < size_of_array; i++)
    {
        Array[i] = '\0';
        size_of_array = 0;
    }

}

int CharacterArray::length()
{
    return size_of_array;                       /// Length = size_of_array
}

bool CharacterArray::isEmpty()
{
    bool checkEmpty = false;                    /// Checka hvort hann sé empty
    if (size_of_array == 0)                             /// Ef að fylkið er == 0, þá er checkEmpty True;
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
