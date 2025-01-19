#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE], n, i, j, count;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("The unique elements in the array are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
