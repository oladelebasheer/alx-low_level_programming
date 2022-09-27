#include "main.h"

/**
 * _memset - fill memory block with a constant byte
 * @s: memory area to be filled.
 * @b: constant bytes to fill
 * @n: bytes of memory area to fill
 *
 * return: The memory area filled
 */

int *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
