#include <bits/stdc++.h>
using namespace std;

int main()
{
   int i, n;
   cout << "Enter the value of n: ";
   cin >> n;

   i = 1;
   while (i <= n)
   {
      int j = 1;
      while (j <= n)
      {

         cout << j;
         j = j + 1;
      }
      cout << endl;
      i = i + 1;
   }
}