#include<stdio.h>
typedef struct Complex 
{
    float real,imag;
}complex;

void main()
{
    

    complex c1;
    complex* ptr = &c1;
    printf("Enter real and imaginary part = ");
    scanf("%f %f",&ptr->real,&ptr->imag);
    printf("\n%f+%fi",ptr->real,ptr->imag);
}


