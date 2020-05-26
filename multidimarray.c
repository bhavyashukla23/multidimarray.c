#include<stdio.h>
int main()
{
int arr[3][3];
   int i, j,n=1;
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++)
    {
      for(j=0;j<3;j++)
	   {
	   	arr[i][j]=n;
         printf("%d ", arr[i][j]);
         n=n+1;
        }
        printf("\n");
      }
   return 0;
}
