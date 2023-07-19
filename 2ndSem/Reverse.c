//reverse the string
#include<stdio.h>
char* reverse(char*);
int main()
{
    char str[30];
    printf("Enter a string : ");
    scanf("%s",str);
    printf("The reversed string : %s",reverse(str));
    return 0;
}
char* reverse(char str[30])
{
    char revstr[30];
    int i=0;
    int c = 0;
    while(str[i]!='\0')
    {
        c++;
        i++;
    }
    c--;i=0;
    for(i=0;i<=c;i++)
    {
        revstr[i] = str[c-i];
    }
    str = revstr;
    return str;
    
}