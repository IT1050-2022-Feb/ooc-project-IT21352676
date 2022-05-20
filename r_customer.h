#include <iostream>
#include <cstring>
using namespace std;

class r_customer
{
  private:
      int r_id;
      char r_name[20];
      char r_gender[10];
      char r_address[50];
      int r_contno;
      char r_password[30];

  public:
r_customer();
      r_customer(char rc_name[], char rc_gender[], char rc_address[], int rc_contno);
      void setlogin(int rc_id,char rc_password[]);
      void displaydetails();
      void editdetails();
  ~r_customer();
};
r_customer::r_customer(){}
       r_customer::  r_customer(char rc_name[], char rc_gender[], char rc_address[], int rc_contno)
{
        r_id=0;
        strcpy(r_name, rc_name);
        strcpy (r_gender, rc_gender);
        strcpy(r_address, rc_address);
        r_contno=rc_contno;
}

void r_customer::setlogin (int rc_id,char rc_password[])
{
	 r_id=rc_id;
  	strcpy(r_password,rc_password);
}

void r_customer::displaydetails()
{ 
}

void editdetails()
{ 
}
