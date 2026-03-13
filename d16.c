#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	scanf("%d" , &n);
	int * arr = malloc(sizeof(int) * n);

	for ( int i=0;i< n;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	int freq = 0;

	int visited[n];
	for ( int i = 0;i< n;i++)
	{
		visited[i]=0;
//		printf("%d " , visited[i]);
	}

	for ( int i=0;i< n;i++)
	{
		if ( visited[i] == 1)
			continue;

		for ( int j = i;j<n;j++)
		{
			if ( arr[j] == arr[i])
			{
				freq+= 1;
				visited[j] = 1;
			}
		}
		printf("%d:%d ", arr[i], freq);
		freq =0;
	}

	return 0;
}
