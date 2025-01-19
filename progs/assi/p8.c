#include <stdio.h>
#include <math.h>
int convertion(long long n);
int convertion(long long n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
        {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
        }
    return dec;
}
int main()
{
    long long n;
    printf("Enter binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertion(n));
    return 0;
}

