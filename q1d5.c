/*

Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed day5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n1;
	scanf("%d" , &n1);

	int *arr1= malloc(sizeof(int) * n1);
	for ( int i = 0 ; i< n1;i++)
	{
		scanf(" %d" , &arr1[i]);
	}
	int n2;
	scanf("%d", &n2);
	int * arr2 = malloc ( sizeof(int) * n2);

	for ( int i = 0 ; i < n2;i++)
	{
		scanf(" %d" , &arr2[i]);
	}

	int new_len = n1+n2;
	int * result_arr = malloc ( sizeof(int ) * new_len);

	int i1 = n1-1 , i2= n2-1;
	for ( int ind = new_len-1 ; ind >= 0;ind++)
	{
		 if ( arr1[i1] >= arr2[i2] )
		{
			result_arr[ind] = arr1[i1];
			i1--;

		}

		else
		{
			result_arr[ind] = arr2[i2];
			i2--;
		}

	}

	for ( int i = 0 ;i<new_len;i++)
	{
		printf("%d " , result_arr[i]);
	}
	return 0;
}

