#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    int num;

    void num();
    void getData(int num){
        this->num=num;
    }
};

void Hero::num()
{
    cout << num;
}


int main()
{
    Hero h;
    int nu;
    cin >> nu;
    h.getData(nu);
}