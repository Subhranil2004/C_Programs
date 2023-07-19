#include<stdio.h>
int main()
{
    int i,c=0;
    char S[100];
    printf("Enter string = ");
    fgets(S,100,stdin);// OR scanf("%[^\n]s",S); until a newline is encountered. scanf("%[^.]s",S); Takes only 1 sentence.
    printf("String : %s",S);
    for(i=0;S[i] != '\0';i++)
    {
        if(S[i] == 'A'||S[i] == 'E'||S[i] == 'I'||S[i] == 'O'||S[i] == 'U'||S[i] == 'a'||S[i] == 'e'||S[i] == 'i'||S[i] == 'o'||S[i] == 'u')
        c++;
    }
    printf("No. of Vowels = %d",c);
}