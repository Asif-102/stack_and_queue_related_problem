#include <bits/stdc++.h>
#include "myStack/MYSTACK.h"

using namespace std;

Stack<string> reverseEachWord(string s)
{
    Stack<string> st;

    for(int i = s.length()-1; i >= 0; i--)
    {
        string word = "";

        while(i < s.length() && s[i] != '.')
        {
            word += s[i];
            i--;
        }
        
        st.push(word);
    }

    return st;
}

/*
i.like.this.program.very.much
output: i.ekil.siht.margorp.yrev.hcum

pqr.mno
output: rqp.onm
*/

int main(void)
{
    string s;
    cin >> s;

    Stack<string> st = reverseEachWord(s);

    while(!st.empty())
    {
        cout << st.pop();
        if(!st.empty())
            cout << ".";
    }
}