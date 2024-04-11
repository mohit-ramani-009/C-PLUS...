#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter array size:";
	cin>>n;
	
	int array[n],i;
	
	cout<<"enter array element:";
	
	for(i=0;i<=n;i++)
	{
		cin>>array[i];
	}
	
	cout<<"Even element is:";
	
	for(i=0;i<=n;i++)
	{
		if(array[i]%2==0)
		{
			cout<<" "<<array[i];
		}
	}
	cout<<""<<endl;
	
	return 0;
}
