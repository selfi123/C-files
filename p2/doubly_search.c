#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL,*last=NULL;
void search(struct node *head,int val) {
int pos = 0;
if(head==NULL) {
printf("Linked List not initialized");
return;
}
struct node *temp=head;
while(temp!=NULL) {
pos++;
if(temp->data == val) {
printf("%d found at position %d\n", val, pos);
return;
}
if(temp->next != NULL)
temp = temp->next;
else
break;
}
printf("%d does not exist in the list\n", val);
}
struct node * insertFront(struct node *head, int val){
struct node *newNode = malloc(sizeof(struct node));
newNode->data=val;
newNode->next=head;
newNode->prev=NULL;
if (head != NULL)
head->prev=newNode;
head=newNode;
return head;
}
struct node * insertEnd(struct node *head,int val){
struct node * new=(struct node *)malloc(sizeof(struct node));
new->data=val;
new->next=NULL;
struct node *temp=head;
if (head==NULL){
new->prev=NULL;
head=new;
return head;
}
while(temp->next!=NULL)
temp=temp->next;
temp->next=new;
new->prev=temp;
return last;
}
void display(struct node *head){
struct node *temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}
}
void main(){
int ch;
char opt;
do{
int val;
printf("\n===================================");
printf("\n1. Inserting to First\n2. Inserting to Last\n3.Searching\n4.Display");
printf("\n===================================");
printf("\nEnter an option:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nEnter the element:");
scanf("%d",&val);
head=insertFront(head,val);
break;
case 2:
printf("\nEnter the element:");
scanf("%d",&val);
if (head == NULL){
head=insertEnd(head,val);
}
else{
last=insertEnd(head,val);
}
break;
case 3:
printf("Enter the key element:");
scanf("%d",&val);
search(head,val);
break;
case 4:
printf("The linked list is: ");
display(head);
break;
default:
printf("Invalid option");
exit(0);
}
printf("Do you want to continue(y/n): ");
scanf(" %c",&opt);
}while(opt=='y' || opt=='Y');
}
