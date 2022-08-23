#include <bits/stdc++.h>
#include "myStack/MYSTACK.h"

using namespace std;

/*
7
1 6 43 1 2 0 5
*/

int main(void)
{
    Stack<int> st;
    Stack<int> cur_min;

    int min = INT32_MAX;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;

        st.push(chk);

        if(chk <= min)
        {
            min = chk;
            cur_min.push(chk);
        }
    }

    while(!cur_min.empty())
    {
        if(st.Top() > cur_min.Top())
        {
            st.pop();
            cout << cur_min.Top() << " ";
        }
        else
        {
            st.pop();
            cout << cur_min.pop() << " ";
        }
    }
}