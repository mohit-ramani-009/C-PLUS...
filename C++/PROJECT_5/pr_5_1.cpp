#include <iostream>
using namespace std;

class division
{
	public:
	    void divi()  
		{
	        try 
			{
	            int num1, num2;
	            cout<<"Enter num1: ";
	            cin>>num1;
	            cout<<"Enter num2: ";
	            cin>>num2;
	        
	            if(num2==0) 
				{
	                throw 0;
	            }
	            cout<<"division is:- "<<num1/num2<<endl;
	        }
	        
			catch (int n) 
			{
	            cout<<endl<<"error not division by zero..."<<endl;
	        }
	    }
};

int main() 
{
    division div;
    div.divi();
    
    return 0;
}

