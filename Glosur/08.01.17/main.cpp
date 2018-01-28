#include <iostream>
#include "GSKIContainer.h"

using namespace std;

int main()
{
    GSKIContainer container;

    container.add(4);
    container.add(5);
    container.add(66);
    container.add(3);
    container.add(1);
    if (container.contains(1))
    {
        cout << "Found!";
    }
    else
    {
        cout << "Cant find!";
    }
    return 0;
}
