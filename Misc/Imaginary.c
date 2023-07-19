#include<stdio.h>
struct Complex
{
    float real, img;
}n1,n2,result;

int main()
{
    printf("Enter the 2 nos.");
    scanf("%f %f",&n1.real,&n1.img);
    scanf("%f %f",&n2.real,&n2.img);
    result.real = n1.real+n2.real;
    result.img = n1.img+n2.img;
    printf("%f+%fi  +   %f+%fi = %f+%fi ",n1.real,n1.img,n2.real,n2.img,result.real,result.img);
    return 0;
}