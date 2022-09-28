#include<stdio.h>
struct book
{
char name[15],author[15];
int bookid;
float price;
};
void main()
{
struct book b1;
printf("\nENter the details of book1 ");
printf("\nEnter the name of book :");
scanf("%s",b1.name);
printf("\nEnter the book id :");
scanf("%d",&b1.bookid);
printf("\nEnter the author of book :");
scanf("%s",b1.author);
printf("\nEnter the price of book :");
scanf("%f",&b1.price);


printf("\nbook name = %s",b1.name);
printf("\nbook id = %d",b1.bookid);
printf("\nbook author = %s",b1.author);
printf("\nbook price = %f",b1.price);

}
