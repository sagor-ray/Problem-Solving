#include <stdio.h>
int main()
{
    int number,a;
    long int factorial=1;
    printf("Enter a number:\n");
    scanf("%d,&number");
    a=number;
    while(number!=0)
    {
        factorial=factorial*number;
        number--;
    }
    printf("Factorial of %d is %d",a,factorial);
    return 0;
}
