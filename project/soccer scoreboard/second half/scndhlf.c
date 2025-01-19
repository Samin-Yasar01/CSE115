#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char Firstteam[50];
    char Secondteam[50];
    int j;
    printf ("Enter the name of first team:\n");
    scanf ("%s", Firstteam);
    printf ("Enter the name of second team:\n");
    scanf ("%s", Secondteam);
    printf ("\nFirst half is over!");
    int c, d;
    printf ("\nEnter the goals scored by %s:\n", Firstteam);
    scanf("%d", &c);
    printf ("Enter the goals scored by %s:\n", Secondteam);
    scanf ("%d", &d);
    printf ("\t\t\t\t\t %s |%d| - %s |%d|\n", Firstteam, c, Secondteam, d);
    printf ("\n to start second half press 1:  ");
    scanf ("%d", &j);
    int mins=0, secs=0, l=0;
    for (mins=0; mins<1; mins ++)
    {
        for (secs=0; secs<60; secs++)
        {
            for (l=0; l<23; l++)
            {
                system ("cls");
                printf ("\n");
                printf ("\n");
                printf ("\n");
                printf ("\t**********************************************************************************************************\n");
                printf (" \t\t\t\t\t\t |%s|%d - %d|%s|\n", Firstteam, c, d, Secondteam);
                printf (" \t\t\t\t\t\t |%d : %d|\n", mins, secs);
                printf ("\t**********************************************************************************************************");

            }
        }
     secs=0;
    }
    printf ("\n\nSecond half is over!\n");
    int p, q, e, f, g, h;
    printf ("\nEnter goals scored by %s in the second half:\n", Firstteam);
    scanf ("%d", &p);
    printf ("\nEnter goals scored by %s in the second half:\n", Secondteam);
    scanf ("%d", &q);
    printf("\nAfter second half - \n");
    printf ("\n\t\t\t\t\t %s %d - %d %s \n", Firstteam, p, q, Secondteam);
    printf ("\t\t\t\t\t____________________________\n");
    e= c+p;
    f= d+q;
    printf ("\t\t\t\t\tFinal score of the game :\n");
    printf ("\n");
    printf ("\t\t\t\t\t %s %d - %d %s \n", Firstteam, e, f, Secondteam);
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
    printf ("\nThe exciting match ends.");
    printf("\n\n\n\n\nCreated by - ");
    printf("\nMahir Shahriar Abir, 2013640042, CSE115.14");
    printf("\nSamin Yasar, 2011279642, CSE115.14");
    printf("\nAzfar Sadat Khan, 2012395642, CSE115.14");
    getch ();
    return 0;
}

