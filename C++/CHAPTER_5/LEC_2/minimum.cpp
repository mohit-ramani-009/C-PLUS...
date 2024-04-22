#include<iostream>
using namespace std;

class minimum{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		operator<(minimum n)
		{
			minimum min;
			min.i=this->i<n.i;
		}
		
};

int main()
{
	minimum m1,m2;
	
	int a,b;
	
	cout<<"enter a:- ";
	cin>>a;
	
	cout<<"enter b:- ";
	cin>>b;
	
	m1.setdata(a);
	m2.setdata(b);
	
	if(m1<m2)
	{
		cout<<"a number is minimum..."<<endl;
	}
	else
	{
		cout<<"b number is minimum..."<<endl;	
	}
	
	return 0;
}
