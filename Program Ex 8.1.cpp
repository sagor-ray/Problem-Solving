#include <iostream>
using namespace std;
class Account
{
    public:
    string cus_name;
    int acc_no;
    float balance;
    void cus_info();
    void display();
};
void Account::cus_info()
{
    cout<<"Enter your Name: ";
    cin>>cus_name;
    cout<<"Account Number: ";
    cin>>acc_no;
    //cout<<"Enter the initialize amount: ";
    //cin>>balance;
}
void Account::display()
{
    cout<<"\n\n\nCustomer Name: "<<cus_name<<"\nAccount Number: "<<acc_no<<"\nBalance: "<<balance;
}
class Cur_acct:public Account
{
    public:
    double balance=1000;

    void cheque();
    void deposit();
    void display();
};
void Cur_acct::cheque()
{
    float amount;
    string cname;
    cout<<"Enter the cheque receiver name: ";
    cin>>cname;
    cout<<"Enter the amount: ";
    cin>>amount;
    if(balance-amount>50)
    {
        balance=balance-amount;
        cout<<"Cheque receiver: "<<cname;
        cout<<"Transection is successful.\n\n";
        cout<<"Balance: "<<balance;
    }
}
void Cur_acct::deposit()
{
    float money;
    cout<<"Enter the amount of money: ";
    cin>>money;
    balance=balance+money;
}
void Cur_acct::display()
{
    cout<<"Balance= "<<balance;
}
class sav_acct:public Cur_acct
{
    public:


    void deposit();
    void withdraw();

};
void sav_acct::withdraw()
{
    double amount,balance;
    cout<<"Enter The amount: ";
    cin>>amount;
    if(balance-amount>=0)
    {
        balance=balance-amount;
        cout<<"Transection is successfull.\n\n";
        cout<<"Balance= "<<balance;
    }
    else
    {
        cout<<"Transection is failed.";
    }
}
void sav_acct::deposit()
{
    double money,balance,interest;
    cout<<"Enter the amount of money: ";
    cin>>money;
    interest=money*0.02;
    balance=balance+money+interest;
    cout<<"Current Balance with 20% interest: "<<balance;
}
int main()
{
    sav_acct A;

    int choice;

    cout<<"Enter the type of the account\n"<<"1.Savings\n"<<"2.Current\n\n"<<"Choice : ";
    cin>>choice;


    switch(choice)
    {
        case 1:{
                sav_acct s;
                s.Account::cus_info();
                s.Account::display();
                do
                {
                     cout<<"\n\n1.Deposit\n"<<"2.Withdraw\n"<<"3.Exit\n\n"<<"Enter the choice: ";
                     cin>>choice;
                     switch(choice)
                     {
                         case 1:
                         {
                             s.deposit();
                             break;
                         }
                         case 2:
                         {
                             s.withdraw();
                             break;
                         }
                     }
                }
                while(choice!=3);
               break;

             }
             case 2:
             {
                 Cur_acct c;
                 c.Account::cus_info();
                 c.Account::display();
                 do
                 {
                     cout<<"\n\n1.Deposit\n"<<"2.Cheque Withdrawl\n"<<"3.Exit\n\n"<<"Enter your choose: ";
                     cin>>choice;
                     switch(choice)
                     {
                         case 1:
                         {
                             c.deposit();
                             c.display();
                             break;
                         }
                       case 2:
                       {
                           c.cheque();
                           break;
                       }
                     }
                 }
                 while(choice!=3);
                 break;
             }
    }
    return 0;
}
