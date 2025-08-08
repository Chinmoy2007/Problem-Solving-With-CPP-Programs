// C++ Program to Reverse a Number
// This is one of the Royal Problem in my opinion

#include <iostream>
using namespace std;

int main()
{
    int n, reversed_number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;

        // Confusion will start from here
        n /= 10;
    }

    cout << "Reversed Number = " << reversed_number;

    return 0;
}