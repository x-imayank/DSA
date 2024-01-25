#include <bits/stdc++.h>
using namespace std;

void explainVectors()
{
    vector<int> v; // It makes empty contaier {} v.

    v.push_back(5);    // It push 1 to empty container {1}
    v.emplace_back(2); // It is similar to push back it dinamically change the size. {1,2}

    cout << *v.begin() ;
    cout<< "\n";
    cout << *v.end()  ;

    Vector Pair
    vector<pair<int, int>> vec;

    // v.push_back({1, 2}); // It automatically makes a pair.
    v.emplace_back(1,2);
    

    vector<int> v(5,100); //(100,100,100,100,100)
    vector<int> v(5); // Empty container. (0,0,0,0,0)

    vector<int> v1(5,20); // If we wants to increase its size then we use push_back() it increases its size by 1.
    vector<int> v2(v1); //Copy of v1.



}

int main(){
    explainVectors();
}
