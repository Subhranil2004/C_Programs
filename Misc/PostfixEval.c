#include<ctype.h>// For isdigit() func...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Stack[50];
char Post[50];int top=-1;
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
int evaluate()
{
    int i,a,b;char ch;int c;
    for(i=0;i<strlen(Post);i++)
    {
        
        ch = Post[i];
        if(isdigit(ch))
        push(ch-'0');
        else
        {
            a=pop();
            b=pop();
            printf("\na = %d, b = %d",a,b);
            switch (ch)
            {
            case '/':
                push(b / a);
                break;
            case '*':
                push(b * a);
                break;
            case '+':
                push(b + a);
                break;
            case '-':
                push(b - a);
                break;
            }
        }
        printf("Stack[top] = %d\n",Stack[top]);
    }
    return pop();
}
int main()
{
    printf("Enter postfix exp = ");
    scanf("%s",Post);
    printf("The evaluation = %d",evaluate());
    //printf("%c",'12');
}