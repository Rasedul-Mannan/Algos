#include<bits/stdc++.h>
using namespace std;
class bubble{
public:
    int size,array[100];
    bubble (int n,int b[])
    {
        size=n;
        for(int i=0;i<n;i++)array[i]=b[i];
    }
    void sorrt()
    {
       for(int i=0;i<size;i++)
       {
        for(int j=0;j<size-1;j++)
        {
            if (array[j]>array[j+1])swap(array[j],array[j+1]);
        }
       }
    }
    void show()
    {
        for(int i=0;i<size;i++)cout<<array[i]<<" ";
    }
};
int main()
{
    int n,a[1000],i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble A(n,a);
    A.sorrt();
    A.show();
}
