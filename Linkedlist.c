#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    
};
struct Node* createNode(int data)
{
  struct Node* newnode=(struct Node*) malloc (sizeof(struct Node));
  if(newnode == NULL){
    printf("momery not allocated\n");
    exit(1);
  }
  newnode->data= data;
  newnode->next=NULL;
  return newnode;
};
void insertEnd(struct Node** head,int data)
{
    struct Node* newnode=createNode(data);
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}
void insertBegining(struct Node** head,int data){
    struct Node* newnode=createNode(data);
    newnode->next=*head;
    *head=newnode;
}
void insertAtposition(struct Node** head,int data,int position){
    if(position<1){
        printf("position is invalid\n");
        return;
    }
    if(position==1){
        insertBegining(head,data);
        return;

    }struct Node* temp=*head;
    for(int i=1;i<position-1;i++){
         if (temp == NULL) {
        printf("Position is out of range (in loop)\n");
        return;
    }
          temp=temp->next;
    }
    if(temp==NULL){
        printf("position is out of range\n");
    }
    struct Node* newnode=createNode(data);
    newnode->next=temp->next;
    temp->next=newnode;
}
void printList(struct Node* head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
int main() {
       struct Node* head = NULL;
    // Basic insertions
    insertEnd(&head, 10);
    insertBegining(&head, 5);
    insertEnd(&head, 15);
    printList(head);  // Output: 5->10->15->

    printf("\n");

    // Insert at position
    insertAtposition(&head, 20, 2); // 5->20->10->15
    printList(head);  // Output: 5->20->10->15->

    printf("\n");

    // Invalid test cases
    insertAtposition(&head, 30, 0);   // Invalid position
    insertAtposition(&head, 40, 100); // Out of range
 return 0;
}