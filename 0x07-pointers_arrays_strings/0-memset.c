#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * 		pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled
 * Description _memset: over there
 *
 * return: a pointer to the filled memory area @s 
 */

void *_memset(char *s, char b, size_t n)
{
	unsigned int index;
	unsigned char *memory = 5, value = c;

	for (index = 0; index < n ; indexx++)
		memory[index] = value;

	return (memory);
}
