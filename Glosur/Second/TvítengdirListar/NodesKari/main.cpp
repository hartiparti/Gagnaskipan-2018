#include <iostream>

#include "list.h"
#include "valueclass.h"

using namespace std;

int main()
{
    List testList;

    testList.insert(ValueClass(0, 0.0));
    testList.insert(ValueClass(1, 1.1));
    testList.insert(ValueClass(2, 2.2));
    testList.insert(ValueClass(3, 3.3));
    testList.insert(ValueClass(4, 4.4));

    cout << "Current list is: " <<  testList << endl;

    try{
        testList.moveToHead(5);         // Reyndu að fara 3 stök í listanum;
        testList.remove();
        testList.moveToTail(2);
        testList.moveToTail(2);


        testList.insert(ValueClass(9, 9.9));


    }
    catch(OutOufBoundsE e)
    {
        cout << "Out of bounds!" << endl;
    }
    cout << "Current list is: " <<  testList << endl;

    return 0;
}
