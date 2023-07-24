#include "main.h"

/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *S)
{
	int len = 0, index = 0;
	char tmp;

	while (S[index++])
	len++;

	for (index = len -1; index >= len / 2; index--)
	{
	tmp = S[index];
        S[index] = S[len - index -1];
        S[len -index - 1] = tmp;
        }
}	
