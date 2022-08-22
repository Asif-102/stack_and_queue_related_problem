#include <bits/stdc++.h>
#include "myStack/MYSTACK.h"

using namespace std;

bool areBracketBalanced(string expr)
{
    Stack<char> tmp;

    for (int i = 0; i < expr.length(); i++)
    {
        if (tmp.empty())
        {
            tmp.push(expr[i]);
        }
        else if ((tmp.Top() == '(' && expr[i] == ')') || (tmp.Top() == '{' && expr[i] == '}') || (tmp.Top() == '[' && expr[i] == ']'))
        {
            tmp.pop();
        }
        else
        {
            tmp.push(expr[i]);
        }
    }
    if(tmp.empty())
        return true;
    return false;
}

/*
sample input:

({(())[{}])

({(())[{}]})

*/

int main(void)
{
    string expr;
    cin >> expr;

    if(areBracketBalanced(expr))
        cout << "YES\n";
    else
        cout << "NO\n";
}