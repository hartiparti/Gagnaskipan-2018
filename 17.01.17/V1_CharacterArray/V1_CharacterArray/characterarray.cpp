#include "characterarray.h"

CharacterArray::CharacterArray()
{
    ///TODO: Implement
    capacity = INITIAL_CAPACITY;

    int * Array = new int[capacity];
    delete[]Array;

    sizeOfArray = 0;

}

CharacterArray::CharacterArray(char* str, int length)
{
    ///TODO: Implement


        int sizeOfArray;
        int capacity;

        str;
        length;
}

CharacterArray::~CharacterArray()
{

}

void CharacterArray::append(char c) {

    ///TODO: Implement
}

void CharacterArray::insert(char c, int index) {

    ///TODO: Implement
}

void CharacterArray::setAt(char c, int index) {

    ///TODO: Implement
}

char CharacterArray::getAt(int index) {

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::pop_back() {

    //Example of throwing an exception
    if(isEmpty()) {
        throw EmptyException();
    }

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::removeAt(int index) {

    ///TODO: Implement
    return '\0'; //change or remove this line
}

void CharacterArray::clear() {

    ///TODO: Implement
}

int CharacterArray::length() {

    ///TODO: Implement
    return -1; //change or remove this line
}

bool CharacterArray::isEmpty() {

    ///TODO: Implement
    return true; //change or remove this line
}

char* CharacterArray::substring(int startIndex, int length) {

    ///TODO: Implement
    return NULL; //change or remove this line
}

ostream& operator <<(ostream& out, const CharacterArray& ca) {

    ///TODO: Implement
    return out; //change or remove this line
}
