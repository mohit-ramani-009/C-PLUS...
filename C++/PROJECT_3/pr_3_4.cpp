#include<iostream>
using namespace std;

class shape
{
	public:
		int width;
		int height;
		
		dispA()
		{
			cout<<"Enter the value of widht:- ";
			cin>>width;
			cout<<"Enter the value of height:- ";
			cin>>height;	
		}
};

class triangle : public shape
{
		public:
		int a;
			dispB()
			{
				a=0.5*width*height;
				cout<<"AREA OF TRIANGLE = "<<a<<endl;	
			}	
};

class rectangle : public shape
{
		public:
		int a1;
			dispC(){
				a1 =width*height;
				cout<<"AREA OF RECTANGLE = "<<a1<<endl;	
			}	
};

int main()
{
	triangle t1;
	rectangle r1;
	
	t1.dispA();
	t1.dispB();
	
	r1.dispA();
	r1.dispC();
	
	return 0;	
}
