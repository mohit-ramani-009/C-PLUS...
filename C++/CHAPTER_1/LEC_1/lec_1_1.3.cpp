#include <iostream>
using namespace std;

int main() 
{
    cout<<"Leap years from 2020 and 3030:\n"<<endl;
    
    for (int year=2020;year<=3030;year++) 
	{
        if (year % 4 == 0) 
		{
            cout<<year<< " ";
        }
    }
    return 0;
}

