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
        cout << "Queue is full\n";
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
        cout << "Queue is already empty\n";
            return -1;
    }
    int val = qu[front];
    count--;
    if (count == 0)
        rear = front = -1;
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
        cout << "queue is empty\n";
            return;
    }
    i = front;
    while (true)
    {
        cout << qu[i] << " ";
        if (i == rear)
            break;
        else
            i++;
    }

    cout << " Done\n";
}

int main()
{
    long long n, i, j, k, l;
    queue q;
    while (1)
    {
        cout << "Enter 1 to enqueue,2 to dequeue,3 to traverse : ";
        cin >> k;
        if (k == 1)
        {
            cout << "Enter a value : ";
            cin >> l;
            q.enqueue(l);
        }
        else if (k == 2)
            q.dequeue();
            
        else
            q.traverse();
    }
            aa++;
        }
    }
    printf("%.10lf\n",(double)ans/aa);
}
