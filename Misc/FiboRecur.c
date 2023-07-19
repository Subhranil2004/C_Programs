#include<stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    int i = fibo(n-1);
    printf("%d",i);
    return 0;
}
int fibo(int n)
{
    if(n<=1)
    return n;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }

}