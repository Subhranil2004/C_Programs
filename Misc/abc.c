#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int info;
    struct Node *ptr;
} Node;
Node *top = NULL;
Node *push()
{
    Node *n = (Node *)calloc(1, sizeof(Node));
    printf("Enter info = ");
    scanf("%d", &n->info);
    if (top == NULL)
    {
        top = n;
        top->ptr = NULL;
    }
    else
    {
        n->ptr = top;
        top = n;
    }
    return top;
}
Node *pop()
{
    // printf("Top = %u\n",top);
    int temp_data;
    Node *temp = top;
    if (top == NULL)
    {

        printf("Stack empty!!");
        return top;
    }
    temp_data = top->info;

    top = top->ptr;
    free(temp);
    printf("Popped value : %d", temp_data);
    return top;
}
void display(Node *top)
{
    Node *temp = top;
    if (temp == NULL)
    {
        printf("Stack empty!!");
        return;
    }
    printf("Stack :\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->ptr;
    }
}
int main()
{
    int n;
    do
    {
        printf("\nEnter 1 to push, 2 to pop, 3 to display, 4 to exit...");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choice : ");
        }
    } while (1);
    return 0;
}