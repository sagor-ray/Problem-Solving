#include <stdio.h>
#include <math.h>
int main()
{
    float a,Celsius;
    printf("Enter a value of Fahrenheit:\n");
    scanf("%f",&a);
    Celsius=((a-32)/9)*5;
    printf("The Celsius value is:%f",Celsius);
    return 0;
}
