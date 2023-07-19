#include<stdio.h>
#include<conio.h> 
#define MAX 3//Global 

void main()
{
    int n,i,sum=0;
    //printf("Enter n : ");
    //scanf("%d",&n);
    for(i=1;i<=MAX;i++)
    sum+=i;
    printf("The sum of first %d natural nos. is : %d",n,sum);

}