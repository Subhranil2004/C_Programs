#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    struct Node *revptr;
    int info;
    struct Node *ptr;
}Node;
Node *head = NULL, *tail = NULL;
void insert(int pos)
{
    Node *tmp, *n;int i;
    n=(Node*)calloc(1,sizeof(Node));
    printf("\nEnter the info = ");
    scanf("%d",&n->info);
    tmp=head;
    for(i=1;i<pos;i++)
    tmp=tmp->ptr;
    n->ptr=tmp->ptr;
    tmp->ptr=n;
    n->revptr=tmp;n->ptr->revptr=n;
}
int delete(int pos)
{
    int i,tmp2_info;Node *tmp1, *tmp2;
    tmp1=head;
    for(i=1;i<pos-1;i++)
    tmp1=tmp1->ptr;
    tmp2=tmp1->ptr;
    tmp1->ptr=tmp1->ptr->ptr;
    tmp1->ptr->revptr=tmp1;
    tmp2_info=tmp2->info;free(tmp2);
    return tmp2_info;
}
void create(int num)
{
    int i;Node *n;
    for(i=1;i<=num;i++)
    {
        n=(Node*)calloc(1,sizeof(Node));
        printf("Enter info = ");
        scanf("%d",&n->info);
        if(head == NULL)
        {
            head=tail=n;
            head->revptr=NULL;
            head->ptr=NULL;
        }
        else
        {
            tail->ptr=n;
            n->revptr=tail;
            n->ptr=NULL;
            tail=n;
        }
    }
}
void display()
{
    Node *temp=head;
    printf("\nThe Double LL : \n");
    while(temp->ptr!=NULL)
    {
        printf("%d <=> ",temp->info);
        temp=temp->ptr;
    }
    printf("%d",temp->info);
}
int main()
{
    int n;
    printf("Enter no. of nodes = ");
    scanf("%d",&n);
    create(n);
    display();
    delete(2);
    display();
    insert(4);
    display();
    return 0;
}
