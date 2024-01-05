#include <bits/stdc++.h>
using namespace std;

// Stack is a LIFO :- Last come first output.
void explainStack()
{
    stack<int> st;

    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.emplace(5); //{5,3,2,1}
    for (int i = st.top(); i < st.size() ; i++)
    {
        cout << i;
    }

    cout << st.top(); // It print 5 because it is the last input and it is on top of stack.
    st.pop();         // Remove 5 from top.
    cout << endl;

    cout << st.top(); // It prints 3 because 5 is poped out and now 3 is the top element of a stack.
    cout << endl;

    cout << st.size(); // It prints 3 because only three elements are in stack.
    cout << endl;

    cout << st.empty(); // False(0).
}

int main()
{
    explainStack();
}
