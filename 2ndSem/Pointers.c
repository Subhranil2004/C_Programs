#include <stdio.h>
float power(float X, int n)
{
    int i;float pow=1;
    for(i=1;i<=n;i++)
        pow*=X;
    return pow;    
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int GCD(int m, int n)
{
    int i;
    for(i=m<n?m:n;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        return i;
    }
}

int sumArray(int n, int A[n])
{
    int i,sum = 0;
    for(i=0;i<n;i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main()
{
    char ch;float X;int n,a,b;
    printf("Enter choice of subpart...");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':printf("Enter the values of X and n: ");
        scanf("%f%d",&X,&n);
        printf("%f^%d = %f",X,n,power(X,n));
        break;
        
        case 'b':
        case 'B':printf("Enter the values of a and b : ");
        scanf("%d%d",&a,&b);
        printf("a = %d\nb = %d",a,b);
        swap(&a,&b);
        printf("\nAfter swap :\na = %d\nb = %d",a,b);
        break;
        
        case 'c':
        case 'C':printf("Enter two integers: ");
        scanf("%d%d",&a,&b);
        printf("GCD of %d and %d = %d",a,b,GCD(a,b));
        break;
        
        case 'd':
        case 'D':printf("Enter the size of array: ");
        scanf("%d",&n);
        int A[n];
        printf("Enter %d elements :",n);
        for(b=0;b<n;b++)
            scanf("%d",&A[b]);
        printf("Sum of %d elements = %d",n,sumArray(n,A));
        break;
    }
    return 0;
}