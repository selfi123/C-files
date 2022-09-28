#include<stdio.h>
void main()
{
char a[20];
int i;
printf("\nEnter a string :");
fgets(a,20,stdin);
for(i=0;a[i]!='\0';i++)
 { 
   if(islower(a[i]))
       printf("\n%c is in lower case",a[i]);
 }
}
