#include <bits/stdc++.h>
using namespace std;

void iterators()
{
    vector<int> arr = {1, 2, 3, 4, 3};
    vector<int>::iterator ptr;
    for (ptr = arr.begin(); ptr < arr.end(); ptr++)
    {
        cout << *ptr << " ";
    }
}

int main()
{
    iterators();
}