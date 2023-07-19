# include<stdio.h>
void main()
{
    int a,b,c;
    /*printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The inputs are: %d, %d and %d",a,b,c);
    printf("\nThe largest no. is : ");
    //(a>b)?(a>c?printf("%d",a):printf("%d",c)):(b>c?printf("%d",b):printf("%d",c));
    if(a>b)
    {
        if(a>c)
        printf("%d",a);
        else
        printf("%d",c);
    }
    else{
        if(b>c)
        printf("%d",b);
        else
        printf("%d",c);
    }*/
    do{
        printf("\nEnter a number : ");
        scanf("%d",&a);
        if(a%2==0)
    printf("\nEven");
    else
    printf("\nOdd");
    }while(a!=0);
}

