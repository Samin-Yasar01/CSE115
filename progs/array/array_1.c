#include<stdio.h>
int main()
{
    int n;
    printf("Enter your Size of your Array: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int i;
    int flag,flag2;

    for(i=0; i<n; i++)
    {
        printf("Enter your Value arr: ");
        scanf("%d",&arr[i]);

    }

    for(i=0; i<n; i++)
    {
       printf("Enter your Value arr2: ");
       scanf("%d",&arr2[i]);

    }

    for(i=0; i<n; i++)
    {
        if(arr[i]==arr2[i])
        {
            flag=0;
        }
        else
        {
            flag2=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Identical",flag);
    }
    else
    {
        printf("Not Identical",flag2);
    }

    return 0;
}
