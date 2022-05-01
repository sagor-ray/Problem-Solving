#include <stdio.h>
#include <math.h>
int main()
{
    float amount, interest, time, interest_rate;
    printf("input the net amount\n");
    scanf("%f",&amount);
    printf("input the time period\n");
    scanf("%f",&time);
    if(amount<1000000)
    {
        interest_rate=12;
        interest=(amount*time*interest_rate)/100;
        printf("the interest of %f is %f",amount,interest);
    }
    else
    {
        interest_rate=10;
        interest=(amount*time*interest_rate)/100;
        printf("the interest of %f is %f",amount,interest);
    }
    return 0;
}
