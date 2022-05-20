#include <iostream>
#include <cstring>
using namespace std;
class staff
{
   private:
       int staff_id;
       char staff_name[10];
   

   public:
       staff();
       staff(int staff_id, char staff_name[]);
       void editstaff();
       void editdisplaystaff();
      ~staff();
       
}; 
staff::staff(){}
staff::staff(int staff_id, char staff_name[])
{
}
void staff::editstaff()
{
}
void staff::editdisplaystaff()
{
}