#include <iostream>
using namespace std;
int main()
{
    int i,j,index[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the value of the position ["<<i<< "]"<< "["<<j<<"] = ";
            cin>>index[i][j];
        }
    }
    cout<<"\n\nthe two dimensional array is:\n\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             cout<<"  "<<index[i][j] ;
        }
      cout<<"\n\n";
    }
}
