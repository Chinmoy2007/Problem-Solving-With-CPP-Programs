// C++ Program to Check Leap Year using simple if...else statement

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        cout << year << " isn't a leap year.";
    }

    // leap year if not by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year.";
    }

    // all other years are not leap years
    else
    {
        cout << year << " is not a leap year.";
    }

    return 0;
}

// // Here is the fulfilment of the program by using the nested if...else statement (just uncomment it and run)
// #include <iostream>
// using namespace std;

// int main()
// {

//     int year;

//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 cout << year << " is a leap year.";
//             }
//             else
//             {
//                 cout << year << " is not a leap year.";
//             }
//         }
//         else
//         {
//             cout << year << " is a leap year.";
//         }
//     }
//     else
//     {
//         cout << year << " is not a leap year.";
//     }

//     return 0;
// }