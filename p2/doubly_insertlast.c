#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL,*last=NULL;
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
void display( struct node *head ){
struct node *temp=head;
if ( temp == NULL ){
printf("\nEmpty Linked List");
return;
}
else{
while(temp!=NULL){
printf( "%d->" , temp->data );
temp = temp -> next;
}
}
}
void main(){
int choice;
char opt;
do{
int val;
printf("\n==Doubly linked list operation (INSERTION)==");
printf("\n1.Insert_at_end\n2.Display");
printf("\n\nWhat's ur choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("\nEnter the element:");
scanf("%d",&val);
if (head == NULL){
head=insertEnd(head,val);
}else{
last=insertEnd(head,val);
}
case 2:
printf("\nThe linked list is: ");
display(head);
break;
default:
exit(0);
}
printf("\nDo u want to continue (y/n) : ");
scanf(" %c",&opt);
}while ( opt == 'y' || opt == 'Y' );
}
