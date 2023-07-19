//concatenate
#include<stdio.h>
void Concat(char*, char*);
int main()
{
    char str1[30], str2[30];
    printf("Enter 2 strings : ");
    scanf("%s",str1);
    scanf("%s",str2);
    Concat(str1,str2);
    return 0;
}
void Concat(char str1[30], char str2[30])
{
    char result[60];
    int i = 0, j = 0;

    // Copy the characters from the first string to the result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append the characters from the second string to the result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Add the null character at the end
    result[i] = '\0';
    printf("Resultant string : %s",result);
}