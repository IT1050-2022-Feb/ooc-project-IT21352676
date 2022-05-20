#include <iostream>
#include <cstring>
using namespace std;

class payment
{
  private:
      int pay_id;
      char pay_date[10];
      float pay_amount;

  public:
   payment();
      payment(char pay_date[],float pay_amount);
      void setpayment(int payt_id,char payt_date[],float payt_amount);
      void displaypayment();
      void editpayment();
      void addPayment();
      void calcPayment();
      void confirmpayment();
      ~payment();
};
payment::payment(){}
payment::payment(char payt_date[],float payt_amount)
{
       pay_id=0;
       strcpy(pay_date, payt_date);
       pay_amount=payt_amount;
}

void payment::setpayment (int payt_id,char payt_date[],float payt_amount)
{
	 pay_id=payt_id;
   strcpy(pay_date,payt_date);
   pay_amount=payt_amount;
}

void payment::displaypayment()
{
}

void payment::confirmpayment()
{ 
}
void payment::editpayment()
{ 
}
void payment::addPayment()
{ 
}
void payment::calcPayment()
{ 
}