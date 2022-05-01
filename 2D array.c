#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the value of row: ");
    scanf("%d",&n);
    printf("Enter the value of coloumn: ");
    scanf("%d",&m);
    printf("\n\n");
    int A[n][m],B[n][m],C[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter the value of A[%d,%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The two dimentional matrix is\n A=");
    for(i=0;i<n;i++)
    {
        printf("\t");
        for(j=0;j<m;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    return 0;
}
