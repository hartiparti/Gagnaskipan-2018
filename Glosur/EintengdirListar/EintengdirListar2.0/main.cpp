#include "List.h"

#include <iostream>
using namespace std;


int main()
{

    List myList;
    myList.headInsert(3);
    myList.tailInsert(4);
    myList.tailInsert(99);

    cout << myList << endl;

    return 0;
}
