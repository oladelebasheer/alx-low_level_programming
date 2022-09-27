#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @c: bytes of memory area to fill
 *
 * Return: return the memory area filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
