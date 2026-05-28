/*
Create a class to hold queue data, where the data are customer IDs.

The Queue class has:
- a size attribute,
- an array to hold the queue data,
- a remove() method to remove the front item,
- a print() method to output the queue,
- an add() method to add an item to the end of the queue.
*/

#include <iostream>

using namespace std;

class Queue {
private:
    static const int CAPACITY = 100;
    int size;
    int queue[CAPACITY];

public:
    Queue() {
        size = 0;
    }

    void add(int x) {
        if (size == CAPACITY) {
            cout << "Queue is full" << endl;
            return;
        }

        queue[size] = x;
        size++;
    }

    void remove() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = 0; i < size - 1; i++) {
            queue[i] = queue[i + 1];
        }

        size--;
    }

    void print() const {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << queue[i];

            if (i < size - 1) {
                cout << " <- ";
            }
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    q.add(42);
    q.add(2);
    q.add(8);
    q.add(1);

    q.print();

    q.remove();
    q.add(128);

    q.print();

    q.remove();
    q.remove();

    q.print();

    return 0;
}
