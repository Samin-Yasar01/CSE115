
#include <stdio.h>
int main ()
{
            int i,j;
            for (i=1; i<=3; i++)
            {
                       for (j=1; j<=3; j++)
                        {
                          if (j>=i)
                          printf ("*");
                          else
                          printf (" ");
                        }
            printf ("\n");
            }
            return 0;
}
