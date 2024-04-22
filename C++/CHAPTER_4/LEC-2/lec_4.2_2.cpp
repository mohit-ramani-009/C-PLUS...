#include<iostream>
using namespace std;

class A{
	public:
	    int a;
	    void dispA() 
		{
	        cout<<"Enter the number in A = ";
	        cin>>a;   
   		}   
};

class B : public A{
	public:
	    int b;
	    void dispB() 
		{
	        cout<<"Enter the number in B = ";
	        cin>>b;   
	    }   
};

class C: public A
{
	public:
	    int c;
	    void dispC() 
		{
	        cout<<"Enter the number in C = ";
	        cin>>c;   
	    }   
};

class D : public B, public C
{
	public:
	    int d;
	    void dispD() 
		{
	        cout<<"Enter the number in D = ";
	        cin>>d;   
	    }   
};

int main()
{
    D d1;
    int sum=0;
    
    d1.B::dispA();
    d1.dispB();
    d1.dispC();
    d1.dispD();
    
    sum = d1.B::a + d1.b + d1.c + d1.d;
    cout<<"Sum = "<<sum<<endl;
    
    return 0;
}

