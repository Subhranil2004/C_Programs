#include<stdio.h>
void display(int r,int c,int A[r][c])//int *A?
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",A[i][j]);
        printf("\n");
    }
}

void multMat(int r1,int c1,int c2,int A[r1][c1],int B[c1][c2],int M[r1][c2])// OR  A[][c1] B[][c2] M[][c2]
{
    int i,j,k,sum;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum = 0;
           for(k=0;k<c1;k++)
           sum+=A[i][k] * B[k][j];
            M[i][j] = sum;
        }
    }
}
int main()
{
    int i,j,r1,c1,c2;
    printf("Enter no. of rows and cols of 1st matrix and cols of 2nd matrix : ");
    scanf("%d%d%d",&r1,&c1,&c2);
    int A[r1][c1],B[c1][c2],M[r1][c2];
    printf("Enter %d elements for Matrix A and %d elements for Matrix B : ",r1*c1,c1*c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        scanf("%d",&A[i][j]);//&A[i]+j?
    }
    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        scanf("%d",&B[i][j]);//&A[i]+j?
    }
    printf("Matrix A :\n");
    display(r1,c1,A);
    printf("Matrix B :\n");
    display(c1,c2,B);
    printf("Matrix (A*B) :\n");
    multMat(r1,c1,c2,A,B,M);
    display(r1,c2,M);
    return 0;
}
