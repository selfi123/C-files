#include<stdio.h>
void main()
{
int i,j,n,m;
printf("\nEnter the size of row : ");
scanf("%d",&n);
printf("\nEnter the size of column : ");
scanf("%d",&m);
int a[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("\nEnter the element at index (%d%d) : ",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n\n");
}
} 
