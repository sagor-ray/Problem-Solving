#include <stdio.h>
main()
{
    int i,n;
    for(n=1;n<=5;n++)
    {
        printf("\n");
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }
    }
}
