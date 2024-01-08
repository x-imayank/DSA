#include <bits/stdc++.h>
using namespace std;

void binary(int n)
{
    if (n == 0)
    {
        cout << n / 2;
        return;
    }

    binary(n + 1);
}

int main()
{
    int n;
    cin >> n;
    binary(n);
}