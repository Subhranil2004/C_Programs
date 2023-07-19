//compare two input strings are similar or not
#include<stdio.h>
int str_cmp(char*, char*);
int main()
{
    char str1[30], str2[30];
    printf("Enter 2 strings = ");
    scanf("%s",str1);
    scanf("%s",str2);
    if(str_cmp(str1,str2))
    printf("%s and %s are same.",str1,str2);
    else
    printf("%s and %s aren't same.",str1,str2);
    return 0;
}
int str_cmp(char s1[30], char s2[30])
{
    char a,b;
    int i = 0;
    do{
        a = s1[i];b=s2[i];
        if(a != b)
            return 0;
        i++;
    }while(s1[i] != '\0');
    if(s2[i] == '\0')
    return 1;
    return 0;
}