#include <iostream>
#include <cstring>
using namespace std;

class Room
{
  	private:
  		int Room_ID;
      char Room_name[20];
  		char Room_category[20];
  	
  	public:
Room();
  		Room(int rID,char rm_name[],char rm_cat[]);
  		void addRoom();
  		void displayRoom();
  		void editRoom();
~Room();
};
Room::Room(){}
  Room::Room(int rID,char rm_name[],char rm_cat[])
  {
      	Room_ID =0;
      	strcpy(Room_name,rm_name);
        strcpy(Room_category,rm_cat);
  }

void Room::addRoom()
{
}

void Room::displayRoom()
{
}

void Room::editRoom()
{
	
}
