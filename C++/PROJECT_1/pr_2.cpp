#include <iostream>
using namespace std;

class Distance 
{
	public:
	
    int hours;
    int minutes; 
    
}m1,m2,sum;

int main() 
{	
    cout << "Enter hours: ";
    cin >> m1.hours;
    cout << "Enter minit: ";
    cin >> m1.minutes;
      	
    cout <<endl<< "Enter hours: ";
    cin >> m2.hours;
    cout << "Enter minit: ";
    cin >> m2.minutes;
    
    sum.hours = m1.hours+m2.hours;
    sum.minutes = m1.minutes+m2.minutes;

    if(sum.minutes > 60) 
	{
        int c = sum.minutes / 60;

        sum.hours += c;
        sum.minutes -= (c * 60);
    } 
   
    cout<<endl<<sum.hours<<" hours "<<sum.minutes<<" minutes"<<endl;
	
	return 0;
}
