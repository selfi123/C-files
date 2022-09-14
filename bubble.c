#include<stdio.h>
void main()
{
int n,i,j,*xp,*yp;
printf("\nEnter the size :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for (i = 0; i < n - 1; i++)
{ 
   for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                {
                xp=&a[j];
                yp=&a[j + 1];
                int temp = *xp;
                *xp = *yp;
                *yp = temp;
}
}
printf("\nSOrteD ARRAY  :");
for(i=0;i<n;i++)
  printf("\t%d",a[i]);
printf("\nSecond largest =%d",a[n-2]);

}
