
#define MAX 3
int top=-1,stack[MAX];
void push();
void pop();
void display();
int main()
{
int ch;
while(1)
{
printf("\n1.push\n2.pop\n3.display\n4.exit");
printf("\n enter your choice (1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("\n wrong choice!!!");
}
}
getch();
return 0;
}
void push()
{
int val;
if(top==MAX-1)
{
printf("\n stack is overflowing");
}
else
{
printf("\n enter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("\n stack is underflow");
}
else
{
printf("\n the element popped is?=%d",stack[top]);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\n the stack is empty:");
}
else
{
printf("\n stack is....\n");
for(i=top;i>=0;--i)
printf("\n %d",stack[i]);
}
}