#include<stdio.h>
void main()
{
int n,i,sum=0,max=0,min=0;
printf("\nEnter the limit : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
 printf("\nEnter element at %d index :",i);
 scanf("%d",&arr[i]);
 }
 max=arr[0];
for(i=0;i<n;i++)
{
 if(arr[i]>max)
 {
 max=arr[i];
  }
 }
printf("\nmax= %d",max);
}
