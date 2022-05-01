#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two number:\n");
    scanf("%d%d",&num1,&num2);
    if(num1!=num2)
    {
        if(num1>num2)
        {
            printf("Largest number is :%d",num1);
        }
        else
            {printf("Largest number is :%d",num2);
    }
    }
    else
    {
        printf("Both numbers are equal");
    }
    return 0;
}

