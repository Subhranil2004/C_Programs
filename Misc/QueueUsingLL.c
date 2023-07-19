#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int info;
    struct Node *ptr;
} Node;
Node *front = NULL, *rear = NULL;
void add()
{
    Node *n = (Node *)malloc(sizeof(Node));
    printf("Enter info : ");
    scanf("%d", &n->info);
    n->ptr = NULL;
    if (front == NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        rear->ptr = n;
        rear = n;
    }
}
int delete ()
{
    int data;
    Node *temp;
    if (front == NULL && rear == NULL)
    {
        printf("Queue empty!!");
        return -9999;
    }
    data = front->info;
    if (front == rear)
    {
        free(front);
        return data;
    }
    temp = front;
    front = front->ptr;
    free(temp);
    return data;
}
void display()
{
    Node *tmp = front;
    printf("\nThe Queue is : \n");
    while (tmp != NULL)
    {
        printf("%d\t", tmp->info);
        tmp = tmp->ptr;
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter 1 to add, 2 to del, 3 to display or 4 to exit...");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            printf("Deleted value = %d", delete ());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the correct choice... ");
        }
    }
    return 0;
}