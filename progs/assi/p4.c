#include<stdio.h>

int main()
{
   int arr[100], i, j, Size, Temp;

   printf("\nEnter the size of an array: ");
   scanf("%d",&Size);
printf("\nEnter the element of an array: ");
for (i = 0; i < Size; i++)
   {
      scanf("%d", &arr[i]);
   }

   j = i - 1;
   i = 0;

   while (i < j)
   {
      Temp = arr[i];
      arr[i] = arr[j];
      arr[j] = Temp;
      i++;
      j--;
   }

   printf("\nResult of an Reverse array is: ");
   for (i = 0; i < Size; i++)
   {
      printf("%d \t", arr[i]);
   }

   return 0;
}
