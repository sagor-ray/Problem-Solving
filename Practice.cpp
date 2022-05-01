#include <iostream>
using namespace std;
int main()
{
     float a,b,c,d,R1,R2;
    d=sqrt(b*b-(4*a*c));
    if(a!=0 && d>0)
    {
        R1=(-b+d)/2a;
        R2=(-b-d)/2a;
        cout<<"R1= "<<R1;
        cout<<"R2= "<<R2;
    }
}
