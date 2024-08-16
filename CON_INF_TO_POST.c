#include <stdio.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(char item)
{
if (top >= MAX - 1) {
printf("stack over flow");
}
else {
top = top + 1;
stack[top] = item;
}
}
int pop()
{
int item;
if (top ==-1) {
printf("stack under flow");
return 0;
}
else {
item = stack[top];
top = top - 1;
return item;
}
}
int priority(char x)
{
    if(x=='(')
    {
        return 0;
    }
    if(x=='+' || x=='-')
    {
        return 1;
    }
    if(x=='*' || x=='/')
    {
        return 3;
    }
}

void ConPostfix(char postfix[])
{
int i;
char ch;
char x;
printf("Conversion of Infix to Postfix Expression is:\n");
for (i = 0; postfix[i] != '@'; i++) {
ch = postfix[i];
if (isalnum(ch)) {
printf("%c",ch);
}
else if (ch=='(') 
{
push(ch);
}
else if(ch==')')
{
    while((x=pop())!='(')
    {
        printf("%c",x);
    }
}
else
{
    while(priority(stack[top])>=priority(ch))
    {
        printf("%c",pop());
    }
    push(ch);
}
}//for
while(top!=-1)
{
  printf("%c",pop()); 
}
}//function
void main()
{
int i;
char postfix[100];
printf(" \nEnter Infix expression\n");
for (i = 0; i <=99; i++) {
    scanf("%c", &postfix[i]);
if (postfix[i] == '@')
{
break;
}
}
ConPostfix(postfix);
}
