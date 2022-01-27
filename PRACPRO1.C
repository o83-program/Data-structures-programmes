#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
clrscr();
struct node *head;
void enqueue();
void dequeue();
void display();
void exit();
void main()
{
int choice=0;
while(choice!=4)
{
printf("\n      menu     ");
printf("\n choose your option from the list:");
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
	break;
case 2:dequeue();
	break;
case 3:display();
	break;
case 4:exit(0);
}
}
}
void enqueue()
{
struct node *temp,*temp1;
int item;
temp=(struct node*)malloc(sizeof(struct node*));
if(temp==NULL)
{
printf("\n overflow!!");
}
else
{
printf("\n enter the value:");
scanf("%d",&item);
temp->data=item;
if(head==NULL)
{
head=temp;
temp->next=head;
}
else
{
temp1=head;
while(temp1->next!=head)
{
temp1=temp1->next;
}
temp1->next=temp;
temp->next=head;
}
}
}
void dequeue()
{
struct node *temp;
if(head==NULL)
{
printf("\n overflow!!");
}
else if(head->next==head)
{
head=NULL;
free(head);
printf("\n node deleted!!");
}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=head->next;
free(temp);
head=temp->next;
printf("\n node dequeued  from the queue!!");
}
}
void display()
{
struct node *temp;
temp=head;
if(head==NULL)
{
printf("\n nothing to print!!");
}
else
{
printf("\n printing values!!!");
while(temp->next!=head)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}
