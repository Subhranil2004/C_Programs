// #include<stdio.h>
// int main()
// {
//     char a, b;
//     printf("a = ");
//     scanf("%c",&a);
//     fflush(stdin);//Flushes out the enter key from the input buffer.
//     printf("b = ");
//     scanf("%c",&b);
//     printf("\na = %c, b = %c",a,b);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARAGRAPHS 100
#define MAX_TEXT_SIZE 1000000

int main() {
    char text[MAX_TEXT_SIZE];
    char *par[MAX_PARAGRAPHS];

    printf("Enter the text (at least two paragraphs):\n");
    scanf("%[^'@']",text);

    // Split the text into paragraphs based on newline characters
    int numParagraphs = 0;
    char *paragraph = strtok(text, "\n\t");
    while (paragraph != NULL && numParagraphs < MAX_PARAGRAPHS) {
        par[numParagraphs] = paragraph;
        numParagraphs++;
        paragraph = strtok(NULL, "\n\t");
    }

    // Print the paragraphs and their respective locations
    printf("Paragraphs:\n");
    for (int i = 0; i < numParagraphs; i++) {
        printf("PAR[%d]: %s\n", i, par[i]);
    }

    return 0;
}
