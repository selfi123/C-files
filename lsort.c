#include<stdio.h>
void main()
{
 int arr[5],i,max,min;
 for(i=0;i<=4;i++)
 {
  printf("\nenter the element at %d index :",i);
  scanf("%d",&arr[i]);
  }
 max=arr[0];
 for(i=0;i<=4;i++)
 {
 if(arr[i]>max)
  {
   max=arr[i];
   }
   }
  for(i=0;i<=4;i++)
   printf("%d\t",arr[i]);
  printf("\n\nhighest element in array is %d",max);
}	

