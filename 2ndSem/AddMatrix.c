//Add Matrices
#include<stdio.h>

void display(int r,int c,int M[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",M[i][j]);
        printf("\n");
    }
}
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows and cols of the matrix :");
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c],C[r][c];
    printf("Enter %d elements for each of matrices A and B :",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&A[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        C[i][j] = A[i][j] + B[i][j];
    }

    printf("Matrix A :\n");
    display(r,c,A);
    printf("Matrix B :\n");
    display(r,c,B);
    printf("Matrix (A + B) :\n");
    display(r,c,C);
    return 0;
}