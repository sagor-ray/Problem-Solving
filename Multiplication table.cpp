#include <iostream>
using namespace std;
int main()
{
    int n;
    for(n=1;n<=5;n++)
    {
        int m=0;
      for(int i=1;i<=10;i++)
      {
          m=m+n;
          cout<<n<<"x"<<i<<"="<<m<<endl;
      }
        cout<<endl<<endl;
    }
}
