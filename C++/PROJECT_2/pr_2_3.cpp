#include<iostream>
using namespace std;
class bank
{
	private:
	int id;
	string name;
	string card;
	int loan;
	
	public:
	void setData()	
	{
		cout <<"Enter bank id:";
		cin >>this->id;
		cout <<"Enter bank name:";
		cin >>this->name;
		cout <<"Enter card:";
		cin >>this->card;
		cout <<"Enter loan:";
		cin >>this->loan;
	}
	static string location;
	
	public:
		void getData()
		{
			cout <<"bank id:"<<this->id<<endl;
			cout <<"bank name:"<<this->name<<endl;
			cout <<"bank card:"<<this->card<<endl;
			cout <<"bank loan:" <<this->loan<<endl;
		}
		void getStaticData()
		{
			cout <<"bank location:"<<location<<endl;
		}
};

string bank::location="rajkot";
int main()
{
	int i,n;
	
	cout <<"Enter bank detail:";
	cin>>n;
	
	bank m[n];
	
	for(i=0;i<n;i++)
	{
		m[i].setData();
	}
	for(i=0;i<n;i++)
	{
		m[i].getData();
		m[i].getStaticData();
	}
	return 0;
}
