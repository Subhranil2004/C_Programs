#include<stdio.h>
#include<ctype.h>
#define SIZE 50
void merge(char *, int, int, int);
void merge_sort(char *, int, int);
void display(char *, int);
int main()
{
    int num,i;
    char brr[SIZE];
    printf("Enter the no. of elements : ");
    scanf("%d",&num);
    printf("Enter %d alphabets!: ", num);
    for(i=0;i<num;i++)
    {
        brr[i] = getchar();
        while(brr[i] == ' ' ||brr[i] == '\n' ||brr[i] == '\t' ||brr[i] == '\r' )
            brr[i] = getchar();
        brr[i] = toupper(brr[i]);    
    }
    merge_sort(brr, 0, num-1);
    printf("Ascending sorted array : ");
    display(brr, num);
    fflush(stdin);
    getchar();
    return 0;
}
void display(char *arr, int num)
{
    printf("\n");
    for (int i = 0; i < num; i++)
        printf("%c ", arr[i]);
    printf("\n");
}
void merge(char *arr, int beg, int mid, int end)
{
    char temp[SIZE];
    int i=beg,j=mid+1,index=beg;
    while(i<=mid && j<=end)
    {
        if(arr[i] <= arr[j])
        {
            temp[index++] = arr[i++];
        }
        else
        {
            temp[index++] = arr[j++];
        }
    }
    while(i<=mid)
    {
        temp[index++] = arr[i++];
    }
    while(j<=end)
    {
        temp[index++] = arr[j++];
    }
    for(i=beg;i<=end;i++)
        arr[i] = temp[i];
}
void merge_sort(char *arr, int beg, int end)
{
    if(beg == end)
    return;
    int mid = (beg + end)/2;
    merge_sort(arr, beg, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, beg, mid, end);
}