#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int info;
    struct Node *ptr;
}Node;
Node *head=NULL, *prev=NULL;
void create(int n)
{
    int i;Node *temp=NULL,*a;
    for(i=1;i<=n;i++)
    {   
        a=(Node*)calloc(1,sizeof(Node));
        printf("Enter info = ");
        scanf("%d",&a->info);
        
        a->ptr = NULL;
        
        if(head ==NULL)
        head=temp=a;
        else{
            temp->ptr=a;temp=a;
            
        }
    }
    temp->ptr=head;
}
void display()
{
    Node *temp=head;
    printf("\nThe LL = \n");
    while(temp->ptr!=head)
    {
        printf("%d --> ",temp->info);
        temp = temp->ptr;
    }
    printf("%d --> %d",temp->info,head->info);
}
int main()
{
    int n;
    printf("No. = ");
    scanf("%d",&n);
    create(n);
    display();
    return 0;
}