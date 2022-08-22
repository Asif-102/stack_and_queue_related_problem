#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N val;
    Node *next;
    int count = 0;

    Node(N val)
    {
        this->val = val;
        next = NULL;
    }
};

template <typename Q>
class Queue
{
    Node<Q> *front;
    Node<Q> *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue --> push (val)

    void push(Q val)
    {
        Node<Q> *nw = new Node<Q>(val);

        if (front == NULL)
        {
            front = nw;
            rear = nw;
            count++;
            return;
        }

        rear->next = nw;
        rear = rear->next;
        count++;
    }

    // deque --> pop ()

    Q pop()
    {
        Q chk;
        if (rear == NULL)
        {
            cout << "Queue Underflow | There is no element in the Queue" << endl;
            return chk;
        }
        Node<Q> *delNode = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;

        chk = delNode->val;
        delete delNode;
        count--;
        return chk;
    }

    // peek --> front() back()

    Q Front()
    {
        Q chk = front->val;
        return chk;
    }

    Q Back()
    {
        Q chk = rear->val;
        return chk;
    }

    // empty --> empty()

    bool empty()
    {
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }

    // size --> size()
    int size()
    {
        return count;
    }
};
