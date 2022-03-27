#include <iostream>
using namespace std;

int stacksize = 100, st[100];
class stack
{
  public:
    int top = -1;
    void push(int ind);
    int pop();
    bool isFull();
    bool isEmpty();
    void traverse();
};
void stack::push(int ind)
{
    if (isFull())
    {
        cout << "Stack Overflow\
        return;
    }
    top++;
    st[top] = ind;
    return;
}
int stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is already empty\
        return -1;
    }
    int val = st[top];
    top--;
    return val;
}
bool stack::isFull()
{
    if (top == stacksize - 1)
        return true;
    else
        return false;
}
bool stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
void stack::traverse()
{
    int i;
    if (isEmpty())
        return;
    for (i = 0; i <= top; i++)
        cout << st[i] << " ";
    cout << " Done\
}


int main()
{
    long long n, i, j, k, l;
    stack q;
    while (1)
    {
        cout << "Enter 1 to push,2 to pop,3 to traverse : ";
        cin >> k;
        if (k == 1)
        {
            cout << "Enter a value : ";
            cin >> l;
            q.push(l);
        }
        else if (k == 2)
            q.pop();
            
        else
            q.traverse();
    }
}
