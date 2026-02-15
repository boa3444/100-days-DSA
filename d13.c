#include <stdio.h>
#include <stdlib.h>




int main()
{
	int r , c;
	scanf("%d %d" , &r , &c);


	int ** arr = (int**)malloc(sizeof(int*) * r * c);

	for ( int i = 0 ; i< r;i++)
	{
		arr[i] = (int*) malloc ( sizeof(int) * c);
	}
	for ( int i = 0 ; i < r ;i++)
	{
		for ( int j = 0 ; j < c;j++)
		{
			scanf(" %d" , &arr[i][j]);

		}
	}

	int * result = malloc( sizeof(int)* r * c);
	int top = 0 , right = c-1, left = 0, bottom = r-1;

	int ind = 0;
	while ( ind < r * c)
	{
		for ( int i = top ; i<= right && ind < r*c;i++)
		{
			result[ind] = arr[top][i];
			ind++;
		}

		top++;
		for ( int j = top;j <= bottom  && ind < r*c;j++)
		{
			result[ind] = arr[j][right];
			ind++;
		}

		right--;
		for ( int k= right; k>= left  && ind < r*c;k--)
		{
			result[ind] = arr[bottom][k];
			ind++;
		}
		
		bottom--;
		for ( int l = bottom ; l >= top  && ind < r*c; l--)
		{
			result[ind] = arr[l][left];
			ind++;
		}
		left++;

		
	}

	for ( int i = 0 ;i<ind;i++)
	{
		printf("%d " , result[i]);
	}

	return 0 ;
}
