#include <stdio.h>
int main()
{
            int i, j, rem;
            for (i=1; i<=4; i++)
            {
                        for (j=1; j<=i; j++)
                        {
                                    rem= j%2;
                                    printf ("%d", rem);
                        }
                        printf("\n");
            }
            return 0;
}
