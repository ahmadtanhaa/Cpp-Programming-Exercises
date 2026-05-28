/*
A ticket costs $10.

The office is running a discount campaign: each group of 5 people gets
a discount determined by the age of the youngest person in the group.

The program takes the ages of all 5 people as input and outputs
the total price of the tickets.
*/

#include <iostream>

using namespace std;

int findSmallestElement(const int arr[], int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    const int groupSize = 5;
    const int ticketPrice = 10;

    int ages[groupSize];

    for (int i = 0; i < groupSize; i++) {
        cin >> ages[i];
    }

    int youngestAge = findSmallestElement(ages, groupSize);
    double totalPrice = groupSize * ticketPrice * (100.0 - youngestAge) / 100.0;

    cout << totalPrice << endl;

    return 0;
}
