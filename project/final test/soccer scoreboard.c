#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char Firstteam[50];
    char Secondteam[50];
    printf ("Enter the name of first team:\n");
    scanf ("%s", Firstteam);
    printf ("\nEnter the name of second team:\n");
    scanf ("%s", Secondteam);
    char t1p1[50], t1p2[50], t1p3[50], t1p4[50], t1p5[50], t2p1[50], t2p2[50], t2p3[50], t2p4[50], t2p5[50];
    printf("\nEnter the player surnames for %s:\n", Firstteam);
    scanf("%s%s%s%s%s", t1p1, t1p2, t1p3, t1p4, t1p5);
    printf("\nEnter the player surnames for %s:\n", Secondteam);
    scanf("%s%s%s%s%s", t2p1, t2p2, t2p3, t2p4, t2p5);
    printf("\n\n\n\n");
    printf("\t\t\t\t%s\t\t\t%s\n",Firstteam,Secondteam);
    printf("\t\t\t\t_____\t\t\t_____\n");
    printf("\n\t\t\t\t%s\t\t\t%s\n",t1p1,t2p1);
    printf("\n\t\t\t\t%s\t\t\t%s\n",t1p2,t2p2);
    printf("\n\t\t\t\t%s\t\t\t%s\n",t1p3,t2p3);
    printf("\n\t\t\t\t%s\t\t\t%s\n",t1p4,t2p4);
    printf("\n\t\t\t\t%s\t\t\t%s\n",t1p5,t2p5);
    printf ("\n\n\t\t\tThe match is between %s vs %s!! \n\t\tEverybody hold your seat and get ready to enjoy the game!!:D\n", Firstteam, Secondteam);
    printf ("*********************************************************************************************************\n");
    printf ("\t\t\t\t\t|%s  -  %s|\n", Firstteam, Secondteam);
    printf ("*********************************************************************************************************");
    printf ("\n");
    int j;
    printf ("to start, press 1:  ");
    scanf ("%d", &j);
    int minutes=0, seconds=0, n=0;
    for (minutes=0; minutes<1; minutes ++)
    {
        for (seconds=0; seconds<60; seconds++)
        {
            for (n=0; n<20; n++)
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
    printf ("\n\nFirst half is over!");
    int c, d;
    printf ("\nEnter the goals scored by %s:\n", Firstteam);
    scanf("%d", &c);
    printf ("\nEnter the goals scored by %s:\n", Secondteam);
    scanf ("%d", &d);
    printf("\nAfter first half -");
    printf ("\n\n\t\t\t\t\t %s %d - %d %s\n", Firstteam, c, d, Secondteam);
    printf ("\n to start second half press 1:  ");
    scanf ("%d", &j);
    int mins=0, secs=0, l=0;
    for (mins=0; mins<1; mins ++)
    {
        for (secs=0; secs<60; secs++)
        {
            for (l=0; l<20; l++)
            {
                system ("cls");
                printf ("\n\n\n");
                printf ("\t**********************************************************************************************************\n");
                printf (" \t\t\t\t\t\t %s %d - %d %s \n", Firstteam, c, d, Secondteam);
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
