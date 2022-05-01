#include <iostream>
using namespace std;
class bankAccount
{
    private:
    string accno,name,accType,acc_open_date;
    float balance;
    public:
    Account(string,string,string,string,float);
    Account(string,string,string);
    Account();
    void deposit(float amount);
    void withdraw(float amount);
    void display();
};
bankAccount::Account(string accnum,string n,string acctype,string accdate,float bal)
{
    accno=accnum;
    name=n;
    accType=acctype;
    acc_open_date=accdate;
    balance=bal;
}
bankAccount::Account(string accnum,string n,string acctype)
{
    accno=accnum;
    name=n;
    accType=acctype;
    balance=0;
}
bankAccount::Account()
{
    accno="";
    name="";
    accType="";
    balance=0;
}
void bankAccount::display()
{
    cout<<"Account Number: "<<accno<<"\nAccount Name: "<<name<<"\nAccuont Type: "<<accType<<"\nDate: "<<acc_open_date<<"\nAccount Balance: "<<balance;
}

int main()
{
    bankAccount acc1;


    acc1.Account("1010","Sagor","Savings");
       acc1.display();

    return 0;
}
