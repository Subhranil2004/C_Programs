#include <stdio.h>
#include <ctype.h>
void insertionSort(char *, int num);
void display(char *, int num);
int main()
{
    int n, i;
    char brr[30];
    printf("No. of elements : ");
    scanf("%d", &n);
    printf("Enter %d alphabets! : ", n);
    for (i = 0; i < n; i++)
    {
        brr[i] = getchar();
        while (brr[i] == '\n' || brr[i] == '\t' || brr[i] == ' ' || brr[i] == '\r') // == instead of !=
            brr[i] = getchar();
        brr[i] = toupper(brr[i]);
    }
    insertionSort(brr, n);
    printf("Ascending sorted array : ");
    display(brr, n);
    return 0;
}
void display(char *arr, int num)
{
    printf("\n");
    for (int i = 0; i < num; i++)
        printf("%c ", arr[i]);
    printf("\n");
}
void insertionSort(char *arr, int num)
{
    int i, j;
    char ele;
    for (i = 1; i < num; i++)
    {
        ele = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > ele)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = ele;

        printf("Array after iteration - %d:", i);
        display(arr, num);
    }
}