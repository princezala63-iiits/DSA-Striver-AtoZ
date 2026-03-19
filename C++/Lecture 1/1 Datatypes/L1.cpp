#include <bits/stdc++.h> // By this, we don't need to include every library files separately
// Bcz it includes most of the libraries inside it. But it's not prefered to use it
// bcz it take too much compilation time. So we should include only that header files which will be needed.
using namespace std;
int main()
{
    int a;       // 4 bytes.
    long b;      // 4 bytes. (It's same as int)
    long long c; // 8 bytes. (If we need to store number out of range of int)

    float d;       // 4 bytes.
    double e;      // 8 bytes.
    long double f; // 10 bytes.

    char g; // 1 byte.
    string h; // 1 byte for each character

    return 0;
}