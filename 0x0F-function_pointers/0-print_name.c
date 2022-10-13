#include "FUNCTION_POINTERS_H"

/**
 * print_name -  print a name.
 * @name: pointer to the name.
 * @f: function pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
