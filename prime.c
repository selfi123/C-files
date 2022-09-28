#include<stdio.h>
void main()
{
int i,count=0,counter,limit;
printf("\nenter the limit : ");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
 {
 for(counter=2;counter<=i/2;counter++)
   {
   if(i%counter==0)
      {
      count++;
      }
   }
 }
 if(count==0)
  printf("\n%d",i);
}
