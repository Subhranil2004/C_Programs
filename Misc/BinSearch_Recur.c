#include <stdio.h>
#include<stdlib.h>
int binSearch(int beg,int end,int ele,int A[])
{
    int mid = (beg+end)/2;
    if(beg>end)
    return -1;
    if(A[mid] == ele)
    return mid;
    if(A[mid] >ele)
    return binSearch(beg,mid-1,ele,A);
    if(A[mid] <ele)
    return binSearch(mid+1,end,ele,A);
}
int main()
{
    int A[50];
    int beg,end,ele,i,val;
    printf("No. of elements = ");
    scanf("%d",&end);
    printf("Enter %d elements : ",end);
    for(i=0;i<end;i++)
    scanf("%d",&A[i]);
    printf("Enter element to search = ");
    scanf("%d",&ele);
    val=binSearch(0,end-1,ele,A);
    if(val==-1)
    printf("Element not found");
    else
    printf("Element found at index : %d",val);
}