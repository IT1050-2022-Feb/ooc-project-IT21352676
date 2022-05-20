#include <iostream>
#include <cstring>
using namespace std;

class b_manager
{
  private:
      int b_manager_id;
      char b_manager_name[20];
      char b_manager_address [50];
      int b_manager_contno;
      char b_manager_password[30];

  public:
      b_manager();
      b_manager (char bm_name[], char bm_address[],int bm_contno);
      void setlogin(int bm_id,char bm_password[]);
      void displaybranchmanager();
      void updateprofiles();
      ~b_manager();
};
     // void b_manager::b_manager(){}
      b_manager::b_manager (char bm_name[], char bm_address[],int bm_contno)
{
        b_manager_id =0;
        strcpy(b_manager_name, bm_name);
        strcpy (b_manager_address, bm_address);
        b_manager_contno=bm_contno;
}


      void b_manager::setlogin(int bm_id,char bm_password[])
{
	    b_manager_id=bm_id;
  	  strcpy(b_manager_password,bm_password);
}

void displaybranchmanager()
{
}

void updateprofiles()
{ 
}