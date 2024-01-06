#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    list<int> mylist;
    for (int i = 0; i <= 5; i++)
    {
        cin >> n;
        mylist.push_back(n);
    }

    // using begin() to print list from starting
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
    {
        cout << ' ' << *it;
    }
    return 0;
}