#include "main.h"

/**
 * _strcat - concatenates the string pointer to be @src to
 * the end of the string pointed to by @dest.
 * @dest: String that will appended.
 * @src: String to be concatenated upon.
 *
 * Return: return pointer to @dest.
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
