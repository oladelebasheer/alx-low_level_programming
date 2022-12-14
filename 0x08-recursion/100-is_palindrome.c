#include "main.h"

/**
 * is_palindrome - return 1 if s is a is_palindrome
 * @s: string to be checked
 * return: 1 if s is a is_palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int flag = 1;
	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - check if a string is a palindrome
 * @s: string to be checked
 * @start: index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 * return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
