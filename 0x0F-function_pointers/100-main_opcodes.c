#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Print opcodes of a given machine
  * @argc: number of arguments
  * @argv: argument vector
  *
  * Return: 0.
  */

int main(int argc, char *argv[])
{
	int count, bytes;

	if (argc != 2)
	{
		pritf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
			printf(" ");
		else
			printf(""\n);
	}
	return (0);
}
