#include <stdio.h>
int main()
{
    char Firstteam[50];
    char Secondteam[50];
    printf ("enter the names of two teams:\n");
    scanf ("%s", Firstteam);
    scanf ("%s", Secondteam);
    char t1p1[50], t1p2[50], t1p3[50], t1p4[50], t1p5[50], t2p1[50], t2p2[50], t2p3[50], t2p4[50], t2p5[50];
    printf("enter the player names for team 1:");
    scanf("%s%s%s%s%s", &t1p1, &t1p2, &t1p3, &t1p4, &t1p5);
    printf("enter the player names for team 2:");
    scanf("%s%s%s%s%s", &t2p1, &t2p2, &t2p3, &t2p4, &t2p5);
    printf("%s \t\t\t\t\t %s\n", Firstteam, Secondteam);
    printf("%s \t\t\t\t\t %s\n", t1p1, t2p1);
    printf("%s \t\t\t\t\t %s\n", t1p2, t2p2);
    printf("%s \t\t\t\t\t %s\n", t1p3, t2p3);
    printf("%s \t\t\t\t\t %s\n", t1p4, t2p4);
    printf("%s \t\t\t\t\t %s\n", t1p5, t2p5);
    return 0;
}
