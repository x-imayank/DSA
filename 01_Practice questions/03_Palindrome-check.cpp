#include <bits/stdc++.h>
using namespace std;

// A palindrome is a reverse number is same as input number eg:- 121 = 121, 123 = 321 is not a palindrome.
int main()
{
    int n;
    cin >> n;
    int dub = n;

    int rev = 0;
    while (n != 0)
    {

        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }

    if (rev == dub)
    {
        cout << rev;
    }
    else
    {
        cout << " ";
    }
}
