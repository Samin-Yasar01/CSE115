#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char Firstteam[50];
    char Secondteam[50];
    printf ("Enter the name of first team:\n");
    scanf ("%s", Firstteam);
    char t1p1[50], t1p2[50], t1p3[50], t1p4[50], t1p5[50], t2p1[50], t2p2[50], t2p3[50], t2p4[50], t2p5[50];
    printf("enter the player names for %s:\n", Firstteam);
    scanf("%s%s%s%s%s", &t1p1, &t1p2, &t1p3, &t1p4, &t1p5);
    printf ("Enter the name of second team:\n");
    scanf ("%s", Secondteam);
    printf("enter the player names for %s:\n", Secondteam);
    scanf("%s%s%s%s%s", &t2p1, &t2p2, &t2p3, &t2p4, &t2p5);
    printf ("\t\t\t\t\tThe match is between %s and %s!! \n \t\t\t\t\tEverybody hold your seat and get ready to enjoy the game!!:D\n", Firstteam, Secondteam);
    printf ("***********************************************************************************************************\n");
    printf ("\t\t\t\t\t|%s  -  %s|\n", Firstteam, Secondteam);
    printf ("***********************************************************************************************************");
    printf ("\n");
    int j;
    printf ("to start, press 1:  ");
    scanf ("%d", &j);
    int minutes=0, seconds=0, n=0;
    for (minutes=0; minutes<1; minutes ++)
    {
        for (seconds=0; seconds<60; seconds++)
        {
            for (n=0; n<21; n++)
            {
                system ("cls");
                printf ("\n");
                printf ("\n");
                printf ("\n");
                printf ("\t**********************************************************************************************************\n");
                printf (" \t\t\t\t\t\t |%s vs %s|| %d : %d |\n", Firstteam, Secondteam, minutes, seconds);
                printf ("\t**********************************************************************************************************");
            }
        }
     seconds=0;
    }

    printf ("\nFirst half is over!");
    int c, d;
    printf ("\nEnter the goals scored by %s:\n", Firstteam);
    scanf("%d", &c);
    printf ("Enter the goals scored by %s:\n", Secondteam);
    scanf ("%d", &d);
    printf ("\t\t\t\t\t %s |%d| - %s |%d|\n", Firstteam, c, Secondteam, d);
    printf ("\n to start second half press 1:  ");
    scanf ("%d", &j);
    getch();
    int mins=0, secs=0, l=0;
    for (mins=0; mins<1; mins ++)
    {
        for (secs=0; secs<60; secs++)
        {
            for (l=0; l<21  ; l++)
            {
                system ("cls");
                printf ("\n");
                printf ("\n");
                printf ("\n");
                printf ("\t**********************************************************************************************************\n");
                printf (" \t\t\t\t\t\t |%s||%d-%d||%s|\n", Firstteam, c, d, Secondteam);
                printf (" \t\t\t\t\t\t    |%d : %d|\n", mins, secs);
                printf ("\t**********************************************************************************************************");

            }
        }
     secs=0;
    }

    printf ("\nThe game is over!\n");
    int p, q, e, f, g, h;
    printf ("Enter goals scored by %s in the second half:\n", Firstteam);
    scanf ("%d", &p);
    printf ("Enter goals scored by %s in the second half:\n", Secondteam);
    scanf ("%d", &q);
    printf ("\t\t\t\t\t %s |%d|- %s |%d|\n", Firstteam, p, Secondteam, q );
    printf ("\t\t\t\t\t____________________________\n");
    e= c+p;
    f= d+q;
    printf ("\t\t\t\t\tFINAL SCORE OF THE GAME IS:\n");
    printf ("\n");
    printf ("\t\t\t\t\t %s |%d|- %s |%d|\n", Firstteam, e, Secondteam, f);
    if (e>f)
    {
        g= e-f;
        printf ("\t\t\t\t\tThe winner is %s!!!!!\n", Firstteam);
        printf ("\t\t\t\t\t%s won by %d goals", Firstteam, g);
    }
    else if (f>e)
    {
        h= f-e;
        printf("\t\t\t\t\tThe winner is %s!!!!!\n", Secondteam);
        printf("\t\t\t\t\t%s won by %d goals", Secondteam, h);
    }
    else
        {
            printf ("\t\t\t\t\tThe match is tied!!!!!");
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        getch ();
    return 0;
}

