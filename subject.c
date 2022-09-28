#include<stdio.h>
#include<string.h>
void main()
{
int i,sum=0;
float per;
int arr[5];
for(i=0;i<5;i++)
{
 printf("\nEnter mark of subject %d in 50: ",i+1);
 scanf("%d",&arr[i]);
 }
for(i=0;i<5;i++)
 {
 sum=sum+arr[i];
 }
 printf("sum=%d",sum);
 per=sum*100/250;
 printf("\nPercentage of total marks =%f",per);
 if(per>90)
   printf("\n\n'A grade' very good");
 else if(per>80 && per<90)
   printf("\n\n'B grade' good");
  }
  
 
