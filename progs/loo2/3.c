#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int fact=1;
    printf ("\n enter the number:");
    scanf ("%d", &n);
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf ("the factorial of %d=%d", n, fact);
    return 0;
}
