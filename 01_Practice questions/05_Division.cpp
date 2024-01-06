#include <bits/stdc++.h>
using namespace std;

void division(int n)
{
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << ls << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    division(n);
}


// void division(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if(n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     division(n);
// }