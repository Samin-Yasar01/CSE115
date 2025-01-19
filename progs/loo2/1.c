#include <stdio.h>
int main()
{
  float i,n,count=0;
  printf ("enter the number:");
  scanf ("%f", &n);
  for (i=1; i<=n; i++)
  {
      count= count+1/(i*i);
  }
  printf ("sum of the series: %f", count);
    return 0;
}
