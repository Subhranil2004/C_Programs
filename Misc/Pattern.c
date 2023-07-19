#include<stdio.h>
void pattern(int n)
{
    int i,k=1,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k);k++;
        }printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("\nPattern : \n");
    pattern(n);
    return 0;
}