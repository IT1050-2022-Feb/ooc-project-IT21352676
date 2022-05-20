#include <iostream>
#include <cstring>
using namespace std;

class receptionist
{
  private:
      int rep_id;
      char rep_name[20];
      char rep_address[50];
      char rep_password[10];

  public:
receptionist();
receptionist(char rept_name[], char rept_address[]);
      void displaydetails();
      void editReceptionist();
      void addPayment();
      void calcPayment();
~receptionist();
};
receptionist::receptionist(){}
receptionist::receptionist (char rept_name[], char rept_address[])
{
       rep_id=0;
       strcpy(rep_name, rept_name);
       strcpy(rep_address, rept_address);
}
void receptionist::displaydetails()
{ 
}
void receptionist::editReceptionist()
{ 
}
void receptionist::addPayment()
{ 
}
void receptionist::calcPayment()
{ 
}