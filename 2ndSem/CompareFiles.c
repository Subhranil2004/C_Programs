#include<stdlib.h>
#include<stdio.h>
int cmp(FILE *fp1, FILE *fp2)
{
    char ch1, ch2;
    while(ch1 != EOF && ch2 != EOF)
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if(ch1 != ch2)
        return 0;
    }
    return 1;
}
int main(int argc, char *argv[])
{
    
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2],"r");
    if(fp1 == NULL || fp2 == NULL)
    printf("Error.");
    else
    {
        if(cmp(fp1, fp2))
        printf("Contents of two files are identical.");
        else
        printf("Contents of two files aren't identical.");
    }
    return 0;
}