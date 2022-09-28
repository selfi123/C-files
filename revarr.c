#include<stdio.h>
void main()
{
int n,i;
printf("\nEnter the limit : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
 printf("\nEnter element at %d index :",i);
 scanf("%d",&arr[i]);
 }
for(i=n-1;i>=0;i--)
{
 printf("\t%d",arr[i]);
 }
}

