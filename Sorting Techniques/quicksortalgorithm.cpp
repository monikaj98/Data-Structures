//Quick Sort
//In place algorithm ,Complexity in worst cast is O(n^2) and in avg case is O(nlogn)
#include<iostream>
using namespace std;
int Partition(int *a,int start,int end)
{
	int pivot=a[end];
	int pindex=start;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			int temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
	}
	int temp1=a[pindex];
	a[pindex]=a[end];
	a[end]=temp1;
	return pindex;
}
void QuickSort(int *a,int start,int end)
{
	if(start<end)
	{
    	int pindex=Partition(a,start,end);
    	QuickSort(a,start,pindex-1);
    	QuickSort(a,pindex+1,end);
    }
}
int main()
{
	int n;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	cout<<"The sorted array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
