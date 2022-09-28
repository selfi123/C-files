#include<stdio.h>
void main()
{
int i,j,k,n,m,o;
printf("\nEnter the size of array1 :");
scanf("%d",&n);
printf("\nEnter the size of array2 :");
scanf("%d",&m);
o=n+m;
int arr3[o],arr1[n],arr2[m];
for(k=0;k<o;k++)
{
printf("\nARRAY1");
for(i=0;i<n;i++,k++)
{
printf("\nEnter the element at postion %d :",i);
scanf("%d",&arr1[i]);
arr3[k]=arr1[i];
}
printf("\nARRAY2");
for(j=0;j<m;j++,k++)
{
printf("\nEnter the element at postion %d :",j);
scanf("%d",&arr2[j]);
arr3[k]=arr2[j];
}
}
printf("\nBY COMBINING 2 ARRAY arr1 and arr2\n");
for(k=0;k<o;k++)
{
printf("\t%d",arr3[k]);
}
}
