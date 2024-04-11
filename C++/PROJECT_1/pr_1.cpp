#include <iostream>
using namespace std;

class Distance 
{
	public:
	
    int feet;
    float inch;  
    
}m1,m2,sum;

int main() 
{	
    cout << "Enter feet: ";
    cin >> m1.feet;
    cout << "Enter inch: ";
    cin >> m1.inch;

    cout <<endl<<"Enter feet: ";
    cin >> m2.feet;
    cout << "Enter inch: ";
    cin >> m2.inch;

  sum.feet = m1.feet+m2.feet;
    sum.inch = m1.inch+m2.inch;

    if(sum.inch > 12) 
	{
        int c = sum.inch / 12;

        sum.feet += c;
        sum.inch -= (c * 12);
    } 
   
    cout<<endl<<sum.feet<<" FEET "<<sum.inch<<" INCH"<<endl;
	
	return 0;
}
