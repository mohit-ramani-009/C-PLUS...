#include<iostream>
using namespace std;

int main()
{
	int b;
	
	cout<<"enter the a :- ";
	cin>>a;
	cout<<"enter the b :- ";
	cin>>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		int sum=0;
		sum=a/b;
		
		cout<<"divison is := "<<sum<<endl;
		
	}
	
	catch(int m)
	{
		cout<<"Sorry divison can't be possible...."<<endl;
	}
	
}

