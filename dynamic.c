#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	printf("\nEnter how many numbers");
	scanf("%d",&n);
	
	printf("\nEnter a number :");
	p=(int*)calloc(sizeof(int),n);   //allocating memory to pointer at runtime
        for(int i=0;i<n;i++)
          scanf("%d",p+i);
      
        printf("The values are :");
        for(int i=0;i<n;i++)
         printf("%d\t",*(p+i));
}
