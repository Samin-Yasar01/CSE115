
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your Array Size: ");
    scanf("%d",&n);
    int arr[n];
    int i,large;
    for(i=0; i<n; i++)
    {
        printf("Enter your Array Values: ");
        scanf("%d",&arr[i]);
    }

    large=arr[0];

    for(i=0; i<n; i++)
    {
        if(large<arr[i])
            large=arr[i];
    }
    printf("Large number is %d",large);
    return 0;
}
