#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * @n: storg the return value of strlen.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
	{
	int n;

	if (strlen(s) != '\0')
	{
	n = strlen(s);
	printf("%i\n", n);
	return (strlen(s));
	}
	return (0);
	}

int main(void)
{
	_strlen_recursion("Corbin Coleman");
	return (0);
}
