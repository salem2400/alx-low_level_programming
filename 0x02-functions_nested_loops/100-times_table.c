#include "main.h"

void print_times_row(int row_num, int n);
void print_times_cell(int value);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i;

	for (i = 0; i <= n; i++)
	{
	print_times_row(i, n);
	_putchar('\n');
	}
	}
}

/**
 * print_times_row - prints a single row of the times table
 * @row_num: number for which the row is to be printed
 * @n: number of the times table
 */
void print_times_row(int row_num, int n)
{
	int j;

	for (j = 0; j <= n; j++)
	{
	print_times_cell(j * row_num);
	}
	_putchar('\n');
}

/**
 * print_times_cell - prints a single cell of the times table
 * @value: value of the cell to be printed
 */
void print_times_cell(int value)
	{
	if (value < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	}
	else if (value < 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	if (value < 10)
	{
	_putchar(value + '0');
	}
	else if (value < 100)
	{
	_putchar((value / 10) + '0');
	_putchar((value % 10) + '0');
	}
	else
	{
	_putchar((value / 100) + '0');
	_putchar(((value / 10) % 10) + '0');
	_putchar((value % 10) + '0');
	}
}
