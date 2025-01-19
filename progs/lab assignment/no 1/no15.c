#include<stdio.h>
int main()

{




    int i, n, n1, c;
    printf("Enter how many number you want to check: ");
    scanf("%d", &n);
    i = 0;
    c = 0;
    while(i<n)
    {
        printf("Enter integer: ");
        scanf("%d", &n1);
        c = c + n1;
        i++;
    }
    printf("\nSum of numbers is %d", c);


    return 0;

}

