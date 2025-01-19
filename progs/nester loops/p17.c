#include <stdio.h>
int main()
{
            int i,j,k;
            for (i=1; i<=3; i++)
            {
                        for (j=1; j<=3-i; j++)
                        {
                                    printf  (" ");
                        }
                        for (k=1; k<=i*2-1; k++)
                        {
                                    printf ("%d", k);
                        }
                        printf ("\n");
            }
            for (i=3; i>=1; i--)
            {
                        for (j=1; j<=3-i;j++)
                        {
                                    printf (" ");
                        }
                        for (k=1; k<=i*2-1; k++)
                        {
                                    printf ("%d", k);
                        }
                        printf ("\n");
            }
            return 0;
}
