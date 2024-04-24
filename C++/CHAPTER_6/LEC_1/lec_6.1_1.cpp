#include<iostream>
using namespace std;

class Admin
{
	protected:
	string company_name;
	int manager_salary;
	int employee_salary;
	int total_staff;
	int total_annual_revenue;
	string can_terminate;
};

class manager : public Admin
{
	public:
		Myaccess()
		{	
			cout<<endl<<"enter company name:- ";
			cin>>company_name;
			
			cout<<"enter manager salary:- ";
			cin>>manager_salary;
			
			cout<<"enter employee salary:- ";
			cin>>employee_salary;
			
			cout<<"enter total staff:- ";
			cin>>total_staff;
			
			cout<<"enter can terminate:- ";
			cin>>can_terminate;			
		}
		
		dispA()
		{
			cout<<endl<<"manager details"<<endl;
			cout<<"-----------------------"<<endl;	
			cout<<"company name:- "<<company_name<<endl;
			cout<<"manager salary:- "<<manager_salary<<endl;
			cout<<"employee salary:- "<<employee_salary<<endl;
			cout<<"total staff:- "<<total_staff<<endl;
			cout<<"can terminate:- "<<can_terminate<<endl;	
		}
};

class employee : public manager
{
		public:
			
		Myaccess()
		{
		cout<<endl<<"enter company name:- ";
		cin>>company_name;
		
		cout<<"enter employee salary:- ";
		cin>>employee_salary;
		
		cout<<"enter total staff:- ";
		cin>>total_staff;		
		}
		
		dispB()
		{
		cout<<endl<<"employee details"<<endl;
		cout<<"-----------------------"<<endl;	
		cout<<"company name:- "<<company_name<<endl;
		cout<<"employee salary:- "<<employee_salary<<endl;
		cout<<"total staff:- "<<total_staff<<endl;	
		}	
};

int main()
{
	manager m1;
	employee e1;
	
	m1.Myaccess();
	e1.Myaccess();
	
	m1.dispA();
	e1.dispB();
	
	return 0;	
}
