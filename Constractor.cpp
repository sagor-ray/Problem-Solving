#include<iostream>
using namespace std;
class constractor
{
    public:
    int sum;
    int num1,num2,num3,num4,num5;
   constractor(int a,int b);
   constractor(int x,int y,int z);
   void addition();
};
/*constractor::constractor(int a,int b)
{
    num1=a;
    num2=b;
}*/
constractor::constractor(int x,int y,int z)
{
    num3=x;
    num4=y;
    num5=z;
}
void constractor::addition()
{
    sum=0;
    sum=/*num1+num2+*/num3+num4+num5;
    cout<<"The summation of the 3 numbers is: "<<sum;
}
int main()
{

   // constractor object1(10,20);
    constractor object(30,40,50);
    object.addition();
    return 0;
}
