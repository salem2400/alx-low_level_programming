#include "main.h"

/**
 *  _print_rev_recursion- print a string in revers.
 *  @s: point to the first char in string.
 *  Return 0 - always
 */

void  _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_print_rev_recursion(s + 1);

	}
}

