#include<stdio.h>
int fn(int, char, float);
int fn(int a, char c, float f)
{
    printf("%c",c);
    return a+f;
}
int main()
{
    printf("\n%d",fn(3,'c',4.5));
    return 0;
}