#include <bits/stdc++.h>
using namespace std;

void main()
{
    // List 
    list<int> ls; //create a blank array.

    ls.push_back(2); // {2}
    ls.emplace_back(6); // {2,3}

    ls.push_front(3); // {3,2,6}
    ls.emplace_front(); //{2,6}

    // rest all the functions are same as vector.
}