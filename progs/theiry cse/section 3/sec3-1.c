Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, d, X1, X2, rP, iP;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        X1 = (-b + sqrt(d)) / (2 * a);
        X2 = (-b - sqrt(d)) / (2 * a);
        printf("X1 = %.2lf and X2 = %.2lf", X1, X2);
    }
    else if (d == 0)
    {
        X1 = X2 = -b / (2 * a);
        printf("X1 = X2 = %.2lf;", X1);
    }
    else
    {
        rP = -b / (2 * a);
        iP = sqrt(-d) / (2 * a);
        printf("X1 = %.2lf+%.2lfi and X2 = %.2f-%.2fi", rP, iP, rP, iP);
    }
    getch();
    return 0;
}
