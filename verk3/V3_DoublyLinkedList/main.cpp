#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

int main() {

    cout << endl << "STRING_LIST" << endl << endl;

    DoublyLinkedList<string> stringList;

    stringList.append("fic");
    stringList.append("sdf");
    stringList.append("wet");
    stringList.append("fgh");

    stringList.move_to_pos(2);

    cout << stringList << endl;
    stringList.clear();
    stringList.insert("pod");
    cout << stringList << endl;

    stringList.prev();
    stringList.append("bxph");
    cout << stringList << endl;
    stringList.next();

    cout << stringList << endl;

  try{
        stringList.remove();
        cout << stringList << endl;
    }catch(InvalidPositionException) {
        cout << "Caught InvalidPositionException" << endl;
    }

    try{
        stringList.remove();
        cout << stringList << endl;
    }catch(InvalidPositionException) {
        cout << "Caught InvalidPositionException" << endl;
    }
    cout << stringList << endl;
    stringList.prev();

    cout << stringList << endl;
    stringList.insert("ah");

    cout << stringList << endl;

    stringList.next();
    cout << stringList << endl;
    stringList.next();

    cout << stringList << endl;
    stringList.prev();

    cout << stringList << endl;
    stringList.append("z");
    cout << stringList << endl;

    cout << endl << "INT_LIST" << endl << endl;

    DoublyLinkedList<int> intList;

    intList.append(4);
    intList.move_to_start();
    intList.insert(7);
    cout << intList << endl;
    cout << "////////////////////" << endl;
    DoublyLinkedList<char> charList;
    cout << "Current position is: " << charList.curr_pos() << endl;
    cout << "Current size is: " << charList.length() << endl;
    cout << endl;

    charList.append('a');
    cout << charList;

    cout << endl;
    cout << "Current position is: " << charList.curr_pos() << endl;
    cout << "Current size is: " << charList.length() << endl;

    charList.append('b');
    cout << charList;

    cout << endl;
    cout << "Current position is: " << charList.curr_pos() << endl;
    cout << "Current size is: " << charList.length() << endl;

    charList.append('c');
    charList.insert('d');
    charList.insert('e');
    charList.insert('f');

    cout << endl;
    cout << charList;
    cout << endl;

    cout << "Current position is: " << charList.curr_pos() << endl;
    cout << "Current size is: " << charList.length() << endl;
    cout << endl;
    charList.move_to_pos(5);
    cout << "Current position is: " << charList.curr_pos() << endl;
    cout << "Current size is: " << charList.length() << endl;
    charList.insert('1');
    cout << charList;


}
