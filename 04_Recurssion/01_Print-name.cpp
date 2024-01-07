#include <iostream>
using namespace std;

// Print name using recursion 5 times.
// TC -> O(n).
// SC -> O(n).
void name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Mayank" << endl;

    name(i + 1, n); // i incremenent until it is not greater than n;
}

int main()
{
    int n;
    cin >> n;
    name(1, 5); // i starts from 1 and increase upto 5
}