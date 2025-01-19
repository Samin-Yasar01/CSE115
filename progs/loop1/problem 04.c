#include <stdio.h>

int main()
{
    double base, power, result;
    printf("Enter a base: ");
    scanf("%lf", &base);
    printf("Enter a power: ");
    scanf("%lf", &power);

    result = pow(base, power);

    printf("RESULT= %.2lf", result);
    return 0;
}
