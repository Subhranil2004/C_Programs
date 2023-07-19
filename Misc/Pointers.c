#include<stdio.h>
void printAddress1(int n)
{
    printf("%p\n",&n); 
    printf("%u\n",&n);   
}
void printAddress2(int* n)
{
    printf("%p\n",n);
    printf("%u\n",n);    
}
int main()
{
    int n=4;
    printf("%p\n",&n);
    printf("%u\n",&n);
    printAddress1(n);
    printAddress2(&n);
    return 0;
}