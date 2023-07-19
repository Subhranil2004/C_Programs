#include<stdio.h>
#include<stdlib.h>
int num;
typedef struct Node
{
    int info;
    struct Node* ptr;
}Node;

Node* insertAtBeg(Node* head)
{
    Node* n = (Node*)malloc(sizeof(Node));
    printf("\nEnter info for node at beg = ");
    scanf("%d",&n->info);
    n->ptr = head;
    head = n;
    return head;
}
void insertAtEnd(Node* head)
{
    int i;
    Node *temp,*n = (Node*)malloc(sizeof(Node));
    printf("\nEnter info for node at end = ");
    scanf("%d",&n->info);
    n->ptr=NULL;
    temp = head;
    for(i=1;i<=num;i++)
    {
        temp = temp->ptr;
    }
    temp->ptr=n;
    
}
void insert(Node* head,int pos)
{
    int i;
    Node *temp,*n = (Node*)malloc(sizeof(Node));
    printf("\nEnter info for node after node-%d = ",pos);
    scanf("%d",&n->info);
    temp = head;
    for(i=1;i<=pos;i++)
    {
        temp=temp->ptr;
    }
    n->ptr=temp->ptr;
    temp->ptr=n;
    
}
Node* deleteAtBeg(Node* head)
{
    
    Node* temp = head;
    head=head->ptr;
    //free(temp);
    printf("\nInside deleteAtBeg\n");
    num--;
    return head;
}
void deleteAtEnd(Node* head)
{
    Node *temp2,*temp1 = head;int i;
    for(i=1;i<num-1;i++)
    {
        temp1 = temp1->ptr;
    }
    temp2 = temp1->ptr;
    temp1->ptr=NULL;
    free(temp2);
    num--;
}
void delete(Node *head,int n)
{
    Node *temp2,*temp1 = head;int i;
    for(i=1;i<n-1;i++)
    {
        temp1 = temp1->ptr;
    }
    temp2 = temp1->ptr;
    temp1->ptr=temp2->ptr;
    free(temp2);
    num--;
}
Node* create(Node* head)
{
    //printf("Head = %u",head);
    Node* prev,*n;int i;
    for(i=1;i<=num;i++)
    {
        n=(Node*)malloc(sizeof(Node));
        printf("Enter info for node-%d = ",i);
        scanf("%d",&n->info);
        n->ptr=NULL;
        if(head == NULL)
        {
            head=n;
            prev=n;
        }
        else
        {
            prev->ptr=n;
            prev=n;
        }
    }
    return head;
}
void display(Node* head)
{
    Node* temp = head;
    while(temp->ptr!=NULL)
    {
        printf("%d --> ",temp->info);
        temp = temp->ptr;
    }
    printf("%d",temp->info);
}
int main()
{
    int n;
    Node *head = NULL;
    printf("Enter no. of nodes = ");
    scanf("%d",&num);
    head = create(head);
    //printf("Head = %d",head);
    display(head);
    // head = insertAtBeg(head);
    // printf("At begin :\n");
    // display(head);
    // insertAtEnd(head);
    // printf("At end :\n");
    // display(head);
    // printf("\nAfter which intermediate node u wanna insert :");
    // scanf("%d",&pos);
    // insert(head,pos);
    // display(head);
    head = deleteAtBeg(head);
    display(head);
    deleteAtEnd(head);
    display(head);
    printf("Enter which node to delete = ");
    scanf("%d",&n);
    delete(head,n);
    printf("Delete node-%d = \n",n);
    display(head);
    return 0;
}