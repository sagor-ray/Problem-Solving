#include <iostream>
using namespace std;
class Bank_account
{
        public:
    string name;
    double accno;

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
class savingacc : public Bank_account
{
    double deposit,balance=500;
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
    void withdraw()
    {
        int money;
        cout<<"Enter the amount: ";
        cin>>money;
        if(balance-money>=0)
        {
            balance=balance-money;
            cout<<"Transection is successful\n";
        }
        else
        {
            cout<<"Transection cannot be done\n";
        }
    }
    void deposit()
    {
        int dmoney;
        cout<<"Enter the amount: ";
        cin>>dmoney;
        balance=balance+dmoney;
    }
    void display()
    {
          cout<<"Account Balance= "<<balance<<"\n\n";
    }


};
class curracc : public Bank_account
{
    double deposit,balance=500;
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
    void withdraw()
    {
        int money;
        cout<<"Enter the amount: ";
        cin>>money;
        if(balance-money>=0)
        {
            balance=balance-money;
            cout<<"Transection is successful\n";
        }
        else
        {
            cout<<"Transection cannot be done\n";
        }
    }
    void deposit()
    {
        int dmoney;
        cout<<"Enter the amount: ";
        cin>>dmoney;
        balance=balance+dmoney;
    }
    void display()
    cout<<"Account Balance= "<<balance<<"\n\n";

};
int main()
{
    int choice;
    cout<<"Select the Account type\n\n"<<"1.Saving\n"<<"2.Current\n\n"<<"Choice: ";
    cin>>choice;
    cout<<"\n\n";
    switch(choice);
    {
        case 1:
              {
                  curracc c1;
                  string h[100];
                  cout<<"Enter the name of the account holder: ";
                  cin>>h[100];
                  c1.setname(h);
                  double k;
                  cout<<"Enter the account number: ";
                  cin>>k;
                  c1.setaccno(k);
                  cout<<"Account Name: "<<c1.getname()<<"\n";
                  cout<<"Account Number: "<<c1.getaccno()<<"\n";
                  cout<<"Account Balance: "<<c1.getbalance();
                  do
                  {
                      cout<<"1.Deposit\n"<<"2.Withdraw\n"<<"Exit\n\n"<<"Enter Your choice: ";
                      cin>>choice;
                      switch(choice);
                      {
                          case 1:

                                 c1.deposit();
                                 c1.display();
                                 break;
                          case 2:

                                 c1.withdraw();
                                 c1.display();
                      }
                  }

                  while(choice!=3);
                  break;
              }

              case 2:
              {
                 savingacc s1;
                  string h[100];
                  cout<<"Enter the name of the account holder: ";
                  cin>>h[100];
                  s1.setname(h);
                  double k;
                  cout<<"Enter the account number: ";
                  cin>>k;
                  s1.setaccno(k);
                  cout<<"Account Name: "<<s1.getname()<<"\n";
                  cout<<"Account Number: "<<s1.getaccno()<<"\n";
                  cout<<"Account Balance: "<<s1.getbalance();
                  do
                  {
                      cout<<"1.Deposit\n"<<"2.Withdraw\n"<<"Exit\n\n"<<"Enter Your choice: ";
                      cin>>choice;
                      switch(choice);
                      {
                          case 1:

                                 s1.deposit();
                                 s1.display();
                                 break;
                          case 2:

                                 s1.withdraw();
                                 s1.display();
                      }
                  }

                  while(choice!=3);
                  break;
              }
    }
}
