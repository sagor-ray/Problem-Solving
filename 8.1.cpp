#include<iostream>
using namespace std;
class account
{
    protected:
    char name[20],acctype[20];
    int accno;
    double balance,amount;
    public:
    void customer_info();
};
void account::customer_info()
{
    cout<<"\nEnter Customer name: ";
    cin>>name;

    cout<<"Enter customer ID: ";
    cin>>accno;
    cout<<"Enter the initial amount: ";
    cin>>balance;
}
class cur_acct:public account
{

    public:
    void deposite();
    void withdraw();
    void display();
    void display1();
};
void cur_acct::deposite()
{
   double amount;
   cout<<"Enter your amount: ";
   cin>>amount;
   balance=balance+amount;
   cout<<"Current Balance= "<<balance;
}
void cur_acct::withdraw()
{

    cout<<"\nYou should maintain a minimum balance.If your balance will be below 500, a service charge is imposed for you\n";
    cout<<"\n\nEnter the name of check receiver: ";
    cin>>name;
    cout<<"Enter your amount: ";
    cin>>amount;
    if(amount>balance)
    {
        cout<<"Invalid amount.";
    }
    else
    {
        balance=balance-amount;
        cout<<"Balance= "<<balance;
    }
}
void cur_acct::display()
{
    cout<<"\nName: "<<name<<endl<<"Account ID: "<<accno<<endl<<"Balance: \n"<<balance;
}

void cur_acct::display1()
{
    cout<<"\nCheck Receiver Name: "<<name<<endl<<"Account ID: "<<accno<<endl<<"Receive Money: "<<amount<<endl<<"Balance: \n"<<balance;
}
class sav_acct:public account
{
    public:
    void deposite();
    void withdraw();
    void display();
};
void sav_acct::deposite()
{
    double amount,year;
    cout<<"Enter your amount: ";
    cin>>amount;
    cout<<"Enter year: ";
    cin>>year;
    balance=balance+amount+(amount*0.15);
    cout<<"Current Balance: "<<balance;
}
void sav_acct::withdraw()
{
    double amount;
    cout<<"Enter your amount: ";
    cin>>amount;
    if(amount>balance)
    {
        cout<<"Invalid amount.";
    }
    else
    {
        balance=balance-amount;
        cout<<"Balance= "<<balance;
    }
}
void sav_acct::display()
{
    cout<<"\nName: "<<name<<endl<<"Account ID: "<<accno<<endl<<"Balance: \n"<<balance;
}
int main()
{
    int choice;
    cout<<"Here are 2 kind of Bank Account:  ";
    cout<<"\n\n1.Savings\n2.Current";
    cout<<"\n\nEnter your choice: ";
    cin>>choice;
    switch(choice)
    {
           case 1:
           {
               sav_acct s;
               s.customer_info();
               do
               {
               cout<<"\n\n1.Deposite\n2.Withdraw\n3.Exit";
               cout<<"\n\nEnter Your Choice: ";
               cin>>choice;
               switch(choice)
               {
                   case 1:
                   {
                       s.deposite();
                       s.display();
                       break;
                   }
                   case 2:
                   {
                       s.withdraw();
                       s.display();
                       break;
                   }
               }
           }

        while(choice!=3);
        break;
    }

    case 2:
    {
        cur_acct c;
        c.customer_info();

        do
               {
               cout<<"\n\n1.Deposite\n2.Withdraw\n3.Exit";
               cout<<"\n\nEnter Your Choice: ";
               cin>>choice;
               switch(choice)
               {
                   case 1:
                   {
                       c.deposite();
                       c.display();
                       break;
                   }
                   case 2:
                   {
                       c.withdraw();
                       c.display1();
                       break;
                   }
               }
           }

        while(choice!=3);
        break;
    }
    }
}


