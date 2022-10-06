#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: poinper
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: void pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *bp;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	bp = malloc(sizeof(char) * new_size);
	if (bp == NULL)
		return (NULL);
	if (ptr)
	{
		for (i = 0; i < old_size; i++)
		{
			bp[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (bp);
}
