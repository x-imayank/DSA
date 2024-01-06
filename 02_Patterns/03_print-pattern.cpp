#include <bits/stdc++.h>
using namespace std;

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    print3(5); 
}