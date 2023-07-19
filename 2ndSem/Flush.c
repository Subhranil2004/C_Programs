#include <stdio.h>

int main() {
    int a;
    char choice = 'y';
    while (choice != 'n') {
        printf("Enter num: ");
        scanf("%d", &a);
        printf("Square: %d\n", a * a);

        // Clear input buffer
        while (getchar() != '\n');

        printf("Wanna see more of it?(y/n): ");
        scanf("%c", &choice);
    }
    return 0;
}
