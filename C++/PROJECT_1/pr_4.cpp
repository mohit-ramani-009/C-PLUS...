#include<iostream>
using namespace std;

class house
{
	public:
		
	int house_no;
	char house_name[50];
	char house_owner_name[50];
	int house_member;
	int house_total_room;
	char house_room_size[50];
	char house_area_size[50];
	int house_price;
};

int main()
{
	int i;
	house home[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"enter house no = ";
		cin>>home[i].house_no;
		
		cout<<"enter house name = ";
		cin>>home[i].house_name;
		
		cout<<"enter house owner name = ";
		cin>>home[i].house_owner_name;
		
		cout<<"enter house member = ";
		cin>>home[i].house_member;
		
		cout<<"enter house total room  = ";
		cin>>home[i].house_total_room;
	
		cout<<"enter house room size = ";
		cin>>home[i].house_room_size;
		
		cout<<"enter house area size = ";
		cin>>home[i].house_area_size;
		
		cout<<"enter house price = ";
		cin>>home[i].house_price;
	}
	
	for(i=0;i<5;i++)
	{
		cout<<"House No = "<<home[i].house_no<<endl;
		cout<<"House Name = "<<home[i].house_name<<endl;
		cout<<"House Owner Name = "<<home[i].house_owner_name<<endl;
		cout<<"House Member = "<<home[i].house_member<<endl;
		cout<<"House Total Room = "<<home[i].house_total_room<<endl;
		cout<<"House Room Size = "<<home[i].house_room_size<<endl;
		cout<<"House Area Size = "<<home[i].house_area_size<<endl;
		cout<<"House price = "<<home[i].house_price<<endl;
		
	}
	return 0;
}
