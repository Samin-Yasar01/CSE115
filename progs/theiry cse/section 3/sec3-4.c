Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include<stdio.h>
int main()
{
    int i, j, n, Sum=0;
    printf("Enter the size of matrix ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the value:");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nmatrix[%d][%d] = ", i, j);
            scanf("  %d", &matrix[i][j]);
        }
    }
    printf("\nmatrix =  \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("  %d", matrix[i] [j]);
        }
        printf("\n");
    }
    for(i=0; i<=n; i++)
    {
        for(j=n; j>=0; j--)
        {
           if(i<=j)
           {
             Sum+= matrix[i][j];
           }
        }
    }
    printf("Sum= %d", Sum);
}
