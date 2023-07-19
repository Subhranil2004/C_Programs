#include<stdio.h>
int calcHcf(int p,int q)
{
    if(q==0)return p;
    if(q>p)
    {
        calcHcf(q,p);
    }
    calcHcf(q,p%q);
}
int main()
{
    int n1,n2;
    printf("Enter 2 nos. : ");
    scanf("%d %d",&n1,&n2);
    int hcf = calcHcf(n1,n2);
    printf("The HCF of %d and %d is = %d",n1,n2,hcf);
    printf("\nTheir LCM is = %d",n1*n2/hcf);
    return 0;
}