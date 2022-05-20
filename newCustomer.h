#include <iostream>
#include <cstring>
using namespace std;


class newCustomer
{
    private:
        int N_ID;
        char N_Name[10];
        char N_Gender[5];
        char N_address[50];
        int N_ContNo;
        char N_Email[20];

    public:
        newCustomer();
        newCustomer(int ID,char name[],char gender[],char address[],int cont,char email[]);
        void displayNewCustomer();
        void addNewCustomer();
        void editNewCustomer();
};
    newCustomer::newCustomer(){}
    newCustomer::newCustomer(int ID,char name[],char gender[],char address[],int cont,char email[])
{
    N_ID=ID;
    strcpy(N_Name,name);
    strcpy(N_Gender,gender);
    strcpy(N_address,address);
    N_ContNo=cont;
    strcpy(N_Email,email);
}
void newCustomer::displayNewCustomer()
{
}
void newCustomer::addNewCustomer()
{ 
}
void newCustomer::editNewCustomer()
{
}