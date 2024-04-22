#include<iostream>
using namespace std;

class Train {
public:
    int train_number;
    string train_name;
    string train_ac_and_non_ac;
    string train_destination;
    int train_time;
};

int main() 
{
    int i;
    Train train[4];

    for (i=0;i<4;i++) 
	{
        cout<<endl<< "Enter train number: ";
        cin>>train[i].train_number;

        cout<<"Enter train name: ";
        cin>>train[i].train_name;

        cout<<"Enter train source: ";
        cin>>train[i].train_ac_and_non_ac;

        cout<<"Enter train destination: ";
        cin>>train[i].train_destination;

        cout<<"Enter train time: ";
        cin>>train[i].train_time;
        
        cout<<endl;
    }

    for (i= 0;i<4;i++) 
	{
        cout<<endl<< "Train number = "<<train[i].train_number<<endl;
        cout<<"Train name = "<<train[i].train_name<<endl;
        cout<<"Train source = " <<train[i].train_ac_and_non_ac<<endl;
        cout<<"Train destination = " <<train[i].train_destination<<endl;
        cout<<"Train time = " <<train[i].train_time<<endl;
    }

    int train_no;

    cout<<endl<<"Enter train number to search: ";
    cin>>train_no;

    for (i=0;i<4;i++) 
	{
        if (train[i].train_number == train_no) 
		{
            cout<<endl << "Train record..."<<endl;
            cout<<"Train number = "<<train[i].train_number<<endl;
            cout<<"Train name = "<<train[i].train_name<<endl;
            cout<<"Train source = "<<train[i].train_ac_and_non_ac<<endl;
            cout<<"Train destination = "<<train[i].train_destination<<endl;
            cout<<"Train time = "<<train[i].train_time<<endl;
        }
    }

    return 0;
}

