

#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int main()
{
int ch;
int item,i,MAX;
printf("enter the size of the queue");
scanf("%d",&MAX);
int queue[MAX];
do
{
printf("\n1.insert\n2.delete\n3.display\n4.exit");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(front==(rear+1)%MAX)
printf("\n the queue is full");
else
{
printf("\n enter the element");
scanf("%d",&item);
rear=(rear+1)%MAX;
queue[rear]=item;
if(front==-1)
front=0;
}
break;
case 2:
if(front==-1 && rear==-1)
printf("\n the queue is empty");
else
{
item=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
front=(front+1)%MAX;
printf("\n the removed element is:");
}
break;
case 3:
printf("\n the queue contents are:");
for(i=front;i!=rear;i=(i+1)%MAX)
printf("%d",queue[i]);
printf("%d",queue[i]);
printf("\n");
break;
case 4:
exit(0);
}
}while(ch!=4);
return 0;
}


