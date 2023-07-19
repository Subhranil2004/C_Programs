#include<stdio.h>
//Program to count most occuring element

//Driver Program
int main()
{
    int n;int i, j, maxElement, count;
     int maxCount = 0;              //Array Size Declaration
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int array[n];      //Array Declaration
    printf("Enter the array elements");
    for(int i=0;i<n;i++)   //Initializing Array Elements
    {
        scanf("%d",&array[i]);
    } 
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than 
                maxCount, then update maxElement */
                
            }

        }
        if(count > maxCount)
                {
                    maxCount = count;
                    maxElement = array[i];
                }
    }
    
    printf("Maximum Repeating Element : %d(%d times)",maxElement, maxCount);   //Prints the most occuring element 
    return 0;
}