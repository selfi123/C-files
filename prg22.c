#include<stdio.h>
#include<string.h>
struct book
{
	char booktitle[10],author[20];
	int price;
};
void main()
{
	int n,y=1,i,j;
	printf("Enter how many books:");
	scanf("%d",&n);
	struct book b[n];
	while (y!=0)
	{
		printf("press 1 for Read and store book details\n");
		printf("press 2 for list books of given author\n");
		printf("press 3 for list books of a specified book title\n");
		printf("press 4 for listing all books with price less than or equal to given price\n");
		printf("press 0 to exit");
		printf("\nEnter the choice : ");
	scanf("%d",&y);
	if (y==1)
	{
	for (int i=0;i<n;i++)
	{
	printf("enter title,author,price:");
	scanf("%s%s%d",b[i].booktitle,b[i].author,&b[i].price);
	}
	for (int i=0;i<n;i++){	
	printf("The title, author and price are :%s%s%d\n",b[i].booktitle,b[i].author,b[i].price);
	}
	}
	else if (y==2){
	char aut[10];
	scanf("%s",aut);
	for (int i=0;i<n;i++)
	{
	int res=strcmp(aut,b[i].author);
	if (res==0)
	{
	printf("%s\n",b[i].booktitle);
	}
	
	}}
	else if (y==3)
	{
	char ti[10];
	printf("Enter book title needed : ");
	scanf("%s",ti);
	for (int i=0;i<n;i++)
	{
	int res=strcmp(ti,b[i].booktitle);
	if (res==0)
	{
	printf("Booktitle %s\n author %s\n price %d\n",b[i].booktitle,b[i].author,b[i].price);}}
		}
	else if(y==4)
	{
	int pri;
	printf("entr price you want");
	scanf("%d",&pri);
	for (int i=0;i<n;i++)
	{if (b[i].price<=pri)
	{printf("Booktitle %s\n author %s\n price %d\n",b[i].booktitle,b[i].author,b[i].price);}
	}
		}
	

}

}
