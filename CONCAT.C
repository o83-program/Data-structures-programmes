#include<stdio.h>
#include<conio.h>
struct node
{
int data,sem;
struct node*next;
};
struct node *head,*head2;
void begin_insert();
void sort();
void reverse();
void concat();
void display();
void exit();
void main()
{
int choice=0;
while(choice!=6)
{
printf("\n menu ");
printf("\n choose your option:");
printf("\n1.begin_insert\n2.sort\n3.reverse\n4.concat\n4.display");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:begin_insert();
	break;
case 2:sort();
	break;
case 3:reverse();
	break;
case 4:concat();
	break;
case 5:display();
	break;
case 6:exit(0);
}
}
}
void begin_insert()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter the value:");
scanf("%d",&item);
ptr->data=item;
ptr->next=head;
head=ptr;
printf("\n node is now inserted:");
}
}
void sort()
{
int swapped,i,temp;
struct node *ptr;
struct node *ptr1=NULL;
if(head==NULL)
return;
do
{
swapped=0;
ptr=head;
while(ptr->next!=ptr1)
{
if(ptr->sem>ptr->next->sem)
{
int temp=ptr->sem;
ptr->sem=ptr->next->sem;
ptr->next->sem=temp;
swapped=1;
}
ptr=ptr->next;
}
ptr1=ptr;
}
while(swapped);
}
void reverse()
{
struct node*prev=NULL;
struct node*current=head;
struct node*next=NULL;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
}
void concat()
{
struct node *ptr2;
if(head==NULL)
{
head=head2;
}
if(head2==NULL)
{
head2=head;
}
ptr2=head;
while(ptr2->next!=NULL)
ptr2=ptr2->next;
ptr2->next=head2;
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("\n nothing to print");
}
else
{
printf("\n printing values......");
while(ptr!=NULL)
{
printf("\n%d",ptr->data);
ptr=ptr->next;
}
}
}

