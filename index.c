#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,j,array[2][2];
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
   {
     printf("The point of [%d][%d]: ",i,j);
     scanf("%d",&array[i][j]);
   }
 }
 printf("The two dimentional array is:\n");
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         printf("%d ",array[i][j]);
     }
       printf("\n");
 }
 return 0;
}
