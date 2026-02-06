#include <stdio.h>
#include <stdlib.h>

//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
//
//Input:
//- First line: integer n
//- Second line: n space-separated integers (the array)
//- Third line: integer pos (1-based position)
//- Fourth line: integer x (element to insert)
//
//Output:
//- Print the updated array (n+1 integers) in a single line, space-separated
//
//Example:
//Input:
//5
//1 2 4 5 6
//3
//3
//
//Output:
//1 2 3 4 5 6
//
//Explanation: Insert 3 at position 3, elements [4,5,6] shift right

//
//void insert_ele( int pos , int * arr , int n , int value)
//{
//	
//}

int main()
{
	int n;
	scanf("%d" , &n);
	int * arr = malloc(sizeof(int) * n);

	for ( int i =0;i<n;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	int pos ;
	scanf(" %d" , &pos);

	int value;
	scanf("%d" , &value);


	int * temp = realloc (arr, n+1 );
	if ( temp == NULL)
	{
		return 1;
	}

	arr = temp;

	for ( int i = n-1 ; i >= pos;i--)
	{
		arr[i+1] = arr[i];
		if ( i == pos)
		{
			arr[i] = value;
			break;
		}

	}
//	insert_ele(pos , arr , n, value);

	for ( int i =0;i<n+1;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0;
}
