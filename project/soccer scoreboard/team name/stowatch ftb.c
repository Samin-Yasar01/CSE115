#include <stdio.h>
#include<stdlib.h>
int main ()
{   char Firstteam[50];
    char Secondteam[50];
    printf ("enter the names of two teams:\n");
    scanf ("%s", Firstteam);
    scanf ("%s", Secondteam);
    printf ("The match is between %s and %s!! \nEverybody hold your seat and get ready to enjoy the game!! :D\n\n\n", Firstteam, Secondteam);
    printf ("\t\t\t\t\t | %s | vs | %s |\n", Firstteam, Secondteam);
    return 0;
}
