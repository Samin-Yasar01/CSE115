#include<stdio.h>

int main()
{
 int Size, i, arr[10];
 int Even_Count = 0, Odd_Count = 0;

 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);

 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
   scanf("%d", &arr[i]);
 }

 for(i = 0; i < Size; i ++)
 {
   if(arr[i] % 2 == 0)
   {
     Even_Count++;
   }
   else
   {
     Odd_Count++;
   }
 }

 printf("\nTotal Number of Even Numbers in this Array = %d ", Even_Count);
 printf("\nTotal Number of Odd Numbers in this Array = %d ", Odd_Count);
 return 0;
}
