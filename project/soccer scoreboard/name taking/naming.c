#include<stdio.h>
struct team1
{
   char t1plrnme[50];
};
int main()
{
   struct team1 plrs[10];
   int x;
   for (x=1; x<10; x++)
   {
    printf("Enter player name:");
    scanf ("%s", plrs[x].t1plrnme);
   }
   getch ();
   return 0;
}
