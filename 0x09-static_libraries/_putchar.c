#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 */

int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
