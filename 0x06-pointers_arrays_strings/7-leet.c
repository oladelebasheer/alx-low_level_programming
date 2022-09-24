#include "main.h"

/**
 * leet - function that ecode a string
 * @str - string that will be encoded
 * return: returns encoded string
 */

char *leet(char *)
{
	int idx = 0, idx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++idx1])
	{
		for (idx2 = 0; idx2 <= 7; idx2++)
		{
			if (str[idx1] == leet[idx2]  ||
					str[idx1] - 32 == leet[idx2])
				str]idx1] = idx2 + '0';
		}
	}
	return (str);
}
