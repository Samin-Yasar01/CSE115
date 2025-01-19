#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, s=0;
    printf ("enter the number :");
    scanf ("%d", &n);
    for (i=n%10; n=n ; n=n/10)
    {
        s=s+i;
        printf ("sum is %d", s);
    }
    return 0;
}
