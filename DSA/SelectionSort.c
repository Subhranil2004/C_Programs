#include<stdio.h>
#include<ctype.h>
int minimum(char *arr, int num, int k);
void selectionSort(char *arr, int num);
void display(char *arr, int num);
int main()
{
    int num, i;
    char brr[30];
    printf("No. of elements : ");
    scanf("%d",&num);
    printf("Enter %d alphabets! : ", num);
    for(i=0;i<num;i++)
    {
        // IMPORTANT : While taking char input check for the conditions mentioned below!
        brr[i] = getchar();
        while(brr[i] == ' ' || brr[i] == '\n' || brr[i] == '\r' || brr[i] == '\t')
            brr[i] = getchar();
        brr[i] = toupper(brr[i]);
    }
    display(brr, num);
    selectionSort(brr, num);
    printf("Ascending sorted array : ");
    display(brr, num);
    return 0;
}
void display(char *arr, int num)
{
    int i;
    printf("\n");
    for(i = 0;i < num;i++) // !Error : dont put ; after for
        printf("%c ", arr[i]);
    printf("\n");    
}
int minimum(char *arr, int num, int k)
{
    int min_idx = k; char min = arr[k];
    for(int i = k+1;i<num;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }
    return min_idx;
}
void selectionSort(char *arr, int num)
{
    int min_idx, i;
    char temp;
    for(i=0;i<num - 1;i++)
    {
        min_idx = minimum(arr, num, i);
        if(min_idx!=i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        printf("Array after iteration - %d:", i+1);
        display(arr, num);
    }
}
