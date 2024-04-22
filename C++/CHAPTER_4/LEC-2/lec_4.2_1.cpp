#include<iostream>
using namespace std;

class RBI 
{
	public:
		int calculate(int amount,float rate)
		{
			int total;
			total+=(amount*rate/100);
			return total;
		}   
};

class SBI : public RBI 
{
	public:
		float rate;
		
		SBI(int amount)
		{
			cout<<"enter SBI rate of intrest:- "<<endl;
			cin>>rate;
			
			cout<<"the rate of intrest is:- "<<calculate(amount,rate)<<endl;
		}
	   
};

class BOB : public RBI 
{
	public:
		float rate;
		
		BOB(int amount)
		{
			cout<<"enter BOB rate of intrest:- "<<endl;
			cin>>rate;
			
			cout<<"the rate of intrest is:- "<<calculate(amount,rate)<<endl;
		}
	 
};

class ICICI : public RBI
{
	public:
		float rate;
		
		ICICI(int amount)
		{
			cout<<"enter ICICI rate of intrest:- "<<endl;
			cin>>rate;
			
			cout<<"the rate of intrest is:- "<<calculate(amount,rate)<<endl;
		}
	   
};

int main() 
{	
	int amount;
	
	cout<<"enter amount:- "<<endl;
	cin>>amount;
	
    ICICI i1(amount);
    SBI s1(amount);
    BOB b1(amount);
    
  
    
    return 0;
}

