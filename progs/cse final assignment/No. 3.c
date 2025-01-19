#include <stdio.h>
char*remove_duplicate(char*s);
int  main()
{
    char s[100];
    int g;
    printf ("enter the string:");
    gets (s);
    int a=0, chr=0;
    while (s[a] != '\0')
    {
        if (s[a] == ' ')
        {
            chr++;
        }
        else
            chr++;
        a++;
    }
    printf("\nNumber of characters: %d", chr);

    printf ("\n %s", remove_duplicate(s));
    int b=0, chrr=0;
    while (s[b] != '\0')
    {
        if (s[b] == ' ')
        {
            chrr++;
        }
        else
            chrr++;
        b++;
    }
    printf("\nNumber of characters: %d", chrr);
    g=chr-chrr;
    printf ("\n The number of deletions is: %d", g);

}
char*remove_duplicate(char*s)
{
    int i,j;
    for(i=0; s[i]; i++)
    {
        if(s[i]==s[i+1])
        {
            for(j=i; s[j]; j++)
                s[j]= s[j+1];
            i--;
        }
    }
    return (s);
}
