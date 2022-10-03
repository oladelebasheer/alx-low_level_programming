#include "main.h"

/**
 * main - Write a program that its name,followed by a new line.
 * if we rename the program, it will print the name, without having to
 * compile it again
 * we should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * return: This return to 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
