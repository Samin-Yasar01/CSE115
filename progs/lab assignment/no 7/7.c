
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, sum=0;
    printf ("limit your numbers:");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
       if (i%2==0)
       {
           sum= sum+i;
       }
    }

             printf ("sum=%d", sum);


    return 0;
}
