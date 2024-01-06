#include <bits/stdc++.h>
using namespace std;

int reverseInt(int n)
{
    int rev = 0;

    while (n != 0)
    {
        int last = n % 10;
        rev = (rev * 10) + last;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter your numbers: ";
    cin >> n;

    cout << reverseInt(n);
}