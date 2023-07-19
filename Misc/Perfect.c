#include<stdio.h>

int per(int n,int k,int sum)
{
    
    if(k==1){
        sum++;
        printf("%d = %d",1,sum);return sum; 
        }
    else
    {
        if(n%k==0) 
        {
            sum+=k;printf("%d + ",k);
        }
        per(n,k-1,sum);
    }
}
int main()
{
    int n;
    printf("No. = ");
    scanf("%d",&n);
    if(per(n,n/2,0)==n)
    printf("\nPerfect no.");
    else printf("\nNon perfect no.");
    return 0;
}