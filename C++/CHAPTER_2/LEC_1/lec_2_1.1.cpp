#include<iostream>
using namespace std;

class employ
{
	public:
		
	int id;
	char name[50];
	char role[50];
	int age;
	int salary;
	char experience[50];
	char city[50];
	char company_name[50];
};

int main()
{
	int i;
	employ emp[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"ID = "<<endl;
		cin>>emp[i].id;
		
		cout<<"name = "<<endl;
		cin>>emp[i].name;
		
		cout<<"role = "<<endl;
		cin>>emp[i].role;
		
		cout<<"age = "<<endl;
		cin>>emp[i].age;
		
		cout<<"salary = "<<endl;
		cin>>emp[i].salary;
		
		cout<<"experience = "<<endl;
		cin>>emp[i].experience;
		
		cout<<"city = "<<endl;
		cin>>emp[i].city;
		
		cout<<"company name = "<<endl;
		cin>>emp[i].company_name;
	}
	
	for(i=0;i<5;i++)
	{
		cout<<"ID = "<<emp[i].id<<endl;
		cout<<"NAME = "<<emp[i].name<<endl;
		cout<<"ROLE = "<<emp[i].role<<endl;
		cout<<"AGE = "<<emp[i].age<<endl;
		cout<<"SALARY = "<<emp[i].salary<<endl;
		cout<<"EXPERIENCE= "<<emp[i].experience<<endl;
		cout<<"CITY = "<<emp[i].city<<endl;
		cout<<"COMPANY NAME = "<<emp[i].company_name<<endl;
		
	}
	return 0;
}
