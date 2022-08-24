#include <bits/stdc++.h>
#include "myQueue/MYQUEUE.h"
#include "myStack/MYSTACK.h"

using namespace std;

/*
5
5 4 1 3 7
output: 7 3 1 4 5

7
1 4 5 1 2 7 4
output: 4 7 2 1 5 4 1
*/

int main(void)
{
    Queue<int> q;
    Stack<int> st;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        q.push(chk);
    }

    while(!q.empty())
    {
        int chk = q.pop();
        st.push(chk);
    }

    while(!st.empty())
    {
        cout << st.pop() << " ";
    }
}