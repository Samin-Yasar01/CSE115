#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n1, n2, temp, hcf, a, b;
  printf ("enter numbers:");
  scanf ("%d%d", &n1, &n2);
  a=n1;
  b=n2;
  while (b!=0)
  {
      temp=b;
      b=a%b;
      a=temp;
  }

    hcf=a;
    printf ("hcf is=%d", hcf);

    return 0;

}
