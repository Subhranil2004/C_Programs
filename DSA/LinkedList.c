#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
Node *head;
void createLinkedList(); // !Always return head!
void deleteNode(int);
void displayLinkedList();

int main()  
{
    int ch, data;
    printf("MAIN MENU\n");
    printf("__________________________________\n");
    printf("1. Create a Linked List\n");
    printf("2. Delete a node\n");
    printf("3. Display the Linked List\n");
    printf("4. Exit the program\n");
    printf("__________________________________\n");    
    printf("Enter your choice : ");
    scanf("%d",&ch);
    while(ch != 4)
    {
        switch (ch)
        {
        case 1:
            createLinkedList();
            break;
        case 2:
            if(head == NULL)
            {
                printf("Underflow. (Linked List is empty, cannot delete.)\n");// !Check
                break;
            }
            printf("Enter the data of the node to delete : ");
            scanf("%d", &data);// Use & !!
            deleteNode(data);
            break;
        case 3:
            displayLinkedList();
            break;    
        default:
            break;
        }
        printf("Enter your choice : ");
        scanf("%d",&ch);
    }
    printf("Exiting...");
    return 0;
}
// Functions

void createLinkedList()
{
    int n, i;
    Node *newnode, *temp;
    head = NULL; // !Initialize head as NULL as condition is being checked afterward!

    printf("Enter no. of nodes = ");
    scanf("%d", &n);

    printf("Enter the data for %d nodes : ", n);
    for (i = 1; i <= n; i++)
    {
        newnode = (Node*)malloc(sizeof(Node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Linked List with %d nodes created successfully.\n", n);
    
}


void deleteNode(int data)
{
    Node *ptr = head, *prevptr;
    if(head->data == data)
    {
        head = head->next;
        free(ptr);
        return;
    }
    while(ptr != NULL && ptr->data != data)// ! (Check ptr!=null at beginning)
    {
        prevptr = ptr;
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("Data not found in Linked List.\n");
        return;
    }
    prevptr->next=ptr->next;
    free(ptr);
    printf("Deleted Node with data %d.\n", data);
}

void displayLinkedList()//
{
    if(head == NULL) // !Give the condition!
    {
        printf("Linked List is empty.\n");
        return;
    }
    printf("The Linked List :\n");
    Node *ptr = head;
    while(ptr->next != NULL)
    {
        printf("%d --> ", ptr->data);
        ptr = ptr->next;// !Update loops always
    }
    printf("%d\n", ptr->data);
}
