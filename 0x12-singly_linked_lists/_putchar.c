#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - weite the char c int stdout
 * @c: have the charecter who will printed
 * Return: 1 on success
 */
void _putchar (char c)
{
	return (write(1, &c, 1));
}
