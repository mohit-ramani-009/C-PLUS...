#include<iostream>
using namespace std;

class company{
	
	private:
		int comp_id;
		string comp_name;
		int comp_staff;
		int comp_revenue;
		int comp_import;
		int comp_xport;
		string comp_ceo;
		
		public:
			company(int comp_id,string comp_name,int comp_staff,int comp_revenue,int comp_import,int comp_xport,string comp_ceo)
				{
					this->comp_id=comp_id;
					this->comp_name=comp_name;
					this->comp_staff=comp_staff;
					this->comp_revenue=comp_revenue;
					this->comp_import=comp_import;
					this->comp_xport=comp_xport;
					this->comp_ceo=comp_ceo;
				}
				
			void getdata()
			{
				cout<<endl<<"company id = "<<this->comp_id<<endl;
				cout<<"comapny name = "<<this->comp_name<<endl;
				cout<<"company staff members= "<<this->comp_staff<<endl;
				cout<<"company total revenue = "<<this->comp_revenue<<endl;
				cout<<"company import raw diamonds = "<<this->comp_import<<endl;
				cout<<"company export diamonds = "<<this->comp_xport<<endl;
				cout<<"company ceo = "<<this->comp_ceo<<endl;
			}
};

int main()
{
	company c1(1214,"murlidhar diamond",200,20000000,20000,15000,"ayush kakadiya");
	company c2(2456,"shreeji diamonds pvt ltd",100,10000000,10000,9000,"vraj kumar");
	company c3(3546,"pramukh diamonds",50,5000000,5000,5000,"sahil gajera");
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
		
	return 0;
}

