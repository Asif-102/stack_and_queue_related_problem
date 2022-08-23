#include <bits/stdc++.h>
using namespace std;

template <typename N>
class NodeQueue
{
public:
    N val;
    NodeQueue *next;

    NodeQueue(N val)
    {
        this->val = val;
        next = NULL;
    }
};

template <typename Q>
class Queue
{
    NodeQueue<Q> *front;
    NodeQueue<Q> *rear;
    int count = 0;
    
public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue --> push (val)

    void push(Q val)
    {
        NodeQueue<Q> *nw = new NodeQueue<Q>(val);

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
        NodeQueue<Q> *delNode = front;
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
