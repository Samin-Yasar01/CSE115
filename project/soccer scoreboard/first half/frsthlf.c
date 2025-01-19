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
    scanf ("%d", &j);
    int minutes=0, seconds=0, n=0;
    for (minutes=0; minutes<2; minutes ++)
    {
        for (seconds=0; seconds<60; seconds++)
        {
            for (n=0; n<23; n++)
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
    return 0;
}
