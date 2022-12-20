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
struct node* delFirst(struct node* head)
{
struct node* temp=head;
while(temp->next != head)
temp = temp->next;
struct node* del=head;
head=head->next;
temp->next=head;
free(del);
return head;
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
printf("\n1.AddFirst\n2.Display\n3.AddLast\n4.DeleteFirst");
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
head=delFirst(head);
break;
default:
exit(0);
}
printf("\nDo you want to continue (y/n) :");
scanf(" %c",&opt);
}while( opt == 'y' || opt == 'Y');
}
