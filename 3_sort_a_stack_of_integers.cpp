#include <bits/stdc++.h>
#include "myStack/MYSTACK.h"

using namespace std;

Stack<int> sortStack(Stack<int> &st)
{
    Stack<int> tmp;

    while (!st.empty())
    {
        int st_top = st.Top();
        st.pop();

        while(!tmp.empty() && tmp.Top() < st_top)
        {
            st.push(tmp.Top());
            tmp.pop();
        }

        tmp.push(st_top);
    }

    return tmp;
}

/*
5
1 8 5 4 2
output: 1 2 4 5 8

8
5 1 4 7 9 2 5 4
output: 1 2 4 4 5 5 7 9
*/

int main(void)
{
    Stack<int> st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        st.push(chk);
    }

    st = sortStack(st);

    while(!st.empty())
    {
        cout << st.pop() << " ";
    }
}