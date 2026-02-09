/*

Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

Input:
- Single line: a lowercase string containing only alphabetic characters (no spaces)

Output:
- Print the transformed code name after applying the mirror operation

Example:
Input:
hello

Output:
olleh

Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char  i[100] ;
	scanf("%99s" , i);

	int len = strlen(i);
//just trying smthin

	char buffer[len+1];
	strcpy(buffer , i);

	int initial = 0;
	int later = len-1;

	char temp;
	for ( ;initial<len/2;initial++)
	{
		temp = buffer[initial];
		buffer[initial] = buffer[later];
		buffer[later] = temp;
		later--;
	}


	printf("%s" , buffer);
	return 0;
}
