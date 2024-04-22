#include<iostream>
using namespace std;

class A
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        
        dispA() 
        {
            cout<<endl<<"enter employee id:- ";
            cin>>id;
            cout<<"enter employee name:- ";
            cin>>name;
            cout<<"enter employee age:- ";
            cin>>age;
            cout<<"enter employee company name:- ";
            cin>>comp_name;
            cout<<"enter employee experience(in year):- ";
            cin>>experience;
        }
           
        details1() 
		{
            cout<<"\nEmployee Information:- "<<endl;
            cout<<"Employee ID:- "<<id<<endl;
            cout<<"Employee Name:- "<<name<<endl;
            cout<<"Employee Age:- "<<age<<endl;
            cout<<"Company Name:- "<<comp_name<<endl;
            cout<<"Experience years:-"<<experience<<endl;
        }
};

class B
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        
        dispB() 
        {
            cout<<endl<<"enter employee id:- ";
            cin>>id;
            cout<<"enter employee name:- ";
            cin>>name;
            cout<<"enter employee age:- ";
            cin>>age;
            cout<<"enter employee company name:- ";
            cin>>comp_name;
            cout<<"enter employee experience(in year):- ";
            cin>>experience;
        } 
		   
        details2() 
		{
            cout<<"\nEmployee Information:- "<<endl;
            cout<<"Employee ID:- "<<id<<endl;
            cout<<"Employee Name:- "<<name<<endl;
            cout<<"Employee Age:- "<<age<<endl;
            cout<<"Company Name:- "<<comp_name<<endl;
            cout<<"Experience years:-"<<experience<<endl;
        }   
};

class C:public A,public B
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        
        dispC() 
        {
            cout<<endl<<"enter employee id:- ";
            cin>>id;
            cout<<"enter employee name:- ";
            cin>>name;
            cout<<"enter employee age:- ";
            cin>>age;
            cout<<"enter employee company name:- ";
            cin>>comp_name;
            cout<<"enter employee experience(in year):- ";
            cin>>experience;
        }
           
        details3() 
		{
            cout<<"\nEmployee Information:- "<<endl;
            cout<<"Employee ID:- "<<id<<endl;
            cout<<"Employee Name:- "<<name<<endl;
            cout<<"Employee Age:- "<<age<<endl;
            cout<<"Company Name:- "<<comp_name<<endl;
            cout<<"Experience years:-"<<experience<<endl;
        }
     
};

int main()
{
    C c1;
    
    c1.dispA();
    c1.dispB();
    c1.dispC();
    
    c1.details1();
    c1.details2();
    c1.details3();
    
    return 0;

}

