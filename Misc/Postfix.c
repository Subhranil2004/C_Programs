#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char Stack[50];
int top = -1;
char In[50], Post[50];
void push(char n)
{
    Stack[++top] = n;
}
char pop()
{
    if (top <= -1)
        return '!';
    return Stack[top--];
}
int preced(char n)
{
    switch (n)
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
        c = In[i];
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= 0 && c <= 9)
            Post[k++] = c;
        else if (c == '(')
            push(c);
        else if (c == ')')
        {
            while (Stack[top] != '(')
                Post[k++] = pop();
            top--;
        }
        else if (top == -1 || Stack[top] == '(' || preced(c) > preced(Stack[top]) ||
                 (preced(c) == preced(Stack[top]) && c == '^'))
            push(c);
        else
        {
            while (preced(Stack[top]) >= preced(c))
                Post[k++] = pop();
            push(c);
        }
    }
    while (top != -1)
        Post[k++] = pop();
}
float evaluatePostfix()
{
    int i;
    int n;
    int a, b;
    char ch;
    // Post[strlen(Post-1)] = ')';
    top=-1;
    for (i = 0; i < strlen(Post); i++)
    {
        // printf("\n%d",Stack[top]);
        n = Post[i];
        for(int i=0;i<5;i++)
        printf("%d\t",Stack[i]);
        printf("\n");
        if ((n - 48) >= 0 && (n - 48) <= 9)
            push(n-48);
        else
        {
            ch=(char)n;
            a = pop()-48;
            b = pop()-48;
            switch (n)
            {
            case '/':
                push((char)b / a);
                break;
            case '*':
                push(b * a);
                break;
            case '+':
                push((char)b + a);
                break;
            case '-':
                push((char)b - a);
                break;
            }
        }
    }
    return Stack[top];
}
int main()
{
    int i;
    printf("Enter infix expression = ");
    gets(In);
    inToPostFix();
    printf("Postfix expression is = ");
    for (i = 0; i < strlen(Post); i++)
        printf("%c ", Post[i]);
    //printf("\nEvaluation = %f", evaluatePostfix());
    return 0;
}
