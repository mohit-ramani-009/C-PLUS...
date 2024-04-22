#include<iostream>
using namespace std;

class number
{
	public:
		int n;
		dispA()
		{	
			cout<<"Enter the value of number = ";
			cin>>n;	
		}
};

class square : public number
{
	public:
	int square;
		dispB()
		{
			square = n*n;
			cout<<"SQUARE OF A NUMBER  = "<<square<<endl;	
		}	
};

class cube : public number
{
	public:
	int cube;
		dispC()
		{
			cube =n*n*n;
			cout<<"CUBE OF A NUMBER = "<<cube<<endl;	
		}	
};

int main()
{
	square s1;
	cube c1;
	
	s1.dispA();
	s1.dispB();
	
	c1.dispA();
	c1.dispC();	
}
