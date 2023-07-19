#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,a,i,j;long long int sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=1;
        scanf("%d",&a);
        int A[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&A[j]);
        }
        for(j=0;j<a;j++)
        {
           sum*=A[j]; 
        }
        sum+=a-1;sum*=2022;
        printf("%lld\n",sum);
    }
    return 0;
}