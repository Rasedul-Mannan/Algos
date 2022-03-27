
#include<bits/stdc++.h>
using namespace std;
int a[10005];
void merge(int first_st,int first_end,int second_st,int second_end){
	int index=0,i,j;
	int first_array[20];
	int second_array[20];
	for(i=first_st;i<=first_end;i++){
		first_array[index]=a[i];
		index++;
	}
	int first_array_size=index;
	index=0;
	for(i=second_st;i<=second_end;i++){
		second_array[index]=a[i];
		index++;
	}

	int second_array_size=index;
	index=first_st;
	i=0;
	j=0;
	while(i<first_array_size && j<second_array_size){
		if(first_array[i]<second_array[j]){
			a[index]=first_array[i];
			i++;
			index++;
		}
		else {
			a[index]=second_array[j];
			j++;
			index++;

		}
	}
	while(i<first_array_size){
		a[index]=first_array[i];
		i++;
		index++;
	}
	while(j<second_array_size){
		a[index]=second_array[j];
		j++;
		index++;
	}
}
void merge_sort(int left,int right){
	if(left==right)return;
	int mid=(left+right)/2;
	merge_sort(left,mid);
	merge_sort(mid+1,right);
	merge(left,mid,mid+1,right);
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(0,n-1);
	for(i=0;i<n;i++)cout<<a[i]<<" ";
}
