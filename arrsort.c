#include<stdio.h>
void sort(int*,int*);
void sort(int *a,int *b)
{
int c=*a;
*a=*b;
*b=c;
}
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
   sort(&a[i-1],&a[i]);

}
c++;
}
for(i=0;i<n;i++)
  printf("\t%d",a[i]);
}
