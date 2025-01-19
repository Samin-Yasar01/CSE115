Name: Samin Yasar
ID: 2011279642
Course code: CSE115.



#include <stdio.h>
int main()
{
	int *a,n,i,j,t;
	printf ("Enter size of array:");
	scanf ("%d",&n);
	a= calloc(sizeof(int),n);
	printf ("Enter %d Elements:",n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",a+i);
	}
	for (i=0,j=n-1;i<j;i++,j--)
	{
		t=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=t;
	}
	printf ("Reversed array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	return 0;
}
