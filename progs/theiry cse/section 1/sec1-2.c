Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include <stdio.h>
int main()
{
	char s[80], s2[20];
	int a=0,b=0,i,j,t;
    printf("enter your desired string : ");
    fgets(s, sizeof s, stdin);
    printf("enter the substring you want to search : ");
	fgets(s2, sizeof s2, stdin);
    while (s[a]!='\0')
           a++;
           a--;
    while (s2[b]!='\0')
		   b++;
           b--;
    for(i=0;i<=a-b;i++)
	{
		for(j=i;j<i+b;j++)
		{
			t=1;
			if (s[j]!=s2[j-i])
			{
               t=0;
			   break;
			}
		}
		if (t==1)
			break;
	}
	if (t==1)
		printf("The substring you want is in the string.\n\n");
	else
		printf("The substring you want is not in the string. \n\n");
}
