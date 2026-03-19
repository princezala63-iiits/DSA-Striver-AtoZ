#include <iostream>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cout << "Enter number of today in week :- ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Sunday";
            return 0;
        case 2:
            cout << "Monday";
            return 0;
        case 3:
            cout << "Tuesday";
            return 0;
        case 4:
            cout << "Wednesday";
            return 0;
        case 5:
            cout << "Thursday";
            return 0;
        case 6:
            cout << "Friday";
            return 0;
        case 7:
            cout << "Saturday";
            return 0;
        default:
            cout << "Enter valid day !!\n";
        }
    }
    return 0;
}