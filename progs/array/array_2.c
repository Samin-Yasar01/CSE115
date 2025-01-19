
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    int arr[n];
    int i,m,flag,flag2;
    printf("Enter your Checking Value: ");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        printf("Enter your array value: ");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==m)
        {
            flag=0;
        }
        else
        {
            flag2=1;
        }
    }
    if(flag==0)
    {
        printf("Found",flag);
    }
    else
    {
        printf("Not found",flag2);
    }
    return 0;
}
