#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

void traversal(struct node *head){
    while(head)
    {
        printf("%d | ",head->data);
        head = head->next;
    }
    printf("\n");
}


struct node* insertAtbegin(struct node* head,int data){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   ptr->data=data;
    ptr->next=head;
    //head =ptr;
    return ptr;
}
struct node* insertAtindex(struct node* head,int data,int index){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p;
    p=head;
    int i=0;
   while(i<index-1){
      p = p->next;
      i++;
   }
   ptr->data=data;
   ptr->next=p->next;
    p->next=ptr;
    
    //head =ptr;
    return head;
}


struct node* insertAtEnd(struct node* head,int data){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p;
    p=head;
    //int i=0;
   while(p->next){
      p = p->next;
      //i++;
   }
   ptr->data=data;
   p->next=ptr;
    ptr->next=NULL;
    
    //head =ptr;
    return head;
}
void main(){

struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* first=(struct node*)malloc(sizeof(struct node));
head->data=5;
head->next=first;
//printf("%d\n",head->data);
first->data=11;
first->next='\0';
//printf("%d",head->next->data);
traversal(head);
head=insertAtbegin(head,1);
traversal(head);

head=insertAtbegin(head,30);
traversal(head);
insertAtindex(head,100,2);
traversal(head);

insertAtEnd(head,90);
traversal(head);


}

