#include<stdio.h>
void main()
{
int i,sum=0;
float avg;
char name;
int arr[5];
printf("\nENter name of student: ");
scanf("%c",&name);
for(i=0;i<=4;i++)
{
printf("\nEnter the marks of subject %d:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<=4;i++)
{
sum=sum+arr[i];
}
avg=sum/5;
printf("\nAverage Marks : %d",avg);
}
