#include<iostream>
using namespace std;
class account
{
    public:
    string name,acctype;
    int accnum;
    double balance;
    void setvalue();
    void deposit();
    void withdraw();
    void display();

};
void account::setvalue()
{

    cout<<"Enter your Account Type: ";
    cin>>acctype;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your Account ID no: ";
    cin>>accnum;
    balance=1000;
    cout<<"Present Balance is: 1000.";
}
void account::deposit()
{
    int amount;
    cout<<"\n\nEnter any amout for deposit: ";
    cin>>amount;
    balance=balance+amount;
    cout<<"\nBalance= "<<balance;
}
void account::withdraw()
{
    int amount;
      cout<<"\n\nEnter any amout for withdrawl: ";
    cin>>amount;
    if(balance>amount)
    {
        balance=balance-amount;
        cout<<"Balance= "<<balance;
    }
    else
    {
        cout<<"invalid amout.";
        cout<<"Balance= "<<balance;
    }
}
void account::display()
{
    cout<<"\n\nName: "<<name<<endl<<"Account Type: "<<acctype<<endl<<"Account No: "<<accnum<<endl<<"Current balance: "<<balance;

}
int main()
{
    account a;
    a.setvalue();
    a.deposit();
    a.withdraw();
    a.display();
}
