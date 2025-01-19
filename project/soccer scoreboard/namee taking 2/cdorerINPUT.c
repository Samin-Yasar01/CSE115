#include<stdio.h>
int main()
{
    char t1p1[50], t1p2[50], t1p3[50], t1p4[50], t1p5[50], t2p1[50], t2p2[50], t2p3[50], t2p4[50], t2p5[50], scorer[50];
    int score;
    printf("enter the player names for team 1:");
    scanf("%s%s%s%s%s", &t1p1, &t1p2, &t1p3, &t1p4, &t1p5);
    printf("enter the player names for team 2:");
    scanf("%s%s%s%s%s", &t2p1, &t2p2, &t2p3, &t2p4, &t2p5);
    printf ("enter the name of the scorer and the goals scored by the player of team 1:\n");
    scanf ("%s", &scorer);
    scanf ("%d", &score);
    if (scorer==t1p1 && score==3)
        printf ("%s scored a hat trick");
    else
        printf ("invalid");
    return 0;
}
