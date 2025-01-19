#include <stdio.h>
#include <math.h>
int convertion(long long n);
int convertion(long long n)
{
    int hex = 0, i = 0, rem;
    while (n!= 0)
    {
        rem = n % 10;
        hex = hex + rem*i;
        i= i*2;
        n= n / 10;
        i++;
    }
    return hex;
}
int main()
{
    long long n;
    printf("Enter binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in hexadecimal", n, convertion(n));
    return 0;
}
