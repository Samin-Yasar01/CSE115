#include<stdio.h>

int main()
{
    int i, num1, num2, m;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    m= 0;
    for(i = num1; i <= num2; i++)
    {
        if(i%3 == 0 && i%5 != 0)
        {
            m = m+1;
        }
    }
    printf("\nNumbers between %d and %d are : %d ", num1, num2, m);


    return 0;
}

