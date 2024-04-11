#include<iostream>
using namespace std;

class cafe
{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		string cafe_rating;
		int cafe_establish_year;
		int cafe_staff_quantity;
		
	public:
		cafe()
		{
			cout<<endl<<"enter cafe id: ";
			cin>>cafe_id;
			cout<<"enter cafe name: ";
			cin>>cafe_name;
			cout<<"enter cafe type: ";
			cin>>cafe_type;
			cout<<"enter cafe rating: ";
			cin>>cafe_rating;
			cout<<"enter cafe establish year: ";
			cin>>cafe_establish_year;
			cout<<"enter cafe staff quantity: ";
			cin>>cafe_staff_quantity;
		}
		
		static string city;
		
		void getdata()
		{
			cout<<endl<<"cafe id:- "<<this->cafe_id<<endl;
			cout<<"cafe name:- "<<this->cafe_name<<endl;
			cout<<"cafe type:- "<<this->cafe_type<<endl;
			cout<<"cafe rating:- "<<this->cafe_rating<<endl;
			cout<<"cafe establish year:- "<<this->cafe_establish_year<<endl;
			cout<<"cafe staff quantity:- "<<this->cafe_staff_quantity<<endl;
		}
		
		static void getstaticdata()
		{
			cout<<"city:- "<<city<<endl;
		}
};

string cafe::city = "rajkot";

int main()
{
	int i,n;
	
	cout<<"enter the number of cafe: ";
	cin>>n;
	
	cafe h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].getdata();
		h[i].getstaticdata();
	}
	return 0;
}

