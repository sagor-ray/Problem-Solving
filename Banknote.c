#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[7]={100,50,20,10,5,2,1};
    int arr[7];
    for(i=0;i<7;i++)
    {
        arr[i]=n/array[i];
        n=n%array[i];
    }
     printf("NOTAS:\n");
    for(i=0;i<7;i++)
    {
          printf("%d nota(s) de R$ %d\n",arr[i],array[i]);
    }
 printf("MOEDAS:\n");

 for(j=0)
    return 0;
}
