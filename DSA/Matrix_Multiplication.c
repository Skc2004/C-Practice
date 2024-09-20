#include <stdio.h>


int main()
{
    int row1,column1,row2,column2,i,j;
    printf("Enter the row and column of the first matrix: ");
    scanf("%d %d",&row1,&column1);
    printf("Enter the row and column of the second matrix: ");
    scanf("%d %d",&row2,&column2);
    if(column1!=row2)
    {
        printf("Matrices can't be multiplied");
        return 0;
    }
    int **a = (int **)malloc(row1 * sizeof(int *));
    for (i = 0; i < row1; i++) 
    {
        a[i] = (int *)malloc(column1 * sizeof(int));
    }

    int **b = (int **)malloc(row2 * sizeof(int *));
    for (i = 0; i < row2; i++) 
    {
        b[i] = (int *)malloc(column2 * sizeof(int));
    }

    int **c = (int **)malloc(row1 * sizeof(int *));
    for (i = 0; i < row1; i++) {
        c[i] = (int *)malloc(column2 * sizeof(int));
    }
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<row1;i++) 
    {
        for(int j=0;j<column1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<column1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The product of the two matrices is:\n");
    for(int i=0;i<row1;i++)
    {
    for(int j=0;j<column2;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");  
    }
    return 0;
}