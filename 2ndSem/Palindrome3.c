//check whether a input string is palindrome
#include<stdio.h>
char* Caps(char*);
int palin(char*);

int main()
{
    char str[30];
    printf("Enter a string :");
    scanf("%s",str);
    if(palin(Caps(str)))
    printf("%s is a palindrome.");
    else
    printf("%s is not a palindrome.");
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
int palin(char str[30])
{
    char a;int i=0;
    int c = 0;
    while(str[i]!='\0')
    {
        c++;
        i++;
    }
    c--;i=0;
    a = str[i];
    for(i=0;i<=c/2;i++)
    {
        if(str[i] != str[c-i])
        return 0;
        
    }
    return 1;

}