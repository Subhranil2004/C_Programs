#include<stdio.h>
//void display(int, int **);
void display(int n,int M[][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",M[i][j]);
        printf("\n");
    }
}

int isSymmetric(int n,int M[][n])
{
    int i,j;
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)break;
            if(M[i][j] != M[j][i])
                return 0;
                
            
        }
        
    }
    return 1;
}
int isLTriangular(int n,int M[][n])
{
    int i,j;
    for(i=0;i<n-1;i++)// n or n-1?
    {
        for(j=i+1;j<n;j++)
        {
            if(M[i][j] != 0)
            return 0;
        }
    }
    return 1;
}

int isDiagonal(int n,int M[][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            break;
            if(M[i][j] != 0)
            return 0;
        }
    }
    return 1;
}

int diagSum(int n,int M[][n])
{
    int sum = 0,i;
    for(i=0;i<n;i++)
        sum+=M[i][i]+M[i][n-i-1];
    if(n%2 != 0)
    sum-=M[(n-1)/2][(n-1)/2];
    return sum;
}
int main()
{
    int n,i,j,flag;
    printf("n = ");
    scanf("%d",&n);
    int M[n][n];
    printf("Enter %d elements :",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&M[i][j]);
    }
    printf("The Matrix is :\n");
    display(n,M);
    if(isSymmetric(n,M))
    printf("It is a Symmetric Matrix.");
    if(isLTriangular(n,M))
    printf("It is a Lower Triangular Matrix.");
    if(isDiagonal(n,M))
    printf("It is a Diagonal Matrix.");
    printf("\nThe sum of two diagonals = %d",diagSum(n,M));
    return 0;
}