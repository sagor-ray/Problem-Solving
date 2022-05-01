#include <stdio.h>
int main()
{
    int a[]= {12,31,14,18,311,45,36},i;
    int value,position=-1;
    printf("Enter the value what you want to search in the array: ");
    scanf("%d",&value);
    for(i=0; i<7; i++)
    {
        if(value==a[i])
        {
            position=i+1;
            break;

        }
    }
    if(position==-1)
    {
        printf("number not found");
    }
    else
    {
        printf("The number of %d is in %d no position.",value,position);
    }

    getch();
}
