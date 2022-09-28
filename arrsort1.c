#include<stdio.h>
void main()
{
int n,i,j,c=0;
printf("\nEnter the size of array : ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("\nEnter the elements at index (%d %d) : ",i,j);
scanf("%d",&a[i]);
}
while(c<n*n)
{

for(i=1;i<n;i++)
{
if(a[i-1]>a[i])
   {
   int c=a[i-1];
   a[i-1]=a[i];
   a[i]=c;
}

}
c++;
}
for(i=0;i<n;i++)
  printf("\t%d",a[i]);
}
