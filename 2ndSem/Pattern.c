#include <stdio.h>
int main()
{
    int n, i, j, k, num;
    char ch, c;
    printf("Enter the choice of subpart(a/b/c/d) : ");
    scanf("%c", &ch);
    printf("Enter the number of rows(n) : ");
    scanf("%d", &n);
    switch (ch)
    {
    case 'a':
    case 'A':
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (j <= n - i)
                    printf(" \t");
                else
                    printf("*\t");
            }
            printf("\n");
        }
        break;
    case 'b':
    case 'B':
        k = 1;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d\t", k);
                k++;
            }
            printf("\n");
        }
        break;
    case 'c':
    case 'C':
        num = 1;
        k = 1;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
                printf(" \t");
            for (j = 1; j <= k; j++)
            {
                printf("%d\t", num);
                num++;
            }
            printf("\n");
            k += 2;
        }
        break;
    case 'd':
    case 'D':
        c = 'A';
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (j <= n - i)
                    printf(" \t");
                else
                {
                    printf("%c\t", c);
                    c++;
                }
            }
            printf("\n");
        }
        break;
    default:
        printf("Wrong choice...");
    }
    return 0;
}