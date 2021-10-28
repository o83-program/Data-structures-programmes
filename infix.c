#include<stdio.h>
#include<conio.h>
#define SIZE 50
char stack[SIZE];
int top=-1;
void push(char elem)
{
    int  val;
    if(top==SIZE-1)
    {
        printf("\n stack overflow!!");
       
    }
    else
    {
        stack[++top]=elem;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("\n stack is underflow!!");
       
    }
    else
    {
        int popele=stack[top--];
        return popele;
       
    }
}
int pr(char symbol)
{
    if(symbol=='^')
    {
        return(3);
       
    }
    else if(symbol=='*'||symbol=='/')
    {
        return(2);
    }
    else if(symbol=='+'||symbol=='-')
    {
        return(1);
    }
    else
    {
        return(0);
    }
