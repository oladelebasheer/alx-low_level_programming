 #include <stdio.h>
#include "main.h"

/**
 * puts2 - pring every other character
 * @str - string
 * Description: 'the program's description'
 * return. return nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
