#include <stdio.h>
int main()
{
     int i, j, n, k, arr[50][50], sumorow[10], sumocol[10];
     printf("enter the size of the square matrix : ");
     scanf("%d", &n);
	 printf("enter elements in the first matrix :\n");
       for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
	           printf("element [%d], [%d] : ", i, j);
	           scanf("%d", &arr[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0; i<n; i++)
	 {
	   for(j=0; j<n; j++)
	     printf("%d\n", arr[i][j]);
	 }
     for(i=0; i<n; i++)
     {
	  sumorow[i]= 0;
	  for(j=0; j<n; j++)
	  sumorow[i]= sumorow[i] + arr[i][j];
     }
      for(i=0; i<n; i++)
      {
	  sumocol[i]= 0;
	  for(j=0; j<n; j++)
		sumocol[i]= sumocol[i] + arr[j][i];
      }

      printf("The sum of rows and columns of the matrix is :\n");
      for(i=0; i<n; i++)
      {
	   for(j=0; j<n; j++)
	      printf("%d", arr[i][j]);
	   printf("%d\n", sumorow[i]);
       }
	    for(j=0; j<n; j++)
             {
	        printf("%d\n", sumocol[j]);
             }
        return 0;
  }
