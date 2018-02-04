#include <iostream>

#include "gskicontainer.h"

using namespace std;

void testExist(const GSKIContainer& container, int value)        /// Betra ad setja thetta sem fall.
{
    cout << "Checking if container, contains value: " << value << endl;

    if (container.contains(value))
    {
        cout << "Value is there!" <<  endl;
    }
    else
    {
        cout << "Value does not exist" << endl;
    }
}


void testAdd (GSKIContainer& container, int value)   /// Betra ad setja thetta sem fall.
{
    cout << "Adding value: " << value << endl;
    container.add(value);

}


int main()
{
    GSKIContainer container;

    testAdd(container, 4);
    testAdd(container, 3);
    testAdd(container, 6);
    testAdd(container, 1);
    testAdd(container, 78);
    testAdd(container, 3);
    testAdd(container, 4);
    testAdd(container, 67);


/*
    container.add(4);
    container.add(3);
    container.add(6);
    container.add(1);
    container.add(78);
    container.add(3);
    container.add(4);
    container.add(67);
*/
    cout << "Innihald: " << container << endl;
    testExist(container, 3);

    /*
    if (container.contains(3))
    {
        cout << "Fann!" <<  endl;
    }
    else
    {
        cout << "Fann ekki" << endl;
    }
    */
    container.add(12);
    container.add(12);
    container.add(12);
    container.add(12);
    container.add(12);
    container.add(12);

     if (container.contains(666))
    {
        cout << "Fann!" <<  endl;
    }
    else
    {
        cout << "Fann ekki" << endl;
    }



    return 0;
}
