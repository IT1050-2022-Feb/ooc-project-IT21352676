#include <iostream>
#include <cstring>
using namespace std;

class hotel
{
   private:
        int hotel_id;
        char hotel_name[20];
        char hotel_location[50];
        
   public:
       hotel();
       hotel(int hot_id, char hot_name[],char hot_location[]);
       void manageHotel();
       void displayHotel();
       void addRecords();
      ~hotel();
};
hotel::hotel(){}
hotel::hotel (int hot_id, char hot_name[],char hot_location[])
{
  hotel_id=0;
  strcpy (hotel_name,hot_name);
}
void hotel::manageHotel()
{
}
void hotel::displayHotel()
{
}
  void hotel::addRecords()
{
}