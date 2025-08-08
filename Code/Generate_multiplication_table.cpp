// C++ Programs to Generate Multiplication Table

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // run a loop from 1 to 10
    // print the multiplication table
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}