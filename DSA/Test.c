#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
Node *head;
int main()
{
    int a = 5;
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = 100;
    //head->next = &a;
    Node *temp = head;
    printf("%d\n",temp->data);
    printf("%d\n", sizeof(head));
    
    return 0;
}
