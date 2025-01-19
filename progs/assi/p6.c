#include <stdio.h>
int main()
{
    int i, j, n, Prime;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The Prime Factors are: \n");
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            Prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    Prime = 0;
                    break;
                }
            }
            if(Prime==1)
            {
                printf("%d \n", i);
            }
        }
    }

    return 0;
}
