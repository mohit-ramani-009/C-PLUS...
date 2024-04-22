#include<iostream>
using namespace std;
class Message
{
	private:
	string m;
	public:
		Message(string message )
		{
			this->m=message;
		}
		
		void print()	
		{
			cout<<this->m<<endl;
		}
		
		void print(string msg)
		{
			cout<<this->m<<endl<<msg;
		}
};
	
int main()
{
	Message message("hello user...");
	message.print("additional message");
	
	return 0;
}

