#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   printf ("enter number:");
   scanf ("%d", &n);
   for (i=1; i<=n; i++)
   {
       if (n%i==0)
       {
           printf ("%d,\t", i);
       }
   }
   return 0;
}
