#include <bits/stdc++.h>
#include "myStack/MYSTACK.h"
#include "myQueue/MYQUEUE.h"

using namespace std;

/*
10 5
10 20 30 40 50 60 70 80 90 100
output: 50 40 30 20 10 60 70 80 90 100

7 4
1 2 3 4 5 6 7
output: 4 3 2 1 5 6 7
*/

int main(void)
{
    Queue<int> q;
    Stack<int> st;

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        q.push(chk);
    }

    int rev_range = n / k;

    for (int i = 0; i < rev_range; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int chk = q.pop();
            st.push(chk);
        }
        while (!st.empty())
        cout << st.pop() << " ";
    }

    while (!q.empty())
        cout << q.pop() << " ";
}