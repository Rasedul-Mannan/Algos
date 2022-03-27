#include<iostream>
using namespace std;
class linear_search
{
public:
	int array[10],size;

	linear_search(int k,int b[])
	{
		size=k;
		for(int i=0;i<k;i++)array[i]=b[i];
	}
	int check_linear(int p){
		for(int i=0;i<size;i++)
		{
			if (array[i]==p)
			{
				return i+1;

			}
		}
		return -1;

	}

};

int main()
{
	int n,arr[10],i;
	cin>>n;
	for(i=0;i<n;i++)cin>>arr[i];

	linear_search A(n,arr);
		int achekina;
		cin>>achekina;
		
	int paisi=A.check_linear(achekina);
	if (paisi==-1)cout<<"Not found";
	else cout<<"Found in"<<" "<<paisi<<"th index";
}
