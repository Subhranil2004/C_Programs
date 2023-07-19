#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], out[50];
    int count, k=0;
    int *arr = (int*)calloc(50,sizeof(int));
    printf("Enter your string : ");
    gets(str);
    printf("The frequencies of the letters : \n");

    for(int i=0;i<strlen(str);i++)
    {
        if(arr[i] == 1)
        continue;
        count = 1;
        for(int j=i+1; j<strlen(str);j++)
        {
            if(str[i] == str[j])
            {
                arr[j] = 1;
                count++;
            }
        }
        printf("%c : %d\n", str[i], count);
        if(count == 1)
        out[k++] = str[i];
    }
    out[k] = '\0';
    printf("\nNow the transformed string : %s",out);
    return 0;
}