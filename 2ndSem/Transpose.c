//Transpose of a matrix
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
    printf("Enter number of rows and cols for the matrix :");
    scanf("%d%d",&r,&c);
    int M[r][c],T[c][r];
    printf("Enter %d elements : ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&M[i][j]);
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        T[i][j] = M[j][i];
    }
    printf("Original Matrix :\n");
    display(r,c,M);
    printf("Transposed Matrix :\n");
    display(c,r,T);
    return 0;
}