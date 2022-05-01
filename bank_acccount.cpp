#include <iostream>
using namespace std;
class acc
{
    string name;
    double accno;
    public:
    void setname(string n)
    {
        name=n;
    }
    void setaccno(double a)
    {
        accno=a;
    }
    string getname()
    {
        return name;
    }
    double getaccno()
    {
        return accno;
    }
};
class savingacc : public acc
{
    double deposit;
    double balance;
    public:
    void setdeposit(double d)
    {
        deposit=d;
    }
    void setbalance(double b)
    {
        balance=b;
    }
    double getdeposit()
    {
        return deposit;
    }
    double getbalance()
    {
        return balance;
    }

    void withdraw ()
    {
        int money;
        cout<<"Enter the amount of money: ";
        cin>>money;
        if (balance-money>=0)
        {


                balance=balance-money;

                cout<<"The Transection is successful\n";

        }
        else
            cout<<"Transection cannot be done\n";
        }
        void deposit1()
        {
            int money;
            cout<<"Enter the amount of money : ";
            cin>>money;
            balance=balance+money;
        }
        void display()
        {
            cout<<"Balance: "<<balance<<"\n\n";

        }

};
class curracc: public acc
{
    double deposit;
    double balance;
    public:
    void setdeposit(double d)
    {
        deposit=d;
    }
    void setbalance(double b)
    {
        balance=b;
    }
    double getdeposit()
    {
        return deposit;
    }
    double getbalance()
    {
        return balance;
    }
    void cheque()
    {
        int money;
        string bname;
        cout<<"Enter the name of cheque reciever: ";
        cin>>bname;
        cout<<"Enter the amount of money: ";
        cin>>money;
        if(balance-money>50)
        {
            if(balance==0)
            cout<<"Transection cannot be successful\n";
            else
            {
                balance=balance-money;
                cout<<"The transection is successful\n";

            }
        }
    }
    void deposit1()
    {
        int money;
        cout<<"Enter the amount of money: ";
        cin>>money;
        balance=balance+money;
    }
    void display()
    {
        cout<<"Balance : "<<balance<<"\n\n";

    }
    void display1(string bname,int money)
    {
        cout<<"Cheque receiver: "<<bname;
        cout<<"Money : "<<money;
        cout<<"Balance: "<<balance;
    }
};
int main()
{
    int choice;
    cout<<"Enter the type of the account\n"<<"1.Current\n"<<"2.Saving\n\n"<<"Choice : ";
    cin>>choice;
    cout<<"\n\n";
    switch(choice)
    {
        case 1:{
               curracc c1;
               string h;
               cout<<"Enter the name of the account holder: ";
               cin>>h;
               c1.setname(h);
               double k;
               cout<<"Account No: ";
               cin>>k;
               c1.setaccno(k);
               cout<<"Account Name : "<<c1.getname()<<"\n";
               cout<<"Account Number: "<<c1.getaccno()<<"\n";
               cout<<"Balance : "<<c1.getbalance();
               do
               {
                   cout<<"\n\n1.Deposit\n"<<"2.Withdraw\n"<<"3.Exit\n\n"<<"Enter the choice: ";
                   cin>>choice;
                   switch (choice)
                   {
                       case 1:
                           c1.deposit1();
                           c1.display();
                           break;
                       case 2:
                            c1.cheque();
                            c1.display();
                            break;
                   }
               }
               while(choice!=3);
               break;
        }
        case 2:
        {
            savingacc a1;
            string h;
            cout<<"Enter the name of account holder: ";
            cout<<h;
            a1.setname(h);
            double k;
            cout<<"Account No: ";
            cin>>k;
            a1.setaccno(k);
            cout<<"Account name: "<<a1.getname()<<"\n";
            cout<<"Account Number: "<<a1.getaccno()<<"\n";
            cout<<"Balance: "<<a1.getbalance();
            do
            {
                cout<<"\n\n1.Deposit\n"<<"2.Withdrawl\n"<<"3.Exit\n"<<"Enter the choice: ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    a1.deposit1();
                           a1.display();
                           break;
                       case 2:
                            a1.withdraw();
                            a1.display();
                            break;
                }
            }
            while(choice!=3);
            break;
        }
    }
}
