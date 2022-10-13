#include "function_pointers.h"

/**
  * array_iterator - function that excutes the function given as aram.
  * @array: array of elements.
  * @size: size of the array.
  * @action: function pointer.
  *
  * Return: void.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
