#include "main.h"

/**
 * _puts_recursion - print the string followed by a new line
 * @s: point to the firest char in string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
