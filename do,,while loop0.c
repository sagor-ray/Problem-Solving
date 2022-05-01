#include <stdio.h>
int main()
{
    int number;
    do
    {
        printf("Enter a number");
        scanf("%d",&number);
    }
    while(number<10);
    return 0;
}
