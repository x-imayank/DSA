#include <bits/stdc++.h>
using namespace std;

void arms(int n)
{
    int dup = n;
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if(sum == dup) cout<< "Armstrong number";
    else cout << "Not an armstrong number";
}

int main()
{
    int n;
    cin >> n;
    arms(n);
}