#include "main.h"
/**
 *  _sqrt_recursion(); - returns  the natural square root of a number.
 * @n: have origin the num.
 * @i: have a natural square root of n.
 * Return: -1 If n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	while (i != n)
	{
	if (i*i == n)
	{
		return (1);
	}
	i++;
	}
}
