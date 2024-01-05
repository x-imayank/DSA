#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int>dq; // Make an empty array
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}

    dq.push_front(3); // {3,1,2}
    dq.emplace_front(5); //{5,3,1,2}

// {5,3,1,2}
    dq.pop_back(); // {5,3,1}
    dq.pop_front(); // {3,1,2}

    // rest all the functions are same as vector.
    // begin, end, rend, rbegin, clear, insert, size, swap.

}