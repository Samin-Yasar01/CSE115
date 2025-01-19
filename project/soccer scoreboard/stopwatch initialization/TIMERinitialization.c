#include<stdio.h>
int main ()
{
    int usrtme;
    printf ("enter the dedicated time: ");
    scanf ("%d", &usrtme);
    int j;
    printf ("to start, press 1:  ");
    scanf ("%d", &j);
    int minutes=0, seconds=0, n=0;
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
                printf (" \t\t\t\t\t\t| %d | %d |\n", minutes, seconds);
                printf ("\t**********************************************************************************************************");
            }}
     seconds=0;
    }

}
