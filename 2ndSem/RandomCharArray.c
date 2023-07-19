#include<stdio.h>
int main()
{
    int i;
    char C[100];
    for(i=0;i<100;i++)
    {
        if(C[i] != '\0' || C[i] != ' ')printf("%c\t",C[i]);
    }
    
}