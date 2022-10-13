#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers.
 * @size: number of elemnts in array
 * @cmp: pointer to function used to compare values.
 * -1 if no element is fount or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
