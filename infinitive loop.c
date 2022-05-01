#include <stdio.h>
int main()
{
    int i;
    for(i=1;i>2;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("This is a loop");
    }
    printf("This is after break");
    return 0;
}

