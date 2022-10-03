#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory area to fill
 * @src: source memory area
 * @n: bytes of memory area to fill
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
