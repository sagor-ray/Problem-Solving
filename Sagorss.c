#include <stdio.h>
int main()
{
    int i,j,k,count=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            for(k=1;k<=5;k++)
            {
                printf("%d %d %d %d\n",count,i,j,k);
                count++;
            }
        }
    }

return 0;
}
