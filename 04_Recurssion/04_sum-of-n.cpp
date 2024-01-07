#include <bits/stdc++.h>
using namespace std;

// Print sum of n number using recursion.
// TC -> O(n)
// SC -> O(n)
void sum(int i, int sm)
{
    if (i < 1)
    {
        cout << sm;
        return;
    }

    sum(i - 1, sm + i);
}

int main()
{
    int n;
    cin >> n;
    sum(n, 0);
}