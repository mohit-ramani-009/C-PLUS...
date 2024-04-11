#include<iostream>
using namespace std;

class student{
	
	private:
	
		int id;
		string name;
		int age;
		string course;
		string email;
		string city;
		string college;
		
	public:
		void setData(){
			
			cout<<endl<<"Enter ID :  ";
			cin>>id;
			cout<<"Enter name :  ";
			cin>>name;
			cout<<"Enter age :  ";
			cin>>age;
			cout<<"Enter course :  ";
			cin>>course;
			cout<<"Enter email :  ";
			cin>>email;
			cout<<"Enter city :  ";
			cin>>city;
			cout<<"Enter college :  ";
			cin>>college;
		
			}
			
			void getData(){
				
				cout<<"ID = "<<id<<endl;
				cout<<"NAME = "<<name<<endl;	
				cout<<"AGE = "<<age<<endl;	
				cout<<"COURSE = "<<course<<endl;
				cout<<"EMAIL = "<<email<<endl;
				cout<<"CITY = "<<city<<endl;
				cout<<"COLLEGE = "<<college<<endl;
			}
		
};

int main()
{
	
	student m1,m2,m3,m4,m5;
	
	m1.setData();
	m2.setData();
	m3.setData();
	m4.setData();
	m5.setData();
	
	m1.getData();
	m2.getData();
	m3.getData();
	m4.getData();
	m5.getData();
}
