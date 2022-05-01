#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number: ");
    scanf("%d%d%d",&a,&b,&c);
((a>b)&&(a>c))?printf("The largest number is %d",a):((b>a&&b>c))?printf("the largest number is %d",b):printf("The largest number is %d",c);
    return 0;
}

