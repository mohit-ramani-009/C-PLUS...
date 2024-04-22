#include<iostream>
using namespace std;

class x
{
	public:
		int a;
		int b;
		int c;
		
	void setdata()
	{
			cout<<"Enter the value of a:-  ";
			cin>>a;
			cout<<"Enter the value of b:-  ";
			cin>>b;
			cout<<"Enter the value of c:-  ";
			cin>>c;
	}
	
};

class y : public x
{
		public:
			
		 getdata()
		{
			cout<<"sum = "<<(a*a*a) + (b*b*b) + (c*c*c)<<endl;
		}
};

int main()
{
	y s;
	
	s.setdata();
	s.getdata();
	
	return 0;
}

