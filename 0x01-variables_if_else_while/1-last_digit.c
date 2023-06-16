#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * Return: 0
 **/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m == 0)
	{
	printf("is %i and is 0\n", m);
	}
	else if (m > 5)
	{
	printf("is %i and is greater than 5\n", m);
	}
	else if (m < 6 && m != 0)
	{
	printf ("is %i and is less than 6 and not 0\n", m);
	}
	return (0);
}
