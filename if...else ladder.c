#include <stdio.h>
main()
{
    int marks;
    printf("Enter your marks in a subject:\n");
    scanf("%d",&marks);
    if(marks>79)
    {
        printf("A+");
    }
    else if(marks>69 && marks<=79)
        {
            printf("A");
        }
    else if(marks>59 &&marks<=69)
    {
        printf("A-");
    }
    else if(marks>49 && marks<=59)
    {
        printf("B");
    }
    else if(marks>=33 && marks<=49)
    {
        printf("C");
    }
        else
        {
            printf("F");
        }
    }

