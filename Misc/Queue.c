#include <stdio.h>
int front=0,rear=0;
void enqueue(int* queue,int ele,int size);
int dequeue(int* queue);
void display(int* queue,int size);
int main()
{
    int size;char ch; int ele;
    printf("Enter the size of queue : ");
    scanf("%d",&size);
    int Queue[size];
    printf("Enter i to insert, d to delete, c to display and close the queue...");
    do{
        scanf("%c",&ch);
        switch (ch)                            
        {                                         
        case 'I':
        case 'i':
            printf("Enter an element : ");
            scanf("%d",&ele);
            enqueue(Queue,ele,size);
            break;
        case 'D':
        case 'd':
            printf("Dequeued element is : %d",dequeue(Queue));
            break;    

        default:
            break;
        }
    }while(ch!='c' && ch!='C');
    display(Queue,size);
    return 0;
}
void enqueue(int* queue,int ele,int size)
{       
    if(rear == size-1)
    {
        printf("Queue if full!!");return;
    }
    queue[rear]=ele;rear++;
}
int dequeue(int* queue)
{
    if(front>rear)
    {
        front=rear=0;
        printf("Queue is empty!!");
        return -9999;
    }
    front++;
    return queue[front-1];
}
void display(int* queue,int size)
{
    printf("The queue is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",queue[i]);
    }
}
