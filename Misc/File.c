#include<stdio.h>
int main()
{
    int n1,n2;
    FILE *fptr;
    fptr = fopen("Numbers.txt","r");
    fscanf(fptr,"%d %d",&n1,&n2);
    fptr = fopen("Numbers.txt","w");
    fprintf(fptr,"%d",n1+n2);
    fclose(fptr);
    return 0;
}

/*
Syntax for fgets():
char *fgets(char *str, int n, FILE *stream);
Here, str is a pointer to a character array where the read data will be stored,
 n is the maximum number of characters to be read (including the terminating null character),
  and stream is a pointer to the FILE object that specifies the input stream. 
  The function returns a pointer to the character array that was passed as the first argument, or NULL on error or end-of-file.

Syntax for fputs():
int fputs(const char *str, FILE *stream);
Here, str is a pointer to the string to be written and stream is a pointer to the FILE object 
that specifies the output stream. The function returns a non-negative integer on success, 
or EOF on error.

Syntax for fscanf():
int fscanf(FILE *stream, const char *format, ...);
Here, stream is a pointer to the FILE object that specifies the input stream, 
format is a string that specifies the format of the data to be read, and ... represents 
the variable argument list, which consists of the variables that will store the input data. The function returns the number of items successfully read, or EOF on error or end-of-file.

Syntax for fprintf():
int fprintf(FILE *stream, const char *format, ...);
Here, stream is a pointer to the FILE object that specifies the output stream, 
format is a string that specifies the format of the data to be written, and ... represents the 
variable argument list, which consists of the variables that will be written to the output stream. 
The function returns the number of characters written, or a negative value on error.
*/
