#include<iostream>
using namespace std;

int main(){
	
	int size;
	cout<<"enter the array's size:";
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the array element:"<<endl;
	int i,j,fac=1;
	for(i=0;i<size;i++)
	{
		cout<<"array["<<i<<"]:";
		cin>>arr[i];
	}
	cout<<"factorial of 1d array:"<<endl;
	for(i=0;i<size;i++)
	{
		fac=fac*arr[i];
		cout<<endl<<"a["<<i<<"]:"<<fac<<endl;
	}
	return 0;	
}
