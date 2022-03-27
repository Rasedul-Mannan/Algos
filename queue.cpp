#include <iostream>
using namespace std;

int queuesize = 100, qu[100];
class queue
{
  public:
    int front, count = 0, rear;
    void enqueue(int ind);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void traverse();
};
void queue::enqueue(int ind)
{
    if (isFull())
    {
        cout << "Queue is full\";
        return;
    }
    if (count == 0)
        rear = front = 0;
    else if (count == queuesize - 1)
        rear = 0;
    else
        rear++;
    qu[rear] = ind;
    count++;
    return;
}
int queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is already empty\";
        return -1;
    }
    int val = qu[front];
    count--;
    if (count == 0)
        rear = front = -1;
    else if (front == queuesize - 1)
        front = 0;
    else
        front++;

    return val;
}
bool queue::isFull()
{
    if (count == queuesize)
        return true;
    else
        return false;
}
bool queue::isEmpty()
{
    if (count == 0)
        return true;
    else
        return false;
}
void queue::traverse()
{
    int i;
    if (isEmpty())
    {
        cout << "queue is empty\";
        return;
    }
    i = front;
    while (true)
    {
        cout << qu[i] << " ";
        if (i == rear)
            break;
        else if (i == queuesize - 1)
            i = 0;
        else
            i++;
    }

    cout << " Done\";
}

int main()
{
    long long n, i, j, k, l;
    queue p;
    p.enqueue(67);
    p.traverse();
    p.enqueue(222);
    p.traverse();
    p.dequeue();
    p.traverse();
}
