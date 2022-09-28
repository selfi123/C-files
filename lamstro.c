#include<stdio.h>
void main()
{
int i=1,num,sum,rem,limit;
printf("\nEnter the limit : ");
scanf("%d",&limit);
while(i<=limit)
{
sum=0;
num=i;
while(i!=0)
{
rem=i%10;
sum=sum+(rem*rem*rem);
i=i/10;
}
if(num==sum)
{
printf("\nAmstrong no : %d",num);
}
i=num;
i=i+1;


}
}
