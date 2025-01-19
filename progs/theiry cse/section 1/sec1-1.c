Name: Samin Yasar
ID: 2011279642
Course code: CSE115.


#include<stdio.h>
int n;
int fibonacci(int a, int b);
int main()
{
   int a = 1, b= 5,temp;
   printf(" enter the terms : ");
   scanf("%d", &n);
   printf(" The summation is:\n");
   temp=1+fibonacci(a, b);
   printf("%d",temp);
}

int fibonacci(int a, int b)
{
   int i = 2,sum= 25 ;
   int c;
   if (i == n)
   return 0;
   else
   {
      c= a + b;
      a = b;
      b = c;
      sum=sum + pow(c,2);
      i++;
      fibonacci(a,b);
   }
   return (sum);
}



