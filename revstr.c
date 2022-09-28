#include<stdio.h>
void rever(int,char[]);
void main()
{
char s[20];
int i;
printf("\nEnter the string :");
scanf("%s",s);
for(i=0;s[i]!='\0';i++);
printf("\nlength = %d\n",i);
printf("reverse string of %s :",s);
rever(i,s);
}
void rever(int i, char s[20])
{

for(i-1;i>=0;i--)
   printf("%c",s[i]);
}
