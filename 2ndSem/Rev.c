#include <stdio.h>

void reverse(char* s) {
    int length = 0;
    char* start = s;
    char* end = s;
    char temp;

    // Find the length of the string
    while (*end != '\0') {
        length++;
        end++;
    }

    end--; // Point to the last character before the null character

    // Swap characters from the beginning and end
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[30];
    printf("Enter a string : ");
    scanf("%s",str);
    reverse(str);
    printf("The reversed string : %s",str);
    return 0;
}