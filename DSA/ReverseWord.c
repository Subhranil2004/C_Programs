#include<stdio.h>
#include<string.h>
void reverse(char *str, char *rev);
int main()
{
    char str[50],rev[50];
    printf("Enter a String : ");
    scanf("%[^\n]",str); //Using fgets(str, 50, stdin); will store the enter key as well in str.
    reverse(str,rev);
    printf("Reversed String: %s",rev);
    return 0;
}
void reverse(char *str, char *rev)
{
    int i,j,index = 0;
    //char rev[50];
    i=strlen(str)-1;
    while(i>=0)
    {
        if(i==0 || str[i-1] == ' ')
        {
            j=i;
            while(str[j] != ' ' && str[j] != '\0')//USE && NOT ||
            {
                rev[index++] = str[j];
                j++;
            }
            rev[index++]=' ';i--;
        }
        //printf("Rev = %s\n",rev);
        i--;
    }
    rev[index] = '\0';
    //return rev; Not reqd...
}
//Errors corrected
//1.char *str *rev --> str[50] rev[50]        2.Dont return the address of local var.