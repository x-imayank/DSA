#include <bits/stdc++.h>
using namespace std;

int count_num(int n)
{
    int count = 0;
    while (n != 0)
    {
        int last = n % 10;
        count++;
        n = n / 10;
    }
    cout << count;
}

int main()
{
    int x = 1276;
    count_num(x);

    return 0;
}