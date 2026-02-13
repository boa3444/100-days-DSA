#include <stdio.h>
#include <stdlib.h>


void fn ( int * arr)
{

	for ( int i = 0;i<5;i++)
	{
		printf("%d " , *(arr+i));
	}

}
int main()
{
	int * arr = malloc(sizeof(int) * 5) ;
	for ( int i=0;i< 5;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	fn(arr);

	return 0;
}
