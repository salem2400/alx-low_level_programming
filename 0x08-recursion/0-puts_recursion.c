#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
void_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_putchar(s + 1);
}
