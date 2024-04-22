#include<iostream>
using namespace std;

class increment{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
	   increment operator++()
		{
			increment inc;
			
			inc.i=++i;
			
			return inc;
		}
		
		void getsub()
		{
			cout<<"increment number is:- "<<this->i;
		}
};

int main()
{
	increment i1,i2;
	
	int n;
	cout<<"enter n:- ";
	cin>>n;
	
	i1.setdata(n);
	i2=i1;;
	
	++i2;
	
	i2.getsub();
	
	return 0;
}
