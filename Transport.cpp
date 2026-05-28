/*
A bus can transport 50 passengers at once.

Given the number of passengers waiting in the bus station as input,
calculate and output how many empty seats the last bus will have.
*/

#include <iostream>

using namespace std;

int main() {
    const int busCapacity = 50;

    int passengers;
    cin >> passengers;

    int passengersInLastBus = passengers % busCapacity;

    if (passengersInLastBus == 0) {
        cout << 0 << endl;
    } else {
        cout << busCapacity - passengersInLastBus << endl;
    }

    return 0;
}
