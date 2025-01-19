#include <stdio.h>

int main()
{
    int i, j, sum=0;

    sum = 3* 2 - 1;

    for(i=1; i<=sum; i++)
    {
        for(j=1; j<=sum; j++)
        {
            if(j==i || (j==sum- i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
