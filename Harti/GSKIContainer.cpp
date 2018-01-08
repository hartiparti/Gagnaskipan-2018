#include "GSKIContainer.h"

GSKIContainer::GSKIContainer()
{
    item_count = 0;
}

GSKIContainer::~GSKIContainer()
{
    //dtor
}


void GSKIContainer::add(int n)
{
    Array[item_count] = n; // stakið í fylkinu, item_count
    item_count++;         // Breyta gildiunum, fram og til baka
}

bool GSKIContainer::contains(int n)
{
    for(int i = 0; i < item_count; i++)
    {
        if(Array[i] == n)
        {
            return true;
        }
    }
    return false;
}

