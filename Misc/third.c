//WAP to chk upper or lowercase character.
#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("Uppercase");
    else if(c>='a' && c<='z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
}