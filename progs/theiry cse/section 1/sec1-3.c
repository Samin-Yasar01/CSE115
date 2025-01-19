Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include<stdio.h>
int sumOfDigits(int x)
{
   int summation = 0;
   while (x != 0)
   {
       summation = summation + x % 10;
       x = x/10;
   }
   return summation;
}

int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("the Sum:\n  %d", sumOfDigits(n));
  return 0;
}
