#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int partition(char *, int, int);
void quick_sort(char *, int, int);
void display(char *, int);
int main()
{
    char brr[SIZE];
    int i, num;
    printf("Enter no. of elements : ");
    scanf("%d",&num);
    printf("Enter %d alphabets!: ", num);
    for(i=0;i<num;i++)
    {
        brr[i] = getchar();
        while(brr[i] == ' ' ||brr[i] == '\r' ||brr[i] == '\t' ||brr[i] == '\n')
        brr[i] = getchar();
        brr[i] = toupper(brr[i]);
    }
    quick_sort(brr, 0, num-1);
    printf("Ascending sorted array : ");
    display(brr, num);
    return 0;
}
void display(char *arr, int num)
{
    printf("\n");
    for (int i = 0; i < num; i++)
        printf("%c ", arr[i]);
    printf("\n");
}
int partition(char *arr, int beg, int end)
{
    int loc, left, right, temp, flag;
    loc = left = beg;
    right = end;
    flag = 0;
    while(flag == 0)
    {
        // Either replace all > with >= or all < with <=
        while(arr[loc]<= arr[right] && loc!=right) // 
            right--;
        if(loc == right)
            flag = 1;
        else if(arr[loc]>arr[right])//
        {
            temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }        
        if(flag == 0)
        {
            while(arr[loc] > arr[left] && loc != left)//
                left++;
            if(loc == left)
                flag = 1;
            else if(arr[loc]<= arr[left])//
            {
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;
                loc = left;
            }        
        }
    }
    return loc;
}
void quick_sort(char *arr, int beg, int end)
{
    if(beg>= end) 
    return;
    int loc = partition(arr, beg, end);
    quick_sort(arr, beg, loc);
    quick_sort(arr, loc+1, end);
}