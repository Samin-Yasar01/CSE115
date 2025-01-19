Name: Samin Yasar
ID: 2011279642
Course code: CSE115.


#include<stdio.h>
int main()
{
     int a[10],n,i,j,k=0, number[10],d=0;
     printf("Enter Limit of the array: ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          k=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    k=1;
                    break;
               }
          }
          if(k==0)
          {
               number[d]=a[i];
               d++;
          }
     }
     printf(" The prime numbers are:");
     for(i=0;i<d;i++)
     {
          printf("\t%d", number[i]);
     }
     return 0;
}
