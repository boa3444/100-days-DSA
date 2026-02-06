/*

Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n ;
	scanf("%d" , &n);
	int * arr = malloc ( sizeof(int) * n);
	for ( int i = 0 ; i < n;i++)
	{
		scanf(" %d" , &arr[i]);
	}
	int initial_ind = 0;
	int later_ind = n-1;

	int limit = n/2;
	for ( ; initial_ind < limit;initial_ind++)
	{
		int temp = arr[initial_ind];
		arr[initial_ind] = arr[later_ind];
		arr[later_ind] = temp;

		later_ind--;
	}

	for ( int i = 0 ; i < n ;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0;
}
