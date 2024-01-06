#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // 1 3

    pair<int, pair<int, int>> p2 = {2, {4, 3}};
    cout << p2.first << " " << p2.second.second; // 2 3

    pair<int, int> arr[] = {{1, 4}, {3, 5}, {4, 6}};
    cout<<arr[1].second;// 5
}

int main()
{
    explainPairs();
}