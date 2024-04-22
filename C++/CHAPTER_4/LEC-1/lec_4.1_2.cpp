#include<iostream>
using namespace std;

class p{
	public:
		
		float a;
		dispp()
		{
		
			cout<<"enter tamprature:- ";
			cin>>a;	
		}		
};

class q : public p
{
	public:
		
		dispq()
		{
			cout<<"the temperature in fehrenheit:- "<< a*9/5+32 <<endl;
		}
};

class r : public q
{
	public:
		
		dispr()
		{
			cout<<"temperature in kelvin:- "<<a+273.15<<endl;
		}		
};

int main()
{
	r t1;
	
	t1.dispp();
	t1.dispq();
	t1.dispr();
	
	return 0;
}
