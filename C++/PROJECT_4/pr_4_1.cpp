#include<iostream>
using namespace std;

class  not_same{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		operator!=(not_same m)
		{
			not_same s;
			s.i=this->i!=m.i;
		}
		
};

int main()
{
	not_same ns1,ns2;
	
	int a;
	int b;
	
	cout<<"enter a:- ";
	cin>>a;
	
	cout<<"enter b:- ";
	cin>>b;
	
	ns1.setdata(a);
	ns2.setdata(b);
	
	if(ns1!=ns2)
	{
		cout<<"both number are not same..."<<endl;
	}
	else
	{
		cout<<"both number are same..."<<endl;	
	}
	
	return 0;
}
