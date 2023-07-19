#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    char info;
    struct Node *ptr;
} Node;
Node *temp, *top, *prev;
char In[50], Post[50];
void push(char ch)
{
    temp = (Node *)calloc(1, sizeof(Node));
    temp->info = ch;
    temp->ptr = NULL;
    if (top == NULL)
        top = prev = temp;
    else
    {
        temp = prev->ptr;
        prev = temp;
    }
}
char pop()
{
    Node *tmp;
    char tmp_info;
    if (top == NULL)
        return '!';
    tmp = top;
    top = top->ptr;
    tmp_info = tmp->info;
    free(tmp);
    return tmp_info;
}
int preced(char ch)
{
    switch (ch)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    case '(':
        return 0;
    }
}
void inToPostFix()
{
    int i;
    char c;
    int k = 0;
    for (i = 0; i < strlen(In); i++)
    {
        printf("\ni = %d", i);
        c = In[i];
        printf("\nc=%c",c);
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            Post[k++] = c;
        else if (c == '(')
            push(c);
        else if (c == ')')
        {
            while (top!=NULL && top->info != '(')
                Post[k++] = pop();
            c = pop();
        }
        else if (top == NULL || (top!=NULL && top->info == '(') || preced(c) > (top!=NULL && preced(top->info)) ||
                 (preced(c) == (top!=NULL && preced(top->info)) && c == '^'))
            push(c);
        else
        {
            while (top!=NULL && preced(top->info) >= preced(c))// top!=null IMP!!
            {
                char pro = pop();
                Post[k] = pro;
                printf("\nPost k = %c", pro);
                printf("\nPost k = %c", Post[k]);
                k++;
            }
            push(c);
        }
        printf("Post[] = %s", Post);
    }
    // printf("HEY IMMA OUT !!");
    while (top != NULL)
        Post[k++] = pop();
}
int main()
{
    printf("Enter infix expression = ");
    gets(In);
    inToPostFix();
    printf("\nPostfix expression is = %s", Post);
    return 0;
}
