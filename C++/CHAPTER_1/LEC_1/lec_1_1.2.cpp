#include<iostream>
using namespace std;
int main()
{
	char m[10];
	
	cout<<"Enter any string:";
	cin>>m;
	
	int i;
	for(i=0;i<10;i++)
	{
		if(m[i]>='a' && m[i]<='z')
		{
			m[i]=m[i]-32;
		}
		else if(m[i]>='A' && m[i]<='Z')
		{
			m[i]=m[i]+32;
		}
	}
	cout<<" "<<m;
	
	return 0;
}
