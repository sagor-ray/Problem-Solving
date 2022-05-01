#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the series number: ");
    scanf("%d",&n);
    int a[n];
    a[0]=1;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("\n\n");
    printf("The fibonacci series is:\n");
    for(i=0;i<n;i++)
    {
         printf(" %d ",a[i]);
    }

    getch();
}
