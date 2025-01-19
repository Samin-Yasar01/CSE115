#include <stdio.h>
int main()
{
	int arr[50], i, j, n, Count = 0;

	printf("enter the size of array :");
	scanf("%d", &n);

	printf("enter the elements :", n);
	for (i = 0; i < n; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("The total number of duplicate number=  %d", Count);
 	return 100;
}
