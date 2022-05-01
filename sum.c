#include <stdio.h>
int main()
{
    int number,temp;
    long int sum=0;
    printf("Enter a number:\n");
    scanf("%d,&number");
    temp=number;
    while(number!=0)
    {
        sum=sum*number;
        number--;
    }
    printf("summation of %d is %1d",temp,sum);
    return 0;
}
