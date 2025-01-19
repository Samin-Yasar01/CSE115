#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf ("enter the number:");
    scanf ("%d", &n);
    for (i=2; i<=n; i++)

    {if (n%i==0)

            if (i==n)
                printf ("the number is a prime number");
            else
                printf ("the number is not a prime number");
    }
    return 0;
}
