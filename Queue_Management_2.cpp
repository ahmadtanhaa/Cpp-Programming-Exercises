/*
Add a new functionality to the previous code: adding two queues together.

The result should be a new queue where the elements of the first queue
come first, followed by the elements of the second queue.

The + operator is overloaded so that two Queue objects can be combined.
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

    void add(int data) {
        if (size == CAPACITY) {
            cout << "Queue is full" << endl;
            return;
        }

        queue[size] = data;
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

    Queue operator+(const Queue& other) const {
        Queue result;

        for (int i = 0; i < size; i++) {
            result.add(queue[i]);
        }

        for (int i = 0; i < other.size; i++) {
            result.add(other.queue[i]);
        }

        return result;
    }
};

int main() {
    Queue q1;

    q1.add(42);
    q1.add(2);
    q1.add(8);
    q1.add(1);

    Queue q2;

    q2.add(3);
    q2.add(66);
    q2.add(128);
    q2.add(5);

    Queue q3 = q1 + q2;

    q3.print();

    return 0;
}
