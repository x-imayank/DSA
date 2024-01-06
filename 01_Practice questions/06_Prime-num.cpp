#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }

        if (cnt == 2)
        {
            cout << "prime number.";
            break;
        }
        else
        {
            cout << "Not a prime number.";
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    prime(n);
}