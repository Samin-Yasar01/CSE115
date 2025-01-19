#include <stdio.h>
char s[101];
void rmvChr(int i)
{
    for(;s[i]!='\0';)
    {
        s[i]=s[i+2];
        s[i+1]=s[i+3];
        i+=2;
    }
}
int main()
{
    int i=0,l=0;
    printf ("Enter your string:\n");
    scanf("%s",s);
    for(;s[l]!='\0';l++);
    for(;i<l;)
    {
        if((s[i] == s[i+1] ) && (i >= 0) && s[i]!='\0')
        {
            rmvChr(i);
            i--;
        }
        else
        {
            i++;
        }
    }
    if(s[0]=='\0')
       printf("The string that you entered is empty!!\n\n\n");
    else
       printf("\nAfter removing: %s\n\n\n",s);
    return 0;
}
