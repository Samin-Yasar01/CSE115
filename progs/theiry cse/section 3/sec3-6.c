Name: Samin Yasar
ID: 2011279642
Course code: CSE115.


#include <stdio.h>
#include <string.h>
int n;
int recFunc(int a)
{
    if(a==1)
    {
        return 7;
    }
    else
    {
        return 7*(2*a-1)+recFunc(a-1);
    }
}
int main()
{
    printf ("Enter the limit: ");
    scanf("%d",&n);
    printf("%d",recFunc(n));
    return 0;
}
