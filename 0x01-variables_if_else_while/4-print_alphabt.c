#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int c;

	for (c  = 97 ; c < 123 ; c++)
	{
	if (c != 113 && c != 101)
	{
	putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
