#include<iostream>
using namespace std;

class same{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		operator==(same n)
		{
			same sa;
			sa.i=this->i==n.i;
		}
		
};

int main()
{
	same s1,s2;
	
	int a;
	int b;
	
	cout<<"enter a:- ";
	cin>>a;
	
	cout<<"enter b:- ";
	cin>>b;
	
	s1.setdata(a);
	s2.setdata(b);
	
	if(s1==s2)
	{
		cout<<"a and b are same..."<<endl;
	}
	else
	{
		cout<<"a and b are not same..."<<endl;	
	}
	
	return 0;
}
