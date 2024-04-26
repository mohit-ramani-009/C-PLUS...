#include<iostream>
using namespace std;

int main(){
	
	int a;
	
	cout<<"enter your age :- ";
	cin>>a;
	
	try{
		if(a<18){
			throw a;
		}
		cout<<"you are eligible for vote...";
		
	}catch(int m){
		cout<<"Sorry you are mot eligible for vote..."<<endl;
	}
	
}
