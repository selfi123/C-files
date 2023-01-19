#include <stdio.h>
int main() {
   int n;
   int i, j, position, swap;
   printf("\n enter the size");
   scanf("%d",&n);
   int arr[n];
   printf("\n enetr elements");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   printf("\n");
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}