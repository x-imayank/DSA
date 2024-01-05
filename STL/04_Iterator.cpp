#include <bits/stdc++.h>
using namespace std;

// We use iterator for accesing the elements in the vector.
void iterators()
{
    vector<int> v;                        // Initialise the v.
    vector<int>::iterator it = v.begin(); // v.begin() :- It points to the memory address not on the element.
    it++;
    cout << *it << " ";

    vector<int>::iterator it = v.end(); // {10,20,30,40} so the end will not point to the 40 it will point to the last memory location after 40.

    vector<int>::iterator it = v.rend(); // rend(reverse end) :- if we are reversing an array {10,20,30,40} then the rend point to the memory location before 10(first place).
    vector<int>::iterator it = v.rbegin(); //rbegin(reverse begin) :- if we are reversing an array {10,20,30,40} then the rbegin point to the 40.


    // If we wants to erase something from an array. {10,20,30,40,50}
    v.erase(v.begin() + 2); //{10,20,40,50}

    // Erase multiple elements from an array.
    v.erase(v.begin() + 1, v.begin() + 3); // {10,30,50}


    // Insert function
    vector<int>v(2,100); //{100,100}
    vector(v.begin(), 200); // {200,100,100}
    vector(v.begin() + 1, 2,5); // {100,5,5,100}  2,5 meane 5 5
    



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