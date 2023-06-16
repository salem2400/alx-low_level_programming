#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int x;
	int c;

	for (x = 0 ; x < 10 ; x++)
	{
	putchar(x + '0');
	}
	for (c  = 97 ; c < 103 ; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
