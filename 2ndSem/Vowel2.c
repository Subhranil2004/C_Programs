//the number of occurrence(s) of each vowel
#include<stdio.h>
void occurenceOfVowels(char*);
int main()
{
    char str[30];
    printf("Enter a string :");
    fgets(str, 30, stdin);
    occurenceOfVowels(str);
    return 0;
}
void occurenceOfVowels(char str[30])
{
    char a; int V[5];
    int i = 0;
    for(i=0;i<5;i++)
    V[i]=0;
    a = str[0];
    i=0;
    while(a!='\0'){
        
        switch(a)
        {
            case 'a':
            case 'A':V[0]++;break;
            case 'e':
            case 'E':V[1]++;break;
            case 'i':
            case 'I':V[2]++;break;
            case 'o':
            case 'O':V[3]++;break;
            case 'u':
            case 'U':V[4]++;break;
        }
        i++;
        a = str[i];
    }
    printf("Occurence of vowels :\nA/a : %d\nE/e : %d\nI/i : %d\nO/o : %d\nU/u : %d",V[0],V[1],V[2],V[3],V[4]);        
}