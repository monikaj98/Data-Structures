//Selectiong Sort Alogrith is a slow sorting algorithm 
//Its time complexity for worst ,best and avg case is O(n^2) and space complexity is O(1)
//This particular n place of logic of selecting the minimum element in each pass of putting it at its appropriate position is Selectiong sorting Algorithm
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of the array"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the elements in the array"<<endl;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		c=0;
		for(int i=0;i<n;i++)
		{
			c++;
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
	cout<<c<<endl;
	cout<<"The sorted array is"<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

