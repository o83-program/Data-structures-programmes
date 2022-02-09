#include<stdio.h>
#include<stdlib.h>
 typedef struct BST
 {
 int data;
 struct BST *left;
 struct BST *right;
 }node;

 void insert();
 void inorder();
 void preorder();
 void postorder();
 void exit();


 void main()
 {
 int choice=0,e;
 clrscr();
 while(choice!=5)
 {
 printf("\n menu  ");
 printf("\n choose your option:");
 printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.exit");
 printf("\n enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: insert();
	 printf("\n enter the element:");
	 scanf("%d",&e);
	 break;
 case 2: inorder();
	 break;
 case 3: preorder();
	 break;
 case 4: postorder();
	 break;
 case 5: exit(0);
 }
 }
 }
 node *create()
 {
 node *temp;
 temp=(node*)malloc(sizeof(node));
 printf("\n enter the data:");
 scanf("%d",&temp->data);
 temp->left=temp->right=NULL;
 return temp;
 }
 void insert(node *root, node *temp)
 {
 if(temp->data<root->data)
 {
 if(root->left!=NULL)
   insert(root->left,temp);
   else
   root->left=temp;
   }
   if(temp->data>root->data)
   {
   if(root->right!=NULL)
     insert(root->right,temp);
     else
       root->right=temp;
       }
       }
   void inorder(node *root)
   {
   if(root!=NULL)
   {
   inorder(root->left);
   printf("%d",root->data);
   inorder(root->right);
   }
   }
   void preorder(node *root)
   {
   if(root!=NULL)
   {
   printf("%d",root->data);
   preorder(root->left);
   preorder(root->right);
   }
   }
   void postorder(node *root)
   {
   if(root!=NULL)
   {
   postorder(root->left);
   postorder(root->right);
   printf("%d",root->data);
   }
   }