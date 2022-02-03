#include <stdio.h>  
#include<stdlib.h>
#include<string.h>
  
struct node{ 
    char name[10];
    char mobile[10];
    int likes;  
    struct node *previous;  
    struct node *next;  
};      
   
struct node *head, *tail = NULL;  
   

void addNode(char name[],char mobile[],int likes) {  
   
    struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
    for(int i=0;i<10;i++)
    newNode->name[i] = name[i];
    for(int i=0;i<10;i++)
    newNode->mobile[i] = mobile[i];
    newNode->likes = likes;  
    if(head == NULL) {  
         
        head = tail = newNode;  
    
        head->previous = NULL;  
         
        tail->next = NULL;  
    }  
    else {  
      
        tail->next = newNode;  
       
        newNode->previous = tail;  
 
        tail = newNode;  
       
        tail->next = NULL;  
    }  
}  
   
void display() {  
   
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
     while(current != NULL) {  
        printf("\nName: %s\n",current->name);
        printf("Mobile Number: %s\n",current->mobile);
        printf("Likes: %d\n", current->likes); 
        
        current = current->next;  
    }   
}  

void highest()
{
    struct node* temp=head;
    int dta=0;
    struct node* trans;
    while(temp!=NULL)
    {
        if(temp->likes > dta)
        {
            trans=temp;
        }
        temp=temp->next;
    }
    printf("\nHighest number of likes is for the friend:\n");
    printf("Name: %s\n",trans->name);
    printf("Mobile Number: %s\n",trans->mobile);
    printf("Likes: %d\n", trans->likes); 
}
   
int main()  
{  
    char name[10];
    char mobile[10];
    int likes; 
    int num;
    
    int data;
    while(1)
    {
        printf("\n1.To add a friend\n2.To display friend list\n3.To know highest number of likes friend\n4.To exit\n");
        scanf("%d",&data);
        switch(data)
        {
            case 1 :  printf("Enter name of friend:\n");
                      scanf("%s",name);
                       printf("Enter mobile number of friend:\n");
                      scanf("%s",mobile);
                     printf("Enter number of likes:\n");
                    scanf("%d",&likes);
                       addNode(name,mobile,likes);
                      break;
            case 2 : display();              
                      break;
            case 3: highest();
                     break;
            case 4: return 0;
                         
        }
    }

    return 0;  
    }  





