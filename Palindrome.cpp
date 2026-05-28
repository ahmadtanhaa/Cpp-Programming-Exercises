/*
A palindromic number is a number, such as 626, that remains the same
when its digits are reversed.

The isPalindrome function returns true if a given number is a palindrome,
and false otherwise.
*/

#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int reversed = 0;

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return reversed;
}

bool isPalindrome(int x) {
    return reverseNumber(x) == x;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome" << endl;
    } else {
        cout << n << " is NOT a palindrome" << endl;
    }

    return 0;
}
