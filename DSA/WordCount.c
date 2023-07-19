#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    char *pat = "the";
    int c = 0, i, k; // Had to initialize i!
    char newstr[300] = " ";
    printf("Enter the sentence : ");
    fgets(str, 300, stdin);
    strcat(newstr, str);
    for (i = 0; i < strlen(newstr); i++)
    {
        if (newstr[i] >= 'A' && newstr[i] <= 'Z')
            newstr[i] += 32;
    }

    i = 0;
    while (newstr[i] != '\0')
    {
        k = 0;
        if (newstr[i] == ' ' && newstr[i + 1] != ' ')
        {
            i++;
            while (newstr[i] == pat[k])
            {
                i++;
                k++;
            }
            if (pat[k] == '\0' && (newstr[i] == ' ' || newstr[i] == '.'))
                c++;
        }
        i++;
    }
    printf("No. of occurences of %s in the sentence is : %d", pat, c);
    return 0;
}