#include <stdio.h>
#include <math.h>

int main()
{
    int n, n2, df, dl, nofd, swnum ;
    printf("Enter any number: ");
    scanf("%d", &n);
    dl  = n % 10;
    nofd = (int) log10(n);
    df = (int)(n / pow(10, nofd));
    swnum  = dl;
    swnum *= (int) pow(10, nofd);
    swnum += n % ((int) pow(10, nofd));
    swnum -= dl;
    swnum += df;
    printf("Swapped number is: %d", swnum);
    return 0;
}
