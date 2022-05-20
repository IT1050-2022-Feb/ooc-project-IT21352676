#include <iostream>
#include <cstring>
using namespace std;

class booking
{
  private:
      int b_id;
      char b_name[20];
      int b_date;

  public:
       booking();
       booking(int b_id, char b_name[], int b_date);
       void setbooking();
       void editbooking();
       void displaybooking();
        ~booking();
};
  booking::booking(){}
booking::booking(int b_id, char b_name[], int b_date)
{
}
void booking::setbooking()
{
}
void booking::editbooking()
{
}
void booking::displaybooking()
{
}
