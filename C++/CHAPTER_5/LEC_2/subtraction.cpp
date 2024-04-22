#include<iostream>
using namespace std;

class subtraction{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		subtraction operator-(subtraction n)
		{
			subtraction sub;
			
			sub.i=this->i-n.i;
			
			return sub;
		}
		
		void getsub()
		{
			cout<<"subtraction of number:- "<<this->i;
		}
};

int main()
{
	subtraction s1,s2,s3;
	
	int a,b;
	
	cout<<"enter a:- ";
	cin>>a;
	
	cout<<"enter b:- ";
	cin>>b;
	
	s1.setdata(a);
	s2.setdata(b);
	
	s3=s1-s2;
	
	s3.getsub();
	
	return 0;
}
