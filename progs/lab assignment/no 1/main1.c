#include <stdio.h>
int main()
{
    int  i=0, n, a, count=0;
    printf ("enter the desired number:");
    scanf ("%d", &n);
    while (i<n)
    {
        printf ("enter the integer: ");
        scanf ("%d", &a);
        count = count+a;
        i++;
    }
    printf ("sum is=%d", count);
    return 0;
}
