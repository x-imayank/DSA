#include <bits/stdc++.h>
using namespace std;

// Print linearly number (1 - n).
// TC -> O(n)
// SC -> O(n)
void print(int i, int n)
{
    if (i > n)
        return;
    cout << i <<" ";
    print(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
}