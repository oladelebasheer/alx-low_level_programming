#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
