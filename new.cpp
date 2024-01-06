#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;

    // int w = n / 10;
    while (n > 0)
    {
        int ld = n % 10; // 789 % 10 = 9
        rev = (rev * 10) + ld;
        n = n / 10; // eg:- 789 / 10 = 78.9
    }
    cout << rev;
}