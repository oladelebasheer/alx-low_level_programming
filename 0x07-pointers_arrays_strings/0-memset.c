#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled.
 * @b: constant bytes to fill
 * @n: bytes of memory area to fill
 *
 * return: The memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
