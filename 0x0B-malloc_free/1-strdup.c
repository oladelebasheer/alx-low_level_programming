#include "main.h"
#include <stdion.h>
/**
 * _strdup - retuen to a newly allocated
 * search in memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated.
 *
 * return: NULL  if str is NULL.
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned len, i;

	if (str == NUll)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL)
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i]
	}

	nstr[len] = '\0';
	return (nstr);
}
