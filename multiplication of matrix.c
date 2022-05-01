#include <stdio.h>
int main()
{
    int n,m,o,p;
    printf("Enter the number  of row of matrix A: ");
    scanf("%d",&n);
    printf("Enter the number of coloumn of matrix A: ");
    scanf("%d",&m);
    printf("\n\n");
    int A[n][m],i,j;
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
    printf("\n\n");
    int B[o][p],C[n][p];
    printf("Enter the number of the row of matrix B: ");
    scanf("%d",&o);
    printf("Enter the number of the coloumn of matrix B:  ");
    scanf("%d",&p);
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("Enter the value of B[%d,%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B=");
    for(i=0;i<o;i++)
    {
        printf("\t");
        for(j=0;j<p;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    if(n==p)
    {

    }

    return 0;
}

