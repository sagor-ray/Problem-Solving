#include <stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             printf("%d %d %d\n",count,i,j);
             count++;
        }
    }
    return 0;
}

