#include<stdio.h>
void main()
{
 int limit,i,sum,counter;
 printf("\nEnter the limit : ");
 scanf("%d",&limit);
 for(i=1;i<=limit;i++)
 {
  sum=0;
  for(counter=1;counter<=i/2;counter++)
  {
   if(i%counter==0)
   {
    sum=sum+counter;
    } 
  }
  if(sum==i)
   printf("%d\t",i);
   
  }
}
