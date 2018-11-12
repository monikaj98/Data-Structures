//Merge Sort Worst ,best and avg case complexity-O(nlogn) ans space complexity is O(n)
#include<iostream>
using namespace std;
void Merge(int *a,int low,int high,int mid)
{
	int i,j,k,temp[high-low+1];
	i=low;
	k=0;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	for( i=low;i<=high;i++)
	{
		a[i]=temp[i-low];
	}
}
/*void display(int n , int a[])
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}*/
void MergeSort(int *a,int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		display(mid,a);
		MergeSort(a,low,mid);
		display(high,a);
		MergeSort(a,mid+1,high);
		Merge(a,low,high,mid);
		
	}
	
}
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	MergeSort(a,0,n-1);
	cout<<"Sorted array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
