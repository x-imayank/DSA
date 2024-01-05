#include <bits/stdc++.h>
using namespace std;

// It stores data by its priority. it stores data in decending order.
void explainPQ()
{

    // Max heap
    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(8);     // {8,5}
    pq.push(3);     // {8,5,3}
    pq.emplace(14); // {14,8,5,3}

    cout << pq.top(); // Print 14 according to priority.

    pq.pop();
    cout << endl
         << pq.top(); // Print 8 according to priority.
    // Size, swap, empty function same as other.

    // Minimum heap.
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2,5}
    pq1.push(7); // {2,5,7}
    pq1.emplace(4); // {2,4,5,7}

    cout << endl << pq1.top(); // Print 2.
}

int main()
{
    explainPQ();
}