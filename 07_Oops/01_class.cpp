#include <bits/stdc++.h>
#include "01_include.cpp"
using namespace std;

class value
{
    // public:
    //     int num;
};

int main()
{
    value v;
    cout << sizeof(v); // It takes 4 byte of memory.
    cout << sizeof(v); // In blank class it takes 1 byte of memory.

    include i;
    cout << sizeof(i);
}