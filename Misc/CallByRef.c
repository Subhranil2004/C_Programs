#include<stdio.h>
void func(int n1,int n2,float* add,float* mult,float* avg)
{
    *add=n1+n2;
    *mult=n1*n2;
    *avg=*add/2;
}
int main()
{
    int n1,n2;float add,mult,avg;
    printf("Enter 2 nos. = ");
    scanf("%d %d",&n1,&n2);
    func(n1,n2,&add,&mult,&avg);
    printf("Sum,mult and avg of %d and %d are %f, %f and %f respectively.",n1,n2,add,mult,avg);
    return 0;
}