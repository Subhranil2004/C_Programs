#include<stdio.h>
void printFibo(int n)
{
    int t1=0,t2=1,t3=t1+t2;
    if(n==1)printf("%d",0);
    if(n>=2)printf("%d  %d  ",0,1);
    
    for(int i=3;i<=n;i++)
    {
        t3= t1+t2;
        printf("%d  ",t3);
        t1=t2;t2=t3;
    }


}


int main()
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printFibo(n);
    return 0;
}