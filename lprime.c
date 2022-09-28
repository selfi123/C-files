#include<stdio.h>
void main()
{
int i=2,limit,count,counter;
printf("\nEnter the limit :");
scanf("%d",&limit);
while(i<=limit)
 {
  count=0;
  counter=2;
  while(counter<=i/2)
  {
   if(i%counter==0)
    {
    count=count+1;
    }
    counter++;
    }
    if(count==0)
     printf("%d\t",i);
   i++;
    
 }
}
