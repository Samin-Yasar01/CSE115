#include<stdio.h>

int main()
{
    int i, num1, num2, sum;
    printf("Enter first value: ");
    scanf("%d", &num1);
    printf("Enter last value: ");
    scanf("%d", &num2);
   sum = 0;
    for(i = num1; i <= num2; i++)
    {
      sum= sum + i;
    }
    printf("Summation is= %d ", sum);


    return 0;
}

