#include<stdio.h>
int main()
{
    int n, ft = 0, st = 1, t3, i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series:\n", n);
    for ( i = 0 ; i < n ; i++ )
    {
       if ( i <= 1 )
          t3 = i;
       else
       {
          t3 = ft + st;
          ft = st;
          st = t3;
       }
       printf("%d\n", t3);
    }

    return 0;
}
