#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void insert_beg();
void begin_delete();
void last_delete();
void pos_delete();
void display();
void main()
{
int choice=0;
while(choice!=9)
{
printf("\d   menu    ");
printf("\n choose your option:");
printf("\n1.insert_beg\n2.begin_delete\n3.last_delete\n4.pos_delete\n5.display\n6.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insert_beg();
	break;
case 2:begin_delete();
       break;
case 3:last_delete();
       break;
case 4:pos_delete();
       break;
case 5:display();
	break;
case 6:exit(0);
}
}
}
void insert_beg()
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
	printf("\n enter the data:");
	scanf("%d",&item);
	temp->data=item;
	temp->next=head;
	temp=head;
	printf("\n node is inserted");
}
}
void begin_delete()
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
printf("\d node is deleted from the beginning");
}
}
void last_delete()
{
struct node *temp,*temp1;
if(head==NULL)
{
printf("\n the list is empty");
}
else if(head->next==NULL)
{
temp=head;
free(head);
printf("\n the node is deleted");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp1=temp;
temp=temp->next;
}
temp1->next=NULL;
free(temp);
printf("\n node is deleted from the last");
}
}

void pos_delete()
{
struct node *temp,*temp1;
int loc,i;
printf("\n enter the position from which the node has to be deleted:");
scanf("%d",&loc);
temp=head;
for(i=0;i<=loc;i++)
{
temp1=temp;
temp=temp->next;
if(temp==NULL)
{
printf("\n cant delete!!");
return;
}
temp1->next=temp->next;
free(temp);
printf("\n deleted node is:");
}
}
void display()
{
struct node*temp;
temp=head;
if(temp==NULL)
{
printf("\n cant delete:");
}
else
{
printf("\n the values of the list are:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
