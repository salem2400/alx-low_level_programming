#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	       printf("%i is negative \n", n);
	}
	else if(n < 0)
	{
		printf("%i is positive \n", n);
	}
	else
	{
		printf("%i is zero \n", n);
	}
	return (0);
}
