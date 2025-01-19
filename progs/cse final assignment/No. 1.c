#include<stdio.h>
#include<conio.h>
void main()
{
    char s[100];
    int i, all[26]={0}, count=0;
    printf("\n Enter the word:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            count+=!all[s[i]-'a'];
            all[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            count+=!all[s[i]-'A'];
            all[s[i]-'A']=1;
        }
    }
    if(count==26)
    {
        printf("\n The sentence you entered is a pangram.");
    }
    else
    {
        printf("\n The sentence you is not a pangram.");
    }
    getch();
    return 0;
}

