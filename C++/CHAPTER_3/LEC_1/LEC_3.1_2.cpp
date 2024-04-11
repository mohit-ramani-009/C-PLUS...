#include<iostream>
using namespace std;

class customers
{
	private:
		int id;
		string name;
		int age;
		string telecome_brand_name;
		int mobile_number;
		string city;
		int simcard_validity;
		
	public:
		void setdata(int id,string name,int age,string telecome_brand_name,int mobile_number,string city,int simcard_validity)
		{
			this -> id = id;
			this -> name = name;
			this -> age = age;
			this -> telecome_brand_name = telecome_brand_name;
			this -> mobile_number = mobile_number;
			this -> city = city;
			this -> simcard_validity = simcard_validity;
		
		
		}
		
		void getdata()
		{
			cout<<endl<<"customer Id:- "<<this->id<<endl;
			cout<<"customer Name:- "<<this->name<<endl;
			cout<<"customer Age:- "<<this->age<<endl;
			cout<<"customer Telecome Brand Name:-"<<this->telecome_brand_name<<endl;
			cout<<"customer Mobile Number:- "<<this->mobile_number<<endl;
			cout<<"customer City:- "<<this->city<<endl;
			cout<<"customer Simcard Validity (in year):- "<<this->simcard_validity<<endl;
					
		}
};

int main()
{
	customers c1,c2,c3,c4;
	
	c1.setdata(5432,"sahil",24,"Jio",7586912356,"rajkot",2);
	c2.setdata(1254,"ayush",20,"Vi",9016435645,"jasdan",1);
	c3.setdata(3521,"umang",19,"Airtel",9313145677,"atkot",1);
	c4.setdata(4858,"dixit",22,"Jio",9727015641,"surat",3);
	
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
}
