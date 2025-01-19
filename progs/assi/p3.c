#include<stdio.h>

int main()
{
 int Size, i, arr[10];
 int  Negative_Count = 0;

 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);

 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &arr[i]);
 }

 for(i = 0; i < Size; i ++)
 {
   if(arr[i] <= 0)
   {
 	Negative_Count++;
   }

 }
printf("\n Total Number of Negative Numbers in this Array = %d ", Negative_Count);
 return 0;
}
