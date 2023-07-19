#include <stdio.h>
#include <stdio.h>
int n;
int partition(int A[], int beg, int end);
void swap(int A[], int a, int b);
void Quick_Sort(int A[], int beg, int end);
void display(int A[]);
int main()
{
    int i;
    int Arr[30];
    printf("Enter number of elements = ");
    scanf("%d", &n);
    printf("Enter %d elements = ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &Arr[i]);
    display(Arr);
    Quick_Sort(Arr, 0, n - 1);
    display(Arr);
    return 0;
}
int partition(int A[], int beg, int end)
{
    int left, right, loc, flag = 0;
    left = beg;
    right = end;
    loc = beg;
    while (flag == 0)
    {
        while (A[loc] <= A[right] && loc != right)
            right--;
        if (loc == right)
            flag = 1;
        else if (A[loc] > A[right])
        {
            swap(A, loc, right);
            loc = right;
        }
        if (flag == 0)
        {
            while (A[loc] >= A[left] && loc != left)
                left++;
            if (loc == left)
                flag = 1;
            else if (A[loc] < A[left])
            {
                swap(A, loc, left);
                loc = left;
            }
        }
    }
    display(A);
    return loc;
}
void Quick_Sort(int A[], int beg, int end)
{
    int loc;
    if (beg < end)
    {
        loc = partition(A, beg, end);
        Quick_Sort(A, beg, loc - 1);
        Quick_Sort(A, loc + 1, end);
    }
}
void swap(int A[], int a, int b)
{
    int temp;
    temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}
void display(int A[])
{
    int i;
    printf("\nThe array is = \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}