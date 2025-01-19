Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include <stdio.h>
#include <string.h>
int n;
int recuFunc(int S,int B)
{
    if(S==n)
    {
        return (B+((2*(S-1)-1)*(2*(S-1)-1)))*(B+((2*(S-1)-1)*(2*(S-1)-1)));
    }
    else if(S==1)
    {
        return 1*1+recuFunc(S+1,1);
    }
    else
    {
        return (B+((2*(S-1)-1)*(2*(S-1)-1)))*(B+((2*(S-1)-1)*(2*(S-1)-1)))+recuFunc(S+1,(B+((2*(S-1)-1)*(2*(S-1)-1))));
    }
}
int main()
{
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("%d",recuFunc(1,0));
    return 0;
}
