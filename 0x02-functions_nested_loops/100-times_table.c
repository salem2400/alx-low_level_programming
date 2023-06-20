#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i, j;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	int k = j * i;

	if (j != 0)
	{
	_putchar(',');
	_putchar(' ');
	if (k < 10)
	{
	_putchar(' ');
	_putchar(' ');
	} else if (k < 100)
	{
	_putchar(' ');
	}
	}
	if (k < 10)
	{
	_putchar(k + '0');
	} else if (k < 100)
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	} else
	{
	_putchar((k / 100) + '0');
	_putchar(((k / 10) % 10) + '0');
	_putchar((k % 10) + '0');
	}
	}
	_putchar('\n');
	}
	}
}
