#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: the string target
 *
 * return: return the string result
 */

char *rot13(char *str)
{
	int idx1, idx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S'};

	while (str[++idx1])
	{
		for (idx2 = 0; idx2 < 52; idx2++)
		{
			if (strstr[idx1] == alphabet[idx2])
			{
				str[idx1] = rot13key[idx2];
				break
			}
		}
	}
	return (str);
}
