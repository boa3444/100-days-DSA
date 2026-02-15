#include <stdio.h>
#include <stdlib.h>



int main()
{
	int row , col;
	scanf("%d %d", &row , &col);
	int ** matrix = ( int**) malloc ( sizeof(int*) * row * col);

	for  ( int i = 0 ; i < row ; i++)
	{
		matrix[i] = ( int*) malloc (sizeof( int ) * col);
	}


	for ( int r = 0 ; r< row;r++)
	{
		for ( int c = 0 ; c< col ;c++)
		{
			scanf(" %d" , &matrix[r][c]);
		}
	}
	for ( int r = 0 ; r< row;r++)
	{
		for ( int c= 0 ; c< col ;c++)
		{
			if ( r == c && matrix[r][c] != 1)
			{
				printf("NOt identity matrix");
				return 0;
			}
			else if (r!= c &&  matrix[r][c] != 0)
			{
				printf("Not identity matrix");
				return 0;
			}
		}
	}

	printf("Identity matrix");
	return 0 ;
}
