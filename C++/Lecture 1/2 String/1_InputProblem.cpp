#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter full name :- ";
    cin>>s1; // If we give input "Zala Prince" then s1 store only Zala (bcz of space is like end of string)
    cout<<"Your name is :- "<<s1<<endl; // So output is only Zala.

    string s2,s3;
    cout<<"Enter full name :- ";
    cin>>s2>>s3; // Now we give input "Zala Prince" then s2=Prince and s3=Zala (Pella s3 ane pachi s2 ma nakhyu)
    cout<<"Your name is :- "<<s2<<" "<<s3<<endl; // So output is "Prince Zala". (Zala Prince nu undhu)

    return 0;
}