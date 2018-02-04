#include "GSKIContainer.h"

GSKIContainer::GSKIContainer()
{

    item_count = 0;   /// Fyrsta stak er 0.
    //Baetti vid ut af tvhi ad vid erum med dynnamic fylki, tharf ad uthluta minni.
    current_capacity = INITIAL_CAPACITY;
    Array = new int[current_capacity];  // Uthlutad minni, fra const breytu i H, af staerdinni current_capacity, tvi thad staekkar endalaust
    /// Var með initial capacity
}

GSKIContainer::~GSKIContainer()
{
    delete[] Array;

}

void GSKIContainer::add(int n)    //Koma i veg fyrir crash, med grunntjekkinu.
{
    if(item_count >= current_capacity)          /// Var með initial capacity
    {
            cout << "I need to resize!";
        resizeArray();
                //return;             /// Ef itemcount er staerra en 8, tha haetta vid.
    }

    /// Til thess ad rada i gagnagrindina, rett fra 0 upp i haesta.

    int index = item_count - 1;
    while (index >= 0)
    {
        if(Array[index] > n)
        {
            Array[index + 1] = Array[index];
            index--;
        }
        else
        {

            break;
        }

    }


    Array[index+1] = n;
    item_count++;

    //Array[item_count] = n;
    //item_count++;
}

void GSKIContainer::resizeArray()
{
    current_capacity *= 2;              // Staekka Array, med nyjum minni,
    int *NewArray = new int[current_capacity];

    /// Copya gamla Arrayið
    for (int i = 0; i < item_count; i++)
    {
        NewArray[i] = Array[i];
    }

    delete[] Array;      /// Eyda gamla minninu.
    Array = NewArray;

}

bool GSKIContainer::contains(int n) const
{
    bool foundIt = false;
    for(int i = 0; i < item_count; i++)
    {
        if(Array[i] == n)
        {
            foundIt = true;
        }
    }
    if (foundIt)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator << (ostream& out, const GSKIContainer& cont)
{
    for(int i = 0; i < cont.item_count; i++)        /// Er ekki inn i scope, tharf tvi ad visa i cont.item_count.
    {
        out << cont.Array[i] << " ";

    }
    return out;
}
