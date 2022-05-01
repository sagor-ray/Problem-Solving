#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float x;
    a=280;
    b=85;
    c=25;
    scanf("%d%d%d",&a,&b,&c);
    x=a/(b-c);
    printf("The value of x is:%f",x);
    return 0;
}
