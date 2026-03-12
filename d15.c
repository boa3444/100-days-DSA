#include <stdio.h>
#include <stdlib.h>


int main()
{
	int m , n;
	scanf("%d %d" , &m , &n);

	int arr[m][n];
	int sum=0;

	for ( int r=0;r<m;r++)
	{
		for ( int c = 0 ;c< n;c++)
		{
			scanf(" %d" , &arr[r][c]);
			if ( r==c)
				sum += arr[r][c];
		}
	}

	printf("Sum: %d" , sum);
	return 0;
}
