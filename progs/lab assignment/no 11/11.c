#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c=0;
    printf ("enter the number:");
    scanf ("%d", &i);
    while (i!=0)
    {
        i=i/10;
        c++;
    }
    printf ("total digits ob the number:%d", c);
    return 0;
}
