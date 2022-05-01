#include <iostream>
using namespace std;
class acc
{
public:
    string name,acctype;
    double accno,balance;
    void assign_initial_value()
    {
        cout<<"Enter your initial values: ";
        cin<<balance;
    }
    void deposit()
    {
        cout<<"Enter deposit amount: ";
        cin>>accno;
        balance=balance+accno;
    }

    void withdraw()
    {
        cout<<"Enter the amount how much you want to withdraw: ";
        cin>>accno;

        balance=balance-accno;
        if(balance-accno<=0)
        {
            cout<<"Transection is successful.";

        }
        else
        {
            cout<<"Transection is not successful."
            }

        }
        void display()
    {
       cout<<""
    }
};
