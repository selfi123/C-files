#include<stdio.h>
void main()
{
int i;
char a[20],*p;
printf("\nEnter teh string :");
scanf("%s",a);
p=&a[0];
printf("\n%c",p);
printf("\n%c",*p);
printf("\n%c",&p);
for(i=0;p[i]!='\0';i++);
printf("\ncount is %d",i);
}
