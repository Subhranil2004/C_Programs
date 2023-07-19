#include<stdio.h>
#include<stdlib.h>
void print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int i,k=0;
    int *ptr;
    ptr=calloc(5,sizeof(int));
    for(i=1;k<=5;i++)
    {
        if(i%2!=0)
        {
            ptr[k]=i;
            k++;
        }
    }k=0;
    print(ptr,5);
    ptr=realloc(ptr,6);
    for(i=2;k<=6;i++)
    {
        if(i%2==0)
        {
            ptr[k]=i;
            k++;
        }
    }
    print(ptr,6);
    free(ptr);
    return 0;
}