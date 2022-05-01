#include <stdio.h>
int Sagor(int num1,int num2);
int main()
{
    int a=100,b=200,result;
result=Sagor(a,b);
printf("The max value is %d.",result);
return 0;
}
int Sagor(int num1,int num2)
{
    int result;
    if(num1>num2)
    {
       result=num1;
    }
    else
    {
         result=num2;
    }
    return result;
}
