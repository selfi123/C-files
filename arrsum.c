#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("\nEnter the limit : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
 printf("\nEnter element at %d index :",i);
 scanf("%d",&arr[i]);
 }
for(i=0;i<n;i++)
{
 sum=sum+arr[i];
 }
printf("\nsum= %d",sum);
}
