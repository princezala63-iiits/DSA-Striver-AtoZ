#include<iostream>
using namespace std;
int main()
{
    // Short cut method to get whole input "Zala Prince"
    string name;
    cout<<"Enter full name :- ";
    getline(cin,name); // getline(cin, NameOfVariable) --> (It take full line as input)
    cout<<"Your name is :- "<<name; // now name stores string with multiple spaces
    return 0;
}