#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf ("input limitation :");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf ("%d*%d=%d\n", n, i, i*n);
    }
    getch ();
    return 0;
}
