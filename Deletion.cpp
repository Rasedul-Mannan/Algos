#include<bits/stdc++.h>
using namespace std;
class dellete{
public:
    int size,array[100];
    dellete (int n,int b[])
    {
        size=n;
        for(int i=0;i<n;i++)array[i]=b[i];
    }
    void del(int index)
    {
        for(int i=index;i<size-1;i++)
        {
            array[i]=array[i+1];

        }
        size--;
    }
    void show()
    {
        for(int i=0;i<size;i++)cout<<array[i]<<" ";
        cout<<endl;
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
    cout<<"Enter the index to delete ";
    cin>>in;
    in--;
    dellete A(n,a);
    A.del(in);
    A.show();
}
