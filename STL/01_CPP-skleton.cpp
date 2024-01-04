#include <bits/stdc++.h>
using namespace std;

// Function
void print() // It is an empty function.
{
    cout << "Mayank";
}

int sum(int a, int b) // It returns values.
{
    return a + b;
}

// Main
int main()
{
    print();
    cout << endl;

    int a, b;
    cout<<"Enter number: ";
    cin >> a >> b;
    cout << sum(a, b);
}