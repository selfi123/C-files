#include<stdio.h>
void main()
{
int i;
char str[20][4];
for(i=0;i<3;i++)
{
printf("\nEnter a name : ");
fgets(str[i],20,stdin);
}
for(i=0;i<4;i++)
{
printf("\n\t %s",str[i]);
}
}
