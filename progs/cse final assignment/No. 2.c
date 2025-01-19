#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
int i, m, upr = 0, lwr= 0, spcl=0, dgt=0, total=0;
printf("\n\n  Enter your password length: ");
scanf("%d", &m);
printf("\n\n  Enter your password: ");
char pass[420];
scanf(" %s", &pass);
for(i=0; i<m; i++)
{
    if(isupper(pass[i]))
        upr++;
    else if(islower(pass[i]))
        lwr++;
    else if(isdigit(pass[i]))
        dgt++;
    else if(ispunct(pass[i]))
        spcl++;
}
if(lwr==0)
    total++;
if(upr==0)
    total++;
if(dgt==0)
    total++;
if(spcl==0)
    total++;
if(m+total<6)
    total += (6-(m+total));
printf(" Reuired: \n%d\n", total);
return 0;
}
