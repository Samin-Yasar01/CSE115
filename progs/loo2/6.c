#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n;
   printf ("enter number you want to start to reverse from:");
   scanf ("%d", &n);
   for (i=n; i>=1; i--)
   {
       printf ("%d\t", i);
   }
   return 0;
}
