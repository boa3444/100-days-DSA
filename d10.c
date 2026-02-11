/*
Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char * input;
	scanf("%s" , input);

	int len = strlen(input);
//	printf("%d" , len);


	int initial = 0, later = len-1;

	for ( ;initial < len/2;initial++)
	{

		if ( input[initial] != input[later])
		{
			printf("NO not a palindrome");
			return 0;
		}

		later--;
	}

	printf("YES");
	return 0;

}
