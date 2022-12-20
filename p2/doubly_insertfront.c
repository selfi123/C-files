#include <stdio.h>
#include <stdlib.h>
struct node{
struct node *next;
int data;
struct node *prev;
};
struct node *head = NULL;
struct node *last = NULL;
struct node* addAtBeg(struct node* head, int val)
{
struct node* new = malloc(sizeof(struct node));
new->data = val;
if (head == NULL)
{
new->prev = NULL;
new->next = NULL;
head=new;
}
else
{
new->prev = NULL;
new->next = NULL;
new->next = head;
head->prev = new;
head = new;
}
return head;
}
void display(struct node* head)
{
struct node* ptr = head;
while (ptr != NULL)
{
printf("%d->",ptr->data);
ptr = ptr->next;
}
printf("\n");
}
int main(){
int ch;
char opt;
do{
int val;
printf("\n==Doubly_linked_list_Deletion==");
printf("\n1.AddFirst\n2.Display");
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
default:
exit(0);
}
printf("\nDo you want to continue (y/n) :");
scanf(" %c",&opt);
}while(opt == 'y' || opt == 'Y');
}
