#include <stdio.h>
int main()
{
   int n, i;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   int max = arr[0];
   int min = arr[0];
   int maxidx = 0;
   int minidx = 0;
   for (int i = 1; i < n; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
         maxidx = i;
      }
      if (min > arr[i])
      {
         min = arr[i];
         minidx = i;
      }
   }
   int temp = arr[maxidx];
   arr[maxidx] = arr[minidx];
   arr[minidx] = temp;

   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}