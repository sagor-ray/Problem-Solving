#include <stdio.h>
int main()
{
    int row,col,i,j,A[10][10],B[10][10],C[10][10];
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&col);
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Input the element of A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix A= ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //B matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Input the element of B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B= ");
    for(i=0;i<row;i++)
    {
          printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Addition of Matrix A & B.
    printf("A+B= ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
     for(i=0;i<row;i++)
    {
          printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
