#include <iostream>
#include <cstring>
using namespace std;

class Manager
{
	private:
		int Manager_ID;
		char Manager_Name[20];
		char Manager_password[10];
		
	public:
		Manager();
		Manager(int mID, char mName[], char mPass[]);
		void displayManager();
		void updateprofile();
		~Manager();
};
Manager::Manager()
{
	Manager_ID =0;
	strcpy(Manager_Name,"");
	strcpy(Manager_password,"");
}

Manager::Manager(int mID, char mName[], char mPass[])
{
	Manager_ID =mID;
	strcpy(Manager_Name,mName);
	strcpy(Manager_password,mPass);
}

void Manager::displayManager()
{
	
}

void Manager::updateprofile()
{
	
}
