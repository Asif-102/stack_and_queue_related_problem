#include <bits/stdc++.h>
using namespace std;

template <typename N>
class NodeStack
{
public:
    N val;
    NodeStack *next;
    NodeStack *prev;

    NodeStack(N val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

template <typename S>
class Stack
{
    NodeStack<S> *head;
    NodeStack<S> *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(S val)
    {
        NodeStack<S> *newNode = new NodeStack<S>(val);

        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    // POP
    S pop()
    {
        NodeStack<S> *delNode;
        delNode = top;
        S chk;

        if (head == NULL) // There is no element in the Stack
        {
            cout << "Stack Underflow" << endl;
            return chk;
        }

        if (top == head) // There is only 1 element
            head = top = NULL;
        else // There is More than 1 element
        {
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->val;
        delete delNode;
        count--;
        return chk;
    }
    // EMPTY
    bool empty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    // SIZE
    int size()
    {
        return count;
    }
    // TOP
    S Top()
    {
        S chk;
        if (top == NULL)
            cout << "Stack Underflow | There is no Element in Top " << endl;
        else
            chk = top->val;
        return chk;
    }
    // MID
    S mid()
    {
        S chk;
        if(head == NULL)
        {
            return chk;
        }
        int mid = count / 2 + 1;
        int c = 1;

        NodeStack<S> *tmp = head;

        while(c != mid)
            {
                tmp = tmp->next;
                c++;
            }
        
        return tmp->val;
    }
};
