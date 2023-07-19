#include <stdio.h>
#include <stdlib.h>
int top=-1;
void push(int* stack,int ele,int size);
int pop(int* stack);
void display(int* stack,int size);
int main()
{
    int size;char ch;int ele;
    printf("Enter the size of stack : ");
    scanf("%d",&size);
    int Stack[size];
    do{
        printf("\nEnter i to insert, d to delete, c to display and x to exit...");
        scanf("%c",&ch);
        switch (ch)                            
        {                                         
        case 'I':
        case 'i':   
         if(top == size-1)
           { printf("Stack full!!");
            break;
           }
            printf("Enter an element : ");
            scanf("%d",&ele);
            push(Stack,ele,size);
            break;
        case 'D':
        case 'd':
            printf("Popped element is : %d",pop(Stack));
            break;    
        case 'C':
        case 'c':
            display(Stack,size);
            break;

        case 'x':
        case 'X':printf("Exiting...");exit(0);
        default:
            break;
        }
    }while(1);
    
    return 0;
}
void push(int* stack,int ele,int size)
{
    stack[++top]=ele;
}
int pop(int* stack)
{
    if(top==-1)
    {
        printf("Stack empty!!");
        return-9999;
    }
    top--;
    return stack[top+1];
}
void display(int* stack,int size)
{
    printf("Stack is :");
    for(int i=size-1;i>top;i--)
    printf("\n");
   for(int i=top;i>=0;i--)
   {
    printf("\n%d",stack[i]);
   } 
}

