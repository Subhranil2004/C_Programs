#include<stdio.h>
#include<stdlib.h>
int n,A[20];
void display();
void ascending()
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=A[i];
        for(j=i-1;j>=0;j--)
        {
            if(k<A[j])
            A[j+1]=A[j];
            else
                break;
            
        }
        A[j+1]=k;
        display();
    }
}
void display()
{
    int i;
    printf("\nThe array :\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\n");
}
int main()
{
    int i;
    printf("Enter no. of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    display();
    ascending();
    display();
    return 0;
}