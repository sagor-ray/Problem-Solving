#include <stdio.h>
int main ()
{
    float i,j,d,sum=0;
    for(i=1;i<100;i=i+2)
    {
     for(j=2;j<=100;j=j+2)
    {
        d=i/j;
         sum=sum+d;
    }
    }
    printf("The summation of the series is %f.",sum);
    return 0;
}
