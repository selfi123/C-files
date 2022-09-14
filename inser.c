#include<stdio.h>
void main()
{
int n,i, key, j;
printf("\nEnter size : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
  
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
i=1;
printf("\nSecond smallest element ; %d",arr[1]);
}
