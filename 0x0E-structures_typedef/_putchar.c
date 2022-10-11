#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 returned, and error is set appropriatly.
 */

int _putchar(char )
{
	return (write(1, &c, 1));
}
