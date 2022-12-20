#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head=NULL;
struct node* last=NULL;
struct node* addAtBeg(struct node* head, int val)
{
struct node* new = malloc(sizeof(struct node));
struct node* temp;
new->data = val;
if (head == NULL)
{
head=new;
new->next=head;
}
else
{
temp=head;
while(temp->next != head)
temp = temp->next;
new->next=head;
temp->next=new;
head=new;
}
return head;
}
struct node* addAtEnd(struct node* head, int val)
{
struct node* temp=head;
while (temp->next != head){
temp=temp->next;
}
struct node *new=malloc(sizeof(struct node));
new->data=val;
new->next=head;
temp->next=new;
last=new;
return last;
}
struct node* addAfterPos(struct node* head, int val, int target)
{
struct node* temp = head;
while(temp->data != target)
temp = temp->next;
struct node *new =malloc(sizeof(struct node));
new->data=val;
new->next=temp->next;
temp->next=new;
}
void display(struct node* head)
{
struct node *temp=head;
do
{
printf("%d ",temp->data);
temp=temp->next;
}while(temp != head);
}
int main()
{
int ch;
char opt;
do{
int val;
int tg;
printf("\n==Circular_linked_list==");
printf("\n1.AddFirst\n2.Display\n3.AddLast\n4.AddAfterPosition");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nenter the element:");
scanf("%d",&val);
head=addAtBeg(head,val);
break;
case 2:
printf("\nThe linked list elements are: ");
display(head);
break;
case 3:
printf("\nenter the element:");
scanf("%d",&val);
last=addAtEnd(head,val);
break;
case 4:
printf("\nenter the target value: ");
scanf("%d",&tg);
printf("\nenter the value: ");
scanf("%d",&val);
addAfterPos(head,val,tg);
break;
default:
exit(0);
}
printf("\nDo you want to continue (y/n) :");
scanf(" %c",&opt);
}while( opt == 'y' || opt == 'Y');
}
