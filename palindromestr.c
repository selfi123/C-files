#include<stdio.h>
void main()
{
int pos=0,i,count,j=0;
char str[30],str1[30];
printf("\nEnter the string : ");
scanf("%s",str);
for(count=0;str[count]!='\0';count++)
{}
for(i=count-1;i>=0;i--,j++)
{
str1[j]=str[i];
}
for(j=0;j<count;j++)
{
printf("%c %c",str[j],str1[j]);
printf("\n");

if(str[j]==str1[j])
{
 pos=pos+1;
 }
}
if(pos==count)
   printf("\nPalindrome");
else
   printf("\nNot Palindrome");

}


