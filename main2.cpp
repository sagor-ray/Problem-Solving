#include <iostream>
using namespace std;
class bank_account
{
    string name,accType,accno;
    double balance;
    public:
    void customer_info()
    {
        cout<<"Chose an account type: ";
        cin>>accType;
        cout<<"Enter the  name Account Holder: ";
        cin>>name;
        cout<<"Enter the Acount Number: ";
        cin>>accno;
        cout<<"Enter The Inatialize value: ";
        cin>>balance;
    }
    void Diposit()
    {
        float amount;
        cout<<"\nEnter the deposit amount: ";
        cin>>amount;
        balance=balance+amount;
        cout<<"\nAccount Balance: "<<balance<<endl;
    }
    void withdraw()
    {
        float amount;
        cout<<"\n\nEnter the withdrawl amount: ";
        cin>>amount;
        if(balance>=amount)
        {
            balance=balance-amount;
            cout<<"Transection is successful."<<endl;
            cout<<"\nAccount Balance: "<<balance<<endl;
        }
        else
        {
            cout<<"Transection is failed.Try again with a valid amount.Thank you!!!"<<endl;
            cout<<"\nAccount Balance: "<<balance<<endl;
        }
    }
    void Display()
    {
        cout<<"\n\nCustomer Name: "<<name<<endl<<"Account Type: "<<accType<<endl;
        cout<<"Account Number: "<<accno<<endl<<"Current Balance: "<<balance<<endl;
    }
};

int main()
{
    bank_account a1;
    a1.customer_info();
    a1.Display();
    a1.Diposit();
    a1.withdraw();
    return 0;
}
