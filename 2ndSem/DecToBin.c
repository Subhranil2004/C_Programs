#include <stdio.h>
long toBinary(int n)
{
    long bin=0;int c=0,temp;
    temp = n;
    while(temp!=0)
    {
        bin = bin*10+temp%2;
        temp/=2;
        if(bin == 0)
            c++;
    }
    temp = bin;
    bin = 0;
    while(temp!=0)
    {
        bin = bin*10+temp%10;
        temp/=10;
    }
    while(c!=0)
    {
        bin*=10;c--;
    }
    return bin;
}
int main()
{
    int n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    printf("The decimal equivalent of %d is: %ld",n,toBinary(n));
    return 0;
}