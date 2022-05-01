#include <stdio.h>
#include <math.h>
int main()
{
    float principle,time,rate,interest;
    printf("input the amount of principle:\n");
    scanf("%f",&principle);
    printf("input the time period:\n");
    scanf("%f",&time);
if(principle<1000000)
{
    rate=12;
    interest=(principle*time*rate)/100;
    printf("the interest of the principle is %f",interest);
}
else
{
    rate=10;
    interest=(principle*time*rate)/100;
    printf("the interest is %f",interest);
}
return 0;
}
