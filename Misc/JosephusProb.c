#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int info;
    struct Node *ptr;
}Node;
Node *head=NULL;Node *tmp;
void display();
int calc(int N,int k);
void delete();
void create(int n);
void create(int n)
{
    int i;Node *temp=NULL,*a;
    for(i=1;i<=n;i++)
    {   
        a=(Node*)calloc(1,sizeof(Node));
        a->info=i;
        
        a->ptr = NULL;
        
        if(head ==NULL)
        head=temp=a;
        else
        {
            temp->ptr=a;temp=a;
        }
    }
    temp->ptr=head;
}
void delete()
{
    Node *tmp2=tmp->ptr;
    tmp->ptr=tmp2->ptr;
    if(tmp2 == head)// !!IMP
    head=head->ptr;
    free(tmp2);
}
int calc(int N,int k)
{
    int i,j;
    create(N);// !!IMP
    tmp =head;// !!IMP
    display();
    for(i=1;i<N;i++)
    {
        //printf("\nEntered i = %d",i);
        for(j=1;j<k;j++)
        {
            //printf("\nEntered j = %d",j);
            tmp=tmp->ptr;
        }
        //printf("%d",tmp->info);
        delete();
        if(tmp->ptr != tmp)tmp=tmp->ptr;
        display();
    }
    return tmp->info;
}
void display()
{
    Node *temp=head;
    printf("\nThe no. of people alive = \n");
    while(temp->ptr!=head)
    {
        printf("%d --> ",temp->info);
        temp = temp->ptr;
    }
    printf("%d --> %d",temp->info,head->info);
}
int main()
{
    int n,k;
    printf("No. of people = ");
    scanf("%d",&n);
    printf("No. of people to skip = ");
    scanf("%d",&k);

    printf("\nPerson - %d got freedom...",calc(n,k));
    return 0;
}