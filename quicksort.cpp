#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int start,int end)
{
	int pivot=a[end];
	
	int p_index=start;
	int t;
	for(int i=start; i < end;i++){
		if(a[i]<=pivot){
			t=a[i];
			a[i]=a[p_index];
			a[p_index]=t;
			p_index++;
		}
	}
	t=a[end];
	a[end]=a[p_index];
	a[p_index]=t;
	
	return p_index;
 }
void quicksort(int a[],int start,int end)
{
	if(start<end){
		 int p_index=partition(a,start,end);
			 quicksort(a,start,p_index-1);
			 quicksort(a,p_index+1,end);
	}
}
int main(){
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:\n\n";
	for(int i=0;i<n;i++) cin>>a[i];
	
	quicksort(a,0,n-1);

	cout<<"after quick sort :\n\n";
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}