#include<iostream>
using namespace std;
int main(){
	int i,j,a1[100],n1,a2[100],n2,temp1,temp2,p,k,l;
	cout<<"enter the range of first array"<<endl;
	cin>>n1;
	cout<<"enter the values of first array"<<endl;
	for(i=0;i<n1;i++){
		cin>>a1[i];
	}
	cout<<"enter the range of second array"<<endl;
	cin>>n2;
	cout<<"enter the values of second array"<<endl;
	for(i=0;i<n2;i++){
		cin>>a2[i];
	}
	for(i=0;i<n1;i++){
		for(j=i+1;j<n1;j++){
			if(a1[i]>a1[j]){
				 temp1=a1[i];
				a1[i]=a1[j];
				a1[j]=temp1;
			}
		}
	}
	for(k=0;k<n2;k++){
		for(l=k+1;l<n2;l++){
			if(a2[k]>a2[l]){
				 temp2=a2[k];
				a2[k]=a2[l];
				a2[l]=temp2;
			}
		}
	}
	cout<<"first sorted array"<<endl;
	for(i=0;i<n1;i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	cout<<"second sorted array"<<endl;
	for(p=0;p<n2;p++){
		cout<<a2[p]<<" ";
	}
	return 0;
}

