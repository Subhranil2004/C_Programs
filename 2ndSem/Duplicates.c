#include <stdio.h>

int main()
{
    int n, flag, cnt = 0,i,j;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n], brr[n];
        printf("enter the array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        brr[i] = 1;
    }
    for (i = 0; i < n; i++)
    {
        flag = 0;
        if (brr[i] == 0)
            continue;
        for (j = i + 1; j < n; j++)
        {
            if (brr[j] == 0)
                continue;
            if (arr[j] == arr[i])
            {
                brr[j] = 0;
                flag = 1;
            }
        }
        cnt += flag;
    }
    printf("no of duplicates: %d", cnt);
    return 0;
}
