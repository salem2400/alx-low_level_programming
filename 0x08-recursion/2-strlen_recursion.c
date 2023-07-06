#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * @n: storg the return value of strlen.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{

	if (strlen(s) == '\0')
	{
		_strlen_recursion("Corbin Coleman");
		return (strlen(s));
	}
	return (0);
	}

