#include <stdio.h>
int n;
void ascending(int A[]);
void print(int A[]);
int main()
{
    int i; int A[70];
    printf("No. of elements = ");
    scanf("%d", &n);

    
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        // printf("i = %d\n",i);
        scanf("%d", &A[i]);
    }
    // printf("OUT!!");
    print(A);
    ascending(A);
    printf("\nSorted Array:\n");
    print(A);
    return 0;
}
void ascending(int A[])
{
    int temp, i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_idx])
                min_idx = j;
        }
        if (i != min_idx)
        {
            temp = A[i];
            A[i] = A[min_idx];
            A[min_idx] = temp;
        }
        print(A);
    }
}
void print(int A[])
{
    printf("\nThe array : \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", A[i]);
}