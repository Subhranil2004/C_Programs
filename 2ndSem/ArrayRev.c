#include<stdio.h>
void display(int n,int A[])
{
    int i;
    printf("The Elements of the Array :\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\n");
}

void swap(int *A,int a,int b)
{
    A[a] = A[a] + A[b];
    A[b] = A[a] - A[b];
    A[a] = A[a] - A[b];
}
int main()
{
    int n,i;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    display(n,A);
    for(i=0;i<n/2;i++)
    swap(A,i,n-i-1);
    display(n,A);
    return 0;
}