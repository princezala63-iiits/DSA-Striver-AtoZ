#include <iostream>
using namespace std;
int main()
{
    int n;
    int flag = 0;
    while (flag == 0)
    {
        cout << "Enter your percentage :- ";
        cin >> n;
        if (n < 0 || n > 100)
            cout << "Enter valid percentage !!\n";
        else
        {
            flag = 1;
            if (n <= 100 && n > 90)
                cout << "A1 grade";
            else if (n > 80)
                cout << "A2 grade";
            else if (n > 70)
                cout << "B1 grade";
            else if (n > 60)
                cout << "B2 grade";
            else if (n > 50)
                cout << "C1 grade";
            else if (n > 40)
                cout << "D grade";
            else if (n >= 33.33)
                cout << "E grade";
            else
                cout << "F garde";
        }
    }
    return 0;
}