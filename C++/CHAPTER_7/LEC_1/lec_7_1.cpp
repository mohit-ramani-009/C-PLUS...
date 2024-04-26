#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char password[50];	
	printf("Enter your password:");
	gets(password);
	
	int i;
	try
	{
		for(i=0;i<strlen(password);i++)
		{
			if(password[i]>=65 && password[i]<=90)
			{
				throw password;
			}
		}
		cout<<"you are successfully logged in..";
		
	}
	
	catch(...)
	{
		cout<<"Sorry your password did not match...."<<endl;
	}
	
}

