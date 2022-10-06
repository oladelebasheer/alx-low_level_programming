#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Multiplies two positive number
  * @argc: num arguments
  * @argv: arg
  * Return: 0
  */

int main(int argc, char **argv)
{
	int i, j, len1 = 0, len2 = 0;
	int *res;

	if (argc != 3)
	{
		err(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(is_valid(argv[i])))
			err(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				len2++;
		}
	}
	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);
	mult(res, argv[1], argv[2], len1, len2);
	free(res);
	return (0);
}
