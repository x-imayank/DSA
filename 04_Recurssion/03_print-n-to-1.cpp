#include <bits/stdc++.h>
using namespace std;

void opposite(int i, int n)
{
    if (1 > i)
    {
        return;
    }
    cout << i << " ";
    opposite(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    opposite(n, n);
}