#include<bits/stdc++.h>
using namespace std;
class binary_searcch{
public:
    int size,array[100];
    binary_searcch (int n,int b[])
    {
        size=n;
        for(int i=0;i<n;i++)array[i]=b[i];
    }
    int search(int k)
    {
        int l=0,r=size-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if (array[mid]==k)return mid+1;
            else if (array[mid]<k)l=mid+1;
            else r=mid-1;
        }
        return -1;
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
    binary_searcch A(n,a);

    int achekina;
        cin>>achekina;
        
    int paisi=A.search(achekina);
    if (paisi==-1)cout<<"Not found";
    else cout<<"Found in"<<" "<<paisi<<"th index";

}
