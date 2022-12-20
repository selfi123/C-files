#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
int searchNode(struct node *head,int key)
{
struct node *temp = head;
while(temp != NULL)
{
if(temp->data == key)
return 1;
temp = temp->next;
}
return -1;
}
void main()
{
int choice;
char opt;
do
{
int val;
printf("\n======Implementation of Singly linked list======");
printf("\n1.CREATE\n2.DISPLAY\n3.SEARCH A NODE");
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
printf("\nEnter the key element: ");
scanf("%d",&val);
if (searchNode(head, val) == 1)
printf("Search Found\n");
else
printf("Search Not Found\n");
break;
default:
exit(0);
}
printf("\nDo you want to continue: ");
scanf(" %c", &opt);
} while (opt == 'y' || opt == 'Y');
}
