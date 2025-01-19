#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf ("enter the limit:");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        if(i%13==0)
        printf ("the numbers are:%d\n", i );
    }
    return 0;
}
