#include <bits/stdc++.h>
#include "myQueue/MYQUEUE.h"

using namespace std;

int findFrequency(Queue<int> &q, int chk)
{
    int count = 0;
    for(int i = 0; i < q.size(); i++)
    {
        if(q.Front() == chk)
            count++;
        q.push(q.Front());
        q.pop();
    }
    return count;
}

int main(void)
{
    Queue<int> q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        q.push(chk);
    }
   
    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int chk;
        cin >> chk;

        int count = findFrequency(q, chk);

        if(count)
            cout << count << endl;
        else
            cout << "-1" << endl;
    }
}