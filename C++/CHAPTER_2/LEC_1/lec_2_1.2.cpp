#include<iostream>
using namespace std;

class cars{
	
	public:
	
		int id;
		char company_name[50];
	    char color[50];
		int model;
		int release_year;	
};

int  main()
{
	
	int i;
	cars car [4];
	
	for(i=0;i<4;i++)
	{
		cout<<"ID = "<<endl;
		cin>>car[i].id;
		
		cout<<"company name = "<<endl;
		cin>>car[i].company_name;
		
		cout<<"color = "<<endl;
		cin>>car[i].color;
		
		cout<<"model= "<<endl;
		cin>>car[i].model;
		
		cout<<"release year = "<<endl;
		cin>>car[i].release_year;
	
	}
	
	for(i=0;i<4;i++)
	{
		cout<<"ID = "<<car[i].id<<endl;
		cout<<"COMPANY NAME = "<<car[i].company_name<<endl;
		cout<<"COLOR = "<<car[i].color<<endl;
		cout<<"MODEL = "<<car[i].model<<endl;
		cout<<"RELEASE YEAR = "<<car[i].release_year<<endl;
	}	
	return 0;
}
