#include<iostream>
using namespace std;

class A
{
public:
    int id;
    string name;
    string role;
    
    void setData()
    {   
        cout<<"Enter Id:";
        cin>>id;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Role:";
        cin>>role;
    }
};

class B: public A
{
public:
    int salary;
    int experience;
    
    void setData()
    {
        A::setData(); 
        cout<<"Enter Salary:";
        cin>>salary;
        cout<<"Enter Experience:";
        cin>>experience;
    }
};

class C: public B
{
public:
    string companyname;
    string address;
    
    void setData()
    {   
        B::setData(); 
        cout<<"Enter Company Name:";
        cin>>companyname;
        cout<<"Enter Address:";
        cin>>address;
    }
};

class D: public C
{
public:
    int contact;
    string email;
    
    void setData()
    {
        C::setData(); 
        cout<<"Enter Contact:";
        cin>>contact;
        cout<<"Enter Email:";
        cin>>email;
    }

    void getData()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Role: "<<role<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Experience: "<< experience<<endl;
        cout<<"Company Name: "<< companyname<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Contact: "<<contact<<endl;          
    }   
};

int main()
{
    D d1;
    d1.setData();
    d1.getData();
    
    return 0;
}

