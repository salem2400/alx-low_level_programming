#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
	putchar(x + '0');
	if (x != 9)
	{
	putchar(',');
	}
	putchar(' ');
	}
	return (0);
}
