#include <stdio.h>
#include <math.h>
int main()
{
    float a,Fahrenheit;
    printf("Enter a value of celsius:\n");
    scanf("%f",&a);
    Fahrenheit=((9*a)/5)+32;
    printf("The Fahrenheit value is:%f",Fahrenheit);
    return 0;
}
