#include <bits/stdc++.h>
using namespace std;

// We use iterator for accesing the elements in the vector.
void iterators()
{
    vector<int> v;                        // Initialise the v.
    vector<int>::iterator it = v.begin(); // v.begin() :- It points to the memory address not on the element.
    it++;
    cout << *it << " ";




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