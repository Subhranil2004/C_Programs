#include <stdio.h>
#include <stdlib.h>
void Merge(int Arr[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, k = 0;
    int B[end - beg + 1];
    while (i <= mid && j <= end)
    {
        if (Arr[i] < Arr[j])
        {
            B[k++] = Arr[i];
            i++;
        }
        else
        {
            B[k++] = Arr[j];
            j++;
        }
    }
    while (i <= mid)
    {
        B[k++] = Arr[i];
        i++;
    }
    while (j <= end)
    {
        B[k++] = Arr[j];
        j++;
    }
    k = 0;
    for (i = beg; i <= end; i++)
    {
        Arr[i] = B[k];
        k++;
    }
    
}
void Merge_Sort(int Arr[], int beg, int end)
{
    int mid;
    if (beg < end) // NOT <=...
    {
        mid = (beg + end) / 2;
        Merge_Sort(Arr, beg, mid);
        Merge_Sort(Arr, mid + 1, end);
        Merge(Arr, beg, mid, end);
    }
}
int main()
{
    int n, i, A[50];
    printf("Enter no. of elements = ");
    scanf("%d", &n);
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Unsorted array :\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
    Merge_Sort(A, 0, n - 1);
    printf("\nSorted array :\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
    return 0;
}