#include<bits/stdc++.h>
using namespace std;
class insert{
public:
    int size,array[100];
    insert (int n,int b[])
    {
        size=n;
        for(int i=0;i<n;i++)array[i]=b[i];
    }
    void inserrt(int index,int value)
    {
    	
        for(int i=size-1;i>=index;i--)
        {
            array[i+1]=array[i];

        }
        array[index]=value;
        size++;
    }
    void show()
    {
        for(int i=0;i<size;i++)cout<<array[i]<<" ";
    }
};
int main()
{
    int n,a[1000],in,val,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>in>>val;
    in--;
    insert A(n,a);
    A.inserrt(in,val);
    A.show();
}
