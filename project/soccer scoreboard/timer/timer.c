#include <stdio.h>
int main ()
{
    int minutes=0, seconds=0, n=0, usrtme;
    printf ("put your dedicated time:");
    scanf ("%d", &usrtme);
    for (minutes=0; minutes<usrtme; minutes ++)
    {
        for (seconds=0; seconds<60; seconds++)
        {
            for (n=0; n<25; n++)
            {
                system ("cls");
                printf ("\n");
                printf ("\n");
                printf ("\n");
                printf ("\t**********************************************************************************************************\n");
                printf (" \t\t\t\t\t\t\t | %d : %d |\n", minutes, seconds);
                printf ("\t**********************************************************************************************************");
            }}
     seconds=0;
    }
}
