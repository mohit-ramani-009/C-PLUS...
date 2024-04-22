#include<iostream>
using namespace std;

class cricket 
{
public:
    void gettotalover() 
	{
        cout<<"Cricket over = 50"<<endl;
    }
};

class t20 : public cricket 
{
public:
    
    void gettotalover()
	{
        cout<<"T20 cricket over = 20"<<endl;
    }
};

class test : public t20 
{
	public:
	    void gettotalover() 
		{
	        cout<<"Test cricket over = 89"<<endl;
	    }
};

int main() 
{
    t20 t2;
    test t1;
    
    t2.cricket::gettotalover();
    t1.t20::gettotalover(); 
    t1.gettotalover(); 
    
    return 0;

}
