#include "main.h"

/**
 * Strcat - concatenates the string pointer
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 * Return: a pointer to the destnation string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int indx = 0, dest_len = 0;

	while (dest[indx++])
		dest_len++;

	for (indx = 0; src[indx]; indx++)
		dest[dest_len++] = src[indx];
	return (dest);
}
