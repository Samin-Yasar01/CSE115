Name: Samin Yasar
ID: 2011279642
Course code: CSE115.


#include <stdio.h>
#include <string.h>
int n;
int num[100000],primes[100000];
int PrimeNumbers()
{
    int cnt=0,i,j,k;
    for (i=2;i<=10000 ;i++ )
    {
        if(num[i]==1){
            continue;
        }
        k=2;
        for (j=i*2;j<100000 ;j=i*k )
        {
            num[j]=1;
            k++;
        }
    }
    for (i=0;i<10000 ;i++ )
    {
        if(num[i]==0){
            primes[cnt++]=i;
        }
    }
    for (i=2;i<1000 ;i++ )
    {
        printf("%d\n",primes[i]);
    }
}
int main()
{
    PrimeNumbers();
    return 0;
}
