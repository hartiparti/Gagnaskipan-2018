#include <iostream>

#include "stack.h"
#include "queue.h"

using namespace std;

void pushOntoStack(Stack &s, string name, double value) {

    cout << "pushing measurement onto stack: name: " << name << ", value: " << value << endl;
    s.push(Measurement(name, value));
    cout << "current stack: " << s << endl;
    cout << "stack size: " << s.size() << endl;
    cout << endl;
}

void popOffStack(Stack &s) {

    cout << "popping measurement off stack" << endl;
    try {
        Measurement m = s.pop();
        cout << "value returned: " << m << endl;
    }
    catch(EmptyException) {
        cout << "caught EmptyException" << endl;
    }
    cout << "current stack: " << s << endl;
    cout << "stack size: " << s.size() << endl;
    cout << endl;
}

void clearStack(Stack &s) {

    cout << "popping every element off of stack" << endl;
    while(!s.isEmpty()) {
        s.pop();
    }
    cout << "current stack: " << s << endl;
    cout << "stack size: " << s.size() << endl;
    cout << endl;
}

void addToQueue(Queue &q, string name, double value) {

    cout << "adding measurement to queue: name: " << name << ", value: " << value << endl;
    q.add(Measurement(name, value));
    cout << "current queue: " << q << endl;
    cout << "queue size: " << q.size() << endl;
    cout << endl;
}

void removeFromQueue(Queue &q) {

    try {
        cout << "removing measurement from queue" << endl;
        Measurement m = q.remove();
        cout << "value returned: " << m << endl;
    }
    catch(EmptyException) {
        cout << "caught EmptyException" << endl;
    }
    cout << "current queue: " << q << endl;
    cout << "queue size: " << q.size() << endl;
    cout << endl;
}

void clearQueue(Queue &q) {

    cout << "removing every element from queue" << endl;
    while(!q.isEmpty()) {
        q.remove();
    }
    cout << "current queue: " << q << endl;
    cout << "queue size: " << q.size() << endl;
    cout << endl;
}

int main() {

    cout << endl << "STACK" << endl << endl;




    cout << endl << "QUEUE" << endl << endl;

    Queue q1;

    addToQueue(q1, "kari", 79.2);
    removeFromQueue(q1);
    clearQueue(q1);
    addToQueue(q1, "beggi", 91.3);
    addToQueue(q1, "kalli", 87.6);
    addToQueue(q1, "valdi", 117.4);
    addToQueue(q1, "anna", 54.2);


    removeFromQueue(q1);
    removeFromQueue(q1);
    removeFromQueue(q1);
    removeFromQueue(q1);
    removeFromQueue(q1);
    removeFromQueue(q1);


    cout << endl << "EMPTY CHECK" << endl << endl;






    return 0;
}
