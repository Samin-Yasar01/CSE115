#include<stdio.h>

int main()
{
    int i, m, n;
    printf("Enter a value: ");
    scanf("%d", &n);
    m = 0;

    for(i=1; i<=n; i++)
    {
        if(n%i == 0 && i%2 == 1)
        {
            m = m + i;
        }
    }
    printf("Summation of all odd factor: %d", m);

    return 0;
}
