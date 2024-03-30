#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, i = 1, sum = 0;
    cout << "Enter the value of a: ";
    cin >> a;
    while (i <= a)
    {

        sum = sum + i;
        i = i + 1;
    }

    cout << sum;
}