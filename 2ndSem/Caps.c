#include<stdio.h>
char* Caps(char*);
int main()
{
    char str[30];
    printf("Enter a string :");
    fgets(str, 30, stdin);
    printf("Changed string = %s.",Caps(str));
    return 0;
}
char* Caps(char str[30])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
        i++;
    }
    return str;
}