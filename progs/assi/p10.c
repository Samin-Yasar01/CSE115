#include <stdio.h>
int main()
{
    int On[50], Dn, i, j;
    printf("enter the number :  ");
    scanf("%d", &Dn);

    for(i = 0; Dn > 0; i++)
    {
        On[i] = Dn % 8;
        Dn = Dn / 8;
    }

    printf("converted number is =  ");
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", On[j]);
    }
    return 0;
}
