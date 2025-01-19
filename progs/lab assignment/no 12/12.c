#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, d1, d2;
   printf ("enter the number:");
   scanf ("%d", &n);
   d1=n%10;
   while (n>=10)
   {
       n=n/10;
   }
   d2=n;
   printf ("the first and last digits are %d & %d", d2, d1);
   return 0;
}
