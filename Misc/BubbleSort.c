#include<stdio.h>
int n;
void ascending(int A[]);
void print(int A[]);
int main()
{
    int i;
    printf("No. of elements = ");
    scanf("%d",&n);
    
    int A[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        //printf("i = %d\n",i);
        scanf("%d",&A[i]);
    }
    //printf("OUT!!");
    print(A);
    ascending(A);
    printf("\nSorted Array:\n");
    print(A);
    return 0;
}
void ascending(int A[])
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
               temp = A[j];
               A[j]=A[j+1];
               A[j+1]=temp; 
            }
        }
        print(A);
    }
}
void print(int A[])
{
    printf("\nThe array :\n");
    for(int i=0;i<n;i++)
    printf("%d\t",A[i]);
    
}