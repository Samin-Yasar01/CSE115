#include <stdio.h>
int main()
{
     int arr[50], n, i, j, l, l2;
     printf ("enter the size of array:");
     scanf ("%d", &n);
     printf ("enter element of the array:");
     for (i=0; i<=n; i++)
     {
         scanf ("%d", &arr[i]);
     }
     l= arr[0];
     for (i=1; i<=n; i++)
     {
         if (l<arr[i])
         {
             l=arr[i];
         }
     }
     l=arr[i];
      for (j=1; j<=n; j++)
     {
         if (l>arr[j])
         {
             l2=arr[j];
         }

     }
     printf ("the second largest is %d", l2);

     return 0;
}
