#include <stdio.h>
#include <string.h>

int main()
{
    char *PAR[100];

    FILE *fptr = fopen("file.txt", "r");
    char para[100][1000]; // store paras as 2D array
    int j;
    int num = 0;
    while (fgets(para[num], 1000, fptr))// taking input
    { 
        if (para[num][0] == '\0')
            break;
        num++;
    }
    fclose(fptr);
    printf("Number of paras = %d.\n", num);
    printf("The paras with corresponding memory locations :\n");
    for (j = 0; j < num; j++)
    {
        PAR[j] = &para[j][0]; // Storing memory locs
        printf("\nPara-%d[LOC : %p] : %s", j + 1, PAR[j], para[j]);
    }
    // As printf("%d", (&para[j][0] == para[j])); results in 1.
    return 0;
}