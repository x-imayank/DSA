#include <bits/stdc++.h>
using namespace std;

// Queue is same as stack but it is FIFO :- First come first output.
void explainQueue()
{
    queue<int> qu;

    qu.push(1);    // {1}
    qu.push(2);    // {1,2}
    qu.emplace(3); // {1,2,3}

    qu.back() += 5;

    cout << qu.back(); // Print 8

    // qu = {1,2,3}
    qu.front();
    cout << endl
         << qu.front() << endl; // print 1

    qu.pop(); // {2,3}
    cout << qu.front(); // Print 2

    // size,swap,empty same as stack.
}

int main()
{
    explainQueue();
}