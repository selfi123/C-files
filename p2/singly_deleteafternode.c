#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head = NULL, *last = NULL;
struct node *createList(int val)
{
struct node *new;
new = (struct node *)malloc(sizeof(struct node));
if (new == NULL)
{
printf("\nOVERFLOW");
}
else
{
new->data = val;
new->next = NULL;
if (head == NULL)
{
head = new;
}
else
{
last->next = new;
}
last = new;
return last;
}
}
void display(struct node *head)
{
struct node *temp = head;
printf("\nThe linked list elements are:");
while (temp != NULL)
{
printf("%d->", temp->data);
temp = temp->next;
}
}
void deleteAfter(struct node *head,int val){
struct node *temp=head;
while(temp->data!=val){
temp=temp->next;
}
struct node *del=temp->next;
temp->next=temp->next->next;
free(del);
}
void main()
{
int choice;
char opt;
do
{
int val;
printf("\n======Implementation of Singly linked list======");
printf("\n1.CREATE\n2.DISPLAY\n3.DELETE AFTER A NODE");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("\nEnter the element: ");
scanf("%d", &val);
last = createList(val);
display(head);
break;
case 2:
display(head);
break;
case 3:
printf("\nEnter the target element: ");
scanf("%d",&val);
deleteAfter(head,val);
break;
default:
exit(0);
}
printf("\nDo you want to continue: ");
scanf(" %c", &opt);
} while (opt == 'y' || opt == 'Y');
}
