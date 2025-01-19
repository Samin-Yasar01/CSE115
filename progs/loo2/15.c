#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, d1, d2, sum;
   printf ("enter the number:");
   scanf ("%d", &n);
   d1=n%10;
   while (n>=10)
   {
       n=n/10;
   }
   d2=n;
   sum= d1+d2;
   printf ("the sum of first and last digits is %d", sum);
   return 0;
}
