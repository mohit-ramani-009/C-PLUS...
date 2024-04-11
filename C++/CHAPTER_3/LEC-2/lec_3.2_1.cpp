#include<iostream>
using namespace std;

class hotel{
	private:
		int hotel_id;
		string hotel_name;
		string hotel_type;
		string hotel_rating;
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
	public:
		void setdata()
		{
			cout<<endl<<"enter hotel id: ";
			cin>>hotel_id;
			cout<<"enter hotel name: ";
			cin>>hotel_name;
			cout<<"enter hotel type: ";
			cin>>hotel_type;
			cout<<"enter hotel rating: ";
			cin>>hotel_rating;
			cout<<"enter hotel establish year: ";
			cin>>hotel_establish_year;
			cout<<"enter hotel staff quantity: ";
			cin>>hotel_staff_quantity;
			cout<<"enter hotel room quantity: ";
			cin>>hotel_room_quantity;
		}
		
		static string city;
		
		void getdata()
		{
			cout<<"hotel id:- "<<hotel_id;
			cout<<"hotel name:- "<<hotel_name;
			cout<<"hotel type:- "<<hotel_type;
			cout<<"hotel rating:- "<<hotel_rating;
			cout<<"hotel establish year:- "<<hotel_establish_year;
			cout<<"hotel staff quantity:- "<<hotel_staff_quantity;
			cout<<"hotel room quantity:- "<<hotel_room_quantity;
		}
		
		static void getstaticdata()
		{
			cout<<"city:- "<<city<<endl;
		}
};

string hotel::city = "rajkot";

int main()
{
	int i,n;
	
	cout<<"enter the number of hotels: ";
	cin>>n;
	
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		h[i].getdata();
		h[i].getstaticdata();
	}
	
	return 0;
}

