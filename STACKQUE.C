#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void push();
void pop();
void enqueue();
void dequeue();
void display();
void exit();
void main()
{
int choice=0;
while(choice!=6)
{
printf("\n menu");
printf("\n enter your choice option:");
printf("\n1.push\n2.pop\n3.enqueue\n4.dequeue\n5.display\n6.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:enqueue();
	break;
case 4:dequeue();
	break;
case 5:display();
	break;
case 6:exit(0);
}
}
}
void push()
{
struct node *temp;
int item;
temp=(struct node*)malloc(sizeof(struct node*));
if(temp==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter the value:");
scanf("%d",&item);
temp->data=item;
temp->next=head;
head=temp;
printf("\n node is pushed into the stack!");
}
}
void pop()
{
struct node *temp;
if(head==NULL)
{
printf("\the list is empty therefore cant delete");
}
else
{
temp=head;
head=temp->next;
free(temp);
printf("\n the value is popped out from the stack:");
}
}
void enqueue()
{
struct node *temp,*temp1;
int item;
temp=(struct node*)malloc(sizeof(struct node*));
if(temp==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter the value :");
scanf("%d",&item);
if(head==NULL)
{
temp->next=NULL;
head=temp;
printf("\n single node is inserted!");
}
else
{
temp1=head;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp;
temp->next=NULL;
printf("\n node is enqueued !");
}
}
}
void dequeue()
{
struct node *temp;
if(head==NULL)
{
printf("\n list is empty");
}
else
{
temp=head;
head=temp->next;
free(temp);
printf("\n the value is dequeued from the queue:");
}
}
void display()
{
struct node *temp;
temp=head;
if(temp==NULL)
{
printf("\n nothing to print!");
}
else
{
printf("\n the final stack or queue values are:");
while(temp!=NULL)
{
printf("\n%d",temp->data);
temp=temp->next;
}
}
}