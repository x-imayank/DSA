#include <bits/stdc++.h>
using namespace std;

// Sets contains shorted and unique elements into it.
void explainSets()
{
    set<int> set;
    set.insert(1);  //{1}
    set.emplace(2); //{1,2}
    set.insert(2);  // it doesnt stores one more time 2. {1,2}
    set.insert(4);  // {1,2,4}
    set.insert(7);  // {1,2,4,7}

    // Functionsality of insert in vector can be used also, that only increases efficiency,

    // begin(), end(), rbegin(), rend(), size(), empty() and swap()a are same as those of above.

    // {1,2,3,4,5,6}
    auto it = set.find(3); // It returns the iterator which points to the memory address of three.

    auto it = set.find(7); // The 7 is not in the set so it returns the memory address after the 6 or called set.end()

    // {1,4,5}

    set.erase(5); // erase 5 and maintains the shorted array.

    int cnt = set.count(1);  // If 1 is in the set the it returns 1 or if it will not be in the set it returns 0.
    int cnt1 = set.count(3); // It takes same time and returns 0, 3 is not in array container.
    int cnt1 = set.count(7); // It takes same time and returns 1.
    cout << cnt1;
}

int main()
{
    explainSets();
}


// In set there is no repeating elements present in an array. so if we count any number in the set it returns 1 or 0. it is the number of occurance of an element in an array.