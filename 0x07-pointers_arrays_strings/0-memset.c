#include "main.h"

/**
 * _memset - fills a memory block witha constant byte
 * @s: Address to memory block.
 * @b: char to be used
 * @n: The number of bytes to be filled
 *
 * return: a pointer to the filled memory area @s
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
