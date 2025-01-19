#include<stdio.h>
int main()
{
  int arr[50], i, n;
  printf ("enter value:");
  scanf("%d", &n);
  printf("enter value of array: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf ("reverse array = ");
  for (i=n; i>=0; i--)
  {
    printf("%d", arr[i]);
  }
  getch();
  return 0;
}
