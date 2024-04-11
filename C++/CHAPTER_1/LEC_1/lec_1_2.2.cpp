#include<iostream>

using namespace std;

addition(int n,int m)
{
		int sum=0;
		sum= n+m;
		return sum;
}
subtraction(int n, int m)
{
	int sub=0;
	sub=n-m;
	return sub;
}
multiplication(int n, int m)
{
	int multi=0;
	multi= n*m;
	return multi;
}
division(int n, int m)
{
	int div=0;
	div= n/m;
	return div;
}
modulo(int n, int m)
{
	int mod=0;
	mod= n%m;
	return mod;
}
int main()
{
	int choice,a,b;
	while(1)
	{
			cout<<"press 1 +"<<endl;
			cout<<"press 2 -"<<endl;
			cout<<"press 3 *"<<endl;
			cout<<"press 4 /"<<endl;
			cout<<"press 5 %"<<endl;
			
			cout<<" "<<endl;
			
			cout<<"Enter your choice number:";
			cin>>choice;
			
			cout<<" "<<endl;
			
			switch(choice)
			{
				case 1:
	                cout << "Enter first number: ";
	                cin >> a;
	                cout << "Enter second number: ";
	                cin >> b;
	                cout << "Addition: " << addition(a, b) << endl;
	                break;
	                
	            case 2:
	                cout << "Enter first number: ";
	                cin >> a;
	                cout << "Enter second number: ";
	                cin >> b;
	                cout << "Subtraction: " << subtraction(a, b) << endl;
	                break;
	                
	            case 3:
	                cout << "Enter first number: ";
	                cin >> a;
	                cout << "Enter second number: ";
	                cin >> b;
	                cout << "Multiplication: " << multiplication(a, b) << endl;
	                break;
	                
	            case 4:
	                cout << "Enter first number: ";
	                cin >> a;
	                cout << "Enter second number: ";
	                cin >> b;
	                cout << "Division: " << division(a, b) << endl;
	                break;
	                
	            case 5:
	                cout << "Enter first number: ";
	                cin >> a;
	                cout << "Enter second number: ";
	                cin >> b;
	                cout << "Modulo: " << modulo(a, b) << endl;
	                break;
	                
	            case 0:
	            	
	                cout << "Thanks for using the calculator!" << endl;
	                
	            default:
	            	
	                cout << "Invalid choice!" << endl;
        }
        cout<<" "<<endl;
    }
    return 0;
}
